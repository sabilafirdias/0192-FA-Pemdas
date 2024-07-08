#include <iostream>
using namespace std;

class MasukUniversitas {
private:            // isi access modifier disini
    int uangPendaftaran;
    int uangSemesterPertama;
    int uangBangunan;
    int totalBiaya;
    // isi daftar variable yang dibutuhkan di bawah ini
public:
    MasukUniversitas() {
        uangPendaftaran = 0;
        uangSemesterPertama = 0;
        uangBangunan = 0;
        totalBiaya = 0;
        // isi nilai default variable yang dibutuhkan di bawah ini
    }

    virtual void namaJalurMasuk() { 
        cout << "Masuk melalui jalur ";
        return; 
    }

    virtual void hitungTotalBiaya() {
        int penjumlahan(int a, int b);
        uangPendaftaran = a;
        uangSemesterPertama = b;
        return a + b;
    }
    // isi disini dengan fungsi virtual yang dibutuhkan

    void setUangPendaftaran(int nilai) {
        this->uangPendaftaran = nilai;
    }
    float getUangPendaftaran() {
        return uangPendaftaran;
    }

    void setuangSemesterPertama(int nilai) {
        this->uangSemesterPertama = nilai;
    }
    float getuangSemesterPertama() {
        return uangSemesterPertama;
    }

    void setuangBangunan(int nilai) {
        this->uangBangunan = nilai;
    }
    float getuangBangunan() {
        return uangBangunan;
    }

    void setTotalBiaya(int nilai) {
        this->totalBiaya = nilai;
    }
    float getTotalBiaya() {
        return totalBiaya;
    }
    // isi setter dan getter variable yang dibutuhkan di bawah ini
};

class SNBT : public MasukUniversitas {
public:
    void namaJalurMasuk() {
        cout << "Masuk melalui jalur SNBT " << endl;
    }

    void input() {
        cout << "\nMasukkan Uang Pendaftaran: ";
        cin >> getUangPendaftaran;
        cout << "Masukkan Uang Semester Pertama: ";
        cin >> getuangSemesterPertama;
    }
    // isi disini untuk melengkapi class SNBT
};

class SNBP : public MasukUniversitas {
public:
    void namaJalurMasuk() {
        cout << "Masuk melalui jalur SNBP " << endl;
    }
    // isi disini untuk melengkapi class SNBP
};

int main()
{
    
}
