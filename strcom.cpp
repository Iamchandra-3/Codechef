/*
from sys import stdin, stdout
for i in range(int(stdin.readline())):
        n,t=int(stdin.readline()),0
        a=stdin.readline()
        b=stdin.readline()
        for j in range(n):
          if a[j:n]<b[j:n]:
                  t=t+1
        print(t)*/

#include"iostream"
#include"string"
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ans=0;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        for(int i=0;i<n;i++)
        {
            string p1 = s1.substr(i,n-i);
            string p2 = s2.substr(i,n-i);
            if(p1<p2)
            ans++;
        }
        cout<<ans<<endl;
    }
}
