N = int(input())
perfect = input().split(' ')
num = perfect[0]
perfectans = perfect[1:]
maxMarks = 0
RollMaxMarks = []
for i in range(1,N+1):
    str = input().split(' ')
    n = int(str[0])
    ans = str[1:]
    marks = 0
    
    for j in range(n):
        if (ans[j] == perfectans[j]):
            marks = marks + 1
        
    if(marks >= maxMarks):
        maxMarks = marks
        RollMaxMarks.append(i) 
print(RollMaxMarks)