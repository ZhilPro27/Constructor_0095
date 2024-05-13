#include <iostream>
#include <string>
using namespace std;

class Mahasiswa{
    private:
        static int nim;
    
    public:
        int id;
        string nama;

        void setID();
        void printAll();

        static void setNim(int pNim) { nim = pNim; }
        static int getNim() { return nim; }

        Mahasiswa(string pnama):nama(pnama){
            setID();
        }
};

int Mahasiswa::nim = 100;

void Mahasiswa::setID(){
    id = ++nim;
}

void Mahasiswa::printAll(){
    cout << "ID     = " << id << endl;
    cout << "Nama   = " << nama << endl;
    cout << endl;
}

int main(){
    Mahasiswa mhs1("Lia Kurnia");
    Mahasiswa mhs2("Asroni");

    Mahasiswa::setNim(9); // mengakses nim melalui static member function "setnim"
    Mahasiswa mhs3("Andi Kurniawan");
    Mahasiswa mhs4("Joko Purbo");

    mhs1.printAll();
    mhs2.printAll();
    mhs3.printAll();
    mhs4.printAll();

    cout << "akses di luar object = " << Mahasiswa::getNim() << endl; //mengakses nim

    return 0;
}