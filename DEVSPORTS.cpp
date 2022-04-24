#include"iostream"
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
       long int Z,Y;
        long int A,B,C,add,sub,res;
        cin>>Z>>Y>>A>>B>>C;
        add = A+B+C;
        sub = Z-Y;
        if(add>sub)
        cout<<"NO"<<endl;
        else
        cout<<"Yes"<<endl;
        
    }
    return 0;
    
}