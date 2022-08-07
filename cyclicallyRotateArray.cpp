// Program to cyclically rotate an array by one

#include<bits/stdc++.h>
using namespace std;

void rotateArray(int arr[], int size)
{
	int start = 0 , end = size-1;
	while(start!=end){
		swap(arr[start], arr[end]);
		start++;
	}
	
}
void printArray(int arr[], int size)
{
	for(int i = 0; i < size; i++)
	{
		cout<<arr[i]<<" ";
	} 
}
int main()
{
	cout<<"Enter the element of an array "<<endl;
	int n;
	cin>>n;
	int arr[100];
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	rotateArray(arr, n);
	printArray(arr, n);
	return 0;
}