#include <iostream>
#include "is_prime_prog.h"

int main(int argc, char* argv[])
{
    if(argc == 1)
        return 1;
    for(int i = 0 ;i < argc;i++)
    {
        int k = atoi(argv[i]);
        if(is_prime(k))
        {
            printf("%d", k);
            printf("%s" ," is a prime: True \n");
            
        }
        else 
        {
            printf("%d",k);
            printf("%s"," is a prime: False \n");
        }
    }
   
    return 0;
}

