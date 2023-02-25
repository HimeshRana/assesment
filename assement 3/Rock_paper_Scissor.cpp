#include <iostream>
#include <ctime>//Library For seeding Random No.
using namespace std;
class GAME
{
protected:
    string name;
    int n, U, C, Uscore = 0, Cscore = 0;

public:
    void input()
    {
        cout << "Enter Your Name=";
        cin >> name;
        cout << name << " how many round You want to play=";
        cin >> n;
    }
    void gameplay()
    {
        for (int i = 1; i <= n; i++)
        {

            cout << "\n=====Round " << i << "======";

            cout << "\n\nYour Score=" << Uscore;
            cout << "\nComputer Score=" << Cscore << "\n\n";
            cout << "\npress 1 for Rock";
            cout << "\npress 2 for Paper";
            cout << "\npress 3 for Scissor";

            printf("\n\nenter your choice=");
            cin >> U;
            C = rand() % 3;//for C to take 3 random number
            cout << "Computer Choice is=" << C;
            if (C == 1 && U == 2)
            {
                cout << "\nyou Win";
                Uscore++;
            }
            else if (C == 2 && U == 3)
            {
                cout << "\nyou Win";
                Uscore++;
            }
            else if (C == 3 && U == 1)
            {
                cout << "\nyou Win";
                Uscore++;
            }
            else if (U == 1 && C == 2)
            {
                cout << "\nComputer Wins";
                Cscore++;
            }
            else if (U == 2 && C == 3)
            {
                cout << "\nComputer Wins";
                Cscore++;
            }
            else if (U == 3 && C == 1)
            {
                cout << "\nComputer Wins";
                Cscore++;
            }

            else
            {
                cout << "\nDRAW";
            }

            cout << "\n\n=======Final Result=========\n\n";
            cout << "\nYour Score=" << Uscore;
            cout << "\nComputer Score=" << Cscore;
        }
    }
};

int main()
{
    GAME x;
    x.input();
    x.gameplay();
}