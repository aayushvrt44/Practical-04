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
using namespace second;
int main()
{
   
   cout<<"Addition of float value is : "<<add(6.7,8.7)<<"\n";
   
   return 0 ;
 }
   
