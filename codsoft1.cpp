#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    cout << "----------------------------------**THE NUMBER GUESSING GAME**---------------------------------------" << endl;
    int x, y = 0;
    x = rand();
    
    while (true)
    {
        cout << "GUESS THE NUMBER=";
        cin >> y;
        cout << y << endl;
        if (y == x)
        {
            cout << "WONDERFUL!!! The guess is correct." << endl;
        }
        else if (y < x)
        {
            cout << "The guess is too low. Better luck next time!" << endl;
        }
        else
        {
            cout << "The guess is too high. Better luck next time!" << endl;
        }
        y++;
    }
    return 0;
}
