//https://codeforces.com/problemset/problem/1535/A

#include<iostream>
using namespace std;
int main()
{
    int n,match1Winner, match2Winner, match1Loser,match2Loser;
    cin>>n;

    int arr[n][4];

    string ans[n];

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j< 4; j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i = 0; i<n; i++)
    {
        match1Winner = max(arr[i][0],arr[i][1]);
        match2Winner = max(arr[i][2], arr[i][3]);

        match1Loser = min(arr[i][0],arr[i][1]);
        match2Loser = min(arr[i][2], arr[i][3]);

        if(match1Winner<match2Loser || match2Winner<match1Loser)
            ans[i] = "NO";
        else
            ans[i] = "YES";
    }

    for(int i = 0; i<n; i++)
    {
        cout<<ans[i]<<endl;
    }
return 0;
}

/*

input
4
3 7 9 5
4 5 6 9
5 3 8 1
6 5 3 2

output
YES
NO
YES
NO

*/