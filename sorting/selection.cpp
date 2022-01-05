#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <time.h>

using namespace std;

void selection( int (&tab)[], int k ) {
    int min_value,index,temp,count;
    for( int i = 0; i < k - 1; i++ ) {
        min_value = 0;
        count = 0;
        for( int j = i + 1; j < k; j++ ) {
            if( tab[j] > min_value  ) min_value = tab[j];
        }

        for( int j = i + 1; j < k; j++ ) {
            if( tab[j] < min_value ) {
                min_value = tab[j];
                index = j;
            }
        }

        swap(tab[index], tab[i]);
    }
}

int main() {

    int k = 10;
    int tab[k];

    srand(time(NULL));
    for( int i = 0; i < k; i++ ) {
        tab[i] = rand()%( 9+1 );
    }
    for( int i = 0; i < k; i++) {
        cout << tab[i];
    }
    cout << endl;

    selection( tab, k );
    
    for( int i = 0; i < k; i++) {
        cout << tab[i];
    }
    cout << endl;

    return 0;
}