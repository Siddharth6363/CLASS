#include<iostream>
#include<ctime>
 using namespace std;    //outside class

class Random{
    public:
        int randNum;

        void win();

};

   void Random::win()
   {
             cout<<"********RANDOM NUMBER GAME TEST UR LUCK********\n\n";

            srand(time(0));  //this function will use current time as a seed to generate random numbers 
                randNum=(rand()% 5)+1; //to generate rand number nos betn 1 to 5 will be generated 

                switch(randNum){
                    case 1:
                    cout<<"You win a mobile phone \n";
                        break;

                    case 2:
                    cout<<"You win a laptop \n";
                        break;

                    case 3:
                    cout<<"You win a car \n";
                        break;

                    case 4:
                    cout<<"You win a scholarship \n";
                        break;

                    case 5:
                    cout<<"You win a trip to Ram Mandir \n";
                        break;
        }

   }


int main()
{    Random obj1;

    obj1.win();

  


    return 0;
}