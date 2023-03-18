# Python으로 구현하는 에라토스테네스의 체
# 백준 1929 소수 구하기
import math

# n, m 사이의 소수를 전부 출력하기
n, m = map(int, input().split())

# 배수를 계산하기 편하게 하기 위해
# 1부터 배열을 사용한다.
# 배열의 값이 1이면 index는 소수, 0이면 소수가 아니다
prime = [1]*(m+1)
# 0번째 index는 사용하지 않는 index, 1은 항상 소수가 아니다.
prime[0] = 0; prime[1] = 0

# 배수를 없애줄 범위는 2(첫번째 소수) 부터 m^0.5 까지
for i in range(2, math.floor(m**0.5)+2):
    if prime[i]:
        # 배수를 지워주자
        for j in range(i*2, m+1, i):
            prime[j] = 0


for i in range(n, m+1):
    if prime[i]:
        print(i)