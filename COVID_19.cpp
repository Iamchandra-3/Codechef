#include"iostream"
#include"cmath"
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N,M;
        cin>>N>>M;
        N=N-floor(N/2);
        if(M%2==0)
        M=floor(M/2);
        else
        M=floor(M/2)+1;
        cout<<N*M<<endl;
}
}