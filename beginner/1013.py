# greatestNumber = max(map(int, input().split()))
[a, b, c] = map(int, input().split())
abGreatest = (a + b + abs(a - b)) / 2
greatestNumber = (abGreatest + c + abs(abGreatest - c)) / 2

print(f"{greatestNumber:.0f} eh o maior")
