#include"iostream"
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int X,Y,A,B,K;
        int petrolrate,dieselrate;
        cin>>X>>Y>>A>>B>>K;
        petrolrate=X+(A*K);
        dieselrate=Y+(B*K);

        if(petrolrate<dieselrate)
        {
            cout<<"PETROL\n";
        }
        else if(dieselrate<petrolrate)
        {
            cout<<"DIESEL\n";
        }
        else
        {
            cout<<"SAME PRICE\n";
        }
    }
    return 0;
}