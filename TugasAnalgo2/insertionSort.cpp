#include <iostream>

using namespace std;

int main()
{
    int i, j, insert;
    int array[10] = {2, 3, 1, 4, 7, 9, 5, 12, 15, 13};
    for(i = 0; i < 10; i++){
        insert = array[i];
        j = i + 1;
        while (array[j] < array[i] && array[j - 1] > insert) {
            array[j] = array[j - 1];
            j = j - 1;
        }
        array[j] = insert;
    }
    
    for(int i = 0; i < 10; i++)
    {
        cout << array[i] << " ";
    }
    
    return 0;
}
