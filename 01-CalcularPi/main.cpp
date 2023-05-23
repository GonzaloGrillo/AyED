#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    int iteracioncont = 0;
    double valorpi = 0;
    int valorpientero = 0;
    for(double contador = 0 ; (double(valorpientero) / 1000000) != 3.141592 ; contador++)
    {
        if(int(contador) % 2 == 0)
        {
            valorpi += ((1) / ((2 * contador) + 1));
            valorpientero = (valorpi * 4) * 1000000;
            iteracioncont++;
        }
        else
        {
            valorpi += ((-1) / ((2 * contador) + 1));
            valorpientero = (valorpi * 4) * 1000000;
            iteracioncont++;
        }
    }
    valorpi = valorpi * 4;
    cout << "El valor de Pi luego de " << iteracioncont << " iteraciones es de " << setprecision(7) << valorpi << endl;
    return 0;
}