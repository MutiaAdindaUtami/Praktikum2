#include<iostream>

using namespace std;

int main()
{
    int A, B, C, D;
    cout << "masukkan bilangan 1: ";
    cin >> A;
    cout << "masukkan bilangan 2: ";
    cin >> B;
    cout << "masukkan bilangan 3: ";
    cin >> C;
    cout << "masukkan bilangan 4: ";
    cin >> D;

    if (A>B && A>C && A>D) cout << "bilangan terbesar = " << A << endl;
    else

    if (B>A && B>C && B>D) cout << "bilangan terbesar = " << B << endl;

    else {
        if (C>A && C>B && C>D) cout << "bilangan terbesar = " << C << endl;
        else
            cout << "bilangan terbesar = " << D;
    }
}
