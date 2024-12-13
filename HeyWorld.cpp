#include <iostream>                                                 // Library for output/input

int main(){
    // This is a comment

    /*
    This
    is
    a
    multi
    line
    comment
    */

   std::cout << "The classic Hello World!\n" << std::endl;                          // The "Print" in C++ looks something like this
   std::cout << "This is a text is separated from the upper one" << std::endl;      // Why we used on the previous string a \n ? Easy, it makes the famous Enter when you are writing.

    // ^ All the prints use std, because std is a string library, strings are not primitive type of members in C++

   return 0;                                                                        // We use return 0 always, never other number to end the executation with sucess.
}