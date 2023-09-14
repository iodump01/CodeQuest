#https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/K

n=int(input())

for i in range(1,n+1):
    if n%i==0:
        print(i)

'''
sample input1:
6
output1:
1
2
3
6

sample input2:
7
output2:
1
7
'''
