#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int CheckWord(char* filename, char* search)
{
    int offset; 
    string line;
    ifstream Myfile;
    int found = 0;
    string word;
    Myfile.open (filename);

    if (Myfile.is_open())
    {
        while (!Myfile.eof())
        {
            //getline(Myfile,line);
            //if ((offset = line.find(search, 0)) != string::npos) 
            while(Myfile >> word)
            {
                if(word == search)
                    found += 1;
            }
        }
        Myfile.close();
        printf("The file %s contains %d words containing the motive %s\n", filename, found, search);
        return 0;
    }
    else
        {
            printf("The file *input-file-path* could not be opened.");
            return 1;
        }
}


int main () 
{    
    CheckWord("../test.txt", "rose");    
    return 0;
}
