#include<iostream>
using namespace std;

class Arithematic
{
    public:
         int no1;
         int no2;

        Arithematic()
        {
            cout<<"Inside default constuctir\n";
            no1 = 0;
            no2 = 0;
        }
        Arithematic(int A, int B)
        {
            cout<<"Inside parametrised constuctir\n";
            no1 = A;
            no2 = B;
        }
         
        Arithematic(Arithematic &ref)
        {
            cout<<"Inside copy constructor\n";
            no1 = ref.no1;
            no2 = ref.no2;


        }
          
        ~Arithematic()
        {
            cout<<"Inside destructor\n";
        }

};

int main()
{
  Arithematic obj1;
  Arithematic obj2(11,21);
   Arithematic obj3(obj2);
  cout<<obj1.no1<<"\t"<<obj1.no2<<"\n";
  cout<<obj2.no1<<"\t"<<obj2.no2<<"\n";
  cout<<obj3.no1<<"\t"<<obj3.no2<<"\n";

    return 0;
}


