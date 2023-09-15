//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/U

#include<iostream>
using namespace std;
int main()
{

    float n;
    cin>>n;
    
    int integerPart = (int) n;
    float decimalPart = n - integerPart;

    if(decimalPart == 0)
        cout<<"int "<<integerPart;
    else
        cout<<"float "<<integerPart<<" "<<decimalPart;

return 0;
}

/*   input
     234.000
     output
     int 234

     input
     534.958
     output
     float 534 0.958
 */