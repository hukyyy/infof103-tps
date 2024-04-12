#include <iostream>
using namespace std;

int main() {
	cout << "Sum Calculator" << endl;
	
	int num1;
	int num2;
	
	cout << "Entrez un premier nombre : ";
	cin >> num1;
	cout << "Entrez un deuxieme nombre : ";
	cin >> num2;
	
	cout << "La somme des deux nombre est : " << num1 + num2 << endl;
	return 0;
}