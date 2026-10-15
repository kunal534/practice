// link: https://codeforces.com/problemsets/acmsguru/problem/99999/546
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n>>a>>b;

    string s;
    cin>>s;
    
    if(a+b>n){
        cout<<-1<<endl;
        return 0;
    }

    int twos=n-a-b;
    int count[3]={0,0,0};
    
    for(char &ch:s)count[ch-'0']++;

    // count of variables which would remain unchanged
    int unchange0=min(a,count[0]);
    int unchange1=min(b,count[1]);
    int unchange2=min(count[2],twos);

    // total - unchanged results in changes needed
    int changes=n-unchange0-unchange1-unchange2;
    vector<bool>kept(n,false);
    
    // fast fill for all values and the ones which are left would be are target
    int temp=unchange0;
    for(int i=0;i<n&&temp>0;i++)
    {
        if(s[i]=='0')
        {
            kept[i]=true;
            temp--;
        }
    }
    temp=unchange1;
    for(int i=0;i<n&&temp>0;i++)
    {
        if(s[i]=='1')
        {
            kept[i]=true;
            temp--;
        }
    }
    temp=unchange2;
    for(int i=0;i<n && temp>0;i++)
    {
        if(s[i]=='2')
        {
            kept[i]=true;
            temp--;
        }
    }
    int need0=a-unchange0;
    int need1=b-unchange1;
    for(int i=0;i<n;i++)
    {
        if(!kept[i])
        {
            if(need0)
            {
                s[i]='0';
                need0--;
            }
            else if(need1)
            {
                s[i]='1';
                need1--;
            }
            else
            {
                s[i]='2';
            }
        }
    }

    cout<<changes<<endl;
    cout<<s<<endl;
    return 0;
}