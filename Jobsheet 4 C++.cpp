#include<iostream>
#include<conio.h>
using namespace std;
	
int i,x;
int matriks_A[2][2], matriks_B[2][2], matriks_C[2][2];
char ulang;
	
int main(){
	cout << "Nama     : LALU MOH. ADAM KURNIAWAN" << endl;
	cout << "NIM      : F1B019078" << endl;
	cout << "Kelompok : 16" << endl << endl;
	
	cout<< "\nPengurangan 2 matriks ordo 2x2 \n\n";
	
		cout<<"\nData matriks A \n";
		for(i=0; i<2; i++){
			for(x=0; x<2; x++){
				cout<<"[" << i << "]" << "[" <<x<<"]" " : ";
				cin>>matriks_A[i][x];
			}
		} cout<<endl;
		
		cout<<"\nData matriks B \n";
		for(i=0; i<2; i++){
			for(x=0; x<2; x++){
				cout<<"[" << i << "]" << "[" <<x<<"]" " : " ;
				cin>>matriks_B[i][x];
			}
		} cout<<endl;
		
		//
		cout<<"\nMatriks A - Matriks B : "<<endl;
		for(i=0; i<2; i++){
			for(x=0; x<2; x++){
				matriks_C[i][x] = matriks_A[i][x] - matriks_B[i][x];
				cout<<"\t"<<matriks_C[i][x];
			} cout<<endl;
		} 
	
}
