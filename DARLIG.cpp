#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        // if(n==0)
        // {
        //     if(k==0)
        //     cout<<"OF"<<endl;
        //     else if(k==1)
        //     cout<<"ON"<<endl;
        //     break;
        // }
        if(n%4==0 || n==0)
        {
        for(int i=0;i<n;i++)
        {
            if(k==0){k==1;}
            else if(k==1){k==0;}
        }
        if (k == 0)
        cout<<"OFF"<<endl;
        else if(k==1)
        cout<<"ON"<<endl;
        }
        else
        {
            cout<<"Ambiguous"<<endl;
        }
    }
    return 0;
}