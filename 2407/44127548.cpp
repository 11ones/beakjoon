// 2022년 6월 3일 20:28:51
// 컴파일 에러
// KB
// ms
x = [1]

for i in range(1, 101):
    x.append(x[i-1] * i)

a, b = input().split(" ")

print("{0}".format(x[int(a)]//x[int(b)]//x[int(a)-int(b)]))
