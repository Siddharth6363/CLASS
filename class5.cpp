#include<iostream>
using namespace std;

    class fact{
        public:
        int n;
        int ans;

        int sample();

    };
        int fact::sample()
        {
            ans=1;
                cout<<"Enter the value of n :";
                    cin>>n;

                    for(int i=2 ; i<=n ; i++)
                    {                                          
                        ans=ans*i;
                    }       

                    // while(n>0)                                     
                    //     {
                    //         ans=ans*n;       //for detecting negative values
                    //         n--;
                    //     }

                cout<<"The factorial of the number "<<n<<" is "<<ans;
         }

int main()
{
    fact obj1;
    obj1.sample();


    return 0;
}