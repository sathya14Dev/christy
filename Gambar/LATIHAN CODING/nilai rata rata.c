#include <stdio.h>

int main() {
    int jumlah;
    float nilai, total, rata2;

    // memasukkan data
    printf("Masukkan jumlah data: ");
    scanf("%d", &jumlah);

    // memasukkan data data
    for (int i = 1; i <= jumlah; i++) {
        printf("Masukkan data ke-%d: ", i);
        scanf("%f", &nilai);
        total = total + nilai;
    }

   // Menghitung rata-rata
    rata2= total / jumlah;

    // Menampilkan nilai rata-rata
    printf("Jumlah total %d dan rata rata adalah: %.2f\n", jumlah, rata2);

    return 0;
}
