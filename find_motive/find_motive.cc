/*#include <ofstream>
#include <ifstream>

int find_motive(std::string &filepath){
    ifstream myfile;
    myfile.open(filepath);
    if(myfile){
        int count 
    }
}*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int CheckWord(std::string filename, std::string search)
{
    string line;
    ifstream Myfile;
    int found = 0;
    string word;
    Myfile.open (filename);

    if (Myfile.is_open())
    {
        while (!Myfile.eof())
        {
            while(Myfile >> word)
            {
                if(word == search)
                    found += 1;
            }
        }
        Myfile.close();
        printf("The file %s contains %d words containing the motive %s\n", filename.c_str(), found, search.c_str());
        return 0;
    }
    else
        {
            printf("The file %s could not be opened.\n", filename.c_str());
            return 1;
        }
}


int main () 
{
    CheckWord("/Users/zaki/CPP_apping/find_motive/test.txt", "rose");    
    return 0;
}