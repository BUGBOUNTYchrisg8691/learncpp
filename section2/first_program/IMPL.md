### Implementation step 1: Outlining your main function

Now we’re ready to start implementation. The above sequences can be used to outline your main program. Don’t worry about inputs and outputs for the time being.
```
1 int main()
2 {
3 //    doBedroomThings();
4 //    doBathroomThings();
5 //    doBreakfastThings();
6 //    doTransportationThings();
7
8     return 0;
9 }
```

Or in the case of the calculator:

```
01 int main()
02 {
03     // Get first number from user
04 //    getUserInput();
05
06     // Get mathematical operation from user
07 //    getMathematicalOperation();
08
09     // Get second number from user
10 //    getUserInput();
11
12     // Calculate result
13 //    calculateResult();
14
15     // Print result
16 //    printResult();
17
18     return 0;
18 }
```
Note that if you’re going to use this “outline” method for constructing your programs, your functions won’t compile because the definitions don’t exist yet. Commenting out the function calls until you’re ready to implement the function definitions is one way to address this (and the way we’ll show here). Alternatively, you can stub out your functions (create placeholder functions with empty bodies) so your program will compile.

## Implementation step 2: Implement each function
In this step, for each function, you’ll do three things:

1. Define the function prototype (inputs and outputs)
2. Write the function
3. Test the function

If your functions are granular enough, each function should be fairly simple and straightforward. If a given function still seems overly-complex to implement, perhaps it needs to be broken down into subfunctions that can be more easily implemented (or it’s possible you did something in the wrong order, and need to revisit your sequencing of events).

Let’s do the first function from the calculator example:

```
01 #include <iostream>
02
03 // Full implementation of the getUserInput function
04 int getUserInput()
05 {
06     std::cout << "Enter an integer ";
07     int input{};
08     std::cin >> input;
09
10     return input;
11 }
12
13 int main()
14 {
15     // Get first number from user
16     int value{ getUserInput() }; // Note we've included code here to test the return value!
17     std::cout << value;
18
19     // Get mathematical operation from user
20 //    getMathematicalOperation();
21
22     // Get second number from user
23 //    getUserInput();
24
25     // Calculate result
26 //    calculateResult();
27
28     // Print result
29 //    printResult();
30
31     return 0;
32 }
```

First, we’ve determined that the getUserInput function takes no arguments, and will return an int value back to the caller. That gets reflected in the function prototype having a return value of int and no parameters. Next, we’ve written the body of the function, which is a straightforward 4 statements. Finally, we’ve implemented some temporary code in function main to test that function getUserInput (including its return value) is working correctly.

We can run this program many times with different input values and make sure that the program is behaving as we expect at this point. If we find something that doesn’t work, we know the problem is in the code we’ve just written. Once we’re convinced the program is working as intended up to this point, we can remove the temporary testing code, and proceed to implementation of the next function (function getMathematicalOperation).

Remember: Don’t implement your entire program in one go. Work on it in steps, testing each step along the way before proceeding.

## Implementation step 3: Final testing

Once your program is “finished”, the last step is to test the whole program and ensure it works as intended. If it doesn’t work, fix it.


