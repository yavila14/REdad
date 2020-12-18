#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int edad;
	cout <<"Digite Edad: ";
	cin >>edad;
	if ((edad>=10)&&(edad<=20)){
	cout <<"Su edad pertenece al rango de 10-20 ";
	}else {
	cout <<"Su edad no pertenece al rango de 10-20 ";	
	}
		
	return 0;
}
