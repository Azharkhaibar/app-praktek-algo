#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <vector>

using namespace std;

class Catatan {
public:
    string deskripsi;
    bool selesai;

    Catatan(const string& desc) : deskripsi(desc), selesai(false) {}
};

void practice() {
    system("color 0A");
    string username;
    int password;
    cout<<" ___________  ___________  _         _  ___________  ___________ "<<endl;
cout<<"¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦       ¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦"<<endl;
cout<<"¦¦¦¯¯¯¯¯¯¯¦¦¦ ¯¯¯¯¯¯¯¯¯¦¦¦¦¦¦       ¦¦¦¦¦¦¯¯¯¯¯¯¯¦¦¦¦¦¦¯¯¯¯¯¯¯¦¦¦"<<endl;
cout<<"¦¦¦       ¦¦¦          ¦¦¦¦¦¦       ¦¦¦¦¦¦       ¦¦¦¦¦¦       ¦¦¦"<<endl;
cout<<"¦¦¦_______¦¦¦ _________¦¦¦¦¦¦_______¦¦¦¦¦¦_______¦¦¦¦¦¦_______¦¦¦"<<endl;
cout<<"¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦"<<endl;
cout<<"¦¦¦¯¯¯¯¯¯¯¦¦¦¦¦¦¯¯¯¯¯¯¯¯¯ ¦¦¦¯¯¯¯¯¯¯¦¦¦¦¦¦¯¯¯¯¯¯¯¦¦¦¦¦¦¯¯¯¯¦¦¦¯¯ "<<endl;
cout<<"¦¦¦       ¦¦¦¦¦¦          ¦¦¦       ¦¦¦¦¦¦       ¦¦¦¦¦¦     ¦¦¦  "<<endl;
cout<<"¦¦¦       ¦¦¦¦¦¦_________ ¦¦¦       ¦¦¦¦¦¦       ¦¦¦¦¦¦      ¦¦¦ "<<endl;
cout<<"¦¦¦       ¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦       ¦¦¦¦¦¦       ¦¦¦¦¦¦       ¦¦¦"<<endl;
cout<<"¯         ¯  ¯¯¯¯¯¯¯¯¯¯¯  ¯         ¯  ¯         ¯  ¯         ¯  "<<endl;
    cout<<endl;
    cout<<"\tW \tE \tL \tC \tO \tM \tE"  <<endl;
    cout<<"====================================================================================="<<endl;   
    cout<<"masukan Username \t: "; cin>>username;
    cout<<"masukan Password \t: "; cin>>password;          
    if(username != "azharasykari" || password != 2005){
    for(int m = 0; m <= 50; m++){
    cout << "ERROR 404";
    
}
    cout<< endl;
    cout<< "WRONG PASSWROD OR USERNAME...."<<endl;
    sleep(2);
    system("cls");
    practice();
}                     
    cin.clear();                      
    for (int k = 0; k <= 3; k++) {
        cout << k << " LOADING LOADING LOADING" << endl; 
        sleep(1);
    }
    cin.clear();
    cout << "====================================================================" << endl;
    cout << "\t\t\t ANDA MEMASUKI PROGRAM" << endl;
    sleep(2);
    system("cls");
}


class DaftarCatatan {
private:
    vector<Catatan> catatan;

public:
    void tambahCatatan(const string& desc) {
        Catatan catatanBaru(desc);
        catatan.push_back(catatanBaru);
        cout << "Catatan Ditambahkan \t: " << desc << endl;
    }

    void tampilkanCatatan() {
        if (catatan.empty()) {
            cout << "Tidak ada catatan dalam daftar to-do. " << endl;
        } else {
            cout << "Daftar to-do \t: " << endl;
            for (size_t pup = 0; pup < catatan.size(); pup++) {
                cout << (pup + 1) << ".  ";
                if (catatan[pup].selesai) {
                    cout << " [X] ";
                } else {
                    cout << "[ ]";
                }
                cout << catatan[pup].deskripsi << endl;
            }
        }
    }

