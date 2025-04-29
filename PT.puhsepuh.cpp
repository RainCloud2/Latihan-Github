#include <stdio.h>

int main(){
    char nama[101][101];
    int usia[101];
    char jabatan[101][101];
    float gaji[101];
    
    char lagi;
    int totsia = 0;
    int i = 1, x = 0;
    int pegawaigajit = -1;
    float gajit = 0;

    do{
        printf("Masukkan data pegawai ke-%d\n", i);
        printf("Nama: ");
        scanf("%[^\n]", nama[i]);
        getchar();
        printf("Usia: ");
        scanf("%d", &usia[i]);
        getchar();
        printf("Jabatan: ");
        scanf("%[^\n]", jabatan[i]);
        getchar();
        printf("Gaji: ");
        scanf("%f", &gaji[i]);
        getchar();

        if(gaji[i]>gajit){
            gajit=gaji[i];
            pegawaigajit=i;
        }

        printf("Tambahkan data pegawai lagi? (y/n): ");
        scanf(" %c", &lagi);
        getchar();

        i++;
        x++;
        totsia += usia[i - 1];

    }while(lagi == 'y');

    printf("Data Pegawai\n");
    printf("Nama                  Usia    Jabatan               Gaji\n");
    for(int j = 1; j <= x; j++){
        printf("%-14s        %-4d    %-14s        %-14.2f\n", nama[j], usia[j], jabatan[j], gaji[j]);
    }
    puts("");
    
    float rata = (float)totsia/x;
    
    printf("Rata-rata usia pegawai: %.2f\n", rata);
    printf("Pegawai dengan gaji tertinggi:\n");
    
    if(pegawaigajit != -1){
        printf("Nama: %s\n", nama[pegawaigajit]);
        printf("Usia: %d\n", usia[pegawaigajit]);
        printf("Jabatan: %s\n", jabatan[pegawaigajit]);
        printf("Gaji: %.2f\n", gaji[pegawaigajit]);
    }
    
    return 0;
}

