// This main() function will help you test your work.
// Click Run to see what happens.
// When you're sure you're finished, click Submit for grading
// with our additional hidden tests.
#include <iostream>
#include "Pair.h"

//namespace uiuc { 
//
//    ** Learned here that your main function is not in the namespace uiuc.. 
//    ** It is in the global namespace.
//    ** This is because the main function is the entry point to the program.
//    ** The main function is the first function called when the program is run.
//    ** The main function is the only function that can be called before the program is run.


    int main()
    {
        uiuc::Pair p;
        p.a = 100;
        p.b = 200;
        if (p.a + p.b == p.sum())
        {
            std::cout << "Success!" << std::endl;
        }
        else
        {
            std::cout << "p.sum() returns " << p.sum() << " instead of " << (p.a + p.b) << std::endl;
        }
        return 0;
    }
//}

