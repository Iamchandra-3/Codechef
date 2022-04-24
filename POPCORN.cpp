#include"iostream"
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        long long int A1,A2,B1,B2,C1,C2,A,B,C;
        cin>>A1>>A2>>B1>>B2>>C1>>C2;
        A=A1+A2;
        B=B1+B2;
        C=C1+C2;
        if(A>B && A>C)
        {
            cout<<A<<endl;
        }
        else if(B>A && B>C)
        {
            cout<<B<<endl;

        }
        else
        {
            cout<<C<<endl;
        }
    }
    return 0;
}