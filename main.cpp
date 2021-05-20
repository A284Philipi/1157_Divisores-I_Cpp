#include <iostream>

using namespace std;

int main()
{
    int numero, i;
    cin >> numero;
    for (i = 1; i <= numero; i++){
        if (numero%i == 0){
            cout << i <<endl;
        }
    }
    return 0;
}
