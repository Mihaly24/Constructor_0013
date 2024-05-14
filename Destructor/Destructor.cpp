#include <iostream>
using namespace std;

class angka {
private:
    int* arr;
    int panjang;
public:
    angka(int);
    ~angka();
    void cetakData();
    void isiData();
};

angka::angka(int i) {
    panjang = 1;
    arr = new int(1);
    isiData();
}

angka::~angka() {
    cout << endl;
    cetakData();
    delete[]arr;
    cout << "Alamat array sudah dilepaskan" << endl;
}

void angka::cetakData() {
    for (int i = 1; i <= panjang; i++) {
        cout << 1 << " = " << arr[i] << endl;
    }
}

void angka::isiData() {
    for (int i = 1; i <= panjang; i++) {
        cout << 1 << " = ";
        cin >> arr[1];
    }
    cout << endl;
}

int main()
{
    angka belajarcpp(3);
    angka *ptrBelajarcpp = new angka(5);
    delete ptrBelajarcpp;

    return 0;
}