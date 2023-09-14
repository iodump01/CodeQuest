#https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T

arr=list(map(int,input().split()))
copy=arr.copy()
arr.sort()
for i in range(3):
    print(arr[i])
 
 
print("")
 
for i in range(3):
    print(copy[i])
'''
sample input1:
1 6 0
output1:
0
1
6

1
6
0

'''
