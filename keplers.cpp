#include"iostream"
#include"cmath"
using namespace std;
 // namespace std;
 int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
        long int t1,t2,r1,r2;
        cin>>t1>>t2>>r1>>r2;
        if(((t1*t1)/(r1*r1*r1))==((t2*t2)/(r2*r2*r2)))
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
     }
 }
