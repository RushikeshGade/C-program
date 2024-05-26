#include<iostream>
using namespace std;

class demo
{
    public:
      int i;

    private:
      int j;

    protected:
      int k;

    public:
       demo()
    {
        i =  10;
        j = 20;
        k = 30;
    }      
};

int main()

{
   demo obj;
   cout<<obj.i

    return 0;
}
