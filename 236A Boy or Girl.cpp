
#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    string s;
    getline(cin,s);

    int i,j;
    int l, total;
    l=s.size();
    char t[l];
    t[0]=s[0];
    total = 1;
    // This loop is to check every letter from give4n string
    for(i=1;i<l;i++)
    {
        // flag is needed to track if it is same letter as before?
        int flag=0;
        // this is the new string t, where unique letters are stored.
        for(j=0;j<total;j++)
        {
            if(s[i]==t[j]){flag=1;}
        }
        if(flag==0)
        {
            t[total]=s[i];
            total++;
        }


    }

    if(total%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }





    return 0;
}
