#include <iostream>

using namespace std;

int main()
{
    int * numbers, how_many_numbers;
    int aux;
    bool swapped;

    cout << "How many numbers are you going to sort?: ";
    cin >> how_many_numbers;
    if(how_many_numbers <= 0 || how_many_numbers > 100000)
    {
        cout << "Are you kidding me? ";
        return 1;
    }
    numbers = new int[how_many_numbers];
    for(int i = 0; i < how_many_numbers; i++ )
    {
        cout << "\n Enter a number #" << i + 1 << ": ";
        cin >> numbers[i];
    }
    do{
        swapped = false;
        for(int i = 0; i < how_many_numbers - 1; i++)
        if(numbers[i] > numbers[i + 1]){
            swapped = true;
            aux = numbers[i];
            numbers[i] = numbers[i + 1];
            numbers[i + 1] = aux;
        }

    }while(swapped);
    cout << "The sorted arrays: ";
    for (int i = 0; i < how_many_numbers; i++)
        cout << numbers[i] << " ";
    delete[] numbers;

    return 0;
}
