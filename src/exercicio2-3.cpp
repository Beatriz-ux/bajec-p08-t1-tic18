#include<iostream>
#include<ctime>

int main()
{
    srand(time(0));
    float arr1[15] = {0}, arr2[15] = {0}, arr3[15] = {0};
    
    for(int i = 0; i < 15 ; i++)
    {
        arr1[i] = ((float)rand()/RAND_MAX)*10;
        std::cout << "Primeira nota do aluno " << i + 1 << ": " << arr1[i] << std::endl;
    }

    for(int i = 0; i < 15 ; i++)
    {
        arr2[i] = ((float)rand()/RAND_MAX)*10;
        std::cout << "Segunda nota do aluno " << i + 1 << ": " << arr2[i] << " - ";
        
        std::cout << (arr1[i] > arr2[i] ? "Piorou" : 
        (arr1[i] < arr2[i] ? "Melhorou" : 
        "Manteve a nota")) << std::endl;
    }



    for(int i = 0; i < 15 ; i++)
    {
        arr3[i] = (arr1[i] + arr2[i]) / 2;
        std::cout << "A media do aluno " << i + 1 << ": " << arr3[i] << std::endl;
    }


    return 0;
}