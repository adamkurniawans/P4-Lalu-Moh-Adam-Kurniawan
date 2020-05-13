#include <stdio.h>
#include <conio.h>

main(){
	printf("Nama     : LALU MOH. ADAM KURNIAWAN\n");
	printf("NIM      : F1B019078\n");
	printf("Kelompok : 16\n\n");
	
	int a[10][10];
	int i,j,x,y;
	
	printf(">>PROGRAM MATRIKS TRANSPOSE<<\n");
	printf("Masukkan jumlah baris: ");
	scanf("%d",&x);
	printf("Masukkan jumlah kolom: ");
	scanf("%d",&y);
	
	printf("\nMATRIKS\n\n");
	for(i=0; i<x; i++){
		for(j=0; j<y; j++){
			printf("Masukkan Nilai Elemen %d %d = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(i=0; i<x; i++){
		for(j=0; j<y; j++){
			printf(" ");
			printf("%d",a[i][j]);
			printf(" ");
		}
		printf("\n");
	}
	printf("\n");
	printf("TRANSPOSE MATRIKS\n");
	for(i=0; i<y; i++){
		for(j=0; j<x; j++){
			printf(" ");
			printf("%d",a[j][i]);
			printf(" ");
		}printf("\n");
	}
	getch();
}
