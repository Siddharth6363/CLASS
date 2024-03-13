#include<iostream>      //outside class
using namespace std;

 class star{
        private:
        int i,j;

        public:
        void GetData();

 };
        void star::GetData()
        {
            for(i=1 ; i<=4 ; i++)
            {
                for(j=1 ; j<=i ; j++)
                {
                    cout<<"*";
                }
                cout<<'\n';
            }
        }



int main()
{
    star obj1;
    obj1.GetData();


    return 0;
}