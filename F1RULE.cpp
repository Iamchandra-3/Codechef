#include<iostream>
using namespace std;
int main()
{
   long int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(x*1.07 >= y)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}