#include"iostream"
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x1 , x2;
        cin>>x1>>x2;

        if(x1>x2 || x1==x2)
        {
            cout<<"yes\n";
        }
        else{
            cout<<"No\n";
        }
    }
    return 0;
}
/*
Sample Input 1 
3
1 1
1 7
7 1
Sample Output 1 
YES
NO
YES
*/