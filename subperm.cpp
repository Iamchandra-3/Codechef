#include<iostream>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long long int n,k;
        cin>>n>>k;

        if(k==1 && n==1)
        {
                cout<<"1\n";
        }
        else
        {
            if(k<2 || k>n)
            cout<<"-1\n";
            else
            {
                int count =0;
                for(int i=0;i<k-1;i++)
                {
                    cout <<(i+1)<<" ";
                    count=i;
                }
                for(int i=0;i<n-count-1;i++)
                {
                    cout<<(n-i)<<" ";
                }
                cout<<endl;

            }
        }
        
    }
    return 0;
}