#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        map<int ,char>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        int red=0;
        int green=0;
        for(auto it:mp)
        {
            int a=it.second;
            if(a>=2)
            {
              red++;
              green++;
            }
            else
            {
                if(red>green)
                {
                    green++;
                }
                else
                {
                    red++;
                }
            }
        }
        if(red>green)
        {
            red--;
        }
        cout<<red<<endl;
    }
}
