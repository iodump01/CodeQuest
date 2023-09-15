// https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/G

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;

    for(int i = 0; i<t; i++)
    {
        cin>>n;
        int arr[n];

        for(int j = 0; j<n; j++)
        {
            cin>>arr[j];
        }

        int evenCount = 0;
        int oddCount = 0;

        for(int num : arr){
            if(num % 2 == 0){
                evenCount++;
            }
            else{
                oddCount++;
            }
        }

        if((evenCount + oddCount) % 2 != 0){
            cout<<"-1"<<endl;
        }
        else{
            int operations = abs(evenCount - oddCount)/2;
            cout<<operations<<endl;
        }
    }
return 0;
}

/*

input
3
4
1 2 3 4
4
1 1 1 1
3
1 2 3

output
0
2
-1

 */