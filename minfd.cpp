#include"iostream"
#include"algorithm"
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
       long int n,x,sum=0,i=0;
        cin>>n>>x;

        int arr[n];

        for(int j=0;j<n;j++)
        cin>>arr[j];

        //input done

        //now sorting
        sort(arr,arr+n);
        //reversing sorted array
        reverse(arr , arr+n);

        for(int j=0;j<n;j++)
        {
            sum+=arr[j];
        }
        if(sum<x)
        cout<<"-1"<<endl;

        int min=0;
        for(int j=0;j<n;j++)
        {
            min+=arr[j];
            i++;
            if(min>=x)
            break;
        }

        if(sum>=x)
        {
            cout<<i<<endl;
        }        
    }
    return 0;
    
}