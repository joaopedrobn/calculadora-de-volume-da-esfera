#include <iostream>
#include <cmath> // Para usar a função pow()

using namespace std;

int main() {
    double raio, volume;

    cout << "Digite o valor do raio da esfera: ";
    cin >> raio;

    // Calculando o volume da esfera
    volume = (4.0 / 3.0) * 3.14159 * pow(raio, 3);

    cout << "O volume da esfera e: " << volume << endl;

    return 0;
}
