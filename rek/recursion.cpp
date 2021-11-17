#include <iostream>

using namespace std;

int f(int n)
{
    if(n==0) return 3;
    else return f(n-1)+2;
}

double potega_rek(int p, int w)
{
    if(w==0) return 1;
    else return p*potega_rek(p, w-1);
}

double silnia_rek(int n)
{
    if(n==1) return 1;
    else return n*silnia_rek(n-1);
}

long int fib_rek(int n)
{
    if(n==1||n==2) return 1;
    else return fib_rek(n-1)+fib_rek(n-2);
}

int nwd_rek(int a, int b)
{
    if(a==b) return a;
    else if(a<b) return nwd_rek(a,b-a);
    else return nwd_rek(a-b,b);
}

int main()
{
    int n,w;
    cout << "Podaj n: ";
    cin >> n;
    cout << "Wynik f: " << f(n) << endl;
    cout << "Wynik silnii: " << silnia_rek(n) << endl;
    cout << "Wynik fib: " << fib_rek(n) << endl;
    cout << "Podaj wykladnik: ";
    cin >> w;
    cout << "Wynik potegowania: " << potega_rek(n,w) << endl;
    cout << "Wynik NWD: " << nwd_rek(n,w) << endl;
    return 0;
}
