#include"iostream"
#include"algorithm"
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long int n;
        cin>>n;
        int a[3][3];
        for( int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>a[i][j];
            }
        }
        //input done
        if(a[0][0]==n && a[1][1]==n && a[2][2]==n)
        cout<<"0"<<endl;
        else
        cout<< max(a[0][1] + a[0][2]+a[1][2], a[1][0]+a[2][0]+a[2][1])<<endl;

    }
    return 0;
}