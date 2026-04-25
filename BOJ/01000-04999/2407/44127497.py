# 2022년 6월 3일 20:27:03
# 틀렸습니다
# KB
# ms
x = [1]

for i in range(1, 101):
    x.append(x[i-1] * i)

a, b = input().split(" ")

print("{0}".format(int(x[int(a)]/x[int(b)]/x[int(a)-int(b)])))