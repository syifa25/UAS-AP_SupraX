/*====== Fungsi Tampilkan Daftar Kendaraan =====*/
void tampilkanDaftar(Kendaraan daftar[], int jumlah) {
    if (jumlah == 0) {
        cout << "\nBelum ada kendaraan yang parkir.\n";
        return;
    }

    cout << "\nDAFTAR MOBIL YANG SUDAH TERPARKIR:\n";
    for (int i = 0; i < jumlah; i++) {
        cout << "\nMobil ke-" << i + 1 << endl;
        cout << "Plat  : " << daftar[i].plat << endl;
        cout << "Merk  : " << daftar[i].merk << endl;
        cout << "Warna : " << daftar[i].warna << endl;
    }
}


/*===== Fungsi Cek Kendaraan =====*/
void tambahKendaraan(Kendaraan daftar[], int &jumlah) {
    int banyak;
    cout << "\nMasukkan jumlah mobil yang akan diparkirkan: ";
    cin >> banyak;

    if (jumlah + banyak > MAX_KENDARAAN) {
        cout << "Maaf, parkiran hanya dapat memuat " << MAX_KENDARAAN << " mobil!\n";
        return;
    }

    for (int i = 0; i < banyak; i++) {
        cout << "\nMobil ke-" << (jumlah + 1) << endl;
        cout << "Masukkan plat mobil  : ";
        cin >> daftar[jumlah].plat;
        cout << "Masukkan merk mobil  : ";
        cin >> daftar[jumlah].merk;
        cout << "Masukkan warna mobil : ";
        cin >> daftar[jumlah].warna;
        jumlah++;
    }
}
