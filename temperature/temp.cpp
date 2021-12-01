#include <iostream>

using namespace std;

int main() {
	float max=0,min;
	int year,mnth;
	float temp[4][14] = {
          {1779,-4.9,2.2,3.8,9.5,15.4,16.4,17.9,19.5,14.7,9.3,4.1,1.4,0},
          {1780,-5.1,-4.3,4.4,5.9,14.2,17.2,19.4,17.9,13.1,9.4,2.8,-4.6,0},
          {1781,-4.0,-1.9,1.5,9.1,13.8,19.2,20.1,22.8,16.2,6.0,4.0,-3.6,0},
          {1782,-1.6,-6.2,0.9,7.3,14.1,17.8,20.3,18.3,13.4,6.4,0.3,-3.1,0}
    };
    
    for(int i = 0; i < 4; i++) {
    	for(int j = 0; j < 13; j++) {
    		cout << temp[i][j] << " ";
		}
		cout << endl;
	}
	
	cout << endl;
	
	for(int i=0;i<4;i++) {
		for(int j=1; j<13; j++) {
			temp[i][13] += temp[i][j];
		}
		temp[i][13] /= 12;
		if(max<temp[i][13]) {
			max = temp[i][13];
		}
		min = max;
	}
	
	for(int i=0;i<4;i++) {
		if(temp[i][13]<min) {
			min = temp[i][13];
		}
	}
	
	cout << "Lowest average temperature: " << min << endl;
	
	if(temp[0][7] < temp[1][7]) {
		if(temp[1][7] < temp[2][7]) {
			if(temp[2][7] < temp[3][7]) {
				cout << "Temperature in July from year to year is higher" << endl;
			}
			else {
				cout << "Temperature in July from year to year is not higher" << endl;
			}
		}
		else {
			cout << "Temperature in July from year to year is not higher" << endl;
		}
	}
	else {
		cout << "Temperature in July from year to year is not higher" << endl;
	}
	
	cout << "Type year: ";
	cin >> year;
	cout << "Type month: ";
	cin >> mnth;
	
	if(year>=1779&&year<=1782) {
		if(mnth>=1&&mnth<=12) {
			switch(year) {
				case 1779: {
					cout << "Temperature is " << temp[0][mnth] << endl;
					break;
				}
				case 1780: {
					cout << "Temperature is " << temp[1][mnth] << endl;
					break;
				}
				case 1781: {
					cout << "Temperature is " << temp[2][mnth] << endl;
					break;
				}
				case 1782: {
					cout << "Temperature is " << temp[3][mnth] << endl;
					break;
				}
			}
		}
		else {
			cout << "Incorrect month" << endl;
		}
	}
	else {
		cout << "Incorrect year" << endl;
	}
	
	return 0;
}
