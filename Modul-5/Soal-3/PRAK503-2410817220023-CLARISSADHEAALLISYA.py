def maksimal(a, b) :
    if a > b :
        return a
    return b

def minimal(a, b) :
    if a < b :
        return a
    return b

batas = int(input())
bilangan = list(map(int, input().split()))
maks = -100000
minim = 100000

for nilai in bilangan :
    maks = maksimal(maks, nilai)
    minim = minimal(minim, nilai)
    
print(maks, minim)