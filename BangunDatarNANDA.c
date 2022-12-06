#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define phi 3.14

//Prosedur Validasi Input
float validasi_Input(){

    int input;
    char enter;

	scanf("%d%c", &input, &enter);
	if(enter != '\n'){
        getchar();
        printf("|Masukkan angka : ");
        return validasi_Input();

    }else if(input <= 0){
		printf("|Inputan salah, silakan coba lagi : ");
        return validasi_Input();

	}else{
        return input;
    }
}

//Prosedur Header
void header(){
	printf("====================================================================\n");
	printf("=               PRAKTIKUM ALGORITMA DAN PEMROGRAMAN                =\n");
	printf("====================================================================\n");
	printf("=                           KELOMPOK 06                            =\n");
	printf("====================================================================\n");
	printf("=               1. I Gede Sangga Buana Putra                       =\n");
	printf("=                  =>2205551130                                    =\n");
	printf("=               2. I Putu Nanda Febian Danan Jaya                  =\n");
	printf("=                  =>2205551093                                    =\n");
	printf("=               3. I Made Roby Dwimartha                           =\n");
	printf("=                  =>2205551096                                    =\n");
	printf("=               4. Made Angga Danan Jaya                           =\n");
	printf("=                  =>2205551086                                    =\n");
	printf("=               5. I Putu Diva Indrayana Putra                     =\n");
	printf("=                  =>2205551139                                    =\n");
	printf("=               6. Ida Bagus Putu Restu Ardinata                   =\n");
	printf("=                  =>2205551141                                    =\n");
	printf("====================================================================\n");
}
void header1(){
	printf("====================================================================\n");
	printf("=         Program Penghitung Keliling dan Luas Bangun Datar        =\n");
	printf("====================================================================\n");
	}


//Prosedur Keliling Bangun Datar
void segitiga_sembarang(){
	int sisi1, sisi2, sisi3;
	int keliling;

	system("cls");
    printf("Penghitung Keliling Segitiga Sembarang\n");
    printf("Masukkan dalam bentuk Cm!\n\n");
	printf("Masukkan sisi 1 : ");sisi1 = validasi_Input ();//scanf("%d", &sisi1);
	printf("Masukkan sisi 2 : ");sisi2 = validasi_Input ();//scanf("%d", &sisi2);
	printf("Masukkan sisi 3 : ");sisi3 = validasi_Input ();//scanf("%d", &sisi3);

	keliling=sisi1+sisi2+sisi3;
	printf("Keliling Segitiga Sembarang : %d cm", keliling);fflush(stdin);
	printf("\n\n");
}
void belah_ketupat(){
	int sisi;
	int keliling;

	system("cls");
    printf("Penghitung Keliling Belah Ketupat\n\n");
    printf("Masukkan dalam bentuk Cm!\n\n");
	printf("Masukkan sisi : ");sisi = validasi_Input ();//scanf("%d", &sisi);

	keliling=sisi*4;
	printf("Keliling Belah Ketupat : %d cm", keliling);fflush(stdin);
	printf("\n\n");
}
void jajar_genjang(){
	int sisi1, sisi2;
	int keliling;

    printf("Penghitung Keliling Jajar Genjang\n\n");
    printf("Masukkan dalam bentuk Cm!\n\n");
	printf("Masukkan sisi 1 : ");sisi1 = validasi_Input ();//scanf("%d", &sisi1);
	printf("Masukkan sisi 2 : ");sisi2 = validasi_Input ();//scanf("%d", &sisi2);

	keliling=2*(sisi1+sisi2);
	printf("Keliling Jajar Genjang : %d cm", keliling);fflush(stdin);
	printf("\n\n");
}
void trapesium(){
	int sisi1, sisi2, sisi3, sisi4;
	int keliling;

    printf("Penghitung Keliling Trapesium\n\n");
    printf("Masukkan dalam bentuk Cm!\n\n");
	printf("Masukkan sisi 1 : ");sisi1 = validasi_Input ();//scanf("%d", &sisi1);
	printf("Masukkan sisi 2 : ");sisi2 = validasi_Input ();//scanf("%d", &sisi2);
	printf("Masukkan sisi 3 : ");sisi3 = validasi_Input ();//scanf("%d", &sisi3);
	printf("Masukkan sisi 4 : ");sisi4 = validasi_Input ();//scanf("%d", &sisi4);

	keliling=sisi1+sisi2+sisi3+sisi4;
	printf("Keliling Trapesium : %d cm", keliling);fflush(stdin);
	printf("\n\n");
}
void lingkaran(){
	int jari;
	float keliling;

    printf("Penghitung Keliling Lingkaran\n\n");
    printf("Masukkan dalam bentuk Cm!\n\n");
	printf("Masukkan Jari-Jari : ");jari = validasi_Input ();//scanf("%d", &jari);

	keliling=2*phi*jari;
	printf("Keliling Lingkaran : %.2f cm", keliling);fflush(stdin);
	printf("\n\n");
}

