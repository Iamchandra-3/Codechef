#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n, hieght = 0, count = 0;
    cin >> n;
    cin >> hieght;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > hieght)
        {
            count += 1;
        }
    }
    cout << count;
    }
    return 0;
}