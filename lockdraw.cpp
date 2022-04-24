#include<iostream>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
       long int A,B,C;
        cin>>A>>B>>C;
        if(A==(B+C) || B==(A+C) || C == (A+B))
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        
        }
        
    }
    return 0;
}