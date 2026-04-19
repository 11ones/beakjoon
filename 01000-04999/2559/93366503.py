# 2025년 4월 20일 15:07:21
# 틀렸습니다
# KB
# ms
#도움용 코드
n,k=map(int,input().split())
lst=list(map(int,input().split()))
mx=-201
for i in range(n-k+1):
  if i==0:
    s=sum(lst[0:k])
    if s>mx:mx=s
    continue
  s=s-lst[i-1]+lst[i+k-1]
  if s>mx:mx=s
print(mx)