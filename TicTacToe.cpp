#include <iostream>

using namespace std;

char matrix [3][3] = {'1','2','3','4','5','6','7','8','9'};
char player = 'X';
int n;

void Draw () // Draw the Tic Tac Toe Board
{
    system("CLS");
    cout << "Tic Tac Toe v.1"<<endl;

    // nested for loop for printing the matrix;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0;j < 3; j++ )
        {
            cout << matrix [i][j]<< "  ";
        }
        cout << endl;
    }
}

void Input () // Function to get user input
{
    int a;
    cout << "\n\tPress the related number on the field: ";
    cin >> a;

    if (a ==1) // Checks if user input already exists
    {
        if (matrix [0][0] == '1')
            matrix [0][0] = player;
        else
        {
            cout << "Field is already in use, try again \n";
            Input ();
        }

    }
    else if (a ==2)
    {
        if (matrix [0][1] == '2')
            matrix [0][1] = player;
        else
        {
            cout << "Field is already in use, try again \n";
            Input ();
        }

    }
    else if (a ==3)
    {
        if (matrix [0][2] == '3')
            matrix [0][2] = player;
        else
        {
            cout << "Field is already in use, try again \n";
            Input ();
        }

    }
    else if (a ==4)
    {
        if (matrix [1][0] == '4')
            matrix [1][0] = player;
        else
        {
            cout << "Field is already in use, try again \n";
            Input ();
        }

    }
    else if (a ==5)
    {
        if (matrix [1][1] == '5')
            matrix [1][1] = player;
        else
        {
            cout << "Field is already in use, try again \n";
            Input ();
        }

    }
    else if (a ==6)
    {
        if (matrix [1][2] == '6')
            matrix [1][2] = player;
        else
        {
            cout << "Field is already in use, try again \n";
            Input ();
        }

    }
    else if (a ==7)
    {
        if (matrix [2][0] == '7')
            matrix [2][0] = player;
        else
        {
            cout << "Field is already in use, try again \n";
            Input ();
        }

    }
    else if (a ==8)
    {
        if (matrix [2][1] == '8')
            matrix [2][1] = player;
        else
        {
            cout << "Field is already in use, try again \n";
            Input ();
        }

    }
    else if (a ==9)
    {
        if (matrix [2][2] == '9')
            matrix [2][2] = player;
        else
        {
            cout << "Field is already in use, try again \n";
            Input ();
        }

    }
}
void ChangePlayer ()
{
   if (player == 'X')
        player = '0';
   else
        player = 'X';
}

char Win () //Function to check who wins or is it a draw!!
{
    //First Player

    if (matrix [0][0] == 'X' && matrix [0][1] == 'X' && matrix [0][2] == 'X')
        return 'X';
    if (matrix [1][0] == 'X' && matrix [1][1] == 'X' && matrix [1][2] == 'X')
        return 'X';
    if (matrix [2][0] == 'X' && matrix [2][1] == 'X' && matrix [2][2] == 'X')
        return 'X';

    if (matrix [0][0] == 'X' && matrix [1][0] == 'X' && matrix [2][0] == 'X')
        return 'X';
    if (matrix [0][1] == 'X' && matrix [1][1] == 'X' && matrix [2][1] == 'X')
        return 'X';
    if (matrix [0][2] == 'X' && matrix [2][1] == 'X' && matrix [2][2] == 'X')
        return 'X';

    if (matrix [0][0] == 'X' && matrix [1][1] == 'X' && matrix [2][2] == 'X')
        return 'X';
    if (matrix [0][2] == 'X' && matrix [1][1] == 'X' && matrix [2][0] == 'X')
        return 'X';

    // Second Player

    if (matrix [0][0] == 'O' && matrix [0][1] == 'O' && matrix [0][2] == 'O')
        return 'O';
    if (matrix [1][0] == 'O' && matrix [1][1] == 'O' && matrix [1][2] == 'O')
        return 'O';
    if (matrix [2][0] == 'O' && matrix [2][1] == 'O' && matrix [2][2] == 'O')
        return 'O';

    if (matrix [0][0] == 'O' && matrix [1][0] == 'O' && matrix [2][0] == 'O')
        return 'O';
    if (matrix [0][1] == 'O' && matrix [1][1] == 'O' && matrix [2][1] == 'O')
        return 'O';
    if (matrix [0][2] == 'O' && matrix [2][1] == 'O' && matrix [2][2] == 'O')
        return 'O';

    if (matrix [0][0] == 'O' && matrix [1][1] == 'O' && matrix [2][2] == 'O')
        return 'O';
    if (matrix [0][2] == 'O' && matrix [1][1] == 'O' && matrix [2][0] == 'O')
        return 'O';

    //Default return is needed in case none of the conditions are satisfied
    return '/';

}

int main (int argc, char **argv)
{

    Draw ();
    n=0;
    while (1)
    {
        n++;
        Input ();
        Draw();
        if (Win () == 'X')
        {
            cout << "X wins you punk!! "<< endl;
            break;
        }
        else if (Win () == 'O')
        {
            cout << "O wins you punk!! "<< endl;
            break;
        }
        else if (Win () == '/' && n == 9) //uses the counter variable and default return to determine a draw
        {
            cout << "Its a draw punks!! "<< endl;
            break;
        }
        ChangePlayer ();
    }
    return 0;
}
