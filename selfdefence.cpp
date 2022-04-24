#include <iostream>
using namespace std;
int main()
{
   long  int n;
     cin>> n;
    while (n--)
    {
        long int a,  k = 0;
        cin >> a;
       int *arr = new int[a];
        for (int j = 0; j < a; j++)
        {
            cin >> arr[j];
            if (arr[j] >= 10 && arr[j] <= 60)
            {
                k += 1;
            }
        }
        cout << k << endl;
        
    }
    return 0;
}