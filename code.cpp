#include <iostream>
#include <ctime>
using namespace std;
int main() {

	int random, tahmin;
	srand(time(NULL));
	random = rand() % 100;
	
	for (;;) {
		cout << endl <<"tahmininiz:";
		cin >> tahmin;

		if (tahmin > random) {
			cout << "tuttugum sayi daha kucuk"<< endl;
		}
		else if (tahmin < random) {
			cout << "tuttugum sayi daha buyuk"<< endl;
		}
		else if (random == tahmin ) {
			cout << "dogruuu";
			exit(0);
		}
		
	}
	}
