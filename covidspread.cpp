/*
4
100 3
2000 10
6000 11
10 11
Sample Output 1 
8
1024
3072
10
*/
#include"iostream"
#include"cmath"
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int N,D,two,three,ans;
        cin>>N>>D;
        if(N<=D || D>20)
        {
            cout<<N<<endl;
        }
        else
        {
            if(D<11)
            {
                for(int i=0;i<D;i++)
                {
                    two+=pow(2,two);
                    three =0;
                }
            }
            else
            {
                for(int i=0;i<11;i++)
                {
                    two=pow(2,two);
                }
                for(int i = 11 ; i<D;i++)
                {
                    three += pow(3,three);
                }
            
            }
        }
        ans = two+three;
        cout<<ans<<endl;
    }
}