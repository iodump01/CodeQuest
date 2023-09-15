// https://codeforces.com/problemset/problem/1030/A

#include<iostream>
using namespace std;
int main()
{
    int n; 
    cin>>n;
    
    int flag = 0;
    int arr[n];

    for(int i =0; i<n; i++)
    {
        cin>>arr[i];
    }   

    for(int i =0; i<n; i++)
    {
        if(arr[i]==1)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        cout<<"EASY"<<endl;
    else
        cout<<"HARD"<<endl;
return 0;
}

/*

input
3
0 0 1
output
HARD

input
1
0
output
EASY

*/