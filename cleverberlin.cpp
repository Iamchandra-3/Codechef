#include"iostream"
#include"string"
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char A[100],B[100];
        string res = "YES";
        cin>>A;
        cin>>B;
        int len1 = sizeof(A)/sizeof(A[0]);
        int len2 = sizeof(B) / sizeof(B[0]);

        for(int i = 0;i<len1;i++)
        {
            for(int j = 0;j<len2;j++)
            {
                if(A[i]==B[j]) 
                i++;
                else
                res = "NO";
            }
        }
        cout<<res<<endl; 
    }
    return 0;
}