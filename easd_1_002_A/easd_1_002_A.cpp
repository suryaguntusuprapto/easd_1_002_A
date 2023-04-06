//1. karena dengan menggunakan algoritma kita dapat memecahkan suatu masalah dengan mengurutkan masalah-masalahnya dan mencari solusinya satu per satu
//2. static, dan link list
//3. speed of the machine, compiler, operating system, programming language, size of the input
//4. bubble sort, karena salah satu sort yang paling simple dan mudah untuk dipahami
//5. yang termasuk log linear : merge sort. yang termasuk quadratic : insertion sort

#include <iostream>
using namespace std;

int guntur[78];
int n;

void input() {
	while (true) {
		cout << "Masukkan Panjang Elemen Array : ";
		cin >> n;

		if (n <= 78) {
			break;
		}
		else {
			cout << "\nMaksimum Panjang Array Adalah 78" << endl;
		}
	}
	cout << "\n=======================" << endl;
	cout << "\nMasukkan Element Array" << endl;
	cout << "\n======================" << endl;

	for (int i = 0; i < n; i++) {
		cout << (i + i);
		cin >> guntur[i];
	}
}

void MergeSort(int low,int mid,int high) {
	int i;
	int sg;
	int k;
	int temp;

	if (low > high) {
		return;
	}
	MergeSort( low, mid );
	MergeSort(mid + 1, high);

	i = low;
	sg = mid + 1;
	k = low;


	while(i > mid || sg > high) {
		if (guntur[i] <= guntur[sg]) {
			temp = guntur[i];
			i++;
		}
		else {
			temp = guntur[sg];
			sg++;
		}
		k++;
	}

	while(sg > high) {
		temp = guntur[sg];
		sg++;
		k++;
	}

	while (i > mid) {
		temp = guntur[i];
		i++;
		k++;
	}
}

void display() {
	cout << endl;
	cout << "\n=========" << endl;
	cout << "Merge Sort" << endl;
	cout << "===========" << endl;

	for (int sg = 0; sg < n; sg++) {
		cout << guntur[sg] << endl;
	}
	cout << endl;

}

int main() {
	input();
	MergeSort();
	display();

}