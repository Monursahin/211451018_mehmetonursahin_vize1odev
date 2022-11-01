#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;


void katbul(int toplam, int kat1, int kat2);

int main() {
    int toplam, kat1, kat2;
    
    toplam = 0;
    kat1 = 3;
    kat2 = 5;
    katbul(toplam, kat1, kat2);
    return 0;
}

void katbul(int toplam, int kat1, int kat2) {
    int i;
    
    i = 1;
    for (i = 1; i <= 1000; i++) {
        if (i % kat1 == 0 || i % kat2 == 0) {
            toplam = toplam + i;
        }
    }
    cout << "1000'in değerinin altındaki 3 ve 5 in katlarının toplamı " << toplam << endl;
}
