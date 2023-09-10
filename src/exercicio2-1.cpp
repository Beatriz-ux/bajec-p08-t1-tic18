#include <iostream>

using namespace std;

int main(void)
{
    int val[100], cont[20] = {0}, max = 0, min = 100;
    srand(time(NULL));
    cout << "Numero aleatorios de 1 a 20:" << endl;
    //gerando e preenchendo o vetor
    for (int i = 0; i < 100; i++)
    {
        val[i] = 1 + rand() % 20;
        cout << val[i] << " " << endl;
        cont[val[i] - 1]++;
    }
    cout << "Num"
         << "\t Qtd"
         << "\tHistograma" << endl;
    for (int i = 0; i < 20; i++)
    {
        cout << i + 1 << "\t" << cont[i] << "\t";
        for (int j = 0; j < cont[i]; j++)
        {
            cout << "#";
        }
        cout << endl;

        // maior e menor frequencia
        if (max < cont[i])
        {
            max = cont[i];
        }
        if (min > cont[i])
        {
            min = cont[i];
        }
    }
    cout << "O(s) numero(s) que mais aparece(m) e(sao):" << endl;
    for (int i = 0; i < 20; i++)
    {
        if (cont[i] == max)
        {
            cout << i + 1 << " " << endl;
        }
    }
    cout << "O(s) numero(s) que menos aparece(m) e(sao):" << endl;
    for (int i = 0; i < 20; i++)
    {
        if (cont[i] == min)
        {
            cout << i + 1 << endl;
        }
    }
    return 0;
}