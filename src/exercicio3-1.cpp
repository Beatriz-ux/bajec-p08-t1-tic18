#include <iostream>
#include <cstring>

using namespace std;

int main(void){
    char data[12], mesExt[10];
    char *token;
    int dia, mes, ano;
    bool bissexto = false;

    cout << "Digite uma data no formato dd/mm/aaaa: ";
    cin >> data;

    token = strtok(data, "/");

    dia = atoi(token);
    token = strtok(NULL, "/");
    mes = atoi(token);
    token = strtok(NULL, "/");
    ano = atoi(token);
    token = strtok(NULL, "/");

    if((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0)
        bissexto = true;
    
    if(mes >=1 && mes <= 12){
        if(dia >= 1 && dia <= 31){
            if(bissexto){
                if(mes == 2 && dia > 29){
                    cout << "Data invalida" << endl;
                    return 0;
                }
            }
            else if(mes == 2 && dia > 28){
                cout << "Data invalida" << endl;
                return 0;
            }
            else if((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30){
                cout << "Data invalida" << endl;
                return 0;
            }
        }
        else{
            cout << "Data invalida" << endl;
            return 0;
        }

        switch (mes){
            case 1:
                strcpy(mesExt, "Janeiro");
                break;
            case 2:
                strcpy(mesExt, "Fevereiro");
                break;
            case 3:
                strcpy(mesExt, "Marco");
                break;
            case 4:
                strcpy(mesExt, "Abril");
                break;
            case 5:
                strcpy(mesExt, "Maio");
                break;
            case 6:
                strcpy(mesExt, "Junho");
                break;
            case 7:
                strcpy(mesExt, "Julho");
                break;
            case 8:
                strcpy(mesExt, "Agosto");
                break;
            case 9:
                strcpy(mesExt, "Setembro");
                break;
            case 10:
                strcpy(mesExt, "Outubro");
                break;
            case 11:
                strcpy(mesExt, "Novembro");
                break;
            case 12:
                strcpy(mesExt, "Dezembro");
                break;
        }

        cout << dia << " de " << mesExt << " de " << ano << endl;
    }
    else{
        cout << "Data invalida" << endl;
        return 0;
    }

    return 0;
}