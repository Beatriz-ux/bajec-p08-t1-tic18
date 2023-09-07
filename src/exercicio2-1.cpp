#include<iostream>
#include<ctime>

int main()
{
    srand(time(0));
    
    //a
    int arr[100], cont[20] = {0};
    int val_maior = 0;

    for(int i = 0; i < 100; i++)
    {
        arr[i] = 1 + (rand() % 20);
        std::cout << i << " - " << arr[i] << std::endl;
    }
    
    //b c
    std::cout << "Contagem: " << std::endl;
    for(int i = 0; i < 20; i++)
    {
        for(int j = 0; j < 100; j++)
        {
            arr[j] == i + 1 ? (cont[i] += 1): cont[i] += 0;
        }

        std::cout << "Quantidade de " << i + 1 << " : " << cont[i] << " - ";
        for(int j = 0; j < cont[i]; j++)
            std::cout << "#";

        std::cout << std::endl;

        if (val_maior <= cont[i])
        {
            val_maior = cont[i];
        }
    }
    
    std::cout << "Os numeros que mais se repetem sao: ";
    for(int i = 0; i < 20; i++)
    {
        if(cont[i] == val_maior)
        {
            std::cout << i + 1 << "  ";
        }
    }

    return 0;
}