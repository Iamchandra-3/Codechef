#include"iostream"
using namespace std;
int main()
{
    int testcases,n,x;
    cin>>testcases;
    while(testcases--)
    {
        int count=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(x%2==1)
            {
                count++;
            }
        }
        if(count%2==1)
        {
            count--;
        }
        cout<<count/2<<"\n";
    }
    return 0;
}