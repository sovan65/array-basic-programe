#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    int arr[n];
    bool duplicatefound = false;
    for(int i=0;i<=n-1;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<=n-1;i++)
    {
      for(int j=i+1;j<=n-1;j++)
      {
       if(arr[i]==arr[j])
       {
          duplicatefound = true;
          break;
       }
      }
     if(duplicatefound==true)
      {
          break;
      }
    }
    if(duplicatefound==true)
    {
      cout<<"duplicate found"<<endl;
    }
    else
    {
        cout<<"no duplicate found"<<endl;
    }
}