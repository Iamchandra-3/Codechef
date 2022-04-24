#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n,w,sum=0;
        cin>>n>>w;
        int *arr = new int[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        //input done
        sort(arr,arr+n);
        reverse(arr,arr+n);
       
        int i=0;
        while (sum<w)
        {
            sum+=arr[i];
            i++;
        }
        cout<<n-i;
    }
    return 0;
}