#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <string.h>
#include <math.h>


int submenu();
void sorting (int n);
void searching (int n);
int insertion_sort(long data[],long n);
int bubble_sort(long data[],long n);
int partition( long data[], long l, long r);
void quickSort( long data[], long l, long r);
int sequential_search(long data[],int n,int cariData);
int binary_search(long data[],int n,int cariData);
void exit1();
char term;

int main() {

	int t1,t2,pilihan;
	long n,i;
	char pili[100];

	//reset rand
	srand(time(NULL));
    system("cls");
    printf ("------------------------------------------------------\n");
    printf ("|============|           PROGRAM         |===========|\n");
    printf ("|============|     SORTING DAN SEARCH    |===========|\n");
	printf ("------------------------------------------------------\n");
    printf ("|    |         [1] Sorting                      |    |\n");
	printf ("|    |         [2] Searching                    |    |\n");
	printf ("|    |         [3] Keluar                       |    |\n");
	printf ("------------------------------------------------------\n");
	printf ("Pilih Menu yang Diinginkan [1-3] : ");
	fflush(stdin);
	if(scanf("%d%c", &pilihan, &term) != 2 || term != '\n' || pilihan <= 0){
		system("cls");
		printf ("Masukkan Pilihan yang Benar!");
		getch();
		main();
	}

	switch(pilihan){
		case 1: {
			n=submenu();
			sorting(n);

			int keluar5 = 0;
			while (keluar5 != 1){
                fflush(stdin);
                printf ("\n\nIngin Hitung Ulang? (Y/N)");
                scanf("%s",&pili);
                if (strcmpi(pili,"y")==0){
                    keluar5 = 1;
                    system("cls");
                    main();
                }
                else if (strcmpi(pili,"n")==0){
                    keluar5 = 1;
                    exit1();
                }
                else
                    keluar5 = 0;

			}

		}

		case 2: {
			n=submenu();
			searching(n);

			int keluar4 = 0;

            while (keluar4 != 1){
                fflush(stdin);
                printf ("\n\nIngin Hitung Ulang? (Y/N)");
                scanf("%s",&pili);
                if (strcmpi(pili,"y")==0){
                    keluar4 = 1;
                    system("cls");
                    main();
                }
                else if (strcmpi(pili,"n")==0){
                    keluar4 = 1;
                    exit1();
                }
                else
                    keluar4 = 0;
                }

		}
		case 3: keluar: {
			system("cls");
			printf ("Semoga Hari anda menyenangkan!");
			getch();
			return 0;
			break;
		}

		default: {
			system("cls");
			printf ("Masukkan Pilihan yang Benar!");
			getch();
			main();
			break;
		}
	}
	return 0;
}


void sorting (int n){
	long i,j;
	int temp,t1,t2,w1,w2;
	long data[64000];

	input:
	system("cls");
	printf("-- SORTING --\n\n");
	printf("\nBanyak Data yang Diurut : %li\n",n);

	for(i=1; i<=n; i++) {
		data[i]=rand()%n+1;
	}

	printf("\nData yang Belum Terurut : \n\n");
	for(i=1; i<=n; i++){
		printf("%li\t",data[i]);
	}

	w1=insertion_sort(data,n); fflush(stdin);
	w2=bubble_sort(data,n); fflush(stdin);

	t1=GetTickCount();

	quickSort(data,1,n);

	t2=GetTickCount();

	printf("\n\nQUICK SORT : \n\n");
	for(i=2; i<=n+1; i++){
		printf("%li\t",data[i]);
	}

	printf("\n\nWaktu Pengurutan (detik)");
	printf("\nInsertion Sort : %f detik",(float)w1/1000);
	printf("\nBubble Sort    : %f detik",(float)w2/1000);
	printf("\nQuick Sort     : %f detik",(float)(t2-t1)/1000);
//	exit1(sorting (n),n);
}

void searching (int n){
	long data[70000];
	int ketemu,cariData,i,t1,t2,t3,t4,h1,h2, input3 = 0;


	system("cls");
	printf("-- SEARCHING --\n\n");

	for(i=1; i<=n; i++) {
		data[i]=rand()%n+1;
	}

	printf("\nData yang Belum Terurut : \n\n");

	for(i=1; i<=n; i++){
		printf("%d\t",data[i]);
	}

	while (input3 != 1){
        printf ("\n\nMasukkan Bilangan Yang ingin Dicari : ");
        fflush(stdin);
        if(scanf("%d%c", &cariData, &term) != 2 || term != '\n' || cariData <= 0){
            printf("Masukan Bilangan Bulat Positif!\n");
            getch();
            input3 = 0;
        }else{
            input3 = 1;
        }

	}


	t1=GetTickCount();
	h1=sequential_search(data,n,cariData);
	t2=GetTickCount();

	quickSort(data,1,n);
	printf("\n\nData yang Sudah Terurut : \n\n");
	for(i=1; i<=n; i++){
		printf("%li\t",data[i]);
	}

	t3=GetTickCount();
	h2=sequential_search(data,n,cariData);
	t4=GetTickCount();

	printf ("\n\nBilangan Yang Dicari : %d",cariData);
	printf ("\n\nSequential Search   ");
	if (h1==0){
		printf ("\n\nData Tidak Ditemukan");
	}else {
		printf ("\n\nData Ditemukan pada index ke-%d",h1);
	}
	printf ("\nWaktu Pencarian     : %f detik",(float)(t2-t1)/1000);

	printf ("\n\nBinary Search   ");
	if (h2==0){
		printf ("\n\nData Tidak Ditemukan");
	}else {
		printf ("\n\nData Ditemukan pada index ke-%d",h2);
	}
	printf ("\nWaktu Pencarian     : %f detik",(float)(t4-t3)/1000);
//	exit1(searching (n),n);
}


