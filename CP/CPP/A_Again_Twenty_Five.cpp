// https://codeforces.com/problemset/problem/630/A

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    if(n==0){
            cout<<"01"<<endl;
        }
    if(n==1){
            cout<<"05"<<endl;
        }
    if(n>1){
            cout<<"25"<<endl;
        }
return 0;
}

/*

input
2
output
25

*/