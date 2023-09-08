#include <iostream>
using namespace std;
int main() {
    int i,n,arr[1000];
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];}
    int sum=0;
    for(i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<sum;

    return 0;
}

/*input
4
input 
1
2
3
4

output 
10 */