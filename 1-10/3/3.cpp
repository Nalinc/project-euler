#include <iostream>
bool isprime(unsigned long long v);

using namespace std;
int main()
{
    unsigned long long num = 600851475143,max = 0, x;
    
    for(x = 2 ; (x * x) <= num ; x++)
    {    if((num % x) == 0)
            if(isprime(x))
                if(x > max)
                    max = x;         
    }
    cout<<"Answer = "<<max<<endl;
    return 0;
}

bool isprime(unsigned long long v)
{
    unsigned long long i = 0;
    bool rv = true;
    
    if(v != 1)
        for(i = 2 ; i <= (v / 2) ; i++)
        {
            if(v % i == 0)
                 rv = false;  
        }   
    else
        rv = false;
   
    return rv;
}
