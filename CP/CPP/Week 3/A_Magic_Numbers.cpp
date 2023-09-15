// https://codeforces.com/problemset/problem/320/A

#include<iostream>
using namespace std;

bool isMagicNumber(int n)
{
    while(n>0)
    {
        if(n%10 == 1)
            n /= 10;
        else if(n%100 == 14)
            n /= 100;
        else if(n%1000 == 144)
            n /= 1000;
        else{
            cout<<"NO"<<endl;
            return false;
        }

    }
        cout<<"YES"<<endl;

    return true;
}

int main()
{
    long long int n;
    cin>>n;

    isMagicNumber(n);

return 0;
}

/*

input
114114
output
YES

input
441231
output
NO

*/