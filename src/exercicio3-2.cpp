#include<iostream>
#include<ctime>

int main()
{
    srand(time(0));
    

    char arr1[11];
    char arr2[11];
    arr1[10] = 0;
    arr2[10] = 0;

    for(int i = 0; i < 10; i++)
        arr1[i] = 'a' + rand()%('z' - 'a');

    for(int i = 0; i < 10; i++)
        arr2[i] = 'a' + rand()%('z' - 'a');

    arr1[0] -= 32;
    arr2[0] -= 32;

    int i = 0;
    for(; arr1[i] == arr2[i] && i <= 10; i++);

    arr1[i] < arr2[i] ? 
    (std::cout << arr1 << std::endl << arr2) : 
    (std::cout << arr2 << std::endl << arr1); 

    return 0;
}