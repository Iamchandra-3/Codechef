#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        int n,k,p=0;
        cin>>n>>k;
        int *arr = new int[k];

        for(int i=0;i<k;i++)
        {
            cin>>arr[i];
        }
        //input done
        sort(arr,arr+k);
        vector<int> v;
        for(int i=0;i<k;i++)
        {
            for (int j=arr[i];j>p;j--)
            {
                v.push_back(j);
            }
            p = arr[i];
        }

        for(auto it = v.begin();it !=v.end();it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;       
    }
    return 0;
    
}