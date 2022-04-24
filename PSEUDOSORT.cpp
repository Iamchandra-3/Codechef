#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        int *A = new int(n);
        for(int i=0;i<n;i++)
        {
            cin>>A[i]; 
        }      
        //input done
        for(int i=0;i<n-1;i++)
        {
            if(A[i]>A[i+1])
            c++;
        }
        if(c==0 || c==1) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}