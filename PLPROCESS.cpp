#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n, s = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            s += a;
        }
        // input done

        if (n > 1)
        {
            if (n % 2 == 0)
            {
                cout << s / 2  << endl;
            }
            else
            {
                cout << (s / 2) + 1 << endl;
            }
        }
        else
        {
            cout << s + n/2;
        }
    }
    return 0;
}