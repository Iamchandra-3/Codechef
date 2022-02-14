/*
Sample Input 1
2
2
1 1
2
1 2
Sample Output 1
2
3*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        // Initialize array
        long long int length, ans = 1, res;
        cin >> length;
        long long int *arr = new long long int[length];
        for (int i = 0; i < length; i++)
            cin >> arr[i];
        // Array fr will store frequencies of element
        long long int fr[length];
        long long int visited = -1;

        for (int i = 0; i < length; i++)
        {
            int count = 1;
            for (int j = i + 1; j < length; j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                    // To avoid counting same element again
                    fr[j] = visited;
                }
            }
            if (fr[i] != visited)
                fr[i] = count;
        }

        // Displays the frequency of each element present in array

        for (int i = 0; i < length; i++)
        {
            if (fr[i] != visited)
            {
                ans *= (fr[i] + 1);
                ans %= 1000000007;
            }
        }
        cout << res - 1 << endl;
    }
    return 0;
}