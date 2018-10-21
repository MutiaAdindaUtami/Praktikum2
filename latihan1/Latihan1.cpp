#include<iostream>

using namespace std;

int main() {
    int A, B, C;

    cout << "masukkan bilangan 1: ";
    cin >> A;

    cout << "masukkan bilangan2: ";
    cin >> B;

    cout << "masukkan bilangan3: ";
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
