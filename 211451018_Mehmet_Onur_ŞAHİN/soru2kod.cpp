#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;


int tektekkare();
int toplamininkaresi();

int main() {
    int sonuc, sonuc1, cikti;
    
    tektekkare();
    toplamininkaresi();
    sonuc = tektekkare();
    sonuc1 = toplamininkaresi();
    cikti = sonuc1 - sonuc;
    cout << "Sonuc " << cikti << endl;
    return 0;
}

int tektekkare() {
    int sonuc, n;
    
    n = 100;
    sonuc = (int) ((double) (n * (n + 1) * (2 * n + 1)) / 6);
    
    return sonuc;
}

int toplamininkaresi() {
    int sonuc1;
    
    sonuc1 = (int) ((double) (101 * 100) / 2 * ((double) (101 * 100) / 2));
    
    return sonuc1;
}

