#include <iostream>

using namespace std;

int main()
{
    int n, p, sum = 0;
    cin >> p;
    int arr[p];

    for (int i = 0; i < p; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < p; i++)
    {
        while (arr[i] == arr[i + 1])
        {
            arr[i] += 1;
            arr[i + 1] = 0;
            for (int j = i + 1; j < p; j++)
            {
                arr[j] = arr[j + 1];
                if (i != 0)
                {
                    arr[p - i] = 0;
                }
            }
        }
    }
    for (int i = 0; i < p; i++)
    {
        cout << arr[i]<<endl;
    }
    for (int i = 0; i < p; i++)
    {
        sum += arr[i];
    }
    cout << sum;

    return 0;
}