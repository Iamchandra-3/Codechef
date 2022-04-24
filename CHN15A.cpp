#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,c=0;
        cin>>n>>k;
        int *arr = new int[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            arr[i]+=k;
            if(arr[i]%7==0)
            c++;
        }
        cout<<c<<endl;
    }
}