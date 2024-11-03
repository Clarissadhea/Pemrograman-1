# test case 1
radius = float(input())
tinggi = float(input())

volume = 22 / 7 * radius * radius * tinggi
luas = 2 * 22 / 7 * radius * (radius + tinggi)
keliling = 2 * 22 / 7 * radius

print(f"Volume = {volume:.2f}")
print(f"Luas = {luas:.2f}")
print(f"Keliling = {keliling:.2f}")
print("")

# test case 2
radius2, tinggi2 = map(float, input().split())

volume2 = 22 / 7 * radius2 * radius2 * tinggi2
luas2 = 2 * 22 / 7 * radius2 * (radius2 + tinggi2)
keliling2 = 2 * 22 / 7 * radius2

print(f"Volume = {volume2:.2f}")
print(f"Luas = {luas2:.2f}")
print(f"Keliling = {keliling2:.2f}")