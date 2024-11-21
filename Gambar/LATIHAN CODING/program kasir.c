#include <stdio.h> //untuk input-output

int main() //untuk menjalankan program
{ //untuk memulai program
    char nama; //menyimpan nilai dalam bentuk huruf
    int hrg_pensil, hrg_pulpen, hrg_penghapus, hrg_bukuTulis, hrg_tipeX, hrg_spidol, hrg_penggerot, hrg_penggaris, hrg_bukuGambar, hrg_stabilo; //menyimpan nilai dalam bentuk bilangan bulat
    int ttl_pensil, ttl_pulpen, ttl_penghapus, ttl_bukuTulis, ttl_tipeX, ttl_spidol, ttl_penggerot, ttl_penggaris, ttl_bukuGambar, ttl_stabilo; //menyimpan nilai dalam bentuk bilangan bulat
    int total_semua; //menyimpan nilai dalam bentuk bilangan bulat
    int uang_bayar; //menyimpan nilai dalam bentuk bilangan bulat
    int kembalian; //menyimpan nilai dalam bentuk bilangan bulat

    printf("\t--------------------------------------------------- \n");
    printf("\t||| SELAMAT DATANG DI TOKO PERALATAN ALAT TULIS ||| \n");//menampilkan teks ke layar
    printf("\t||| PROGRAM KASIR YANG SEDERHANA BUATAN SATHYA  ||| \n");
    printf("\t---------------------------------------------------\n");
    
    printf("\tMasukkan nama anda :");//menampilkan teks ke layar
    scanf("%s",&nama); //memasukkan inputan dari pengguna 
    printf("\tHALO %s selamat berbelanja ya...",&nama);//menampilkan teks ke layar
    
    printf("\n\n");
    printf("\t-----------Daftar Barang yang kami jual---------- \n");//menampilkan teks ke layar

    printf("\tPENSIL            RP.2.000        :     "); //menampilkan teks ke layar
    scanf("%d",&hrg_pensil); //memasukkan inputan dari pengguna

    printf("\tPULPEN            RP.3.000        :     "); //menampilkan teks ke layar
    scanf("%d",&hrg_pulpen); //memasukkan inputan dari pengguna

    printf("\tPENGHAPUS         RP.2.000        :     "); //menampilkan teks ke layar
    scanf("%d",&hrg_penghapus);//meminta inputan dari pengguna

    printf("\tBUKU TULIS        RP.3.000        :     "); //menampilkan teks ke layar
    scanf("%d",&hrg_bukuTulis); //memasukkan inputan dari pengguna

    printf("\tTIPE X            RP.8.000        :     "); //menampilkan teks ke layar
    scanf("%d",&hrg_tipeX); //memasukkan inputan dari pengguna

    printf("\tSPIDOL            RP.3.000        :     "); //menampilkan teks ke layar
    scanf("%d",&hrg_spidol); //memasukkan inputan dari pengguna

    printf("\tPENGGEROT         RP.2.500        :     "); //menampilkan teks ke layar
    scanf("%d",&hrg_penggerot); //memasukkan inputan dari pengguna

    printf("\tPENGGARIS         RP.2.000        :     "); //menampilkan teks ke layar
    scanf("%d",&hrg_penggaris); //memasukkan inputan dari pengguna

    printf("\tBUKU GAMBAR       RP.4.000        :     "); //menampilkan teks ke layar
    scanf("%d",&hrg_bukuGambar); //memasukkan inputan dari pengguna

    printf("\tSTABILO           RP.7.000        :     "); //menampilkan teks ke layar
    scanf("%d",&hrg_stabilo); //memasukkan inputan dari pengguna

    printf("\n\n");
    printf("\t--------------RINCIAN PEMBELIAN------------------\n"); //menampilkan teks ke layar

    ttl_pensil = 2000 * hrg_pensil; //memasukkan rumus harga kulkas
    ttl_pulpen = 3000 * hrg_pulpen;//memasukkan rumus harga tv
    ttl_penghapus = 2000 * hrg_penghapus;//memasukkan rumus harga blender
    ttl_bukuTulis = 3000 * hrg_bukuTulis;//memasukkan rumus harga ac
    ttl_tipeX = 8000 * hrg_tipeX;// rumus harga ac
    ttl_spidol = 3000 * hrg_spidol;//memasukkan rumus harga ac
    ttl_penggerot = 2500 * hrg_penggerot;//memasukkan rumus harga ac
    ttl_penggaris = 2000 * hrg_penggaris;//memasukkan rumus harga ac
    ttl_bukuGambar = 4000 * hrg_bukuGambar;//memasukkan rumus harga ac
    ttl_stabilo = 7000 * hrg_stabilo;//memasukkan rumus harga ac

    total_semua =  ttl_pensil + ttl_pulpen + ttl_penghapus + ttl_bukuTulis + ttl_tipeX + ttl_spidol + ttl_penggerot + ttl_penggaris + ttl_bukuGambar + ttl_stabilo;//menghitung total semua harga barang
    
    printf("[PENSIL] -----      jumlah yang dibeli       :       %d      = RP. %d \n",hrg_pensil,ttl_pensil); //menghitung jumlah inputan angka yang kita tulis dan akan dikali dengan harga barang
    printf("[PULPEN] -----      jumlah yang dibeli       :       %d      = RP. %d \n",hrg_pulpen,ttl_pulpen);//menghitung jumlah inputan yang kita tulis dan akan dikali dengan harga barang 
    printf("[PENGHAPUS] -----   jumlah yang dibeli       :       %d      = RP. %d \n",hrg_penghapus,ttl_penghapus);//menghitung jumlah inputan yang kita tulis dan akan dikali dengan harga barang
    printf("[BUKU TULIS] -----  jumlah yang dibeli       :       %d      = RP. %d \n",hrg_bukuTulis,ttl_bukuTulis);//menghitung jumlah inputan yang kita tulis dan akan dikali dengan harga barang 
    printf("[TIPE X] -----      jumlah yang dibeli       :       %d      = RP. %d \n",hrg_tipeX,ttl_tipeX);//menghitung jumlah inputan yang kita tulis dan akan dikali dengan harga barang
    printf("[SPIDOL] -----      jumlah yang dibeli       :       %d      = RP. %d \n",hrg_spidol,ttl_spidol);//menghitung jumlah inputan yang kita tulis dan akan dikali dengan harga barang
    printf("[PENGGEROT] -----   jumlah yang dibeli       :       %d      = RP. %d \n",hrg_penggerot,ttl_penggerot);//menghitung jumlah inputan yang kita tulis dan akan dikali dengan harga barang   
    printf("[PENGGARIS] -----   jumlah yang dibeli       :       %d      = RP. %d \n",hrg_penggaris,ttl_penggaris);//menghitung jumlah inputan yang kita tulis dan akan dikali dengan harga barang
    printf("[BUKU GAMBAR] ----- jumlah yang dibeli       :       %d      = RP. %d \n",hrg_bukuGambar,ttl_bukuGambar);//menghitung jumlah inputan yang kita tulis dan akan dikali dengan harga barang  
    printf("[STABILO] -----     jumlah yang dibeli       :       %d      = RP. %d \n",hrg_stabilo,ttl_stabilo);//menghitung jumlah inputan yang kita tulis dan akan dikali dengan harga barang 

    printf("\n\n");
    printf("\t TOTAL BELANJAAN MU = RP. %d \n",total_semua);//menghitung semua total barang yang telah kita beli
    printf("\t UANG YANG KAMU BAYAR    :   ");
    scanf("%d",&uang_bayar);
    
    kembalian = uang_bayar - total_semua;
    printf("\t KEMBALIAN = RP. %d \n",kembalian);
    
    printf("\n");
    printf("TERIMA KASIH TELAH BERBELANJA DI TEMPAT KAMI"); //menampilkan teks ke layar
    printf("SEMOGA HARIMU MENYENANGKAN..."); //menampilkan teks ke layar

return 0; //mengembalikan nilai 0
} //menutup program