#https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H

x=int(input())
count=0
for i in range(2,x):
    if x%i==0:
        count+=1
        break
if count==0:
    print("YES")
else:
    print("NO") 

'''
sample input1:
34
output1:
No

sample input2:
61
output:
Yes

sample input3:
1
ouput3:
No
'''
