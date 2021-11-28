#include <iostream>
#include <windows.h>

using namespace std;

int main() {
	
	SetConsoleTitleA("Hetman field generator");
	
	int field[8][8]={0},x,y,a;
	
	do {
		cout << "Number of row(s): ";
		cin >> x;
		cout << "Number of column(s): ";
		cin >> y;
	}
	while(x<0 || x>8 || y<0 || y>8);
	
	a = y;
	field[x][y] = 2;
	
	for(int i=x;i>0;i--)
	    field[i-1][y] = 1;
	
	for(int i=x;i<7;i++)
	    field[i+1][y] = 1;
	
	for(int i=y;i>0;i--)
	    field[x][i-1] = 1;
	
	for(int i=y;i<7;i++)
	    field[x][i+1] = 1;
	
	for(int i=x+1;i<8 && a>0;i++) {
		a--;
		field[i][a] = 1;
	}
	
	a = y;
	for(int i=x+1;i<8 && a<7;i++) {
		a++;
		field[i][a] = 1;
	}
	
	a = y;
	for(int i=x-1;i<=8 && a<7;i--) {
		a++;
		field[i][a] = 1;
	}
	
	a = y;
	for(int i=x-1;i<=8 && a>0;i--) {
		a--;
		field[i][a] = 1;
	}
	
	for(int i=0;i<8;i++) {
	    for(int j=0;j<8;j++) cout << field[i][j] << " ";
		cout << endl;
	}
	return 0;
}
