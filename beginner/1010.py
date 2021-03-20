[productId1, productQuantity1, productPrice1] = map(float, input().rsplit(" "))
[productId2, productQuantity2, productPrice2] = map(float, input().rsplit(" "))
total = (productPrice1 * productQuantity1) + (productPrice2 * productQuantity2)

print(f"VALOR A PAGAR: R$ {total:.2f}")
