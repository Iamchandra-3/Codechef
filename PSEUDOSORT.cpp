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
        cout << t << "\n";

        int *A = new int(n);
        for(int i=0;i<n;i++)
        {
            cin>>A[i]; 
        }      
        //input done
        cout<<t<<endl;
        for(int i=0;i<n-1;i++)
        {
            if(A[i]>A[i+1])
            c++;
        }
        if(c==0 || c==1) cout<<"YES\n";
        else cout<<"NO\n";
        memset(A,0,n);
    }

    return 0;
}