#include <stdio.h>
#include <conio.h>

main(){
	printf("Nama     : LALU MOH. ADAM KURNIAWAN\n");
	printf("NIM      : F1B019078\n");
	printf("Kelompok : 16\n\n");
	
	int matrix1[2][2], matrix2[2][2] ,i,j;
	printf("MATRIKS 1 \n");
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("Elemen [%d][%d] : ",i,j);
			scanf("%d",&matrix1[i][j]);
		}
	}
	printf("\nMATRIKS 2 \n");
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("Elemen [%d][%d] : ",i,j);
			scanf("%d",&matrix2[i][j]);
		}
	}
	printf("\nHASIL PENGURANGAN MATRIKS\n\n");
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("%d\t",matrix1[i][j] - matrix2[i][j]);
			printf(" ");
		}printf("\n");
	}
}

