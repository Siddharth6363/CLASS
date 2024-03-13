#include<iostream>     //INSIDE CLASS
using namespace std;

class info{
    public:
    string name;
    int id;

    void printname(){
        cout<<"Enter your name";
        cin>>name;
        cout<<'\n';

         cout<<"Enter your ID:";
        cin>>id;
        cout<<'\n';

        cout<<"Name: "<<name<<'\n';
        cout<<"ID: "<<id<<'\n';
    }

    // void printid(){
    //     cout<<"Enter your ID:";
    //     cin>>id;
    //     cout<<'\n';
    // }
    // void print(){
    //     cout<<"Name: "<<name<<'\n';
    //     cout<<"ID: "<<id<<'\n';
    // }

};

int main()
{       
        info obj1;    

       obj1.printname();
    //    obj1.printid(); 

    //    obj1.print();
    


    return 0;
}