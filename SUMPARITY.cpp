#include"iostream"
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N,A;
        cin>>N>>A;
        if(N==1)
        {
            if(A%2==0)
            cout<<"Even\n";
            else
            cout<<"Odd\n";
            continue;
        }
        if(A%2==1)
        {
            if(N%2==0)
            cout<<"Even\n";
            else
            cout<<"Odd\n";
        }
        else
        cout<<"Impossible\n";
    }
    return 0;
}