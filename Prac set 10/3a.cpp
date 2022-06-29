//Ques :- Explain and demonstrate, how virtual function to achieveruntime polymorphism?

// And :- Virtual functions are resolved late, at runtime.
// The main use of virtual function is to achieve Runtime Polymorphism. 
// Runtime polymorphism can be achieved only through a pointer (or reference) of base class type.

#include<iostream>
class B {
   public:
      virtual void s() {
        std::cout<<" In Base \n";
      }
};
class D: public B {
   public:
      void s() {
        std::cout<<"In Derived \n";
      }
};
int main(void) {
   D d ;
   B *b = &d ;
   b->s() ;
   return 0;
}