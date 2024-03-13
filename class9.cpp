#include<iostream>
using namespace std;      //INSIDE CLASS

class Armstrong{
    public:
    int no , c , r , arm=0;

    void getnum()
    {
        cout<<"Enter a number to check armstring or not: ";
            cin>>no;

            c = no;   //to store the original number 

            while(no>0)
            {
                r=no%10;
                arm= r*r*r + arm;
                no=no/10;
            }

            if(arm==c)
            cout<<c<<" is an armstrong number";

            else    
                cout<<c<<" is not an armstrong number";


    }
};



int main()
{      Armstrong obj1;
        obj1.getnum();

    return 0;
}