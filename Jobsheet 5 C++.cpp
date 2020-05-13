#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main(){
	cout << "Nama     : LALU MOH. ADAM KURNIAWAN" << endl;
	cout << "NIM      : F1B019078" << endl;
	cout << "Kelompok : 16" << endl << endl;
	int a[2][2], b[2][2], m,n;
	for(m=0; m<2; m++){
		for(n=0; n<2; n++){
			cout<<"Masukkan nilai matriks NIM1 ("<<m<<","<<n<<"):";
			cin>>a[m][n];
		}
	}
	cout<<endl;
	for(m=0; m<2; m++){
		for(n=0; n<2; n++){
			cout<<"Masukkan nilai matriks NIM2 ("<<m<<","<<n<<"):";
			cin>>b[m][n];
		}
	}
	cout<<"\nHASIL PERKALIAN MATRIKS :\n";
	for(m=0; m<2; m++){
		for(n=0; n<2; n++){
			cout<<setw(3)<<(a[m][0]*b[0][n]+a[m][1]*b[1][n]);
		}
		cout<<"\n";
	}
	system("PAUSE");
	return EXIT_SUCCESS;
}
