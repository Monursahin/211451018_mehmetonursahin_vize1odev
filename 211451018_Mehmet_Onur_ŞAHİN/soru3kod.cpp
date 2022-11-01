#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;


int degistirme(int[] a, int p, int r);
void hizlisiralama(int[] a, int p, int r);
void kabarciksiralama(int[] a);


int main() {
    srand(time(0));  
    
    int a[10];
    int i, j;
    string hangialgoritma;
    
    for (i = 0; i <= 9; i++) {
        a[i] = rand() % 10000;
    }
    cout << "Secerek Sıralama için ==> A   Hızlı Sıralama için ==> B          " << endl;
    cin >> hangialgoritma;
    if (hangialgoritma == "A" || hangialgoritma == "a") {
        secereksiralama(a);
    }
    if (hangialgoritma == "B" || hangialgoritma == "b") {
        hizlisiralama(a, 0, 9);
        for (j = 0; j <= 9; j++) {
            cout << a[j] << endl;
        }
    }
    cout << " En hizli algoritma Hizli siralama algoritmasidir." << endl;
    return 0;
}

int degistirme(int[] a, int p, int r) {
    int i, tmp, x, j;
    
    x = a[r];
    i = p - 1;
    for (j = p; j <= r - 1; j++) {
        if (a[j] <= x) {
            i = i + 1;
            tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
        }
    }
    tmp = a[i + 1];
    a[i + 1] = a[r];
    a[r] = tmp;
    i = i + 1;
    
    return i;
}

void hizlisiralama(int[] a, int p, int r) {
    int q, j;
    
    if (p < r) {
        q = degistirme(a, p, r);
        hizlisiralama(a, p, q - 1);
        hizlisiralama(a, p + 1, r);
    }
}

void kabarciksiralama(int[] a) {
    int tmp, i, j;
    
    for (i = 0; i <= 9; i++) {
        for (j = 9; j >= i + 1; j--) {
            if (a[j - 1] > a[j]) {
                tmp = a[j - 1];
                a[j - 1] = a[j];
                a[j] = tmp;
            }
        }
    }
}


