/*
Sample Input 1 
2
3
1 3 1
3
2 2 2
Sample Output 1 
2
0*/

#include"iostream"
#include"cstdlib"
using namespace std;
int main()
{
    long int T;
    cin>>T;
    while(T--) 
    {
        long int N, array[10000];
        cin>>N;
        for(long int i=0;i<N;i++)
        {
            cin>>array[i];
        }
        long int max=0,min=0;
        for(long int i=0;i<N;i++)
        {
            if(array[0]<array[i])
            array[0]=array[i];
            min=array[0]; 
        } 
        for(int i=0;i<N;i++)
        {
            if(array[0]>array[i])
            array[0]=array[i];
            max=array[0];

        } 
        long long ans = abs(max-min);
        cout<<ans<<endl;
    } 
} 
