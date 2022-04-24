#include<iostream>
#include<string>
#include<stdbool.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,n,k;
        cin>>x>>y>>n>>k;
        int p[n],c[n];
        for(int i=0;i<n;i++)
        {
            cin>>p[i]>>c[i];
        }
        bool res = false;
        //input done
        for(int i=0;i<n;i++)
        {
            if(x-y<=p[i] && k>=c[i])
            {
                res = true;
                break;
            }

        }
        if(res) cout<<"LuckyChef"<<endl;
        else cout<<"UnluckyChef\n";
    }
    return 0;
}