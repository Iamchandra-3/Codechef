/*
4
8
codechef
8
chefcode
14
sxycodeghychef
21
sxychefvsvcodehghchef
Sample Output 1 
AC
WA
AC
WA*/
#include"iostream"
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int N;
        cin>>N;
        char *s = new char[N];
        for(int i=0;i<N;i++)
        {
            if(s[i]=='c' && s[i+1] == 'h' && s[i+2] == 'e' && s[i+3] == 'f')
            {
                for(int j = 0;j<i;i++)
                {
                    if (s[i] == 'c' && s[i + 1] == 'o' && s[i + 2] == 'd' && s[i + 3] == 'e')
                    cout<<"AC"<<endl;
                    else
                    cout<<"WA"<<endl;
 
                }
            }
        }
    }
    return 0;
    
}