int insertion_sort(long data[],long n){
	long i,j,temp;
	int t1,t2,waktu;

	t1=GetTickCount();
	for(i=1; i<=n; i++){
		//looping selama angka ke-j (j sudah di set sebagai i di awal)
		//lebih kecil dari j-1
		for(j=i; j>1 && data[j]<data[j-1]; j--){
			//lakukan swap value
			int temp=data[j-1];
			data[j-1]=data[j];
			data[j]=temp;
		}
	}
	t2=GetTickCount();

//	printf("\n\nINSERTION SORT : \n\n");
//	for(i=1; i<=n; i++){
//		printf("%li\t",data[i]);
//	}

	waktu=(int)(t2-t1);
	return waktu;
}


int bubble_sort(long data[],long n){
	long i,j,temp;
	int t1,t2,waktu;

	t1=GetTickCount();
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			//jika angka index x+1 lebih kecil dari angka index x
			if(data[j+1]<data[j]){
				//tampung angka index x ke temp
				temp=data[j];
				//ubah angka index x menjadi angka index x+1
				data[j]=data[j+1];
				//ubah angka index x+1 menjadi angka temp
				data[j+1]=temp;
			}
		}
	}
	t2=GetTickCount();

//	printf("\n\nBUBBLE SORT : \n\n");
//	for(i=2; i<=n+1; i++){
//		printf("%li\t",data[i]);
//	}
	waktu=(int)(t2-t1);
	return waktu;
}

void quickSort(long data[], long l, long r){
    long j;
    if( l < r ){
       // divide and conquer
       j = partition(data, l, r);
       quickSort( data, l, j-1);
       quickSort( data, j+1, r);
    }

}

int partition( long data[], long l, long r) {
     long pivot, i, j, t;
     pivot = data[l];
     i = l; j = r+1;

     while( 1){
        do ++i; while( data[i] <= pivot && i <= r );
        do --j; while( data[j] > pivot );
        if( i >= j ) break;
        t = data[i]; data[i] = data[j]; data[j] = t;
     }
     t = data[l]; data[l] = data[j]; data[j] = t;
     return j;
}

int sequential_search(long data[],int n,int cariData){
	int ketemu,i,t1;

    i=0;
    ketemu=0;
    while (i<=n && ketemu!=1){
        if (data[i]==cariData){
        	ketemu=1;
        }else{
            i++;
        }
    }
    if(ketemu==1){
        t1=i;
    }else{
        t1=0;
    }
	return t1;
}

int binary_search(long data[],int n,int cariData){
	int ketemu,i,j,k,t1,t2;

	i = 0; j=n-1; ketemu=0; k = (int)(i + j) / 2;
        while((ketemu == 0) && (i<=j) && (k<=n)){
            k = (int)(i + j) / 2;
            if(data[k] == cariData){
            	ketemu = 1;
        	}
	        else{
	            if(data[k] > cariData){
	                j = k - 1;
	            }
	            else{
	                i = k + 1;
	            }
	        }
    	}

        if(ketemu==1){
        	t1=i;
    	}else{
      	  	t1=0;
   		}
		return t1;
}


int submenu(){
	int jawab;
	int n;
    system("cls");
    printf ("------------------------------------------------------\n");
    printf ("|============|    PILIH BANYAK DATA      |===========|\n");
	printf ("------------------------------------------------------\n");
    printf ("|    |         [1] 1000 Data                    |    |\n");
	printf ("|    |         [2] 16000 Data                   |    |\n");
	printf ("|    |         [3] 64000 Data                   |    |\n");
	printf ("|    |         [4] Keluar                       |    |\n");
	printf ("------------------------------------------------------\n");
	printf ("Pilih Menu yang Diinginkan [1-4] : ");
	fflush(stdin);
	if(scanf("%d%c", &jawab, &term) != 2 || term != '\n' || jawab <= 0){
		system("cls");
		printf ("Masukkan Pilihan yang Benar!");
		getch();
		submenu();
	}

	if (jawab==1) {
		n=1000;
		return n;
	}
	else if (jawab==2) {
		n=16000;
		return n;
	}
	else if (jawab==3) {
		n=64000;
		return n;
	}
	else if (jawab==4) {
		system("cls");
		printf("semoga hari anda menyenangkan!");
		getch();
		exit(0);
	}
	else {
		system("cls");
		printf ("Masukkan Pilihan yang Benar!");
		getch();
		submenu();
	}
}


void exit1(){
	char pili[100];
	fflush(stdin);
	printf ("\n\nIngin Keluar Program? (Y/N)");
	scanf("%s",&pili);
	if (strcmpi(pili,"y")==0){
		system("cls");
		printf("semoga hari anda menyenangkan!");
		getch();
	}
	else if (strcmpi(pili,"n")==0){
		system("cls");
		main();
	}
	else
		exit1();
}

