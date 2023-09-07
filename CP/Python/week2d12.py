#https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H

x=int(input())
if x==1 :
    print("No")
elif x==2 or x==3 or x==5 or x==7:
    print("Yes")
elif x%2==0 or x%3==0 or x%5==0 or x%7==0:
    print("No")
else:
    print("Yes") 

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