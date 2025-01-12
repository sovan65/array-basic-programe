#include<iostream>
using namespace std;
int main()
{
     int n,product=1;
     cout<<"enter a number";
     cin>>n;
     int arr[n];
     for(int i=0;i<=n-1;i++)
     {
        cin>>arr[i];
     }
     cout<<"the product is:";
     for(int i=0;i<=n-1;i++)
     {
          product=product*arr[i];
     }
     cout<<product;
     
}