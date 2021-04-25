#include <iostream>

int main()
{
    // Prompt user to enter number
    std::cout << "Enter a number: ";

    // declare variable w/o init to store input from user in
    int x{ };

    // get input from user and replace 0-value in x
    std::cin >> x;

    // display user input to the screen
    std::cout << "You entered " << x << '\n';

    // end function
    return 0;
}
