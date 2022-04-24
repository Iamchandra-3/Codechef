#include"iostream"
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int n;
        long long int count =0;
        cin>>n;
        
        for(int i=1;i<=n-1;i++)
        {
            if((n-1)%i==0)
            {
                ++count;
            }
        }
        cout<<count<<endl;
        
    }
}
/*
Sample Input 1 
3
2
3
4
Sample Output 1 
1
2
2
*/