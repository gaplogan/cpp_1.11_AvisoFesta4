#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    for (int j = 0; j < 5; j++)
    { //início do loop
        //escreve a frase
        cout << "Hoje vai ter festa na casa da Fabi" << endl;
    } //fim do loop

    return 0;
}