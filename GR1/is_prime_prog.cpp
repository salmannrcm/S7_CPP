#include <cstdlib>
#include <iostream>

bool is_prime(int x)
{
    if (x==0)
        return true;
    if (x==1)
        return false;
    for ( int i =2; i<x; i++)
    {
        if(x%i == 0)
            return false;
    }
    return true;
}
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