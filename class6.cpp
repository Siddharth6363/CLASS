#include<iostream>
using namespace std;

class fibo{
    public:
    int a=0;
    int b=1;    
    int i , n , result;

    void answer(){
        cout<<"Enter number of terms of series: ";
            cin>>n;

            for(i=1 ; i<=n ; i++)
            {                                // a b res          
                cout<<a<<" ";                     //0 1 1 2 3 5 8 13
                result=a+b;
                a=b;
                b=result;
            }
    }

};

int main()
{       fibo obj1;
        obj1.answer();


    return 0;
}