def hitungTabungan(jumlah_hari):
    total = 0
    for hari in range(1, jumlah_hari + 1):
        if hari % 2 != 0:      
            total += 2000
        else:                  
            total += 5000
    return total

print(hitungTabungan(3))  
