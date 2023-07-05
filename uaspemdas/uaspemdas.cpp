#include <iostream>
using namespace std;
class bidangDatar {
private:
	int x, y;
public:
	bidangDatar() {
		x = 0;
		y = 0;
	}
	virtual void input() {
	}
	virtual float Luas(int a) { 
		return 0; 
	}
	virtual float Keliling(int a) { 
		return 0; 
	}

	void setX(int a) {
		this->x = a;
	}
	int getX() {
		return x;
	}
	/*lengkapi disini*/
	void setY(int b) {
		this->y = b;
	}
	int getY() {
		return y;
	}
};

class Lingkaran :public bidangDatar { 
	/*lengkapi disini*/ 
	void input() {
		int r; 
		cout << "Masukkan jejari lingkaran : " << endl;
		cin >> r;
		setX(r);
	}

	float Luas(int r) {
		return 3.14 * r * r;
	}

	float Keliling(int r) {
		return 2 * 3.14 * r;
	}

	// Cek Ukuran

};

class Persegipanjang :public bidangDatar { 
	/*lengkapi disini*/ 
	void input() {
		int p;
		int l;
		cout << "Masukkan panjang : " << endl;
		cin >> p;
		setX(p);
		cout << "Masukkan lebar : " << endl;
		cin >> l;
		setY(l);
	}

	float Luas(int p, int l) {
		return p * l;
	}

	float Keliling(int p, int l) {
		return 2 * p * l;
	}

	// Cek Ukuran 

};

int main() { 
	/*lengkapi disini*/ 
	bidangDatar* bidang;
	Lingkaran lingkaran;
	Persegipanjang persegipanjang;
	char ch;
	int Luas;
	int Keliling;

	cout << "Lingkaran Dibuat" << endl;
	bidang = &lingkaran;
	bidang->input();
	cout << "Luas lingkaran : " << bidang->Luas(bidang->getX()) << endl;
	cout << "Keliling lingkaran : " << bidang->Keliling(bidang->getX()) << endl;

	cout << "\nPersegipanjang Dibuat" << endl;
	bidang = &persegipanjang;
	bidang->input();
	cout << "Luas persegipanjang : " << bidang->Luas(bidang->getX()) << endl;
	cout << "Keliling persegipanjang : " << bidang->Keliling(bidang->getX()) << endl;

	cout << "Apakah anda ingin mengulang program? (y/n) ";
	cin >> ch;
	while ((ch == 'y') || (ch == 'n'));

	return 0;
}