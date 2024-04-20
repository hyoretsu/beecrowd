[code, quantity] = map(int, input().split())

# foodNames = ["Cachorro Quente", "X-Salada", "X-Bacon", "Torrada simples", "Refrigerante"]
priceTable = [4.0, 4.5, 5.0, 2.0, 1.5]

cost = priceTable[code - 1] * quantity

print(f"Total: R$ {cost:.2f}")
