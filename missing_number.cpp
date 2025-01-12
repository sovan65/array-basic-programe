 #include<iostream>
 using namespace std;
 int main()
 {
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++)
     {
        cin>>arr[i];
     }
     cout<<"the  missing number is:";
     for(int i=0;i<=n-1;i++)
     {
           if(arr[i]!= i+1)
           {

            cout<<" "<<(i+1);
           }
     }
 }