#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int N,X,Y;
        cin>>N>>X>>Y;
        long int *A=new long int[N];
        long int *B=new long int[N];

        for (long int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        for (long int i = 0; i < N; i++)
        {
            cin >> B[i];
        }
        //input done
        int sum=0;
        sum=N+X+Y;
        for(long int i=0;i<N;i++)
        {
            sum+=A[i];
        }
        int sumB=0;
        for(long int i=0;i<N;i++)
        {
            sumB+=B[i];
        }
        if(sum>sumB)
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
    }
    return 0;
}