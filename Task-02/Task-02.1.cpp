#include<iostream>
using namespace std;

namespace first{
   int add(int a, int b)
   {
      return a+b ;
   }
}
namespace second {
    float add(float a, float b)
    {
        return a+b ;
    }
}
using namespace first ;
int main()
{
   cout<<"Addition of interger value is  : "<<add(5,7)<<"\n";
   
   return 0 ;
 }
   
