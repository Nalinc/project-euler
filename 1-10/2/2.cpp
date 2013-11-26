#include <iostream>
using namespace std;
int main()
{
        long i,t,f=0,s=1,sum=0;

        for(i=0;i<4000000;i++)
        {
             if(s>4000000||f>4000000)
                   break;
             if(s%2==0)
                   sum+=s;             
             t=f;
             f=s;
             s=s+t;
        }
        cout<<"\t"<<sum<<endl;
}
