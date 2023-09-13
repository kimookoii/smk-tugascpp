#include <iostream>

using namespace std;


int main(){

    // deklarasi angka1 angka2
	int a;
	int b;
	
	// in 1 in 2
	cout << "masukkan angka 1 = " << endl;
    cin >> a;
	
	cout << "masukkan angka 2 = " << endl;
    cin >> b;
	
	// pembatas
	cout << endl << endl;
	
	// penjumlahan
    int penjumlahan = a + b;
	cout << a << " + " << b << " = " << penjumlahan << endl;
    cout << "penjumlahan dari "<< a << " dengan " << b << " adalah " << penjumlahan << endl << endl;
	
	// pengurangan
    int pengurangan = a - b;
    cout << a << " - " << b << " = " << pengurangan << endl;
	cout << "pengurangan dari "<< a << " dengan " << b << " adalah " << pengurangan << endl << endl;
	
	// perkalian
    int perkalian = a * b;
    cout << a << " * " << b << " = " << perkalian << endl;
    cout << "perkalian dari "<< a << " dengan " << b << " adalah " << perkalian << endl << endl;
	
	// pembagian
    int pembagian = a / b;
    cout << a << " / " << b << " = " << pembagian << endl;
    cout << "pembagian dari "<< a << " dengan " << b << " adalah " << pembagian << endl << endl;
    
    return 0;
    
}
