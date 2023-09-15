// https://codeforces.com/problemset/problem/1512/A

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
    int n;
    cin>>n;

    int arr[n], flag;

    for(int i =0 ;i<n; i++)
    {
        cin>>arr[i];
    } 

    //First find the common element with the help of first three elements

    if(arr[0] == arr[1]) // first 2 elements are same
        flag = arr[0];
    else 
        flag = arr[2]; // the there is one different element from the first two


    for(int i = 0; i<n; i++)
    {
        if(flag != arr[i]){
            cout<<i + 1<<endl;
            break;
        }
    }
    }
return 0;
}

/*

input
4
4
11 13 11 11
5
1 4 4 4 4
10
3 3 3 3 10 3 3 3 3 3
3
20 20 10

output
2
1
5
3


*/