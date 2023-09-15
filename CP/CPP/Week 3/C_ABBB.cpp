// https://codeforces.com/problemset/problem/1428/C

#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int t;
    cin>>t;
    
    string s="";

    while(t--)
    {
        cin>>s;

        stack<char> stk;

        for(int i = 0; i<s.length(); i++)
        {
            if(stk.size() == 0)
            {
                stk.push(s[i]);
                continue;
            }
            if(s[i] == 'B' && (stk.top()=='A' || stk.top()=='B'))
                stk.pop();
            else{
                stk.push(s[i]);
            }
        }
        cout<<stk.size()<<endl;
    }
return 0;
}

/*

input
3
AAA
BABA
AABBBABBBB

output
3
2
0

*/