//Prosedur Luas Bangun Datar
void segitiga_sembarang1(){

    //input variabel
    float alas, tinggi;
    float luas;

    printf("menghitung luas segitiga_sembarang1\n\n");
    printf("Masukkan dalam bentuk Cm!\n\n");
    printf("input alas : ");alas = validasi_Input ();//scanf("%d", &alas);
    printf("input tinggi: ");tinggi = validasi_Input ();//scanf("%d", &tinggi);

    //menghitung luas segitiga_sembarang1
    luas = alas * tinggi / 2;
    printf("luas segitiga_sembarang1 : %.2f cm^2\n", luas);

}
void belah_ketupat1(){

    //input variabel
    float diagonal1, diagonal2;
    float luas;

    printf("menghitung luas belah_ketupat1\n\n");
    printf("Masukkan dalam bentuk Cm!\n\n");
    printf("input diagonal1 : ");diagonal1 = validasi_Input ();//scanf("%d", &diagonal1);
    printf("input diagonal2 : ");diagonal2 = validasi_Input ();//scanf("%d", &diagonal2);

    //menghitung luas belah_ketupat1
    luas = diagonal1 * diagonal2 /2;
    printf("luas belah_ketupat1 : %.2f cm^2\n", luas);

}
void jajar_genjang1(){

    //input variabel
    float alas, tinggi;
    float luas;

    printf("menghitung luas jajar_genjang1\n\n");
    printf("Masukkan dalam bentuk Cm!\n\n");
    printf("input alas :   ");alas = validasi_Input ();//scanf("%d", &alas);
    printf("input tinggi : ");tinggi = validasi_Input ();//scanf("%d", &tinggi);

    //menghitung luas jajar_genjang
    luas = alas * tinggi;
    printf("luas jajar_genjang1 : %.2f cm^2\n", luas);

}
void trapesium1(){

    //input variabel
    float sisi1, sisi2, tinggi;
    float luas;

    printf("menghitung luas trapesium1\n\n");
    printf("input sisi1 : ");sisi1 = validasi_Input ();//scanf("%d", &sisi1);
    printf("input sisi2 : ");sisi2 = validasi_Input ();//scanf("%d", &sisi2);
    printf("input tinggi: ");tinggi = validasi_Input ();//scanf("%d", &tinggi);

    //menghitung luas trapesium
    luas = (sisi1 + sisi2) * tinggi / 2;
    printf("luas trapesium1 : %.2f cm^2\n", luas);
}
void lingkaran1(){

    //input variabel
    float jari;
    float luas;

    printf("menghitung luas linkaran1\n\n");
    printf("input jari : ");jari = validasi_Input ();//scanf("%d", &jari);

    //menghitung luas lingkaran
    luas = phi * jari * jari;
    printf("luas lingkaran1 : %.2f cm^2\n", luas);

}

