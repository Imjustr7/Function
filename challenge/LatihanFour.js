function hitungKopi(jumlahGelas) {
    let total = jumlahGelas * 5000;
    if (jumlahGelas > 3) {
        total -= 2000;
    }
    console.log(total);
}
hitungKopi(2); 
hitungKopi(4); 
