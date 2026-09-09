#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int limiteInferior, limiteSuperior, intentosMaximos;

    cout << "--- BIENVENIDO A JBGAMES: ADIVINA EL NUMERO ---" << endl;
    cout << "Ingrese el limite inferior: ";
    cin >> limiteInferior;
    cout << "Ingrese el limite superior: ";
    cin >> limiteSuperior;
    cout << "Ingrese los intentos maximos: ";
    cin >> intentosMaximos;

    int numeroSecreto = limiteInferior + rand() % (limiteSuperior - limiteInferior + 1);

    int intentoUsuario;
    int contadorIntentos = 0;

    cout << "\n¡El juego ha comenzado!" << endl;

    // Bucle simplificado: solo evalua la cantidad de intentos
    while (contadorIntentos < intentosMaximos) {
        contadorIntentos++;
        cout << "\nIntento " << contadorIntentos << " de " << intentosMaximos << ". Ingrese su numero: ";
        cin >> intentoUsuario;

        if (intentoUsuario == numeroSecreto) {
            cout << "¡Felicidades! ¡Has adivinado el numero secreto!" << endl;
            break; // <--- Rompe el ciclo while y sale inmediatamente
        } else if (intentoUsuario < numeroSecreto) {
            cout << "El numero secreto es MAYOR." << endl;
        } else {
            cout << "El numero secreto es MENOR." << endl;
        }
    }

    // Si el contador llego al limite y el ultimo intento no fue el correcto
    if (intentoUsuario != numeroSecreto) {
        cout << "\n¡Juego terminado! Has agotado tus intentos. El numero secreto era: " << numeroSecreto << endl;
    }

    return 0;
}
