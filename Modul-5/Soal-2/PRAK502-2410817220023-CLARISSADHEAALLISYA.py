def hitung(nilai1, nilai2) :
    if nilai1 > nilai2 :
        return nilai1 - nilai2
    return nilai2 - nilai1

def mutlak(angka) :
    if angka < 0 :
        return -angka
    return angka

a, c, b, d = map(int, input().split())
Hasil = hitung(a,b) + hitung(c,d)
print(mutlak(Hasil))