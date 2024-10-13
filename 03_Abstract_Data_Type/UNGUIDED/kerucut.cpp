#include <iostream>
#include <cmath>
using namespace std;

class Kerucut {
private:
    double jariJari; 
    double tinggi;   

public:
    void TetapkanJariJari(double r) {
        jariJari = r;
    }

    void TetapkanTinggi(double t) {
        tinggi = t;
    }

    double DapatkanVolume() {
        return (1.0 / 3) * M_PI * jariJari * jariJari * tinggi;
    }

    double DapatkanLuasPermukaan() {
        double garisPelukis = sqrt((jariJari * jariJari) + (tinggi * tinggi));
        return M_PI * jariJari * (jariJari + garisPelukis);
    }
};

int main() {
    Kerucut kerucut;
    kerucut.TetapkanJariJari(7);  
    kerucut.TetapkanTinggi(10);

    cout << "Volume Kerucut: " << kerucut.DapatkanVolume() << endl;
    cout << "Luas Permukaan Kerucut: " << kerucut.DapatkanLuasPermukaan() << endl;

    return 0;
}
