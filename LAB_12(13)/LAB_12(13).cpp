#include <iostream>
#include <windows.h>
#include <ctime>
#include <cstdlib>

using namespace std;

int sumDigits(int K, int p) {

	SetConsoleOutputCP(1251);

	int sum = 0;
	while (K != 0) {

		sum += K % p;
			K /= p; 
	}
	return sum;
}
	
int main() {
	SetConsoleOutputCP(1251);
	
	int size = 5;

    int* numbers = new int[size];
    srand(time(0));
    for (int i = 0; i < size; i++) {
        numbers[i] = rand() % 1000;
    }

    cout << "числа:";
    for (int i = 0; i < size; i++) {
        cout << " " << numbers[i];
    }
    cout << endl;

	int p = 10; 

	for (int i = 0; i < 5; i++) {
		cout << "Сумма цифр числа " << numbers[i] << " равна " << sumDigits(numbers[i], p) << endl;
	}

	return 0;
}
