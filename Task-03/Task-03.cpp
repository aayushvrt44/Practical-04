#include<iostream>

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
int main()
{
   cout<<"Addition of interger value is  : "<<add(5,7)<<"\n";
   cout<<"Addition of float value is : "<<add(6.7,8.7)<<"\n";
   
   return 0 ;
 }
   
