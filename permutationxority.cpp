#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n<3)
        { 
        cout<<"-1"<<endl;
        continue;
        }
        if(n%2==1)
        {
           
            for(int i=1;i<n;i++)
            {
                cout<<i<<" ";
                
            }
            cout<<endl;
            continue;
        }
        cout <<"2 3 1 4 ";
        for(int i=5;i<n+1;i++ )
        cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}