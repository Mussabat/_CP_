#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> mp;
    map<string,int>::iterator i;
    mp.insert(pair<string,int>("Nafisa",1804066));
    mp.insert(pair<string,int>("Meem",1805057));
    mp.insert(pair<string,int>("Zannatul",1806030));
    mp["sayma"]=1707024;
    mp["rupa"]=1808085;

    for(i=mp.begin();i!=mp.end();i++)
    {
        cout<<i->first<<' '<<i->second<<endl;
    }
    mp.erase("Nafisa");
    for(i=mp.begin();i!=mp.end();i++)
    {
        cout<<i->first<<' '<<i->second<<endl;
    }
}

