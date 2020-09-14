#include <iostream>

using namespace std;


void Game::showField()
{
    cout << endl;
    for(int i = 0; i < fieldSize; i++)
    {
        for(int j = 0; j < fieldSize; j++)	
        {
            if(j)cout << char(124);
            if(field[i][j] == 0)cout << " "; else
            if(field[i][j] == 1)cout << "X"; else cout << "O";
        }
        cout << endl;
        if(i < fieldSize - 1)
            for(int j = 0; j < fieldSize; j++){
                if(j)cout << char(134); cout << char(173);
        }
        cout << endl;
    }
}

