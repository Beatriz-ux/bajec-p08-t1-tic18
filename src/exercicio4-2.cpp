#include <iostream>
#include <cstring>
using namespace std;
int main(void)
{
    srand(time(NULL));
    char palavras[10][11];
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {

            palavras[i][j] = 'a' + rand() % ('z' - 'a');
        }
        palavras[i][10] = '\0';
    }

    for (int i = 0; i < 10; i++)
    {
        palavras[i][0] = toupper(palavras[i][0]);
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {

            cout << palavras[i][j];
        }
        cout << endl;
    }

    return 0;
}