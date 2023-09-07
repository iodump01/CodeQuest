//Given a number N. Print all numbers from N to 1 separated by a single space
#include <iostream>
using namespace std;
int main() {
    int n,i;
    cout<<"Enter a number:";
    cin>>n;
    if (1<=n<=10000){
        for(i=n;i>=1;i--){
            cout<<" "<<i;
        }
    }
    return 0;
}

//input: 7
//output:  7 6 5 4 3 2 1