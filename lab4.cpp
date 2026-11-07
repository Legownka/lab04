#include <iostream>
#include <iomanip>
using namespace std;
//------------------------------------

void imie(string im) { //zad1
	cout << "Twoje imie to " << im << endl;
}
//------------------------------------

void tab(); //zad2
void tab() {
	int n = 10;
	for (int a = 1; a<=n; a++){
		for (int b = 1; b <= n; b++) {
			cout << a << "\t*\t" << b << "\t=\t" << a * b << endl;
		}
	}
}
//------------------------------------

int jed(int a, int b) { //zad3
	if (a > b) {
		cout << a << " jest wieksze od "<< b << endl;
	}
	else {
		cout << b << " jest wieksze od "<< a << endl;
	}
	return 0;
}
	int dwa(int a, int b) {
		if (a > b) { 
			cout << "Wieksza wartosc wynosi "<< a << endl;
		}
		else {
			cout <<"Wieksza wartosc wynosi "<< b << endl;
		}
		return 0;
	}
	//------------------------------------

	int one(int a, int b, int c) { //zad4
		if ((a < b) && (a < c)) {
			cout << "Wartosc najmniejsza to wartosc A" << endl;
		}
		else if ((b < a) && (b < c)) {
			cout << "Wartosc najmniejsza to wartosc B " << endl;
		}
		else if ((c < a) && (c < b)) {
			cout << "Wartosc najmniejsza to wartosc C"  << endl;
		}
		return 0;
}
	int two(int a, int b, int c) {
		if ((a < b) && (a < c)) {
			cout << "Wartosc najmniejsza: " << a << endl;
		}
		else if ((b < a) && (b < c)) {
			cout << "Wartosc najmniejsza: " << b << endl;
		}
		else if ((c < a) && (c < b)) {
			cout << "Wartosc najmniejsza " << c << endl;
		}
		return 0;
	}
	//------------------------------------

	float pole(float a, float h) { //zad5
		double p;
		p = (a * h) / 2;
		cout << "Pole wynosi " << fixed << setprecision(2) << p << endl;
		return p;
	}
	//------------------------------------

	int liczba(int n) { //zad6
		int i = 0;
		while (i<=n){
			i++;
			if (n%i == 0){
				cout << i << endl;
			}
		}
		return 0;
	}
	//------------------------------------

	float waga(float a, float b) { //zad7
		float A;
		float B;
		cout << "Podaj wage wartosci a " << endl;
		cin >> A;
		cout << "Podaj wage wartosci b " << endl;
		cin >> B;
		float srednia;
		srednia = (a * A + b * B) / 2;
		cout << "Srednia wazona wynosi " << srednia << endl;
		return 0;

	}
	//------------------------------------

	float tro(float a, float b) { //zad8
		float c;
		c =sqrt ( a * a + b * b);
		cout << "Przeciwprostokatna wynosi " << c << endl;
		return 0;
	}
	float dod(float a, float b) {
		cout << a << "+" << b << "=" << a + b << endl;
		return 0;
	}
	float ode(float a, float b) {
		cout << a << "-" << b << "=" << a - b << endl;
		return 0;
	}
	float mno(float a, float b) {
		cout << a << "*" << b << "=" << a * b << endl;
		return 0;
	}
	float dzi(float a, float b) {
		if (b == 0) {
			cout << "Nie mozna dzielic przez 0" << endl;
			return 0;
		}
		else {
			cout << a << "/" << b << "=" << a / b << endl;
			return 0;
		}
	}
	//------------------------------------

	float suma1(float a, float b) { //zad10
		cout << a << "+" << b << "=" << a + b << endl;
		return 0;
	}
	float suma2(float a, float b) {
		cout <<  a + b << endl;
		return 0;
	}
	//------------------------------------

	float obwod(float x, float y) { //zad11
		cout << "Obwod wynosi: " << 2* x + 2 * y << endl;
		return 0;
	}
	//------------------------------------

	void obj() { //zad12
		float a, b, c;
		cout << "Podaj po kolei krawedzie prostpodaloscianu: " << endl;
		cin >> a;
		cin >> b;
		cin >> c;
		cout << "Objetosc wynosi " << a * b * c << endl;
	}
	
	//------------------------------------

	void pot() { //zad13
		int a, b, i, h;
		h = 1;
		cout << "Podaj liczbe a " << endl;
		cin >> a;
		cout << "Podaj liczbe b " << endl;
		cin >> b;
		for (i = 0; i < b; i++) {
			h *= a;
		}
		cout << h<< endl;
	}


	//------------------------------------

	int szn(int a) { //zad16
		if ((a < 0) || (a > 10)) {
			cout << "Nie ma takiego numerka" << endl;
		}
		else {
			int k;
			k = 0;
			for (int i = 0; i <= 10; i++) {
				int los = rand() % 10 + 1;
				cout << los << endl;
				if (los == a) {
					k++;
				}
			}
			cout << "Szczesliwy numerek pojawil sie " << k << " razy" << endl;

		}
		return 0;

	}

	//------------------------------------

	float parz() { //zad17
		for (int i = 0; i <= 100; i++) {
			if (i % 2 == 0) {
				cout << i << "/2 ="<< i / 2 << endl;
			}
		}
		return 0;
	}
	float nparz() {
		for (int i = 0; i <= 100; i++) {
			if (i % 2 != 0) {
				cout << "("<< i<< "-1) /2 = "<<  (i - 1) / 2 << endl;
			}
		}
		return 0;
	}

	//------------------------------------

	int sck(int a) { //zad18
		if ((a % 2 == 0) && (a % 3 == 0)) {
			cout << "0" << endl;
			return 0;
		}
		else if (a % 2 == 0) {
			cout << a * a << endl;
			return 0;
		}
		else if (a % 3 == 0) {
			cout << a * a * a << endl;
			return 0;
		}
	}



