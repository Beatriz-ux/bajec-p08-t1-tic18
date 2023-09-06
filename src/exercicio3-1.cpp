#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char data[11], temp[8];
    int dia, mes, ano;
    int i, j;

    // a)
    cout << "Digite um dia no d/m/a: ";
    cin >> data;




    // a)
    for (i=0, j=0; i<strlen(data); i++){
        if (data[i] != '/'){
            temp[j] = data[i];
            j++;
        }else{
            temp[j] = '\0';
            dia = atoi(temp);
            break;
        }
    }

    for (++i, j=0; i<strlen(data); i++){
        if (data[i] != '/'){
            temp[j] = data[i];
            j++;
        }else{
            temp[j] = '\0';
            mes = atoi(temp);
            break;
        }
    }

    for (++i, j=0; i<strlen(data); i++){
            temp[j] = data[i];
            j++;
    }
    temp[j] = '\0';
    ano = atoi(temp);


    cout << "Dia: " << dia << endl;
    cout << "Mes: " << mes << endl;
    cout << "Ano: " << ano << endl;

    // b)
    if (dia>=1){
        switch (mes){
            case 1:
                if(dia<=31)
                    cout << "Data valida" << endl;
                else
                    cout << "Data invalida" << endl;
                break;
            case 2:
                if(dia<=28)
                    cout << "Data valida" << endl;
                else if (dia == 29 && (( ano % 4 == 0 && ano % 100 != 0 ) || ano % 400 == 0))
                    cout << "Data valida" << endl;
                else
                    cout << "Data invalida" << endl;
                break;
            case 3:
                if(dia<=31)
                    cout << "Data valida" << endl;
                else
                    cout << "Data invalida" << endl;
                break;
            case 4:
                if(dia<=30)
                    cout << "Data valida" << endl;
                else
                    cout << "Data invalida" << endl;
                break;
            case 5:
                if(dia<=31)
                    cout << "Data valida" << endl;
                else
                    cout << "Data invalida" << endl;
                break;
            case 6:
                if(dia<=30)
                    cout << "Data valida" << endl;
                else
                    cout << "Data invalida" << endl;
                break;
            case 7:
            case 8:
                if(dia<=31)
                    cout << "Data valida" << endl;
                else
                    cout << "Data invalida" << endl;
                break;
            case 9:
                if(dia<=30)
                    cout << "Data valida" << endl;
                else
                    cout << "Data invalida" << endl;
                break;
            case 10:
                if(dia<=31)
                    cout << "Data valida" << endl;
                else
                    cout << "Data invalida" << endl;
                break;
            case 11:
                if(dia<=30)
                    cout << "Data valida" << endl;
                else
                    cout << "Data invalida" << endl;
                break;
            case 12:
                if(dia<=31)
                    cout << "Data valida" << endl;
                else
                    cout << "Data invalida" << endl;
                break;
            default:
                cout << "Data invalida" << endl;
                break;
        }
    }else{
        cout << "Data invalida" << endl;
    }


    return 0;
}