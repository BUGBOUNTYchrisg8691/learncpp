#include <iostream>

/* Function that take a pointer to an int as an arg
 * and does nothing
 */
void doNothing(int&)
{
}

/* main function that declare `x` as variable and
 * passes it to doNothing with an uninitialized value
 * and returns
 */
int main()
{
    int x;

    doNothing(x);

    std::cout << x;

    return 0;
}
