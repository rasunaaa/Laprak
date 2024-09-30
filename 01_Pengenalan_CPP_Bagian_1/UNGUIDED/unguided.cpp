#include <iostream>
using namespace std;

// nomor 1
/*
int main() {
    float bilanganPertama, bilanganKedua, hasil;
    int pilihan;

    
    cout << "Masukan bilangan pertama: ";
    cin >> bilanganPertama;
    cout << "Masukan bilangan kedua: ";
    cin >> bilanganKedua;


    cout << "Daftar kalkulasi:\n";
    cout << "1. Penjumlahan\n";
    cout << "2. Pengurangan\n";
    cout << "3. Perkalian\n";
    cout << "4. Pembagian\n";
    
    cout << "Pilih kalkulasi no: ";
    cin >> pilihan;

    
    switch (pilihan) {
        case 1:
            hasil = bilanganPertama + bilanganKedua;
            break;
        case 2:
            hasil = bilanganPertama - bilanganKedua;
            break;
        case 3:
            hasil = bilanganPertama * bilanganKedua;
            break;
        case 4:
            if (bilanganKedua != 0) {
                hasil = bilanganPertama / bilanganKedua;
            } else {
                cout << "Error: Pembagian dengan nol tidak diperbolehkan.\n";
                return 1; 
            }
            break;
        default:
            cout << "Pilihan tidak valid.\n";
            return 1; 
    }

    
    cout << "Hasil dari kalkulasi bilangan yang anda inputkan: " << hasil << endl;

    return 0;
}
*/

// nomor 2
/*
#include <iostream>
#include <string>

using namespace std;


string convertToWords(int number) {
    string result;

    if (number >= 100) {
        result += "seratus ";
        number -= 100;
    }
    if (number >= 90) {
        result += "sembilan puluh ";
        number -= 90;
    } else if (number >= 80) {
        result += "delapan puluh ";
        number -= 80;
    } else if (number >= 70) {
        result += "tujuh puluh ";
        number -= 70;
    }
    if (number >= 10) {
        if (number == 10) {
            result += "sepuluh";
        } else if (number == 11) {
            result += "sebelas";
        } else if (number == 12) {
            result += "duabelas";
        } else if (number == 13) {
            result += "tigabelas";
        } else if (number == 14) {
            result += "empat belas";
        } else if (number == 15) {
            result += "lima belas";
        } else if (number == 16) {
            result += "enam belas";
        } else if (number == 17) {
            result += "tujuh belas";
        } else if (number == 18) {
            result += "delapan belas";
        } else if (number == 19) {
            result += "sembilan belas";
        }
    } else if (number == 9) {
        result += "sembilan";
    } else if (number == 8) {
        result += "delapan";
    } else if (number == 7) {
        result += "tujuh";
    } else if (number == 6) {
        result += "enam";
    } else if (number == 5) {
        result += "lima";
    } else if (number == 4) {
        result += "empat";
    } else if (number == 3) {
        result += "tiga";
    } else if (number == 2) {
        result += "dua";
    } else if (number == 1) {
        result += "satu";
    } else if (number == 0) {
        result += "nol";
    }

    return result;
}

int main() {
    int number = 79;
    string words = convertToWords(number);

    cout << number << " = " << words << endl;

    return 0;
} 
*/

//Nomor 3

#include <iostream>
using namespace std;

int main() {
    int n;

    
    cout << "Masukan bilangan: ";
    cin >> n;

    
    for (int i = n; i >= 1; i--) {
        
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }

        
        cout << "* ";

        
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        
        cout << endl;

        
        for (int k = 0; k < n - i; k++) {
            cout << "  ";
        }
    }

    return 0;
}




