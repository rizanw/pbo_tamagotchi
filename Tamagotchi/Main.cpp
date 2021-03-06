// Tamagotchi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <vector>
#include "pch.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include "Kucing.h"
#include "Anjing.h"
#include "Kelinci.h"
#include <limits> 

using namespace std;

void header() {
	ifstream file("welcome.txt");
	cout << file.rdbuf() << endl;
	cout << "===========================================================" << endl;
	cout << "	Selamat Datang di Tamagotchi Console" << endl;
	cout << "			by Rizky Andre Wibisono" << endl;
	cout << "===========================================================" << endl;
}

int main(){
	int input;
	string nama;
	string warna;

	header();
	cout << endl << "press any key to start . . ." << endl;
	getchar();
	system("CLS");

	header();
	cout << "Beri nama untuk peliharaan mu : ";
	cin >> nama;
	system("CLS");

	header();
	while (1){
		cout << "Pilih jenis hewan peliharaanmu : " << endl;
		cout << "1. Kucing" << endl;
		cout << "2. Anjing" << endl;
		cout << "3. Kelinci" << endl;
		cout << endl;
		cout << "Saya memilih : ";
		cin >> input;

		if (input == 1) {
			Kucing kucing1(nama);
			kucing1.setStatHungry(40);
			kucing1.setStatHappy(0);
			system("PAUSE");
			system("CLS");
			kucing1.activities();
			break;
		}
		else if (input == 2) {
			Anjing anjing1(nama);
			anjing1.setStatHungry(40);
			anjing1.setStatHappy(20);
			system("PAUSE");
			system("CLS");
			anjing1.activities();
			break;
		}
		else if (input == 3) {
			Kelinci kelinci1(nama);
			kelinci1.setStatHungry(20);
			kelinci1.setStatHappy(0);
			system("PAUSE");
			system("CLS");
			kelinci1.activities();
			break;
		}
		else{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
			cout << "Coba pilih sesuai angka pilihan diatas!" << endl;
			system("PAUSE");
			system("CLS");
			
		}
	}
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
