#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool CheckWord(char* filename, char* search)
{
    int offset; 
    string line;
    ifstream Myfile;
    Myfile.open (filename);

    if (Myfile.is_open())
    {
        while (!Myfile.eof())
        {
            getline(Myfile,line);
            if ((offset = line.find(search, 0)) != string::npos) 
            {
                cout << "found '" << search << "' in '" << line << "'" << endl;
                Myfile.close();
                return true;
            }
            else
            {
                cout << "Not found" << endl;
            }
        }
        Myfile.close();
    }
    else
        cout << "Unable to open this file." << endl;

    return false;
}


int main () 
{    
    CheckWord("dictionary.txt", "need");    
    return 0;
}
