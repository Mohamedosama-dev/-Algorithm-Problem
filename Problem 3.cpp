#include <iostream>
#include <cmath>
#include<istream>
#include <vector>
using namespace std;

//function to calculte maximumthieves
int maximumthieves(char elements[], int n, int k)
{
    int out = 0;
       
       
       //vectore to store policeman
   vector<int> policeman;
        
        
        // vectore to store thieves
    vector<int> thieves;
   

           
    for (int k = 0; k < n; k++) {
       //if input == T (capital) or input ==t(small)
        if (elements[k] == 'T' ||elements[k] == 't')
          
           thieves.push_back(k);
       //if input == P (capital) or input ==p(small)
        else if (elements[k] == 'P' || elements[k] == 'p')
       
              policeman.push_back(k);
    }   
    
    int a = 0;
    
    int b = 0;
   
    while (a < thieves.size() && b < policeman.size()) {
        
        if (abs(thieves[a] - policeman[b]) <= k) {
            
            out++;
            
            a++;
            
            b++;
        }

        
        else if (thieves[a] < policeman[b])
        {
            a++;
        }
        else{
           
            b++;
            
        }
    }

    return out;
}


int main()
{

    int outbut;
    int n;
    int k;
    cout<<" Enter N"<<endl;
    cin>>n;
    cout<<"Enter k"<< endl;
    cin>>k;
    char array[n];
    cout<<"Enter elements of array"<<endl;
    for(int z=0;z<n;z++)
    {
        cin>>array[z];
    }
    outbut=maximumthieves(array, n, k);
    cout <<"Maximum thieves="<<outbut<<endl;
    return 0;
}