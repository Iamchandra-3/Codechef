#include"iostream"
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int P,Q,x,y;
        cin>>P>>Q>>x>>y;

        int ans1 = P + x*10;
        int ans2 = Q + y*10;

        if(ans1>ans2)
        {
            cout<<"chefina";
        }
        else if(ans2>ans1)
        {
            cout<<"chef";
        }
        else
        {
            cout<<"Draw";
        }
    }
}
/*Sample Input 1 
3
10 8 2 3
10 10 10 10
40 21 2 0
Sample Output 1 
Chef
Draw
Chefin*/