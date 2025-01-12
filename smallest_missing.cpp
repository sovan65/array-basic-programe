 #include<iostream>
    using namespace std;
        int main()
        {
            int n;
            cout<<"enter the number";
            cin>>n;
            int arr[n];
            bool flag = false;
            for(int i=0;i<=n-1;i++)
            {
                cin>>arr[i];
            }
            for(int i=0;i<=n-1;i++)
            {
                if(arr[i]!= i+1)
                {
                    flag = true;
                    cout<<i+1;
                    break;
                }
            }
            if(flag==false)
            {
                cout<<"no missing number";
            }
        }