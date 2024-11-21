#include <stdio.h> //library input output
 
int main(){ //fungsi utama program
    float  tinggi,tb,BMI,berat; //variabel dalam bentuk float untuk menampung data

    printf("Program hitung Berat Badan dengan BMI (Body Mass Index) \n"); //menampilkan judul program
    printf("Masukkan Tinggi Badan Anda: "); //menampilkan opsi memasukkan tinggi badan
    scanf("%f",&tinggi); //meminta pengguna memasukkan tinggi badan
    printf("Masukkan Berat Badan Anda: "); //menampilkan opsi berat badan
    scanf("%f",&berat); //meminta pengguna memasukkan berat badan
    
    tb=(tinggi/100); //memasukkan rumus tinggi badan
    BMI = berat/(tb * tb); //memasukkan rumus BMI
    
    printf("Berat Badan Anda adalah %.2f \n",BMI); //menampilkan hasil berat badan dalam bentuk float
    if(BMI<18.5){ //jika nilai BMI tidak ideal
    printf("Berat badan kurang \n\n"); //menampilkan pesan berat badan anda kurang
    }
    else if(BMI==18.5||BMI<=24.9){ //jika nilai BMI ideal
    printf("Berat badan Normal \n\n"); //menampilkan pesan berat badan anda normal
    }
    else if(BMI==25||BMI<=29.9){ //jika ada kelebihan berat badan
    printf("Kelebihan berat Badan \n\n"); //menampilkan pesan berat badan anda kelebihan
    }
    else if(BMI>30){ //jika anda termasuk obesitas
    printf("Obesitas \n"); //menampilkan pesan bahwa anda obesitas
    }
   
  return(0); //mengembalikan nilai 0, menandakan bahwa program anda berakhir
 
}