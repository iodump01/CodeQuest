// https://atcoder.jp/contests/abc258/tasks/abc258_a

#include<iostream>
using namespace std;
int main()
{
    int k;
    cin>>k;

    int hrs = 21;

    if(k>=60)
    {
        hrs++;
        k = k - 60;
    }

    string mins;
    if(k<10)
        mins+="0";
    mins+=to_string(k);

    cout<<hrs<<":"<<mins<<endl;

return 0;
}

/*

input
63
output
22:03

input
45
output
21:45

*/