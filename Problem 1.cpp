#include<istream>
#include <iostream>
using namespace std;
//problem 8
//1- binarysearch to search in array to find  the first defective toy in array 
// 2- lentgh of array 
// 3- serch about the first item with value 2
// valid toy value =1     defectivetoy value =2
//serialnumber=index
// serch for first Serial number in array(2) and print it 
int binarysearch(int toy[], int size, int value)
{
	int outbut = -1;
	int l = 0; 
	int h = size - 1;
	while (l <= h)
	{
	
		int mid = (l + h)/2;
		if (value == toy[mid])
		{
			outbut = mid;
			h = mid - 1;
		}

		else if (value < toy[mid]) {
			h = mid - 1;
		}

	
		else {
			l = mid + 1;
		}
	}

	
	return outbut;
}

int main()
{// array 
//1== valid toy
//2== defective toy 
	int toy[] = {1,1,1,1,1,1,1,1,2,2,2,2,2};
	int size = sizeof(toy)/sizeof(toy[0]);
	int value = 2;
	//Serial number = index
	int index = binarysearch(toy,size, value);

	if (index != -1)
	{
		cout<<"The first  Serial number defective toy "<< index;
				 
	}
	else
	{
	  cout<< "not found";
	}
	return 0;
	//test cases
	//int toy[] = {1,1,1,1,1,1,1,1,2,2,2,2,2};
}