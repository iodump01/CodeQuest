//Given a number N. Print numbers from 1 to N in separate lines


#include <iostream>
using namespace std;
int main() {
    
    int n,i;
    cout<<"Enter a number:";
    cin>>n;
    if (1<=n<=10000){
        for(i=1;i<=n;i++){
            cout<<i<<endl;
    }
    }
return 0;
}

//input: 5

//output 1
//2
//3
//4
//5
