#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int x,y,a,b,medals=2;
    cin>>x>>y>>a>>b;
    //input done
    if(x==a||x==b) medals--;
    if(y==a||y==b) medals--;

    cout << medals << endl;
    }
    return 0;
}