#include <cstdlib>
#include <iostream>
#include "is_prime_prog.h"

bool is_prime(int x)
{
    if (x==0 || x==1)
        return false;
    for ( int i =2; i<x; i++)
    {
        if(x%i == 0)
            return false;
    }
    return true;
}

