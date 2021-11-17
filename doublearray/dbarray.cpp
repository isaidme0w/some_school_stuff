#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <time.h>

using namespace std;

int tab[5][5];

void max() {
	int max=0;
	for(int i=0;i<5;i++) {
		if(tab[i][i]>max) max = tab[i][i];
	}
	cout << "Max number in diagonal is " << max << endl;
	max = 0;
	
	for(int i=0;i<4;i++) {
		for(int j=4;j>i;j--) {
			if(tab[i][j]>max) max = tab[i][j];
		}
	}
	cout << "Max number in the up corner is " << max << endl;
	max = 0;
	
	for(int i=1;i<5;i++) {
		for(int j=0;j<i;j++) {
			if(tab[i][j]>max) max = tab[i][j];
		}
	}
	cout << "Max number in the down corner is " << max << endl;
}

void howmany0() {
	int hm0=0;
	for(int i=0;i<5;i++) {
		if(tab[i][i]==0) hm0++;
	}
	cout << "There are " << hm0 << " zero(s) in diagonal" << endl;
	hm0 = 0;
	
	for(int i=0;i<4;i++) {
		for(int j=4;j>i;j--) {
			if(tab[i][j]==0) hm0++;
		}
	}
	cout << "There are " << hm0 << " zero(s) in the up corner" << endl;
	hm0 = 0;
	
	for(int i=1;i<5;i++) {
		for(int j=0;j<i;j++) {
			if(tab[i][j]==0) hm0++;
		}
	}
	cout << "There are " << hm0 << " zero(s) in the down corner" << endl;
}

int main() {
	srand(time(NULL));
	for(int i=0;i<5;i++) {
		for(int j=0;j<5;j++) {
			tab[i][j] = rand()%10;
			cout << tab[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	howmany0();
	max();
	return 0;
}
