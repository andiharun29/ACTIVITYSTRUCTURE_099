#include <iostream>
using namespace std;

struct mahasiswa
{
	string nim;
	string nama;
	string alamat;
	int umur;
};

int main() {
	mahasiswa mhs, mhs2;

	mhs.nim = "20220140099";
	mhs.umur = 19;
	mhs.nama = "andi harun al rasyid";
	mhs.alamat = "kendari";

	cout << "masukkan NIM : ";
	cin >> mhs2.nim;
	cout << "masukkan umur : ";
	cin >> mhs2.umur;
	cout << "masukkan.nama : ";
	cin >> mhs2.nama;
	cout << "masukkan alamat : ";
	cin >> mhs2.alamat;

	cout << "NIM : " << mhs.nim;
	cout << "\numur : " << mhs.umur;
	cout << "\nnama : " << mhs.nama;
	cout << "\nalamat : " << mhs.alamat;

	cout << "\n\nNIM : " << mhs2.nim;
	cout << "\numur : " << mhs2.umur;
	cout << "\nnama : " << mhs2.nama;
	cout << "\nalamat : " << mhs2.alamat;

}