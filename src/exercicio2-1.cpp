#include <iostream>
using namespace std;
int main(void)
{
    int val[100], cont[20] = {0}, i = 0, maior[20] = {0}, max = 0, min = 100;
    srand(time(NULL));
    cout << "Numero aleatorios de 1 a 20:" << endl;

    for (int i = 0; i < 100; i++)
    {
        val[i] = 1 + rand() % 20;
        cout << val[i] << " " << endl;
        cont[val[i] - 1]++;
    }
    cout << "Numero de vezes que cada numero aparece:" << endl;
    for (int i = 0; i < 20; i++)
    {
        cout << i + 1 << " -> \t" << cont[i];
        for (int j = 0; j < cont[i]; j++)
        {
            cout << "#";
        }
        cout << endl;
    }

    for (int i = 0; i < 20; i++)
    {

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