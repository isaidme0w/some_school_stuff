#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <time.h>

using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    
    int n = 10;
    int tab[n];
    
    srand(time(NULL));
    for(int i=0;i<n;i++) {
        tab[i] = 1+rand()%(9-1+1);
        cout << tab[i] << " ";
    }
    cout << endl << endl;

    for(int i=n-1;i>0;i--) {
        for(int j=0;j<i;j++) {
            if(tab[j]>tab[j+1]) {
                swap(tab[j],tab[j+1]);
            }
        }
    }

    for(int i=0;i<10;i++) {
        cout << tab[i] << " ";
    }
    cout << endl;

    return 0;
}