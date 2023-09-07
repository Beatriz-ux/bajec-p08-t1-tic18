#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
    char data[11], temp[5],mesC[10];
    cout << "Digite a data no formato dd/mm/aaaa: ";
    cin >> data;
    int i = 0, j = 0, dia, mes, ano;
    while (data[i] != '/')
    {
        temp[i] = data[i];
        i++;
    }
    dia = atoi(temp);

    if (dia < 1 || dia > 31)
    {
        cout << "Data invalida nos digitos" << endl;
        return 1;
    }
    i++;
    while (data[i] != '/')
    {
        temp[j++] = data[i];
        i++;
    }
    i++;

    j = 0;
    mes = atoi(temp);
    cout << "mes" << mes << endl;

    if (mes < 1 || mes > 12)
    {
        cout << "Data invalida" << endl;
        return 1;
    }
    j = 0;
    while (data[i] != '\0')
    {
        temp[j++] = data[i];
        i++;
    }
    ano = atoi(temp);
    cout << "ano" << ano << endl;

    if (ano == 0)
    {
        cout << "Data invalida ano zero" << endl;
        return 1;
    }

    switch (mes)
    {
    case 1:
        if (dia > 31)
        {
            cout << "Data invalida" << endl;
            break;
        }
        strcpy(mesC, "Janeiro");
        break;
    case 2:
        if (!(
                (ano % 400 == 0) ||
                ((ano % 4 == 0) && (ano % 100 != 0))) &&
            (dia == 29))
        {
            cout << "Data invalida" << endl;
            break;
        }
        if (dia > 29)
        {
            cout << "Data invalida" << endl;
            break;
        }
        strcpy(mesC, "Fevereiro");

        break;
    case 3:
        if (dia > 31)
        {
            cout << "Data invalida" << endl;
            break;
        }
        strcpy(mesC, "Marco");
        break;
    case 4:
        if (dia > 30)
        {
            cout << "Data invalida" << endl;
            break;
        }
        strcpy(mesC, "Abril");
        break;
    case 5:
        if (dia > 31)
        {
            cout << "Data invalida" << endl;
            break;
        }
        strcpy(mesC, "Maio");
        break;
    case 6:
        if (dia > 30)
        {
            cout << "Data invalida" << endl;
            break;
        }
        strcpy(mesC, "Junho");
        break;
    case 7:
        if (dia > 31)
        {
            cout << "Data invalida" << endl;
            break;
        }
        strcpy(mesC, "Julho");
        break;
    case 8:
        if (dia > 31)
        {
            cout << "Data invalida" << endl;
            break;
        }
        strcpy(mesC, "Agosto");
        break;
    case 9:
        if (dia > 30)
        {
            cout << "Data invalida" << endl;
            break;
        }
        strcpy(mesC, "Setembro");
        break;
    case 10:
        if (dia > 31)
        {
            cout << "Data invalida" << endl;
            break;
        }
        strcpy(mesC, "Outubro");
        break;
    case 11:
        if (dia > 30)
        {
            cout << "Data invalida" << endl;
            break;
        }
        strcpy(mesC, "Novembro");
        break;
    case 12:
        if (dia > 31)
        {
            cout << "Data invalida" << endl;
            return 1;
        }
        strcpy(mesC, "Dezembro");
        break;

    default:
        break;
    }
    while (data[i] != '\0')
    {
        temp[j++] = data[i];
        i++;
    }
    cout << "Data valida: " << dia << " de " << mesC << " de " << ano << endl;
    return 0;
}