#include<iostream>          //OUTSIDE CLASS
using namespace std;

    class prime{
            private:
            int i,no;
            int count;

            public:
            void getdata();

    };

        void prime::getdata()
        {
                cout<<"Enter a number you want to check prime or not: ";
                    cin>>no;
            for(i=1 ; i<=no ; i++)
            {
                if(no%i==0)
                {
                    count++;
                    break;
                }
            }
            if (count==2)
                cout<<no<<" is  a prime number";
                
                else
                cout<<no<<" is not a prime number";
                
               }

int main()
{       prime obj1;
        obj1.getdata();

    return 0;
}