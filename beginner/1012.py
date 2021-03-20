[a, b, c] = map(float, input().rsplit(" "))
pi = 3.14159

print(f"TRIANGULO: {(a * c) / 2:.3f}")
print(f"CIRCULO: {pi * (c ** 2):.3f}")
print(f"TRAPEZIO: {((a + b) / 2) * c:.3f}")
print(f"QUADRADO: {b ** 2:.3f}")
print(f"RETANGULO: {a * b:.3f}")
