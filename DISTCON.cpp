#include<iostream>
using namespace std;

int main()
{
    int tc = 0, tt = 1;
    while(tc++ < tt)
    {
       long  int n;
        cin>>n;
        if(n%2)
        {
            cout<<"-1"<<endl;
            continue;
        }
       
            cout << 0 << " " << (n/2) << endl;
            cout << (n/2) << " " << 0 << endl;
            cout << 0 << " " << -(n/2) << endl;
            cout << -(n/2) << " " << 0 << endl;
        
    }
    
   

    
    return 0;
}