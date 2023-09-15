// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N

#include<iostream>
using namespace std;
int main()
{
    char x;
    char uppercase, lowercase;
    cin>>x;

    if(x>='A' && x<='Z'){
        lowercase = 'a'+(x - 'A');
        cout<<lowercase;
    }
    else{
        uppercase = 'A'+(x - 'a');
        cout<<uppercase;
    }

return 0;
}

/*

input
a

output
A

*/