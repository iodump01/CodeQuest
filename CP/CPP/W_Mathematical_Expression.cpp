// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W

#include<iostream>
using namespace std;
int main()
{
    string A,S,B,Q,C;

    cin>>A>>S>>B>>Q>>C;

    int a = stoi(A);
    int b = stoi(B);
    int c = stoi(C);

    if(S=="+"){
        if(a + b == c)
            cout<<"Yes";
        else
            cout<<a + b;
    }
    
    if(S=="-"){
        if(a - b == c)
            cout<<"Yes";
        else
            cout<<a - b;
    }

    if(S=="*"){
        if(a * b == c)
            cout<<"Yes";
        else
            cout<<a * b;
    }
    

return 0;
}

/*

input
5 + 10 = 15

output
Yes

*/