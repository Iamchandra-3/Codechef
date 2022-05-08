#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n,buysugar=0,buysalt=0,rent=0;
        cin>>n;
        long int ans = 0,final=0;
        ans = n*50;
        final = ans - 2*ans*0.2 - ans*0.3;
        cout<<final + 1<<endl;
    }
    return 0;
}