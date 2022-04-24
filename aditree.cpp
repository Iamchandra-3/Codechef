/*
Sample Input 1 
3
1 2
2 3
2
1 3
2 3
Sample Output 1 
Gungun
Aditya//
*/
#include"iostream"
using namespace std;
int main()
{
    
    long int n;
    cin>>n;
    long int arr[2*(n-1)];
    for(int i=0;i<2*(n-1);i++)
    {
        cin>>arr[i];
    }
    long int q;
    cin>>q;
    while(q--)
    {
        long int a,b;
        cin>>a>>b;
        int ans = a+b;
        if(ans % 2 ==0)
        {
            cout<<"Gungun\n";
        }
        if(ans % 2 != 0)
        {
            cout<<"Aditya\n";
        }
     
    }
    
}