#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int min = INT_MAX;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] < min)
                min = arr[i];
            sum += arr[i];
        }
        cout << sum - n * min << endl;
    }
    return 0;
}
