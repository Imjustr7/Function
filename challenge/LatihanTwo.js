function hitungTabungan(i) {
    let total = 0;
    for (let hari = 1; hari <= i; hari++) {
        if (hari % 2 !== 0) {
            total += 2000;
        } else {
            total += 5000;
        }
    }
    return total;
}

console.log(hitungTabungan(3));
