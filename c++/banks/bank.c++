#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    
    double balance = 0.0; 

public:
    string name;
    int account_id;
    string account_type;

    // Validasi penambahan saldo
    double deposit(double x) {
        if (x <= 0) {
            cout << "Jumlah deposit harus lebih dari 0!\n";
            return balance;
        }
        balance += x;
        return balance;
    }

   
    double wd(double x) {
        if (x <= 0) {
            cout << "Jumlah penarikan harus lebih dari 0!\n";
            return balance; 
        }
        if (x > balance) {
            cout << "Saldo anda tidak cukup!\n";
            return balance;
        }
        
        balance -= x;
        cout << "Berhasil menarik: " << x << "\n";
        return balance;
    }
  
    void info() {
        cout << "nama   : " << name << endl;
        cout << "id     : " << account_id << endl;
        cout << "status : " << account_type << endl;
        cout << "saldo  : " << balance << "\n\n";
    }

    void display_balance() {
        cout << "Saldo saat ini: " << balance << "\n";
    }
};
  
int main() {
    int p = 0;
    double jumlah;
    double windraw;

    BankAccount akun;
    akun.name = "hayu";
    akun.account_id = 1;
    akun.account_type = "checking";

    while (p != 4) {
        cout << "1. Cek Akun\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Akhiri Sesi\n";
        cout << "Pilih menu: ";
        cin >> p;
        cout << "\n";

        if (p == 1) {
            akun.info();
        }
        else if (p == 2) {
            cout << "Masukkan jumlah deposit: ";
            cin >> jumlah;
            akun.deposit(jumlah); 
            cout << "\n";
        }
        else if (p == 3) {
            cout << "Masukkan jumlah penarikan: ";
            cin >> windraw;
            akun.wd(windraw); 
            cout << "\n";
        }
    }
    
    cout << "Terima kasih telah menggunakan layanan bank kami.\n";
    return 0;
}