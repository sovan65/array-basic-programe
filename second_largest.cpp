#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    int arr[n];
    int max=0;
    for(int i=0;i<=(n-1);i++)
    {
        cin>>arr[i];
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    cout<<max;
    int smax=0;
    cout<<"the second leargest element is:";
    for(int i=0;i<=(n-1);i++)
    {
        
        if(max!=arr[i]&& smax<arr[i])
        {
            smax=arr[i];
        }
    }
    cout<<smax;
}