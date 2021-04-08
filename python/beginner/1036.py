import math

[a, b, c] = map(float, input().split())
delta = (b ** 2) - (4 * a * c)

if delta <= 0 or a == 0:
    print("Impossivel calcular")
    exit()

print(f"R1 = {(-b + math.sqrt(delta)) / (2 * a):.5f}")
print(f"R2 = {(-b - math.sqrt(delta)) / (2 * a):.5f}")
