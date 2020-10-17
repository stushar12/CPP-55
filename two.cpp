#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int p;
     cin>>p;
     while(p--)
     {
         string s;
         cin>>s;
    int n=s.length();
    string s1;
    s1=s[0];
    int len=1;
    int k=0;
    for(int i=1;i<n;i++)
    {
        if(s1.find(s[i])==string::npos)
        {
            s1=s1+s[i];
            k=s1.length();
            len=max(len,k);
        }
        else
        {
           int x=s1.find(s[i]);
            s1.erase(0,x+1);
            s1=s1+s[i];
        }
        
    }
    cout<<len<<endl;

     }

}