    void tandaSelesai(size_t indeks) {
        if (indeks > 0 && indeks <= catatan.size()) {
            catatan[indeks - 1].selesai = true;
            cout << "Catatan ditandai sudah selesai " << catatan[indeks - 1].selesai << endl;
        } else {
            cout << "Indeks catatan tidak valid " << endl;
        }
    }
};

class PilNote {
public:
    int pilcatatan;
};

void catatanFungsi() {
    DaftarCatatan daftarCatatan;
    PilNote pilihanNote;

    do {
        cout << "\nMenu : \n";
        cout << "[1] Tambah Catatan\n";
        cout << "[2] Tampilkan Catatan\n";
        cout << "[3] Tandai Catatan Selesai\n";
        cout << "[0] Keluar\n";
        cout << "====================================================" << endl;
        cout << "Masukkan kode \t: ";
        cin >> pilihanNote.pilcatatan;

        switch (pilihanNote.pilcatatan) {
            case 1: {
            	sleep(1);
            	system("cls");
                cout << "Masukkan deskripsi catatan \t: ";
                string deskripsi;
                cin.ignore();
                getline(cin, deskripsi);
                daftarCatatan.tambahCatatan(deskripsi);
                break;
            }
            case 2:
            		sleep(1);
            	system("cls");
                daftarCatatan.tampilkanCatatan();
                break;
            case 3: {
            		sleep(1);
            	system("cls");
                cout << "Masukkan indeks catatan yang akan ditandai \t: ";
                size_t indeks;
                cin >> indeks;
                daftarCatatan.tandaSelesai(indeks);
                break;
            }
            case 0:
            		sleep(1);
            	system("cls");
                cout << "Keluar dari program.\n";
                break;
            default:
                cout << "Pilihan tidak valid, Silakan coba lagi. \n";
                break;
        }
    } while (pilihanNote.pilcatatan != 0);

}


class StrukBelanja {
public:
    int pilMenu, pilMenuThrift, pilSepatu;
    int jumBel, bayar, kembalian;
    string namaSepatu;
}; 

class TotHargaSepatu {
public:
    int total, totPpn, harga;
    int totBay;
};

class tugasOperasiFungsi {
public:
	 int nilai1, nilai2;
     
};


void practice2();

void strukDanHarga() {
    StrukBelanja detail;
    TotHargaSepatu price;
    if (detail.jumBel > 3) {
        price.total = price.harga * detail.jumBel;
        price.totPpn = price.total * 10 / 100;
    } else {
        price.total = price.harga * detail.jumBel;
    }

    price.totBay = price.total + price.totPpn;
    cout << endl;
    cout << endl;
    cout << "=====================================" << endl;
    cout << "=== \t STRUK PEMBELIAN \t ===" << endl;
    cout << "=====================================" << endl;
    cout << "Nama Sepatu\t\t: " << detail.namaSepatu<< endl;
    cout << "Harga Satuan\t\t: " << price.harga << endl;
    cout << "Jumlah Beli\t\t: " << detail.jumBel << endl;
    cout << "Total Keseluruhan\t: " << price.totBay << endl;
    cout << "Pembayaran\t\t: ";
    cin >> detail.bayar;
    detail.kembalian = detail.bayar - price.totBay;
    cout << "Uang Kembalian\t\t: " << detail.kembalian << endl;
    cout << "=====================================" << endl;
    cout << endl;
    cout << "Terimakasih telah Berkunjung...." << endl;
    	sleep(2);
	system("cls");
	practice2();
	
	
}

