/*
Sample Input 1 
3
3
2 1 1
3
0 5 0
4
3 0 2 1
Sample Output 1 
4
1
3*/
#include"iostream"
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        unsigned long int n,temp,c=0,sum=0;
        cin>>n;
        unsigned long int arr[100000];
        for(unsigned long int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for (unsigned long int i = 0; i < n; i++)
        {
            for(unsigned long int j = 1+i;j<n;j++)
            {
                if(arr[i]<arr[j])
                {
                    temp = arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        if(arr[n-1]==0){
        for(unsigned long int i=0;i<n;i++)
        {
            while(arr[i]!=0)
            {
            arr[i]=arr[i]-1;
            c++;
            i = i + 1;
            }
        }
        cout<<c<<endl;
        }
        else
        {
        for(unsigned long int i=0;i<n;i++)
        {
            sum += arr[i];
        }
        cout<<sum<<endl;
        }
    }
    return 0;
    
}