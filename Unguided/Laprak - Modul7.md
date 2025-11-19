# <h1 align="center">Laporan Praktikum Modul 7 - STACK</h1>
<p align="center">Kafin Fazlur Rahman - 103112430097</p>

## Dasar Teori
Stack adalah salah satu struktur data dasar yang cara kerjanya mengikuti prinsip LIFO (Last In, First Out). Artinya, elemen yang terakhir dimasukkan akan menjadi elemen pertama yang keluar. Stack biasanya memiliki dua operasi utama: push untuk menambahkan data ke bagian atas stack, dan pop untuk mengambil data dari atas stack. Selain itu, stack juga dapat diperluas dengan operasi lain seperti membalik isi stack, menyisipkan data secara terurut, atau membaca input satu per satu.

Stack sangat berguna ketika kita ingin memproses data secara berurutan dari yang terakhir masuk, seperti pada proses undo/redo, pengecekan kurung, rekursi, dan sistem antrian balik. Dalam praktikum ini, stack diimplementasikan menggunakan array sederhana dengan variabel top sebagai penanda elemen teratas.

## Guided 

### 1. 

```C++
#include "stack.h"
#include <iostream>

using namespace std;

int main(){
    stackTable s;
    createStack(s);

    push(s, 1);
    push(s, 2);
    push(s, 3);
    push(s, 4);
    push(s, 5);
    cout << endl;

    cout << "--- Stack setelah push ---" << endl;
    view(s);
    cout << endl;

    pop(s);
    pop(s);
    cout << endl;

    cout << "--- Stack setelah pop 2 kali ---" << endl;
    view(s);
    cout << endl;

    update(s, 2);
    update(s, 1);
    update(s, 4);
    cout << endl;

    cout << "--- Stack setelah update ---" << endl;
    view(s);
    cout << endl;

    searchData(s, 4);
    searchData(s, 9);

    return 0;
}
```
Ini adalah program uji coba untuk Struktur Data Stack yang diimplementasikan menggunakan representasi Array/Tabel. Ia melakukan serangkaian operasi dasar seperti membuat, menambah, mengambil, melihat, mencari, dan memperbarui untuk menunjukkan cara kerja Stack.

## Unguided 

### Soal 1
Buatlah ADT Stack menggunakan representasi ARRAY di dalam file stack.h dan implementasi ADT Stack menggunakan Array pada file stack.cpp dan main.cpp

```C++
void latihan1() {
    Stack S;
    createStack(S);

    push(S, 3);
    push(S, 4);
    push(S, 2);
    push(S, 9);

    printInfo(S);
    cout << "balik stack" << endl;
    balikStack(S);
    printInfo(S);
}
```
### Output Unguided 1 :

##### Output 
![Screenshot Output Unguided 1_1](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

Pada bagian ini program membuat sebuah stack kosong, lalu memasukkan empat angka (3, 4, 2, 9) menggunakan operasi push. Setelah itu isi stack ditampilkan dari top ke bottom. Kemudian program memanggil fungsi balikStack(), yang membalik urutan isi stack dengan bantuan stack sementara. Hasil akhirnya adalah tampilan stack dengan urutan yang sudah terbalik. Bagian ini menunjukkan cara dasar kerja push, print, dan proses pembalikan stack.

### Soal 2
Tambahkan prosedur pushAscending pushAscending(in/out S: Stack, in x: integer)

```C++
void latihan2() {
    Stack S;
    createStack(S);

    pushAscending(S, 3);
    pushAscending(S, 3);
    pushAscending(S, 2);
    pushAscending(S, 4);
    pushAscending(S, 8);
    pushAscending(S, 9);

    printInfo(S);
    cout << "balik stack" << endl;
    balikStack(S);
    printInfo(S);
}
```
### Output Unguided 2 :

##### Output 
![Screenshot Output Unguided 2_1](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

Di nomor ini, angka dimasukkan ke stack tetapi dengan aturan ascending. Artinya, setiap kali ada angka baru masuk, program akan menyisipkannya pada posisi yang membuat isi stack tetap urut dari kecil ke besar. Proses ini memakai stack sementara untuk menahan elemen yang lebih besar sampai posisi yang tepat ditemukan. Setelah semua angka dimasukkan, isi stack ditampilkan, lalu dibalik menggunakan balikStack() seperti sebelumnya. Bagian ini menunjukkan bagaimana stack bisa dipakai untuk menyortir data secara bertahap.

### Soal 3
Tambahkan prosedur getInputStream(in/out S: Stack)

```C++
void latihan3() {
    Stack S;
    createStack(S);

    cout << "Masukkan input: ";
    getInputStream(S); 
    printInfo(S);
    cout << "balik stack" << endl;
    balikStack(S);
    printInfo(S);
}

```
### Output Unguided 3 :

##### Output 
![Screenshot Output Unguided 3_1](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

Pada nomor ini program membaca input karakter dari user, lalu hanya mengambil angka yang muncul (karakter lain diabaikan). Setiap angka yang terbaca langsung dimasukkan ke stack. Setelah input selesai, isi stack ditampilkan dari top ke bottom. Kemudian stack dibalik menggunakan balikStack() dan ditampilkan kembali. Bagian ini memperlihatkan bagaimana stack bisa digunakan untuk menyimpan data dari input stream dan bagaimana urutan datanya berubah setelah dibalik.

## Kesimpulan
Stack terbukti menjadi struktur data yang efektif untuk menangani data yang membutuhkan proses dengan urutan LIFO. Melalui percobaan yang dilakukan, terlihat bahwa operasi sederhana seperti push dan pop bisa dikembangkan menjadi fungsi yang lebih kompleks, seperti membalik isi stack, menjaga data tetap terurut saat dimasukkan, dan membaca input karakter satu per satu. Semua percobaan menunjukkan bahwa prinsip dasar stack tetap konsisten meskipun operasinya berbeda-beda. Secara keseluruhan, penggunaan stack mempermudah pengaturan urutan data dan cocok untuk berbagai kebutuhan pemrosesan yang memerlukan pengaksesan elemen terakhir terlebih dahulu.

## Referensi
[1] Juliansyah, N., Sari, S. Y., & Dristyan, F. (2024). Optimasi Struktur Data Stack dan Queue Menggunakan Array Dinamis. Fusion: Journal of Research in Engineering, Technology and Applied Sciences, 1(2), 90-97. 
<br>[2] Utami, E., Kom, M., Dhuhita, W. M. P., Kom, S., & Kom, M. (2017). Langkah Mudah Belajar Struktur Data Menggunakan C/C++. Elex Media Komputindo.
<br>...
