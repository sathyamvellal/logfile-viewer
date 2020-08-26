// Authors: Sathyam Vellal, 2020

#include <iostream>
#include "GLFW/glfw3.h"

int main()
{
    int major = -1;
    int minor = -1;
    int rev = -1;

    glfwGetVersion(&major, &minor, &rev);

    std::cout << "glfwGetVersion(...): " << major << "." << minor << "." << rev << std::endl;

    return 0;
}