#include <iostream>

using namespace std;

void inseition(int n, int tab[]) {
    int i, k, elem;
    for(int i=1;i<n;i++) {
        elem = tab[i];
        k = i-1;
        while(k>=0 && tab[k]>elem)
        {
            tab[k+1] = tab[k];
            k--;
        }
        tab[k+1] = elem;
    }
}

int main() {
    int n=10;
    int tab[n];
    srand(time(NULL));
    for(int i=0;i<10;i++) {
        tab[i] = 1+rand()%(9-1+1);
        cout << tab[i] << " ";
    }
    cout << endl << endl;

    inseition(n,tab);

    for(int i=0;i<n;i++) {
        cout << tab[i] << " ";
    }
    cout << endl;

    return 0;
}