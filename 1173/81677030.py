# 2024년 7월 27일 21:00:19
# 맞았습니다!!
# 31120KB
# 48ms
N,m,M,T,R=map(int,input().split())
tf=True
if m+T>M:
  tf=False
  cnt=-1
else:
  tc=0
  p=m
  cnt=0
  while tf:
    if p+T<=M:
      p+=T
      tc+=1
      if tc==N:
        tf=0
    else:
      if p-R>=m:
        p-=R
      else:
        p=m
    cnt+=1
print(cnt)