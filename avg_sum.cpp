#include<iostream>
using namespace std;
int main()
{
  int size;
  cout<<"Enter no of elements to perform average of nos = ";
  cin>>size;
  int count = 0;
  int arr[size];
  for(int i = 0 ; i < size;i++)
    {
      cin>>arr[i];
      count+=arr[i];
    }
  for(int i = 0 ; i < size;i++)
    {
      cout<<arr[i]<<" ";
    }
  cout<<"Average of given no is = "<<count/size;
  return 0;
}
