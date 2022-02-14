/*
Sample Input 1 
3
3 2
2 3
3 3
Sample Output 1 
7
0101010
7
1010101
8
01010101
*/
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        string result = "";
        if(m==n)
        {
            for(int i=0;i<n+1;i++)
            result +="10";
        }
        else if(m>n)
        {
            for (int i=0;i<n+1;i++)
            result += "10";

            for(int i=0;i<m-n-1;i++)
            result+="110";

            result+="1";
        }
        else
        {
            for(int i=0;i<m;i++)
            result+= "01";

            for(int i=0;i<n-m;i++)
            result += "010";
        }
        cout << result.size() << endl;
        cout << result << endl;
    
    }
}
