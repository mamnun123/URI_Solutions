values = input().split(" ")

A,B,C = values
A = int(A)
B = int(B)
C = int(C)

MAIOR = (A + B + abs(A-B))/2
MAIOR = (MAIOR + C + abs(MAIOR-C))/2

print('%d eh o maior' %MAIOR)