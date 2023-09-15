// https://codeforces.com/problemset/problem/1496/A

#include<iostream>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
        string s;
        cin>>s;

        if(2*k>=n){
            cout<<"NO"<<endl;
            return ;
        }
        else{
            for(int i=0; i<k; i++)
            {
                if(s[i]==s[n-1-i])
                    continue;
                else{
                    cout<<"NO"<<endl;
                    return ;
                }
            }
            cout<<"YES"<<endl;
        }
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }
return 0;
}

/*

input
7
5 1
qwqwq
2 1
ab
3 1
ioi
4 2
icpc
22 0
dokidokiliteratureclub
19 8
imteamshanghaialice
6 3
aaaaaa

ouput
YES
NO
YES
NO
YES
NO
NO

*/