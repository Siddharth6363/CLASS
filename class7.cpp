#include<iostream>             //INSIDE FUNCTION
using namespace std;

class year{
        public:              
        int year;

       void result(){
        cout<<"Enter a year";
            cin>>year;

            if(year%400==0)
            cout<<year<<" is a leap year";

            else if(year%100==0)
            cout<<year<<" is not a leap year";

            else if(year%4==0)
            cout<<year<<" is a leap year";

            else
            cout<<year<<" is not a leap year";
       }

};

int main()
{       year obj1;     //this is an object of class named year
        obj1.result();

    return 0;
}