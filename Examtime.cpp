#include"iostream"
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int dsa_d , toc_d , dm_d ;
        int  dsa_s,toc_s,dm_s;
        int total_d, total_s;

        cin>>dsa_d>>toc_d>>dm_d;
        cin>>dsa_s>>toc_s>>dm_s;

        total_d = dsa_d+toc_d+dm_d;
        total_s = dsa_s+toc_s+dm_s;

        if(total_d>total_s)
        {
            cout<<"Dragon"<<endl;
        }
        if(total_d<total_s)
        {
            cout<<"Sloth"<<endl;
        }
        if(total_d==total_s && dsa_d>dsa_s)
        {
            cout<<"Dragon"<<endl;
        }
        if (total_d == total_s && dsa_d < dsa_s)
        {
            cout << "Sloth" << endl;
        }
        if (total_d == total_s && dsa_d == dsa_s && toc_d>toc_s)
        {
            cout << "Dragon" << endl;
        }
        if (total_d == total_s && dsa_d == dsa_s && toc_d < toc_s)
        {
            cout << "Sloth" << endl;
        }
        if (total_d == total_s && dsa_d == dsa_s && toc_d == toc_s)
        {
            cout << "TIE" << endl;
        }
    }
    return 0;
}