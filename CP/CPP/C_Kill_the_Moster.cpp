// https://codeforces.com/problemset/problem/1633/C

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int hC;//health of character
        long long int dC;//attack of character
        long long int hM;//health of monster
        long long int dM;//attack of monster

        long long int k,attack,health;

        cin>>hC>>dC>>hM>>dM>>k>>attack>>health;
        bool flag = false;

        for(int i = 0; i<=k; i++)
        {
            long long int nh = hC + (i*health);//new health
            long long int na = dC + ((k-i)*attack);//new attack

            long long int timeToKillMonster = hM/na;
            if(hM%na)
                timeToKillMonster++;
            long long int timeToGetKilled = nh/dM;
            if(nh%dM)
                timeToGetKilled++;

            if(timeToKillMonster <= timeToGetKilled)
            {
                flag = true;
                break;
            }
        }

        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
return 0;
}

/*

input
4
25 4
9 20
1 1 10
25 4
12 20
1 1 10
100 1
45 2
0 4 10
9 2
69 2
4 2 7

output
YES
NO
YES
YES


*/