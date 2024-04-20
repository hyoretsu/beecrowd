[grade1, grade2, grade3, grade4] = map(float, input().split())

average = (2 * grade1 + 3 * grade2 + 4 * grade3 + 1 * grade4) / 10

print(f"Media: {average:.1f}")
if average >= 7:
    print("Aluno aprovado.")
elif average < 5:
    print("Aluno reprovado.")
elif 5 <= average < 7:
    print("Aluno em exame.")

    lastGrade = float(input())
    print(f"Nota do exame: {lastGrade}")
    finalAverage = (average + lastGrade) / 2

    if finalAverage >= 5:
        print("Aluno aprovado.")
    elif finalAverage < 5:
        print("Aluno reprovado.")
    print(f"Media final: {finalAverage}")
