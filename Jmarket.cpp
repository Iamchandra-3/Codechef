#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,a,b,c;
        cin>>x>>a>>b>>c;
        if (a <= b && a <= c)
            cout << a << " is smallest" << endl;
        else if (b <= a && b <= c)
            cout << b << " is smallest" << endl;
        else
            cout << c << " is smallest" << endl;
        for(int i=0;i<x;i++)
        {

        }
       
    return 0;
}