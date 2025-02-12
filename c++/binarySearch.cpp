
// Binary Search

#include<iostream>
using namespace std;

int binarySearch(int a[],int n,int key)
{
	int s=0,e=n;
	
	while(s<=e)
	{
		int mid = (s+e)/2;
		
		if(a[mid]==key)
		 return mid;
		else if(a[mid]>key)
		 e = mid - 1;
		else
		 s = mid + 1;
	}
	
	return -1;
}

int main()
 {
 	int n;
 	
 	cin >>n;
 	
 	int arr[100];
 	
 	for(int i=0;i<n;i++)
 	 cin >>arr[i];
 	 
 	int key;
 	
 	cin >>key;
 	
 	cout <<binarySearch(arr,n,key)<<endl;
 	
 	return 0;
 	
 }