#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;
    int arr[n];
    int min=arr[0];
    cout<<"the elements are:";
    for(int i=0;i<=n-1;i++)
    {
        cin>>arr[i];
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    cout<<min;

}