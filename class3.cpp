#include<iostream>        //strings concatination using classes 
#include<string.h>
using namespace std;

class combine{
    private:
    char str1[20];
    char str2[20];

    public:
    void GetData(){
        cout<<"Enter first string :";
        cin>>str1;

        cout<<"Enter secind string";
        cin>>str2;
    }
        void display()
        {
            strcat(str1,str2);
            cout<<"\nThe combination of the strings are :"<<str1;
        }


};

int main()
{   combine obj1;
        obj1.GetData();
        obj1.display();
        return 0;


    return 0;
}