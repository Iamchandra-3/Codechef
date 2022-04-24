#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,k;
    cin>>n>>k;
    char *arr = new char[n];
    
    for(int i=0;i<n;i++)
    cin>>arr[i];
    //input done
    sort(arr,arr+1);
    for(int i=0;i<n;i++)
    cout<<arr[i];
    }
    return 0;

}