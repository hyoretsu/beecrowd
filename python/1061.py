import datetime

startDay = int(input().split()[1])
startTime = list(map(int, input().split(" : ")))
finishDay = int(input().split()[1])
finishTime = list(map(int, input().split(" : ")))

duration = datetime.timedelta(
    finishDay, hours=finishTime[0], minutes=finishTime[1], seconds=finishTime[2]
) - datetime.timedelta(
    startDay, hours=startTime[0], minutes=startTime[1], seconds=startTime[2]
)

days = duration.days
[hours, remainder] = divmod(duration.seconds, 60 * 60)
[minutes, seconds] = divmod(remainder, 60)
if days == 0 and hours == 0 and minutes == 0:
    minutes = 1
    seconds = 0

print(f"{days} dia(s)")
print(f"{hours} hora(s)")
print(f"{minutes} minuto(s)")
print(f"{seconds} segundo(s)")
