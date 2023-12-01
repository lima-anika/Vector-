#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<string>str;

    vector<int>freq(26,0);

    string s1;

    cin>>s1;

    /*for(int i=0;i<s1.size()-1;i++)
    {
        for(int j=i+1;j<s1.size();j++)
        {
            if(s1[i]>s1[j])
            {
                swap(s1[i],s1[j]);
            }
        }
    }*/

    /*for(int i=0;i<freq.size();i++)
    {
     cout<<freq[i]<<endl;
    }*/
    //str.push_back(s1);

    for(int i=0;i<s1.size();i++)
    {
     int c1=int(s1[i]);

     c1=c1-97;

     freq[c1]+=1;

    }

    for(int i=0;i<freq.size();i++)
    {
        if(freq[i]>0)
        {
        cout<<char(i+97)<<" : "<<freq[i]<<endl;
        }

    }

}
