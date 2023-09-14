#https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/J.

a,b=map(int,input().split())
if a%b==0 or b%a==0:
    print("Multiples")
else:
    print("No Multiples")

'''
sample input1:
4 12
output1:
Multiples

sample input2:
4 7
output2:
No Multiples
'''
