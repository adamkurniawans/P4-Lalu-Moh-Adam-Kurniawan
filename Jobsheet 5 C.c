#include <stdio.h>

main(){
	printf("Nama     : LALU MOH. ADAM KURNIAWAN\n");
	printf("NIM      : F1B019078\n");
	printf("Kelompok : 16\n\n");
	int x,y;
	int a[2][2], b[2][2], c[2][2];
	printf("PROGRAM PERKALIAN MATRIKS 2x2\n");
	printf("\nInput Elemen Matriks NIM1 : \n");
	for(x=0; x<2; x++){
		for(y=0; y<2; y++){
			printf("NIM1 [%d][%d] = ",x,y);
			scanf("%d",&a[x][y]);
		}
	}
	printf("\nInput Elemen Matriks NIM2 : \n");
	for(x=0; x<2; x++){
		for(y=0; y<2; y++){
			printf("NIM2 [%d][%d] = ",x,y);
			scanf("%d",&b[x][y]);
		}
	}
	printf("\n");
	for(x=0; x<2; x++){
		for(y=0; y<2; y++){
			c[0][0]= (a[0][0]*b[0][0])+(a[0][1]*b[1][0]);
			c[0][1]= (a[0][0]*b[0][1])+(a[0][1]*b[1][1]);
			c[1][0]= (a[1][0]*b[0][0])+(a[1][1]*b[1][0]);
			c[1][1]= (a[1][0]*b[0][1])+(a[1][1]*b[1][1]);
		}
	}
	printf("\n NIM1 x NIM2 =\n");
	for(x=0; x<2; x++){
		for(y=0; y<2; y++){
			printf("\n |%d %d| x |%d %d| = |%d %d|\n",a[0][0],a[0][1],b[0][0],b[0][1], c[0][0], c[0][1]);
			printf(" |%d %d| x |%d %d| = |%d %d|\n",a[1][0],a[1][1],b[1][0],b[1][1], c[1][0], c[1][1]);
		}
	}printf("\n");
}
