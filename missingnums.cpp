#include"iostream"
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin>>N>>K;
        int ans=0;
        ans = N/K+1;
        cout<<ans<<endl;
        
    }
    return 0;
}