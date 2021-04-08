[start, end] = map(int, input().split())

if end == start:
    duration = 24
elif end < start:
    duration = 24 - start + end
else:
    duration = end - start

print(f"O JOGO DUROU {duration} HORA(S)")
