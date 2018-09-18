

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char refran[200];
    char *puntero, coma = ',';
    int p1, p2;
    
    cout << "Ingresa un refran! \n";
    cin >> refran;
    
    puntero = strchr(refran, coma);
    
    p1 = strlen(puntero) - 1;
    
    cout << "Total: " << strlen(refran) << "\n";
    cout << "Parte 1: " << strlen(refran) - p1 << "\n";
    
    return 0;
}
