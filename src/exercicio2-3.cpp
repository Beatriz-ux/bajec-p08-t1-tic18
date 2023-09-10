#include <iostream>

using namespace std;

int main(void)
{
    float notas[15] = {0}, notas2[15] = {0}, media[15] = {0};
    cout << fixed;
    cout.precision(2);
    for (int i = 0; i < 15; i++)
    {
        notas[i] = ((float)rand() / RAND_MAX) * 10;
        notas2[i] = ((float)rand() / RAND_MAX) * 10;
        media[i] = (notas[i] + notas2[i]) / 2;
    }
    cout << "\t\tDESEMPENHO DOS ALUNOS" << endl;
    cout << "--\t"
         << "n1\t"
         << "n2\t"
         << "desempenho\t"
         << "media\t" << endl;
    for (int i = 0; i < 15; i++)
    {
        cout << "[" << i + 1 << "]"
             << "\t" << notas[i] << "\t" << notas2[i] << "\t";
        if (notas[i] > notas2[i])
        {
            cout << "piorou  ";
        }
        else if (notas[i] < notas2[i])
        {
            cout << "melhorou ";
        }
        else
        {
            cout << "manteve ";
        }
        cout << "\t" << media[i] << endl;
    }
    return 0;
}