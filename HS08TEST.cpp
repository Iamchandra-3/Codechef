#include"iostream"
#include"stdio.h"
using namespace std;
int main()
{
    int towithdraw;
    float balance;
    cin>>towithdraw;
    cin>>balance;
    if(towithdraw>balance || towithdraw % 5 !=0)
    {
        cout<<balance;
    }
    else{
        printf("%.2f",balance - towithdraw - 0.50);
    }
    return 0;

}