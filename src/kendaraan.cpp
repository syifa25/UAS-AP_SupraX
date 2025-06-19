// Fungsi untuk hapus kendaraan berdasarkan plat
void hapusKendaraan(vector<Kendaraan>& daftarKendaraan) {
    if (daftarKendaraan.empty()) {
        cout << "\n==================================================================================\n";
        cout << "                           Belum ada kendaraan terdaftar.                        \n";
        cout << "==================================================================================\n";
        return;
    }
    
    string platHapus;
    cout << "\n==================================================================================\n";
    cout << "                              HAPUS KENDARAAN                                    \n";
    cout << "==================================================================================\n";
    cout << "Masukkan plat nomor kendaraan yang akan dihapus : ";
    cin >> platHapus;
    
    // Cari kendaraan berdasarkan plat
    for (auto it = daftarKendaraan.begin(); it != daftarKendaraan.end(); ++it) {
        if (it->plat == platHapus) {
            cout << "\n==================================================================================\n";
            cout << "                            KONFIRMASI PENGHAPUSAN                               \n";
            cout << "==================================================================================\n";
            cout << "Data kendaraan yang akan dihapus:" << endl;
            cout << "Plat Nomor : " << it->plat << endl;
            cout << "Merek      : " << it->merek << endl;
            cout << "Warna      : " << it->warna << endl;
            cout << "Waktu Masuk: ";
            tampilkanWaktu(it->waktuMasuk);
            cout << "\nStatus     : " << (it->sudahKeluar ? "Sudah Keluar" : "Masih Parkir") << endl;
            
            char konfirmasi;
            cout << "\nApakah Anda yakin ingin menghapus data ini? (y/n): ";
            cin >> konfirmasi;
            
            if (konfirmasi == 'y' || konfirmasi == 'Y') {
                daftarKendaraan.erase(it);
                cout << "\n==================================================================================\n";
                cout << "                         DATA KENDARAAN BERHASIL DIHAPUS!                        \n";
                cout << "               Kendaraan dengan plat " << platHapus << " telah dihapus dari sistem.              \n";
                cout << "==================================================================================\n";
            } else {
                cout << "\n==================================================================================\n";
                cout << "                           PENGHAPUSAN DIBATALKAN                                \n";
                cout << "==================================================================================\n";
            }
            return;
        }
    }
    
    cout << "\n==================================================================================\n";
    cout << "            Kendaraan dengan plat " << platHapus << " tidak ditemukan!                     \n";
    cout << "==================================================================================\n";
}
