total = int(input())

hari = total // 86400
total %= 86400
jam = total // 3600
total %= 3600
menit = total // 60
detik = total % 60

if hari > 0:
    print(f"{hari} hari {jam:02d}:{menit:02d}:{detik:02d}")
else:
    print(f"{jam:02d}:{menit:02d}:{detik:02d}")