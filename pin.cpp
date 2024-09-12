#include <iostream> // Untuk input dan output
#include <iomanip>  // Untuk manipulasi format output
#include <string>   // Untuk menangani string

using namespace std;

int main(){
    // VARIABEL
    const int hargapertalite = 10000;
    const int hargapertamax = 13000;
    string pilihan;
    double uang, liter;

    // INPUT
    while (true){
        // INPUT PILIHAN BENSIN
        cout << "Masukan Jenis Bensin\n";
        cout << "1. Pertalite (Rp10000 per liter)\n";
        cout << "2. Pertamax (Rp13000 per liter)\n";
        cout << "Pilih jenis bensin (Pertalite/Pertamax): ";
        cin >> pilihan;

            // MENANGANI 'PILIHAN' MENGGUNAKAN HURUF KECIL
            for (auto &c : pilihan) c = tolower(c);

            // MEMASTIKAN 'PILIHAN' VALID
            if (pilihan == "pertalite" || pilihan == "pertamax"){
                break;      // keluar dari loop jika input 'pilihan' benar        
            }
            else{
                cout << "Pilihan tidak valid. Silakan coba lagi.\n\n\n";
            }
    }

    //MEMASUKAN JUMLAH HARGA
    cout << "\nMasukkan jumlah harga yang diinginkan (dalam Rupiah):  ";
    cin >> uang;

    // MASUKAN RUMUS
    if (pilihan == "pertalite"){
        liter = uang / hargapertalite;
        cout << "\nDengan Rp" << fixed << setprecision(0) << uang         // (<< fixed << setprecision = hanya mengambil 0 angka dibelakang koma)
             << ", Anda dapat membeli " << fixed << setprecision(2) << liter        // (<< fixed << setprecision = hanya mengambil 2 angka dibelakang koma)
             << " Liter Pertalite\n\n\n";
    }

    else {
        liter = uang / hargapertamax;
        cout << "\nDengan Rp" << fixed << setprecision(0) << uang         // (<< fixed << setprecision = hanya mengambil 0 angka dibelakang koma)
             << ", Anda dapat membeli " << fixed << setprecision(2) << liter        // (<< fixed << setprecision = hanya mengambil 2 angka dibelakang koma)
             << " Liter Pertamax\n\n\n";
    }
    
    return 0;
}