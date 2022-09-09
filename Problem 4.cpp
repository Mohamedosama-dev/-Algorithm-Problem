#include <iostream>
#include<istream>
#include<cmath>
#include <unordered_set>

using namespace std;

// function to find The minimum index of the repeating element
int Minimumindex (int elements[], int sizeelement)
{
  int index = sizeelement;
  // unordered_set is implemented using a hash table
  // empty hash set to store elementsof array 
  unordered_set < int >Hash;

  // From right to left,we traverse  array of elements  
  for (int k = sizeelement - 1; k >= 0; k--)
    {
      // If the element has been encountered previously, the minimum index should be updated.
      if (Hash.find (elements[k]) != Hash.end ())
	{
	  index = k;
	}
     //Insert the element into the set if it is observed for the first time.
      else
	{
	  Hash.insert (elements[k]);
	}
    }

  // case 2 if  index equal sizeelement ( invald input)
  if (index == sizeelement)
    {
        
cout <<"invalid input"<<endl;
    }

  // return the  minimum index 
  return index;
}


int main ()
{
  int elements[] = { 5, 6, 3, 4, 3, 6, 4 };

// find size of array 
  int sizeelement = sizeof (elements) / sizeof (elements[0]);

  int index = Minimumindex(elements, sizeelement);
//if condition to  checK index notequal sizeelement
  if (index != sizeelement)
    {
      cout << "The minimum index of the repeating element is " << index;
    }
  return 0;
 //test cases 
 // int elements[] = {1, 2, 3, 4, 5, 6 };
// int elements[] = { 1,1,4,4,5,5,7,7,7 };
// int elements[] = { 4,4,4,7,88,8,7,2,1 };
// int elements[] = {1,5,2,6,6,8,7,7,9,22,1,4 };
// int elements[] = { -1,-8,-7,-7,-7,-1 };
// int elements[] = { 22,44,55,55,-1,-1,-1,-2,-2,};
// int elements[] = {11 ,12,13,14,15,16,17 };
// int elements[] = { -1,-2,-3,-4,-5,-6,-7 };
// int elements[] = { 5, 6, 3, 4, 3, 6, 4 };
}