void tokoAzhar() {
    TotHargaSepatu price;
    StrukBelanja detail;

    system("cls");
    cout << "===============================================================" << endl;
    cout << "||\t\t   WELCOME IN AZHARS STORE                         ||" << endl;
    cout << "===============================================================" << endl;
    cout << "Opsi Menu : " << endl;
    cout << "1. Thrift" << endl;
    cout << "2. Kembali menu " << endl;
    cout << "Pilih kode \t: ";
    cin >> detail.pilMenu;
    cin.clear();
    sleep(1);

    switch (detail.pilMenu) {
        case 1:
            system("cls");
            cout <<"=========================================================="<<endl;
            cout <<"|| \t\t TOKO SEPATU AZHAR                      ||"<<endl;
            cout <<"=========================================================="<<endl;
            cout << "1. Adidas" << endl;
            cout << "2. Nike " << endl;
            cout << "3. PUMA " << endl;
            cout << "4. Kembali" << endl;
            cout << "Pilih kode \t: ";
            cin >> detail.pilMenuThrift;
            cin.clear();
            sleep(1);

            if (detail.pilMenuThrift == 1) {
            	  system("cls");
                cout << "======================================================" << endl;
                cout << "|| \t\t TOKO SEPATU AZHAR (ADIDAS)              ||" << endl;
                cout << "======================================================" << endl;
                cout << "A. Adidas Yeezy Boost" << endl;
                cout << "B. Adidas Samba  " << endl;
                cout << "C. Adidas Stan Smith  " << endl;
                cout << "D. Kembali Menu"<< endl;
                cout << "Pilih kode untuk membeli : " << endl;
                cin.clear();
                cout << "============================================" << endl;
                sleep(1);
                cout << "Kode \t: ";
                cin >> detail.pilSepatu;
                cin.clear();
                cin.ignore();
                if (detail.pilSepatu == 'A' || detail.pilSepatu == 'a') {
                    detail.namaSepatu = "Adidas Yeezy Boost";
                    price.harga = 25900000;
                } else if (detail.pilSepatu == 'B' || detail.pilSepatu == 'b') {
                    detail.namaSepatu = "Adidas Samba ";
                    price.harga = 32000000;
                } else if (detail.pilSepatu == 'C' || detail.pilSepatu == 'c') {
                    detail.namaSepatu = "Adidas Stan Smith";
                    price.harga = 23900000;
                } else if(detail.pilSepatu == 'd' || detail.pilSepatu =='D'){
                	
			practice2();
			sleep(2);
                	
		  } else {
                    detail.namaSepatu = " ";
                    price.harga = 0;
                }

                cout << "Jumlah beli \t: ";
                cin >> detail.jumBel;
                strukDanHarga();
            } else if(detail.pilMenuThrift == 2){
            	system("cls");
                cout << "======================================================" << endl;
                cout << "|| \t\t TOKO SEPATU AZHAR (NIKE)              ||" << endl;
                cout << "======================================================" << endl;         
                cout << "A. Nike Air Force 1" << endl;
                cout << "B. Nike Air Mid 1  " << endl;
                cout << "C. Nike Air Jordan Gold  " << endl;
                cout << "D. Kembali Menu"<< endl;
                cout << "Pilih kode untuk membeli : " << endl;
                cin.clear();
                cout << "============================================" << endl;
                sleep(1);
                cout << "Kode \t: ";
                cin >> detail.pilSepatu;
                cin.clear();
                cin.ignore();
                if (detail.pilSepatu == 'A' || detail.pilSepatu == 'a') {
                    detail.namaSepatu = " Nike Air Force 1";
                    price.harga = 12000;
                } else if (detail.pilSepatu == 'B' || detail.pilSepatu == 'b') {
                    detail.namaSepatu = "Nike Air Mid 1 ";
                    price.harga = 20000;
                } else if (detail.pilSepatu == 'C' || detail.pilSepatu == 'c') {
                    detail.namaSepatu = "Nike Air Jordan Gold ";
                    price.harga = 359000;
                } else if(detail.pilSepatu == 'd' || detail.pilSepatu =='D'){
                	
			practice2();
			sleep(2);
                	
		  } else {
                    detail.namaSepatu = " ";
                    price.harga = 0;
                }

                cout << "Jumlah beli \t: ";
                cin >> detail.jumBel;
                strukDanHarga();
	     } else if(detail.pilMenuThrift == 3){
	     	  cout << "======================================================" << endl;
                cout << "|| \t\t TOKO SEPATU AZHAR (PUMA)              ||" << endl;
                cout << "======================================================" << endl;
	     } else if(detail.pilMenuThrift == 4){
	     	cout<< endl;
	     	cout<<"\t\t ANDA KEMBALI...."<<endl;
	     	sleep(2);
	     	practice2();
	     	
	     }
            break;
        case 2:
            cout << "ANDA MEMILIH KEMBALI" << endl;
            practice2();
            break;
        default:
            exit(0);
    }
}

