/*
3
2 3 4 5
3 3 3 3
2 3 1 2
Sample Output 1 
S
N
S
*/
#include"iostream"
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long int A,B,C,D;
        char ans;
        cin>>A>>B>>C>>D;

        if(A>=B)
        {
            B=B+C;
        }
        else
        {
            A=A+C;
        }
        
        if (A >= B)
        {
            B = B + D;
        }
        else
        {
            A = A + D;
        }

        if(A>=B)
        ans = 'N';
        else
        ans = 'S';

        cout<<ans<<endl;
    }
    return 0;
}