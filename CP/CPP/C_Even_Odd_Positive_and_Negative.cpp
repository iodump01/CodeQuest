// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int even=0,odd=0,pos=0,neg=0;
    int arr[n];

    //Accepting the elements in an array
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }

    //Traversing the array to check whether it is even,odd,pos or neg
    for(int i = 0; i<n; i++)
    {
        if(arr[i]%2==0)
            {
                even++;
                if(arr[i]>0)
                    pos++;
                else if(arr[i]<0)
                    neg++;
            }
        else
            {
                odd++;
                if(arr[i]>0)
                    pos++;
                else if(arr[i]<0)
                    neg++;
            }
    }

    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<pos<<endl;
    cout<<"Negative: "<<neg<<endl;

return 0;
}