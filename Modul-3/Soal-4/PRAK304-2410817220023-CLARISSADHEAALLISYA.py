nilai = int(input())
if nilai == 0 :
    print("Nol")
elif nilai >= 1 and nilai < 10 :
    print("Satuan")
elif nilai > 10 and nilai < 20 :
    print("Belasan")
elif nilai == 10 or nilai >= 20 and nilai < 100 :
    print("Puluhan")
else :
    print("Anda Mengiput Melebihi Limit Bilangan")