void ganjilGenap() {
    int pil2;
    int batas;
    system("cls");
    cout << "\t\t BILANGAN GANJIL DAN GENAP" << endl;
    cout << "--------------------------------------" << endl;
    cout << "1. Deret Ganjil" << endl;
    cout << "2. Deret Genap" << endl;
    cout << "Masukan kode \t: ";
    cin >> pil2;

    if (pil2 == 1) {
        cout << "Bilangan Deret Ganjil :" << endl;
        cout << "Masukan batas \t:";
        cin >> batas;
        for (int p = 1; p <= batas; p++) {
            if (p % 2 != 0)
                cout << endl;
            cout << p << "  "<< "     ";
        }
        sleep(2);
        system("cls");
        practice2();
    } else if (pil2 == 2) {
        cout << "Deret Bilangan Genap" << endl;
        cout << "Masukan batas \t:";
        cin >> batas;
        for (int p = 1; p <= batas; p++) {
            if (p % 2 == 0)
                cout << endl;
            cout << p <<"  "<<"   ";
        }
        sleep(3);
        system("cls");
        practice2();
    } else {
        cout << "Masukan batas \t:";
        cin >> batas;
        cout << "Kode tidak ditemukan" << endl;
        cout << "404 ERROR";
        sleep(2);
        system("cls");
        practice2();
    }
}

double fungsiPenjumlahan(int a, int b) {
    return (a + b);
}
    
double fungsiPengurangan(int c, int d){
    return(c - d);
}

double fungsiPembagian(int j, int v){
    return(j / v);
}

double fungsiPerkalian(int f, int g ){
    return(f * g);
}

void tugasFungsi(){
	tugasOperasiFungsi hitung;
	int pilOperasi;
	cout<<"====================================== OPERASI BILANGAN ========================================="<<endl;
	cout<<"Menu Operasi : "<<endl;
	cout<<"1. penjumlahan "<<endl;
	cout<<"2. pengurangan "<<endl;
	cout<<"3. pembagian "<<endl;
	cout<<"4. perkalian "<<endl;
	cout<<"5. kembali"<<endl;
	cout<< endl;
	cout<<"=========================================>>>"<<endl;
	cout<<"pilih kode \t: "; cin>>pilOperasi;
	
	switch(pilOperasi){
		case 1:
			cout<<"+=================+ PENJUMLAHAN +=======================+"<<endl;
		       cout << "Masukkan nilai pertama : "; cin >> hitung.nilai1;
                     cout << "Masukkan nilai kedua   : "; cin >> hitung.nilai2;
                     cout << "Hasil penjumlahan      : " << fungsiPenjumlahan(hitung.nilai1, hitung.nilai2) << endl;
                     sleep(2);
                     system("cls");
                     practice2();  	
		case 2:
			cout<<"- ======================= - PENGURANGAN - =========================== -"<<endl;
			cout<<"masukan nilai pertama : "; cin>>hitung.nilai1;
			cout<<"masukan nilai kedua : "; cin>>hitung.nilai2;
			cout<<"Hasil Pengurangan \t: " <<fungsiPengurangan (hitung.nilai1, hitung.nilai2) <<endl;
			sleep(2);
                     system("cls");
                     practice2();  
              case 3:
                     cout<<" / =======================/ PENGURANGAN/ =========================== /"<<endl;
			cout<<"masukan nilai pertama : "; cin>>hitung.nilai1;
			cout<<"masukan nilai kedua : "; cin>>hitung.nilai2;
			cout<<"Hasil Pembagian \t: " <<fungsiPembagian(hitung.nilai1, hitung.nilai2) <<endl;
			sleep(2);
                     system("cls");
                     practice2();   
              case 4: 
                     cout<<" * =======================* PERKALIAN * =========================== *"<<endl;
			cout<<"masukan nilai pertama : "; cin>>hitung.nilai1;
			cout<<"masukan nilai kedua : "; cin>>hitung.nilai2;
			cout<<"Hasil Perkalian \t: " <<fungsiPerkalian(hitung.nilai1, hitung.nilai2) <<endl;
			sleep(2);
                     system("cls");
                     practice2();     
              default:  
                     sleep(2);
                     system("cls");
                     practice2();     
                   
              
			
			
		       	
		            	
	}
     
}

