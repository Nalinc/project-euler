#include <iostream>
using namespace std;

int main()
{
        long sum=0;
        int i;
        for(i=1;i<1000;i++)
          if(i%3==0 || i%5==0)
                  sum+=i;    
     
        cout<<sum<<endl;
return 0;
}


