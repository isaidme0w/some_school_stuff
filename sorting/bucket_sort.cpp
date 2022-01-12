#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <time.h>

using namespace std;

void write( int tab[], int n ) {
	for( int i = 0; i < n; i++) cout << tab[i] << " ";
	cout << endl;
}

int main() {
	int n = 10;
	int tab[n];
	int min = 1;
	int max = 20;
	int a = max - min + 1;
	int count[a] = {0};
	
	srand( time( NULL ) );
	for( int i = 0; i < n; i++ ) tab[i] = min + rand() % ( a );
	write(tab, n);
	
	for( int i = min; i <= a; i++ ) {
		for( int j = 0; j < n; j++ ) {
			if( tab[j] == i ) count[i - 1]++;
		}
	}
	
	for( int i = 0; i < a; i++ ) {
		for ( int j = 0; j < count[i]; j++) cout << i << " ";
	}
	cout << endl;
	
	return 0;
}
