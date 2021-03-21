age = int(input())
[years, remainder] = divmod(age, 365)
[months, days] = divmod(remainder, 30)

print(f"{years} ano(s)")
print(f"{months} mes(es)")
print(f"{days} dia(s)")
