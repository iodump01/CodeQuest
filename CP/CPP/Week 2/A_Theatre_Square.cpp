// https://codeforces.com/problemset/problem/1/A

#include<iostream>
using namespace std;
int main()
{

    long long int m,n,a;
    cin>>m>>n>>a;

    long long int row = m/a;//no of flagstones in x axis
    long long int column = n/a; //no of flagstones in y axis

    //it may happen that there is an extra space, therefore adding one extra flagstone

    if(m%a != 0)
        row++;
    if(n%a != 0)
        column++;

    cout<<row*column;

return 0;
}

/*

input
6 6 4
ouput
4

input
1 1 1
output
1

*/