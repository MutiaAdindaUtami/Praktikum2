# Praktikum2

## Latihan1.cpp : Program Menghitung Bilangan terbesar dari 3 Bilangan

**Alur Algoritma**

1. Mendeklarasikan variabel  `int A, B ,C` sebagai variabel input
2. Membaca input dari keyboard `cin >> A >> B >> C`
3. Membandingkan nilai variabel **A** dan **B**
4. Kondisi **True**, maka bandingkan nilai variabel **A** dengan **C**
5. Kondisi **False**, maka bandingkan nilai variabel **B** dengan **C**

**Flowchart Program**
![Flowchart](https://raw.githubusercontent.com/MutiaAdindaUtami/Praktikum2/master/latihan1/Flowchart1.png)

**code program lengkap:**
```c++
#include<iostream>

using namespace std;

int main() {
    int A, B, C;

    cout << "masukan bilangan 1: ";
    cin >> A;

    cout << "masukan bilangan 2: ";
    cin >> B;

    cout << "masukan bilangan 3: ";
    cin >> C;

    if (A > B) {
        if (A > C)
            cout << "bilangan terbesar adalah: " << A << endl;
        else
            cout << "bilangan terbesar adalah: " << C << endl;
    } else {
        if (B > C)
            cout << "bilangan terbesar adalah: " << B << endl;
        else
            cout << "bilangan terbesar adalah: " << C << endl;
    }
}
```


hasilnya
![ing](https://raw.githubusercontent.com/MutiaAdindaUtami/Praktikum2/master/latihan1/Screenshoot1.png)

## Latihan2.cpp : Program Menghitung Bilangan Terbesar dari 4 Bilangan
 
**Alur Algoritma

1. Mendeklarasikan variabel  `int A, B ,C ,D` sebagai variabel input
2. Membaca input dari keyboard `cin >> A >> B >> C >> D`
3. Membandingkan nilai variabel A dengan variabel B & C & D
4. Jika kondisi True maka cetaklah B
5. dan bandingkan nilai B dengan A,C & D
6. Jika kondisi True maka cetaklah B
7. dan variabel C dibandingkan lagi B,A & D
8. Jika kondisi True maka cetaklah C
9. dan jika kondisi False maka cetaklah D

**Flowchart Program**
![Flowchart](https://raw.githubusercontent.com/MutiaAdindaUtami/Praktikum2/master/latihan2/Flowchart2.png)

**code program lengkap:
```c++
#include<iostream>

using namespace std;

int main() {

    int A,B,C,D;

    cout << "Masukan bilangan 1: ";
    cin >> A;
    cout << "Masukan bilangan 2: ";
    cin >> B;
    cout << "Masukan bilangan 3: ";
    cin >> C;
    cout << "Masukan bilangan 4: ";
    cin >> D;

     if (A>B && A>C && A>D) cout << "Bilangan terbesar adalah = " << A << endl;
     else
        if (A > C)
            cout << "bilangan terbesar adalah: " << A << endl;
     if (B>A && B>C && B>D) cout << "Bilangan terbesar adalah = " << B << endl;
    else {
        if (C>A && C>B && C>D) cout << "Bilangan terbesar adalah = " << C << endl;
        else
            cout << "Bilangan terbesar adalah = " << D;
    }
}
```


hasilnya
![ing](https://raw.githubusercontent.com/MutiaAdindaUtami/Praktikum2/master/latihan2/Screenshoot2.png)