/*
3
4 2 2
1 7 7 5
1 8 1 2
5 1 3
9 8 7 2 5
5 4 1 8 9
3 3 0
2 3 4
2 3 4
*/
#include"iostream"
#include"stdlib.h"
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n,x,k,c=0;
        cin>>n,x,k;
        long int arrA[1000],arrB[1000];
        for(long int i=0;i<n;i++)
        {
            cin>>arrA[i];
            cin>>arrB[i];
            if(abs(arrA[i]-arrB[i]) <= k)
            {
                c++;
            }
        }
        if(c>=x)
        cout<<"YES\n";
        else
        cout<<"NO\n";

    }
    return 0;
}