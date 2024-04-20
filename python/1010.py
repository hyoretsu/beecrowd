[_id1, quantity1, price1] = map(float, input().split())
[_id2, quantity2, price2] = map(float, input().split())
total = (price1 * quantity1) + (price2 * quantity2)

print(f"VALOR A PAGAR: R$ {total:.2f}")
