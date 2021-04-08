salary = float(input())

if salary <= 400:
    readjustPercent = 15
    newSalary = salary * (1 + (readjustPercent / 100))
elif 400 < salary <= 800:
    readjustPercent = 12
    newSalary = salary * (1 + (readjustPercent / 100))
elif 800 < salary <= 1200:
    readjustPercent = 10
    newSalary = salary * (1 + (readjustPercent / 100))
elif 1200 < salary <= 2000:
    readjustPercent = 7
    newSalary = salary * (1 + (readjustPercent / 100))
elif salary > 2000:
    readjustPercent = 4
    newSalary = salary * (1 + (readjustPercent / 100))

print(f"Novo salario: {newSalary:.2f}")
print(f"Reajuste ganho: {newSalary - salary:.2f}")
print(f"Em percentual: {readjustPercent} %")
