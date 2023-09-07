#include <iostream>
#include <cstring>
using namespace std;
int main(void)
{
    srand(time(NULL));
    char palavra1[11], palavra2[11];
    for (int i = 0; i < 10; i++)
    {
        palavra1[i] = 'a' + rand() % ('z' - 'a');
        palavra2[i] = 'a' + rand() % ('z' - 'a');
    }
    //Finaliza a string
    palavra1[10] = '\0';
    palavra2[10] = '\0';
    //Transforma a primeira letra em maiuscula
    palavra1[0] = toupper(palavra1[0]);
    palavra2[0] = toupper(palavra2[0]);

    cout <<"\t Strings em ordem alfabetica: " << endl;
    if (strcmp(palavra1, palavra2) == 0)
    {
        cout << "1) \t" << palavra1 << endl;
    cout << "2) \t" << palavra2 << endl;
    }
    else if (strcmp(palavra1, palavra2) < 0)
    {
        cout << "1) \t" << palavra1 << endl;
    cout << "2) \t" << palavra2 << endl;
    }
    else
    {
    cout << "2) \t" << palavra2 << endl;
       cout << "1) \t" << palavra1 << endl;
    }
    return 0;
}