int main() {
	//zad1
	/*string i;
	cout << "Podaj swoje imie " << endl;
	cin >> i;
	imie(i);*/

	//------------------------------------

	//zad2
	//tab();
	// 
	//------------------------------------


	//zad3
	/*int c, d;
	cout << "podaj a " << endl;
	cin >> c;
	cout << "Podaj b " << endl;
	cin >> d;
	jed(c, d);
	dwa(c, d);*/

	//------------------------------------

	//zad4
	
	//int A, B, C;
	//cout << "Podaj a" << endl;
	//cin >> A;
	//cout << "Podaj b" << endl;
	//cin >> B;
	//cout << "Podaj c" << endl;
	//cin >> C;
	//one(A, B, C);
	//two(A, B, C);
		
	//------------------------------------


	//zad5
	/*float b, c;
	cout << "Podaj podstawe " << endl;
	cin >> b;
	cout << "Podaj wysokosc " << endl;
	cin >> c;
	double p2 = pole(b, c);
	cout << "Podwojona wartosc pola " << fixed << setprecision(2) << 2*p2 << endl;*/

	//------------------------------------

	//zad6
	/*int N;
	cout << "Podaj n " << endl;
	cin >> N;
	if (N < 0) {
		cout << "n ma byc wieksze od 0" << endl;
	}
	else {
		liczba(N);
	}*/

	//------------------------------------

	//zad7
	/*float c, d;
	cout << "Podaj wartosc a " << endl;
	cin >> c;
	cout << "Podaj wartosci b " << endl;
	cin >>d;
	waga(c, d);*/

	//------------------------------------

	//zad8
	//int A, B;
	//cout << "Podaj przyprostokatna a " << endl;
	//cin >> A;
	//cout << "Podaj przyprostokatna b " << endl;
	//cin >> B;
	//tro(A, B);

	//------------------------------------

	//zad9
	/*float A, B;
	string dzialanie;
	cout << "Podaj liczbe a:" << endl;
	cin >> A;
	cout << "Podaj liczbe b:" << endl;
	cin >> B;
	cout << "Jakie dzialanie chcesz wykonac?" << endl;
	cin >> dzialanie;
	if (dzialanie == "+") {
		dod(A, B);
	}
	else if (dzialanie == "-") {
		ode(A, B);
	}
	else if (dzialanie == "*") {
		mno(A, B);
	}
	else if (dzialanie == "/") {
		dzi(A, B);
	}*/

	//------------------------------------

	//zad10
	//float A, B;
	//cout << "Podaj liczbe a:" << endl;
	//cin >> A;
	//cout << "Podaj liczbe b:" << endl;
	//cin >> B;
	//suma1(A, B);
	//suma2(A, B);

	//------------------------------------

	//zad11
	/*float x, y;
	cout << "Podaj miare boka x:" << endl;
	cin >> x;
	cout << "Podaj miare boka y:" << endl;
	cin >> y;
	obwod(x, y);*/

	//------------------------------------

	//zad12
//obj();

	//------------------------------------

	//zad13
//pot();

//------------------------------------
//zad16
//int A;
//cout << "Podaj swoj szczesliwy numerek " << endl;
//cin >> A;
//szn(A);

//------------------------------------

//zad17
//parz();
//cout << "\n\n\n" << endl;
//nparz();

//------------------------------------

//zad18
//int h;
//cout << "Podaj liczbe" << endl;
//cin >> h;
//sck(h);

}