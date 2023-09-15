// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V

#include<iostream>
using namespace std;
int main()
{
   
    int A,B;
    char symbol;

    cin>>A;
    cin>>symbol;
    cin>>B;

    if(A>B && symbol=='>')
        cout<<"Right";
    else if(A<B && symbol=='<')
        cout<<"Right";
    else if(A==B && symbol=='=')
        cout<<"Right";
    else
        cout<<"Wrong";

return 0;
}

/*

input
5 > 4
Right

9 > 1
Wrong

4 = 4
Right

*/