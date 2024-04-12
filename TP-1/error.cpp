#include <iostream>

/*
Ce fichier contient des erreurs
Compilez le avec les options -Wall et -Wextra
Corrigez les erreurs et les "warnings"
*/

using namespace std;

int main(){
	cout << "Division calculator " << endl;
	// this is a division calculator
	
	int a, b;
	
	cout << "Enter a value 1: ";
	cin >> a;
	
	cout << "Enter a value 2: ";
	cin >> b;
	
	cout << "The result : " << a/b << endl;
	
	return 0;
	
}