/*
Sample Input 1 
4
2
3
4
5
Sample Output 1 
2 1 
1 3 2 
1 3 4 2 
4 5 2 3 1 
Explanation
For the last test case:
P2=5 is not divisible by 2
P3=2 is not divisible by 3
P4=3 is not divisible by 4
P5=1 is not divisible by 5
Since i does not divide Pi for every index  the permutation is indivisible.*/
#include"iostream"
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int *array = new int[n];
        for(int i=1;i<n-1;i++)
        {
            array[i]=i+2;
        }
        
        cout<<"2 ";
        for(int i=1;i<n-1;i++){
        cout<<array[i]<<" ";}

        cout<<"1";
        
        
    }
    return 0;
}