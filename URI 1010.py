product1 = input().split(" ")
product2 = input().split(" ")

code1,qty1,price1 = product1
code2,qty2,price2 = product2

code1 = int(code1)
qty1 = int(qty1)
price1 = float(price1)
code2 = int(code2)
qty2 = int(qty2)
price2 = float(price2)

total = (qty1*price1) + (qty2*price2)

print("VALOR A PAGAR: R$ %.2f" %total)