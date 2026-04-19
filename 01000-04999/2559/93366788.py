# 2025년 4월 20일 15:14:52
# 맞았습니다!!
# 40120KB
# 72ms
#도움용 코드
n,k=map(int,input().split())
lst=list(map(int,input().split()))
mx=0
for i in range(n-k+1):
  if i==0:
    s=sum(lst[0:k])
    mx=s
    continue
  s=s-lst[i-1]+lst[i+k-1]
  if s>mx:mx=s
print(mx)