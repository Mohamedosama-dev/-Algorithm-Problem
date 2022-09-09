#include <iostream>
#include<istream>
#include<string>
#include<cmath>
#include <unordered_map>
using namespace std;




 
//This function is used to rearrange the elements of an array
// this function has parameter array ,sizearray
void order(int Array[], int sizeArray)
{
   // we use use unordered_map to store data
   // unordered_map is implemented using Hash Table
   //
    unordered_map<int, int> Themap;
 
    // traverse the input array and update the frequency of each element
    for (int k = 0; k < sizeArray; k++) {
        Themap[Array[k]]++;
    }
    for (int k = 0; k < sizeArray; k++)
    {
        // if condition to check array[k] excits in unsorted map
        if (Themap.find(Array[k]) != Themap.end())
        {
            
           int fws = Themap[Array[k]];
           //we deceremete 1 from key 
           //while loop which print array of k
            while (fws--) {
             
                cout << Array[k] << " " ;
              
            }
 
           //we delete the data of unsorted map so ti wasnot procceced again
          
            Themap.erase(Array[k]);}
       
    }
}
 //main 
int main()
{int lenth;
cout<<"Enter size of array"<<endl;
cin>>lenth;
    int Array[lenth];
    cout<<"Enter values of array"<<endl;
     for (int k = 0; k < lenth; k++) {
        cin >> Array[k];
    }
 
    order(Array, lenth);
    //test Cases
    //int Array[8]={2,3,1,2,1,2,4,4};
    //int Array[11]={9,6,7,7,9,8,6,7,9,5,4};
    return 0;
}
