#include<iostream>
using namespace std;

int main()
{
    long int t;
    cin>>t;
    while (t--)
    {
        /* code */
long int n;
        cin >> n;
        if (n % 4 == 0)
            cout << "Good" << endl;
        else
            cout << "Not Good" << endl;
    }
    return 0;
   
}