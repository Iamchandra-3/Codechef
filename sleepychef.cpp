/*Sample Input 1 
3
4 1
1010
4 2
0100
11 3
00100000001
Sample Output 1 
2
1
2*/
#include"iostream"
#include"string"
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N,K,count;
        cin>>N>>K;
        char *array = new char[N];
        for(int i=0;i<N;i++)
        cin>>array[i];
        for(int i=0;i<N;i++)
        {
            if(array[i]==0)
            count++;
        }
        cout<<count<<endl;
        
    }
    return 0;
}