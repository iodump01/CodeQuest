//Given a number N. Print all numbers from N to 1 separated by a single space
#include <iostream>
using namespace std;
int main() {
    int n,i,arr[50];
    cout<<"Enter number of test cases:";
    cin>>n;
    for(i=0;i<n;i++){
        arr[n]=n%10;
        n=n/10;
        }
    cout<<"your digits are"<<endl;
    for(int j=n-1;j>=0;j--){
        cout<<arr[j]<<"  ";
    }
    return 0;
}