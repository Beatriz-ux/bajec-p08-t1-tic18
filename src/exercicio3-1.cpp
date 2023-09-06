#include <iostream>
using namespace std;

int main(void){
    char data[11],temp[5];
    cout << "Digite a data no formato dd/mm/aaaa: ";
    cin >> data;
    int i=0,j=0, dia, mes, ano;
    while(data[i] != '/'){
        temp[i] = data[i];
        i++;
    }
    dia = atoi(temp);
    cout << "Dia"<< dia << endl;
    
    if (dia < 1 || dia > 31){
        cout << "Data invalida nos digitos" << endl;
        return 1;
    }
    while(data[i] != '/'){
        temp[j++] = data[i];
        i++;
    }
    j=0;
    mes = atoi(temp);
    if (mes < 1 || mes > 12){
        cout << "Data invalida nos digitos" << endl;
        return 1;
    }
    j=0;
    ano = atoi(temp);
    if (ano==0){
            cout << "Data invalida ano zero" << endl;

    }
    switch (mes)
    {
    case 1:
        if (dia > 31){
            cout << "Data invalida" << endl;
            return 1;
        }
        break;
    case 2:
        if(ano % 400 == 0)
        {
            if (dia > 29){
            cout << "Data invalida" << endl;
            return 1;
            }
        }
    else
        if( (ano % 4 == 0) && (ano % 100 != 0) )
            if (dia > 29){
            cout << "Data invalida" << endl;
            return 1;
            }
        else
            if (dia > 28){
            cout << "Data invalida não bisexto menos de 28" << endl;
            return 1;
            }
        
        break;
    case 3:
        if (dia > 31){
            cout << "Data invalida" << endl;
            return 1;
        }
        break;
    case 4:
        if (dia > 30){
            cout << "Data invalida" << endl;
            return 1;
        }
        break;
    case 5:
        if (dia > 31){
            cout << "Data invalida" << endl;
            return 1;
        }
        break;
    case 6:
        if (dia > 30){
            cout << "Data invalida" << endl;
            return 1;
        }
        break;
    case 7:
        if (dia > 31){
            cout << "Data invalida" << endl;
            return 1;
        }
        break;
    case 8:
        if (dia > 31){
            cout << "Data invalida" << endl;
            return 1;
        }
        break;
    case 9:
        if (dia > 30){
            cout << "Data invalida" << endl;
            return 1;
        }
        break;
    case 10:
        if (dia > 31){
            cout << "Data invalida" << endl;
            return 1;
        }
        break;
    case 11:
        if (dia > 30){
            cout << "Data invalida" << endl;
            return 1;
        }
        break;
    case 12:
        if (dia > 31){
            cout << "Data invalida" << endl;
            return 1;
        }
        break;
    
    default:
        break;
    }
    while(data[i] != '\0'){
        temp[j++] = data[i];
        i++;
    }
    
    

    return 0;

}