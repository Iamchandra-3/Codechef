/*
Sample Input 1 
2
A B C
A B
B C A
A C
Sample Output 1 
A
C
*/
#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char A,B,C;
        cin>>A>>B>>C;
        char x,y;
        cin>>x>>y;
        if(x==A || y==A)
        {
            cout<<A<<endl;
        }
        else
        {
            cout<<B<<endl;
        }


    }
    return 0;
}