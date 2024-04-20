totalTime = int(input())
[hours, remainder] = divmod(totalTime, 3600)
[minutes, seconds] = divmod(remainder, 60)

print(f"{hours}:{minutes}:{seconds}")
