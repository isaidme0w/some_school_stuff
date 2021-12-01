#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <time.h>

using namespace std;

int main() {
	int tab[10][10],sum=0;
	srand(time(NULL));
	for(int i=0;i<10;i++) {
		for(int j=0;j<10;j++) {
			tab[i][j] = rand()%(1+1);
			cout << tab[i][j] << " ";
		}
		cout << endl;
	}
	for(int i=0;i<10;i++) {
		sum += tab[i][i];
	}
	for(int i=9;i>=0;i--) {
		sum += tab[i][i];
	}
	cout << "summary: " << sum << endl;
	return 0;
}
