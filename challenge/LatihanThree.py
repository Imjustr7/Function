def cekTilang(plat, tanggal):
    if plat % 2 == tanggal % 2:
        print("AMAN")
    else:
        print("TILANG")

cekTilang(24, 12)
cekTilang(13, 20)
