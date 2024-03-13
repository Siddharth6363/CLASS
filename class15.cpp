
#include <iostream>             //outsidee
using namespace std;

class print{

    private:
    int n;
    public:
    void table();

};
    void print::table()
    {
        cout<<"\nEnter the multiplication table you want";
                cin>>n;

            for (int i = 1; i <= 10; ++i)
            cout << n << " * " << i << " = " << n * i <<'\n';
     }




int main()
{   
         print obj1;
            obj1.table();
	
	
	return 0;
}