void practice2() {
    int pilihan;
    system("cls");
    cout << "\t\t AZHAR'S PROGRAMS" << endl;
    cout << "-------------------------------------------" << endl;
    cout << "MENU OPSI :" << endl;
    cout << endl;
    cout << "[1] Praktek Algoritma " << endl;
    cout << endl;
    cout << "[2] Bilangan Genap" << endl;
    cout << endl;
    cout << "[3] Bilangan Ganjil" << endl;
    cout << endl;
    cout << "[4] Deret Bilangan Ganjil & Genap" << endl;
    cout << endl;
    cout << "[5] Toko Sederhana Azhar" << endl;
    cout << endl;
    cout << "[6] Fungsi parameter" << endl;
    cout << endl;
    cout << "[7] To do list (Catatan harian) " << endl;
    cout << endl;
    cout << "[8] LOG OUT PROGRAM " << endl;
    cout << "============================================"<< endl;
    cout << "Pilih kode \t:";
    cin >> pilihan;
    sleep(1);

    if (pilihan == 1) {
        system("cls");
        int inputBaru;
        int nilaiLama = 1;
        cout << "Masukan nilai untuk praktik \t:";
        cin >> inputBaru;
        while (nilaiLama <= inputBaru) {
            cout << nilaiLama << "." << "Praktik" << endl;
            nilaiLama = nilaiLama + 1;
            sleep(1);
        }
        system("cls");
        sleep(1);
        practice2();
    } else if (pilihan == 2) {
        system("cls");
        int bilanganInput = 1;
        int genap;
        cout << "Bilangan Genap \t:";
        cin >> genap;
        while (bilanganInput <= genap) {
            if (bilanganInput % 2 == 0) {
                cout << bilanganInput << " " << " ";
            }
            bilanganInput++;
        }
        sleep(2);
        practice2();
    } else if (pilihan == 3) {
        system("cls");
        int bilanganInputGan = 1;
        int ganjil;
        cout << "Bilangan Ganjil \t:";
        cin >> ganjil;
        while (bilanganInputGan <= ganjil) {
            if (bilanganInputGan % 2 != 0) {
                cout << bilanganInputGan << "." << "azhar";
            }
            bilanganInputGan++;
        }
        sleep(2);
        system("cls");
        practice2();
    } else if (pilihan == 4) {
        ganjilGenap();
    } else if (pilihan == 5) {
        tokoAzhar();
    } else if (pilihan == 6) {
        tugasFungsi();
    } else if(pilihan == 7){
    	 catatanFungsi();
    }else if (pilihan == 8) {
        system("cls");
        cout << "Anda Keluar Program... " << endl;
        for (int z = 0; z <= 3; z++) {
            cout << z << "." << "Loading" << endl;
            
            sleep(1);
        }
        cout<<endl;
        cout << "\t\t EXIT PROGRAM"<<endl;
        exit(0);
    }
}

void practice1() {
    practice();
}

void practiceDua() {
    practice2();
}

int main() {
    practice1();
    practiceDua();
    return 0;
}
