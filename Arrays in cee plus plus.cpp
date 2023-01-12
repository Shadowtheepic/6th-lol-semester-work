#include<iostream>
#include<random>
using namespace std;

int main() {

	int hi[10];
	int empty[5];
	int buffer2 = 0;
	cin >> empty[0];

	for (int i = 0; i < 10; i++) {
		int rando = rand() % 100 + 1;
		hi[i] = rando;
		cout << hi[i] << " ";
		buffer2 += hi[i];
	}

	cout << "ballin about " << hi[1] << " times" << endl;

	for (int i = 0; i < 9; i++) {
		if (hi[i] > hi[i + 1]) {
			int buffer = hi[i];
			hi[i] = hi[i + 1];
			hi[i + 1] = buffer;
		}
	}

	cout << hi[9] << " is the biggest numba" << endl;
	cout << buffer2 / 10 <<  " is the average" << endl;
}
