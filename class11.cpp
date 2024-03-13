#include<iostream>
using namespace std;   //outside class

class Nothing{
        private:
            
            double num1;
            double num2;
            double result;
            char opr;

            public:
                void calculate();
};

    void Nothing::calculate()
    {
        cout<<"Enter an operator(+ - / *):";
            cin>>opr;

            cout<<"Enter number 1:";
                cin>>num1;

              cout<<"Enter number 2:";
                cin>>num2;  

                switch(opr)
                {
                    case '+':
                    result=num1+num2;
                    cout<<result;
                    break;

                     case '-':
                    result=num1-num2;
                    cout<<result;
                    break;

                     case '/':
                    result=num1/num2;
                    cout<<result;
                    break;

                     case '*':
                    result=num1*num2;
                    cout<<result;
                    break;

                    default:
                    cout<<" is not a valid operator";
                 }
    }


int main()
{
    Nothing x;

    x.calculate();
    return 0;
}