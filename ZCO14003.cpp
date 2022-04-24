#include<iostream>
#include<algorithm>
int main()
{
    int t,ans1,ans2;
    std::cin>>t;
    
    int *arr = new int[t];
    for(int i=0;i<t;i++)
    {
        std::cin>>arr[i];
    }
    std::sort(arr,arr+t);

    for(int i=0;i<t;i++)
    {
        ans1 = arr[i]*t;
        ans2 = arr[i+1]*t-1;
        if(ans1>ans2)
        std::cout<<ans1;
        else
        std::cout<<ans2;

    }
    for(int i = 0; i<t;i++)
    {
        std::cout<<" "<<arr[i];
    }
    return 0;

}