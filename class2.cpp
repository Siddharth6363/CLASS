#include<iostream>
using namespace std;

class circum{
    public:
     double r;
    double pi=3.14;

    void res(double r)
    {      // cout<<"Enter value of radius:";
            //    cin>>r;
        double ans=pi*r*r;
          
          cout<<ans;

        
    }

};

int main()
{       
     circum obj1;     //object of class circum


        obj1.res(2.2);             //you can do without parameters also just uncomment the commented things

        

    return 0;
}