#include"iostream"
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int N,x,y;
        cin>>x>>y;
        if((x+y)%2==0)
        cout<<"0"<<endl;
        else
        cout<<"1"<<endl;
    }
    return 0;
}