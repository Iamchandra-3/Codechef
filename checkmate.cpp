#include"iostream"
#include"string"
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int xk,yk,x1,y1,x2,y2;
        cin>>xk>>yk>>x1>>y1>>x2>>y2;
        string res = "yes";
        if(!(xk==1 || xk == 8 || yk==1||yk==8))
        {
            res = "no";
        }
        else
        {
            if(xk==1)
            {
                if(x1==2)
                {
                    if(y1==y2)
                    {
                        res = "no";
                    }
                    else
                    {
                        res="yes";
                    }
                }
                else if(x2==2)
                {
                    if (y1 == y2)
                    {
                        res = "no";
                    }
                    else
                    {
                        res = "yes";
                    }
                }
                else{
                    res = "no";
                }
            
            }
            if(xk==8)
            {
                if(x1==7)
                {

                }
            }
        }

    }
}