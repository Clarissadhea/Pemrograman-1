import math
# test case 1
A, B = map(float, input().split())
C = math.sqrt((B * B) - (A * A))
keliling = A + B + C
luas = 0.5 * C * A

print("Alas = %.0f cm "%(C))
print("Tinggi = %.0f cm "%(A))
print("Keliling = %.0f cm "%(keliling))
print("Luas = %.0f cm^2 "%(luas))
print("")

# test case 2
A2 = float(input())
B2 = float(input())
C2 = math.sqrt((B2 * B2) - (A2 * A2))
keliling2 = A2 + B2 + C2
luas2 = 0.5 * C2 * A2

print("Alas = %.0f cm "%(C2))
print("Tinggi = %.0f cm "%(A2))
print("Keliling = %.0f cm "%(keliling2))
print("Luas = %.0f cm^2 "%(luas2))