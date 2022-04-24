#include<iostream>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        int n,c=8;
        cin>>n;
        int *arr = new int[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];

        //input done
        for(int i=0;i<n;i++)
        {
            c++;
            if(arr[i]==6 || arr[i]==13 || arr[i] == 20 || arr[i] ==27 || arr[i] == 7 || arr[i] == 14 || arr[i] == 21 || arr[i] ==28 )
            {
                c--;
            }
        }
        cout<<c<<endl;
    }

}