#include <iostream>
#include <cmath>
int main() {
using namespace std;
    int a, b, c;
    cout<<"Este es un programa que encuentra todos los triples pitagoricos"<<endl;
    //Utilizamos bucles para iterar a traves de valores potenciales para los lados del triangulo a y b.
    for( a=1; a <= 100; a++){
        for(b=1; b <= 100; b++) {
            // Calculamos el tercer lado c usando la fórmula del teorema de Pitágoras
            c = sqrt(a * a + b * b);
            //ahora verificamos si a, b y c forman un triple pitagorico
            if (c * c == a * a + b * b && a + b + c <= 100) {
                //si se cumplen las condiciones, se imprime el triple pitagorico
                cout << a << " - " << b << " - " << c << endl;
            }
        }
        }
    return 0;

        }


