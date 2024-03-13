#include<iostream>    //outside class
using namespace std;

    class Arrays{        //outside class
        public:
        int arr[5];
        int sum=0;

        void addition();
        void square();
    };
    void Arrays::addition() 
    {
        cout<<"Enter 5 numbers: ";
            for(int i=0 ; i<5 ; i++)
            {
                cin>>arr[i];
            }

            for(int i=0 ; i<5 ; i++)
            {
                sum=sum+arr[i];
            }

            cout<<"Sum of array of element is "<<sum;
    }

    void Arrays::square()
    {
        for(int i=0 ; i<5 ; i++)
        {
            cout<<"\n\nSquare of the elements of "<<arr[i]<<" is "<<arr[i]*arr[i];
        }
    }

int main()
{       Arrays obj1;
        obj1.addition();
        obj1.square();


    return 0;
}