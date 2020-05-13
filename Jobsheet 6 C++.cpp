#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main(){
	int a[10][10],b,c,baris,kolom;
	char pil;
	
	cout << "Nama     : LALU MOH. ADAM KURNIAWAN" << endl;
	cout << "NIM      : F1B019078" << endl;
	cout << "Kelompok : 16" << endl << endl;
	
		cout<<">>PROGRAM TRANSPOSE MATRIKS<<"<<endl;
		cout<<"Jumlah Baris: ";
		cin>>baris;
		cout<<"Jumlah Kolom: ";
		cin>>kolom;
		cout<<endl;
		
		for(b=0; b<baris; b++){
			for(c=0; c<kolom; c++){
				cout<<"Matriks ["<<b+1<<","<<c+1<<"] = ";
				cin>>a[b][c];
			}
		}
		cout<<endl<<endl;
		cout<<"Matriks Pertama : "<<endl<<endl;
		for(b=0; b<baris; b++){
			for(c=0; c<kolom; c++){
				cout<<" "<<a[b][c]<<" ";
			}
			cout<<endl<<endl;
		}
		cout<<"Matriks Transpose : "<<endl<<endl;
		for(b=0; b<kolom; b++){
			for(c=0; c<baris; c++){
				cout<<" "<<a[c][b]<<" ";
			}
			cout<<endl<<endl;
		}
		getch();
		
}
