#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//deklarasi
string barang[]= {"AIR MINERAL","ES TEH TAWAR","ES TEH MANIS","ICE TEA ","ES CAMPUR","ES TEBU ","ES JERUK","JUS JERUK","JUS MANGGA","JUS ALPUKAT","KOPI SENJA","KOPI STANDAR","KOPI MOKACINO","KOPI KAPUCINO","KOPI SUSU","BOBA MILK","MILKSHAKE",};
int harga[]={4,6,8,20,7,5,5,12,12,14,25,15,17,18,20,23,22};
int stok[]={55,30,30,30,25,26,27,32,0,26,46,33,24,28,36,16,22};
string cart_barang[100];
int cart_harga[100];
int jumlah,indeks=-1;
string nama;

//tampilan menu utama
void menuawal(string barang[],int harga[],int stok[]){
	
	cout << " ============== SELAMAT DATANG DI DRINK CAFE KELOMPOK 16 ===============\n";
	cout << " =======================================================================\n";
    cout << "| KODE\t|\tLIST MENU\t|\tHARGA MENU\t|   PERSEDIAAN  | \n";
    cout << " =======================================================================\n";
	for(int i=0;i<17;i++){
        cout << "| " << i << "\t|\t" << barang[i] << "\t|\tRp. " << harga[i] << ".000\t|\t" << stok[i] << "\t| " << endl;
		}
    cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"<< endl;
}
void namapembeli(){
	cout << "MASUKKAN NAMA PEMBELI : ";
    cin >> nama;
    cout << endl;
}

//transksaksi pembelian
int beli(){
    char lagi;
    char input;
    do{
        int N[100];
        int kode;
        cout << "MASUKKAN KODE MENU : ";
        cin >> kode;
        if(stok[kode]==0){
            cout << "MENU YANG ANDA PILIH SEDANG KOSONG" << endl;
        }
        else{
        cout << "  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;
        cout << " |NAMA MENU  \t: " << barang[kode] << "\t|" << endl;
        cout << " |HARGA MENU \t: " << harga[kode] << ".000 \t|" << endl;
        cout << " |STOK MENU  \t: " << stok[kode]-1 << "\t\t|" << endl;
        indeks=indeks+1;
        cart_barang[indeks]=barang[kode];
        cart_harga[indeks]=harga[kode];
        stok[kode]=stok[kode]-1;
        jumlah=jumlah+harga[kode];
        cout << " |TOTAL HARGA \t: " << jumlah << ".000 \t|" << endl;
        cout << "  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;
        }
        cout << "INGIN MEMESAN LAGI? (Y/N) : ";
        cin >> lagi;
        cout << endl;
    }while(lagi=='Y' || lagi=='y');
}

//daftar belanjaan
void belanja(int maks,string cart_barang[],int cart_harga[]){
	system("cls");
	cout << ">> Hayy, Kak "<<nama<<" Pesanan Anda Telah Diproses . . ." << endl;
	cout << "\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ "<< endl;
    cout << "\t|======================= STRUK  PESANAN ========================|"<< endl;
    cout << "\t|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<< endl;
    cout << "\t|CUSTOMER : " << nama << "\t\t\t\t\t|" << endl;
    cout << "\t|DAFTAR MENU YANG DI PESAN :\t\t\t\t\t|" << endl;
    for(int i=0;i<=maks;i++){
        cout << "\t|\t" << i+1 << ". " << cart_barang[i] << "\t\tRp. " << cart_harga[i] << ".000\t\t\t|" << endl;
    }
	cout << "\t|---------------------------------------------------------------|\n";
    cout << "\t|TOTAL YANG HARUS ANDA BAYAR ADALAH : Rp.";
    cout << jumlah << ".000\t\t\t|" << endl;
    cout << "\t|---------------------------------------------------------------|\n";
    cout << "\t|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<< endl;
    cout << "\t|======================== TERIMA KASIH =========================|"<< endl;
    cout << "\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ "<< endl;
}


int main(){
    menuawal(barang,harga,stok);
    namapembeli();
    beli();
    belanja(indeks,cart_barang,cart_harga);
       
}
