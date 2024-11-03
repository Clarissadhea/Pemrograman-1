# test case 1
a, b, i, j, x, y = map(float, input().split())
hasil = (a - b) * (i / j) - (x + y)
print(f"{hasil:.3f}")

# test case 2
print("")
a2, b2 = map(float, input().split())
i2, j2 = map(float, input().split())
x2, y2 = map(float, input().split())
hasil1 = (a2 - b2) * (i2 / j2) - (x2 + y2)
print(f"{hasil1:.3f}") 