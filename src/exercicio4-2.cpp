#include<iostream>
#include<ctime>

int main()
{
    srand(time(0));
    

    char arr[10][11];

    for(int i = 0; i < 10; i++)
    {
        arr[i][10] = 0;
        for(int j = 0; j < 10; j++)
        {
            arr[i][j] = 'a' + rand()%('z' - 'a');
        }
        arr[i][0] -= 32;
        std::cout << arr[i] << std::endl;
    }


    arr[0][0] -= 32;
    return 0;
}