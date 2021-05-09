### Runtime vs compile time constants

C++ actually has two different kinds of constants.

**Runtime constants** are those whose initialization values can only be resolved at runtime (when your program is running). Variables such as usersAge and myValue in the snippets above are runtime constants, because the compiler can’t determine their initial values at compile time. usersAge relies on user input (which can only be given at runtime) and myValue depends on the value passed into the function (which is only known at runtime). However, once initialized, the value of these constants can’t be changed.

**Compile-time constants** are those whose initialization values can be resolved at compile-time (when your program is compiling). Variable gravity above is an example of a compile-time constant. Compile-time constants enable the compiler to perform optimizations that aren’t available with runtime constants. For example, whenever gravity is used, the compiler can simply substitute the identifier gravity with the literal double 9.8.

When you declare a const variable, the compiler will implicitly keep track of whether it’s a runtime or compile-time constant.

In most cases, this doesn’t matter, but there are a few odd cases where C++ requires a compile-time constant instead of a run-time constant, for example in the instantiation of type -- something we’ll cover later.

#### constexpr

To help provide more specificity, C++11 introduced the keyword constexpr, which ensures that a constant must be a compile-time constant:

```
constexpr double gravity { 9.8 }; // ok, the value of 9.8 can be resolved at compile-time
constexpr int sum { 4 + 5 }; // ok, the value of 4 + 5 can be resolved at compile-time

std::cout << "Enter your age: ";
int age{};
std::cin >> age;
constexpr int myAge { age }; // not okay, age can not be resolved at compile-time
```

*constexpr* variables are const. This will get important when we talk about other effects of const in upcoming lessons.

#### Best practice

Any variable that should not be modifiable after initialization and whose initializer is known at compile-time should be declared as constexpr.
Any variable that should not be modifiable after initialization and whose initializer is not known at compile-time should be declared as const.

### Symbolic constants

In the previous lesson 4.13 -- Literals, we discussed “magic numbers”, which are literals used in a program to represent a constant value. Since magic numbers are bad, what should you do instead? The answer is: use symbolic constants! A symbolic constant is a name given to a constant literal value.

Use constexpr variables

A better way to create symbolic constants is through use of constexpr variables:

```
constexpr int maxStudentsPerClass { 30 };
constexpr int maxNameLength { 30 };
```

Because these are just normal variables, they are watchable in the debugger, have normal scoping, and avoid other weird behaviors.

#### Best practice

Use *constexpr* variables to provide a name and context for your magic numbers.
