// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K

#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    int greatest, smallest, middle;
    cin>>a>>b>>c;

    if(a>=b && a>=c)
    {
        greatest = a;
        if(b>=c){
            middle = b;
            smallest = c;
        }
        else{
            middle = c;
            smallest = b;
        }
    }
    else if(b>=a && b>=c){

        greatest = b;
        if(a>=c)
        {
            middle = a;
            smallest = c;
        }
        else
        {
            middle = c;
            smallest = a;
        }
    }
    else{
        greatest = c;
        if(a>=b)
        {
            middle = a;
            smallest = b;
        }
        else{
            middle = b;
            smallest = a;
        }
    }

    cout<<smallest<<" "<<greatest;

return 0;
}

/*

input 
1 2 3

output
1 3

*/