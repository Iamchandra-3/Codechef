#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int A,B,f,s;
        cin>>A>>B;
        f=(A/10)*100;
        s=(B/20)*100;
        if(f>s) cout<<"FIRST\n";
        else if(s>f) cout<<"SECOND\n";
        else cout<<"ANY\n";
    }
    return 0;
}