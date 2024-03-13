#include<iostream>
#include<ctime>
using namespace std;
                            //outside class
class Random{
    public:
    int num;
    int tries;
    int guess;

    void game();
};

 void Random::game()
    {
             srand(time(NULL));   //random number generator 
                    num=(rand() % 100)+1;

        cout<<"*******NUMBER GUESS GAME TEST UR LUCK********\n";

                do{
                    cout<<"Guess a number between (1-100):";
                        cin>>guess;
                        tries++;

                        if(guess>num)
                        {
                            cout<<"Number is lower than your guess\n";
                        }

                        else if(guess<num)
                            {
                            cout<<"Number is higher than your guess\n";
                            }

                            else{
                                cout<<"Correct!!!# of tries: "<<tries<<'\n';
                                }

                }while (guess !=num);
                    cout<<"********THE GAME ENDS HERE********"; 
    }



int main()
{   Random obj1;
        obj1.game();

      

return 0;
}