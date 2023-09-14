#https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K

a,b,c=map(int,input().split())
mini=min(a,b,c)
maxi=max(a,b,c)
print(mini,maxi)

'''
sample input1:
1 2 3
output1:
1 3

sample input2:
-1 -2 -3
output2:
-3 -1


'''
