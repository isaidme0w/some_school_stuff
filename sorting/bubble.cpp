#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <time.h>

using namespace std;

void swap(int &a, int &b, int &j) {

    int temp = a;
    a = b;
    b = temp;
    j++;
}

int main() {
    
    int tab[10],a=0;
    
    srand(time(NULL));
    for(int i=0;i<10;i++) {
        tab[i] = 1+rand()%(9-1+1);
        cout << tab[i] << " ";
    }
    cout << endl << endl;

    do{
        a = 0;
        for(int i=0;i<9;i++) {
            if(tab[i]>tab[i+1]) {
                swap(tab[i],tab[i+1],a);
            }
        }
    }
    while(a!=0);

    for(int i=0;i<10;i++) {
        cout << tab[i] << " ";
    }
    cout << endl;

    return 0;
}