void keliling(){

	int pilih2;
	int input;

	do {
        system("cls");
        printf("====================================================================\n");
        printf("=            Program Penghitung Keliling Bangun Datar              =\n");
        printf("====================================================================\n\n");
		printf("Pilih salah satu!\n");
		printf("1. Segitiga Sembarang\n");
		printf("2. Belah Ketupat\n");
		printf("3. Jajar Genjang\n");
		printf("4. Trapesium\n");
		printf("5. Lingkaran\n\n");

			printf("Pilih : ");pilih2 = validasi_Input ();//scanf("%d", &pilih2);

            system("cls");
			switch(pilih2)
				{
				case 1 :
				  		segitiga_sembarang();
				  		break;
				case 2 :
						belah_ketupat();
						break;
				case 3 :
						jajar_genjang();
						break;
				case 4 :
						trapesium();
						break;
				case 5 :
						lingkaran();
						break;

				//Validasi
				default:
						printf("Pilihan tidak ada, masukkan input yang benar!\n\n");fflush(stdin);
						break;
				}
		do{
			printf("\nApakah Anda ingin mengulang program? (1 = Ya, 2 = Tidak) : ");
			input= validasi_Input();

			if(input!= 1 && input!= 2){
				printf("|Pilihan tidak tersedia, coba lagi.\n\n");
			}
		}while(input!=1 && input!=2);
}while (input==1);

printf ("Terimakasih\n\n");
}


void luas(){

	int pilih2;
	int input;

	do{
        system("cls");
        printf("====================================================================\n");
        printf("=               Program Penghitung Luas Bangun Datar               =\n");
        printf("====================================================================\n\n");
		printf("Pilih salah satu!\n");
		printf("1. Segitiga Sembarang\n");
		printf("2. Belah Ketupat\n");
		printf("3. Jajar Genjang\n");
		printf("4. Trapesium\n");
		printf("5. Lingkaran\n\n");

			printf("Pilih : ");pilih2 = validasi_Input ();//scanf("%d", &pilih2);

            system("cls");
			switch(pilih2)
				{
				case 1 :
				  		segitiga_sembarang1();
				  		break;
				case 2 :
						belah_ketupat1();
						break;
				case 3 :
						jajar_genjang1();
						break;
				case 4 :
						trapesium1();
						break;
				case 5 :
						lingkaran1();
						break;

				//Validasi
				default:
						printf("Pilihan tidak ada, masukkan input yang benar!\n\n");fflush(stdin);
						break;
				}
		do{
			printf("\nApakah Anda ingin mengulang program? (1 = Ya, 2 = Tidak) : ");
			input= validasi_Input();

			if(input!= 1 && input!= 2){
				printf("|Pilihan tidak tersedia, coba lagi.\n\n");
			}
		}while(input!=1 && input!=2);
}while (input==1);

printf ("Terimakasih\n\n");

}

int main(){

	//Header Kelompok
	header();
	system("pause");
	system("cls");
	//Header Nama
	header1();
	system("pause");
	system("cls");

	//Deklarasi Variabel Char
	int input;
	//Deklarasi Variabel Integer`
	int pilih;

	//Perulangan
    do
	{
    //Tampilan Awal Program di Jalankan
    system("cls");
    printf("============================================\n");
	printf("=               MENU PILIHAN               =\n");
	printf("============================================\n\n");
	printf("Ingin menghitung apa?\n");
	printf("1. Keliling\n");
	printf("2. Luas\n\n");
	printf("Pilih : ");pilih = validasi_Input ();//scanf("%d", &pilih);
		switch (pilih){
			case 1 :
				system("cls");
				keliling();
				break;

			case 2 :
				system("cls");
				luas();
				break;

			default :
				printf("Pilihan tidak ada, masukkan lagi!\n\n");
		}

		do{
		//system("cls");
		system("cls");
		printf("Ingin kembali ke menu sebelumnya?\n1. Ya\n2. Tidak\n=> ");
		input = validasi_Input ();//scanf("%d", &input);

		if(input!= 1 && input!=2){
		fflush (stdin);
			printf ("salah pilih\n\n");
		}
	}while(input!= 1 && input!= 2);



	}while(input==1);

	fflush (stdin);
	system("cls");
	printf("============================================\n");
	printf("=                TERIMAKASIH               =\n");
	printf("============================================\n\n");

return 0;
}
