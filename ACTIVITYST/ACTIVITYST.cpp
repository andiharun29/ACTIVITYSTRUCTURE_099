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

	