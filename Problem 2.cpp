#include <iostream>
#include <stack>
using namespace std;

int theAckermann(int m, int n)
{
   
    stack <int> nwstack;
    
    nwstack.push(m);
    
    while(!nwstack.empty())
    {
        
        
        m = nwstack.top();
        nwstack.pop();
        if(m==0)
        {
            n+= m+1;

        }
        else if(n==0)
        {
            n += 1;
            nwstack.push(--m);
        }
        else
        {
            nwstack.push(--m);
            nwstack.push(++m);
            n--;
        }
    }
return n;
}

int main()
{int outbut;
int m=3;
int n=3;
//we call function Theackermann and pass m,n 
outbut=theAckermann(m,n); 
cout<<outbut<<endl; 
int m1=4;
int n1=1;
outbut=theAckermann(m1,n1); 
cout<<outbut<<endl;
   
    return 0;

//test cases
  //m=0 ,n=3 >> 4
  //m=4 ,n=0 >>13
  //m=4 ,n=1 >>65533
  //m=3 ,n=3 >>61
  //m=2 ,n=4 >>11
  // m=1,n=5 >>7
  // m=3 ,n=5 >>253
  // m=3 ,n=4 >> 125

    
}