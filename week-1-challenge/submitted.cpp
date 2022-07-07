//  ############################################################################
//  #   Submission Notes                                                       #
//  #                                                                          #
//  #   When I did this on my own, I utilized VSCode                           #
//  #   and a Docker Container. I prefer a dev enviornment that                #
//  #   is representative of my typical day-to-day.                            #
//  #                                                                          #
//  #   Directory structure:                                                   #
//  #       Pair.cpp                                                           #
//  #       Pair.h                                                             #
//  #       main.cpp                                                           #
//  #                                                                          #
//  #   Then, I created a simple Makefile:                                     #
//  #                                                                          #
//  #   vEXE = main                                                            #
//  #   OBJS = main.o Pair.o                                                   #
//  #   CLEAN_RM =                                                             #
//  #   include ../_make/generic.mk                                            #
//  #                                                                          #
//  #   Executed make and then ./main with sucessfull results.                 #
//  #                                                                          #
//  #   In order to utilize the auto-grader here on Coursera, I had            #
//  #   to simply take everything (excluding my original namespace             #
//  #   implementation) and paste it here.                                     #
//  #                                                                          #
//  #   My program source can be viewed here:                                  #
//  #   https://github.com/andrewneal/learning_cpp/tree/main/week-1-challenge  #
//  #                                                                          #
//  ############################################################################
//
//  Creating the Pair Class.
//  This would normally be in Pair.h
//  Defines our two integers and the sum function.

class Pair
{
public: // Public members:
    int a;
    int b;
    int sum();
};

//  Creating the Pair implementation.
//  This would normally be in Pair.cpp
//  Adds our two integers as part of the sum() function, which
//  is encasulated as part of the Pair class.

int Pair::sum()
{
    return a + b;
}

// ****************************************************
// INSTRUCTOR COMMENTS
// ****************************************************
// This main() function will help you test your work.
// Click Run to see what happens.
// When you're sure you're finished, click Submit for grading
// with our additional hidden tests.
// ****************************************************

int main()
{
    Pair p;
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