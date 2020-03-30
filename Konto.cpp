#include "Konto.h"
#include <fstream>
using namespace std;

// constructor
Konto::Konto() {
	this->saldo = 0;
}

// getter
double Konto::getSaldo() { return this->saldo; }

// setter
void Konto::setSaldo(double newSaldo) { this->saldo = newSaldo; }

void Konto::bezahlen(const double& betrag) {
	this->saldo -= betrag;
	fstream fout;
	fout.open("OUT_file.txt", ios::app);
	fout << "OUT " << betrag << endl;
	fout.close();

}

void Konto::einzahlen(const double& betrag) {
	this->saldo += betrag;
	fstream f;
	f.open("OUT_file.txt", ios::app);
	f << "IN " << betrag << endl;
	f.close();
}

double Konto::kontostand() {
	return this->saldo;
}