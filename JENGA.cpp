#include<iostream>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long int N,X;
        cin>>N>>X;
        if(N>X)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if(X%N==0)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
    }
    return 0;
}