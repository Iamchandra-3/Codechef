/*
Sample Input 1 
3
5
ab?c?
aeg?k
6
abcde?
ehio??
4
abcd
abcd 
Sample Output 1 
4
6
0*/
#include"iostream"
using namespace std;

int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int N,count=0;
        cin>>N;
        char S[N],P[N];

        for(int i=0;i<N;i++)
        cin>>S[i];

        for(int i=0;i<N;i++)
        cin>>P[i];

        for(int i=0;i<N;i++)
        {
            if(S[i]=='?')
            {
                S[i]='x';
            }
        }
        for(int i=0;i<N;i++)
        {
            if(P[i]=='?')
            {
                P[i]='x';
            }
        }

        for(int i=0;i<N;i++)
        {
            if (S[i] == P[i])
            {
                count += 0;
            }
        }
        //count +1 operations;
        //when one is vowel and other is consonant
        for(int i=0;i<N;i++)
        {
         if(S[i]=='a' || S[i] == 'e' || S[i]=='i'|| S[i] == 'o'|| S[i]=='u')
         {
             if(P[i]!='a' && P[i]!='e' && P[i] != 'i' && P[i] != 'o' && P[i] != 'u')
             {
                 count+=1;
             }
         }
        }
        //count +2 operations;
        //when both are vowels or both are consonants
        //now for both are vowels case
       for (int i = 0; i < N; i++)
        {
            if (S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u')
            {
                if (P[i] == 'a' || P[i] == 'e' || P[i] == 'i' || P[i] == 'o' || P[i] == 'u')
                {
                    count+=2;
                }
            }
        }

        //now for both are consonants case 
       /* for (int i = 0; i < N; i++)
        {
            if (S[i] != 'a' || S[i] != 'e' || S[i] != 'i' || S[i] != 'o' || S[i] != 'u')
            {
                if (P[i] != 'a' || P[i] != 'e' || P[i] != 'i' || P[i] != 'o' || P[i] != 'u')
                {
                    count+=2;
                }
            }
        }*/

        cout<<count<<endl;
    }
    return 0;
}