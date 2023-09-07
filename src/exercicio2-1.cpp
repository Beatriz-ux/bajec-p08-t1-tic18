#include <iostream>

using namespace std;

int main(void){
    srand(time(NULL));

    int nums[100];
    int count[20] = {0};
    int max, i;

    for(int i = 0; i < 100; i++){
        nums[i] = 1 + rand()%20;
        count[nums[i]-1]++;

        cout << nums[i] << " ";
    }
    
    cout << endl << endl;

    for(i = 0; i < 20; i++){
        cout << i+1 << " - " << count[i] << "\t|";
        
        for(int j = 0; j < count[i]; j++){
            cout << "#";
        }
        
        cout << endl;

        if(count[i] > max){
            max = count[i];
        }
    }

    cout << endl;
    cout << "O(s) numero(s) que mais apareceu(ram) foi(ram): " << endl;

    for(i = 0; i < 20; i++){
        if(count[i] == max){
            cout << "- "<< i+1 << endl;
        }
    }

    return 0;
}