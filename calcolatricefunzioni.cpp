#include <iostream>
#include <conio.h>
using namespace std;

double moltiplicazione(double x, double y);
double somma(double x, double y);
double sottrazione(double x, double y);
double divisione(double x, double y);
void menu1();
void menu2();

void menu1() {
	cout << "\n++++++++++++++++++++++++++++++++\n";
	cout << "+   0. INSERISCI OPERANDI.     +\n";
	cout << "+   1. ADDIZIONE.              +\n";
	cout << "+   2. SOTTRAZIONE.            +\n";
	cout << "+   3. MOLTIPLICAZIONE.        +\n";
	cout << "+   4. DIVISIONE.              +\n";
	cout << "+   5. ESCI.                   +\n";
	cout << "++++++++++++++++++++++++++++++++\n";
}

void menu2() {
	cout << "\n\nCHE OPERAZIONE VUOI CHE ESEGUA?\n";
	cout << "\n++++++++++++++++++++++++++++++++\n";
	cout << "+   1. ADDIZIONE.              +\n";
	cout << "+   2. SOTTRAZIONE.            +\n";
	cout << "+   3. MOLTIPLICAZIONE.        +\n";
	cout << "+   4. DIVISIONE.              +\n";
	cout << "+   5. ESCI.                   +\n";
	cout << "++++++++++++++++++++++++++++++++\n";
}

int main() {
	system("CHCP 1252");
	system("cls");
	bool no_operands = false;
	char scelta = ' ';
	double x = 0, y = 0;
	menu1();
	cout << "\nSELEZIONA UNA VOCE DAL MENU': ";
	scelta = _getch();
	//cin >> scelta;
	while (scelta > '5') {
		system("cls");
		cout << "\nDEVI SCEGLIERE UNA VOCE DAL MENU'!\n";
		menu1();
		cout << "\nSELEZIONA UNA VOCE DAL MENU': ";
		cin >> scelta;
	}
	if ((scelta == '1') || (scelta == '2') || (scelta == '3') || (scelta == '4'))
		no_operands = true;

	if (no_operands) {
		system("cls");
		cout << "\n\nNON POSSO ESEGUIRE UN'OPERAZIONE SENZA GLI OPERANDI, PER FAVORE INSERISCI PRIMA GLI OPERANDI!\n";
		scelta = '20';
	}
	if (scelta == '0') {
		cout << "\nInsersici il primo operando: ";
		cin >> x;
		cout << "\nInsersici il secondo operando: ";
		cin >> y;
		menu2();
		cout << "\nSELEZIONA UNA VOCE DAL MENU': ";
		cin >> scelta;
	}
	switch (scelta) {
	case '1':
		cout << "IL RISULTATO DELL'ADDIZIONE è " << somma(x, y) << "\n";
		system("pause");
		return main();
	case '2':
		cout << "IL RISULTATO DELLA SOTTRAZIONE è " << sottrazione(x, y) << "\n";
		system("pause");
		return main();
	case '3':
		cout << "IL RISULTATO DELLA MOLTIPLICAZIONE è " << moltiplicazione(x, y) << "\n";
		system("pause");
		return main();
	case '4':
		divisione(x, y);
		cout << "IL RISULTATO DELLA DIVISIONE è " << divisione(x, y) << "\n";
		system("pause");
		return main();
	case '5':
		system("exit");
	}
}

double moltiplicazione(double x, double y) {
	double moltiplicazione;
	moltiplicazione = x * y;
	return moltiplicazione;
}

double somma(double x, double y) {
	double somma;
	somma = x + y;
	return somma;
}

double divisione(double x, double y) {
	double divisione;
	if (y == 0) {
		cout << "NON POSSO DIVIDERE PER ZERO!\n\n\n";
		system("pause");
		return main();
	}
	else {
		divisione = x / y;
		return divisione;
	}
}

double sottrazione(double x, double y) {
	double sottrazione;
	sottrazione = x - y;
	return sottrazione;
}