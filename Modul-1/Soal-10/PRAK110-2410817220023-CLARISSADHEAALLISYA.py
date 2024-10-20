import math

alas = 5
tinggi = 12
miring = math.sqrt((alas * alas) + (tinggi * tinggi))
luas = ((alas * tinggi) / 2)
keliling = alas + tinggi + miring

print("Diketahui :")
print("Alas = %d cm" % alas)
print("Tinggi = %d cm\n" % tinggi)
print("Jawab :")
print("Sisi A = %d cm" % tinggi)
print("Sisi B = %d cm" % miring)
print("Sisi C = %d cm" % alas)
print("Keliling = %d cm" % keliling)
print("Luas = %d cm" % luas)