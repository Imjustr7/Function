function tepokNyamuk(jumlah) {
    for (let i = 1; i <= jumlah; i++) {
        if (i % 3 === 0) {
            console.log("TEPOK");
        } else {
            console.log(i);
        }
    }
}
tepokNyamuk(5);
