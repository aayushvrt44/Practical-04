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
   std::cout<<"Addition of interger value is  : "<<first::add(5,7)<<"\n";
   std::cout<<"Addition of float value is : "<<second::add(6.7,8.7)<<"\n";
   
   return 0 ;
 }
   
     

