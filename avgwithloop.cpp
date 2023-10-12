#include<iostream>
using namespace std;

 
int main () 
{
int n,i,a;
double sum=0;
double avg=0;
    cout<<"\nEnter the no of elements:"<<endl;
    cin>>n;

    for(i=0;i<n;i++)
    {
    cout<<"\nEnter the number"<<i+1<<": ";
    cin>>a;
    sum=sum+a;
    }
    avg = sum/n;
    cout<<"\nAvg of "<<n<<" numbers : "<<avg;
    return 0;
}
