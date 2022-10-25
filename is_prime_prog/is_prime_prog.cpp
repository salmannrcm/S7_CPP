#include <cstdlib>
#include <iostream>

bool is_prime(int x)
{
    if (x==0 || x == 1)
	    return false ;
    if (x == 2)
	    return true;
    if (x %2 == 0){
        return false;
    }
    for ( int i =3; i*i <x; i+=2)
    {
        if(x%i == 0)
            return false;
    }
    return true;
}
int main(){
	int n;
	while(std::cin >> n){
		
		if (is_prime(n))
            		std::cout << n << " is a prime: True\n";
        	else
            		std::cout << n << " is a prime: False\n";
	}
    return 1;
    }
