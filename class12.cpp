#include<iostream>
using namespace std;     //outside

class Temp{

        public:
        char unit;
        double temp;

        void conv();
};

    void Temp::conv()
    {
        cout<<"\nIs the temperature in (F) or (C)";
        cin>>unit;

        unit = toupper(unit);

            if(unit=='C')
            {
                cout<<"\nEnter the temp in celsius: ";
                    cin>>temp;
                        temp=(temp* 9/5) + 32;

                        cout<<"\nThe temperature in fahrenheit is"<<temp;
            }

            else if(unit=='F')
            {
                cout<<"\nEnter the temperature in fahrenheit: ";
                    cin>>temp;
                        temp=((temp - 32)*5) / 9;

                        cout<<"\nThe temperature in celsius is"<<temp;
            }

            else{
                cout<<"\n"<<unit<<" is not a valid unit of measurement";
            }
    }

int main()
{   Temp obj1;
        obj1.conv();

    return 0;
}