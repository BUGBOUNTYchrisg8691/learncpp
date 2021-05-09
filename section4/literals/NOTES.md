### Literal Constants

Just like objects have a type, all literals have a type. The type of a literal is assumed from the value and format of the literal itself.

*By default:*

| Literal value | Examples | Default type |
|:-|:-:|:-|
| integral value | 5, 0, -3 | int |
| boolean value | true, false | bool |
| floating point value | 3.4, -2.2 | double (not float)! |
| char value | ‘a’ | char |
| C-style string | “Hello, world!” | const char[14] |

### Literal suffixes

*If the default type of a literal is not as desired, you can change the type of a literal by adding a suffix:*

| Data Type | Suffix | Meaning |
|:-:|:-:|:-|
| int | u or U | unsigned int |
| int | l or L | long |
| int | ul, uL, Ul, UL, lu, lU, Lu, or LU | unsigned long |
| int | ll or LL | long long |
| int | ull, uLL, Ull, ULL, llu, llU, LLu, or LLU | unsigned long long |
| double | f or F | float |
| double | l or L | long double |

#### Scientific notation for floating point literals

*There are two different ways to declare floating-point literals:*

```
double pi { 3.14159 }; // 3.14159 is a double literal in standard notation
double avogadro { 6.02e23 }; // 6.02 x 10^23 is a double literal in scientific notation
```

#### Octal and hexadecimal literals

In everyday life, we count using decimal numbers, where each numerical digit can be 0, 1, 2, 3, 4, 5, 6, 7, 8, or 9. Decimal is also called “base 10”, because there are 10 possible digits (0 through 9). In this system, we count like this: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, … By default, numbers in C++ programs are assumed to be decimal.

```
int x { 12 }; // 12 is assumed to be a decimal number
```

In **binary**, there are only 2 digits: 0 and 1, so it is called “base 2”. In binary, we count like this: 0, 1, 10, 11, 100, 101, 110, 111, …

There are two other “bases” that are sometimes used in computing: octal, and hexadecimal.

**Octal** is base 8 -- that is, the only digits available are: 0, 1, 2, 3, 4, 5, 6, and 7. In Octal, we count like this: 0, 1, 2, 3, 4, 5, 6, 7, 10, 11, 12, … (note: no 8 and 9, so we skip from 7 to 10).

| Base | | | | | | | | | | | | |
|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
| Decimal | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 |
| Octal | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 10 | 11 | 12 | 13 |

*To use an octal literal, prefix your literal with a 0:*

```
#include <iostream>

int main()
{
    int x{ 012 }; // 0 before the number means this is octal
    std::cout << x;
    return 0;
}
```

*This program prints:*
10

Why 10 instead of 12? Because numbers are printed in decimal, and 12 octal = 10 decimal.

Octal is hardly ever used, and we recommend you avoid it.

Hexadecimal is base 16. In hexadecimal, we count like this: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F, 10, 11, 12, …
| Base | | | | | | | | | | | | | | | | | | |
|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
| Decimal | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 |
| Hexadecimal | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | A | B | C | D | E | F | 10 | 11 |

To use a hexadecimal literal, prefix your literal with 0x.

```
#include <iostream>

int main()
{
    int x{ 0xF }; // 0x before the number means this is hexadecimal
    std::cout << x;
    return 0;
}
```

*This program prints:*
15

#### Printing decimal, octal, hexadecimal, and binary numbers

*By default, C++ prints values in decimal. However, you can tell it to print in other formats. Printing in decimal, octal, or hex is easy via use of std::dec, std::oct, and std::hex:*

```
#include <iostream>

int main()
{
    int x { 12 };
    std::cout << x << '\n'; // decimal (by default)
    std::cout << std::hex << x << '\n'; // hexadecimal
    std::cout << x << '\n'; // now hexadecimal
    std::cout << std::oct << x << '\n'; // octal
    std::cout << std::dec << x << '\n'; // return to decimal
    std::cout << x << '\n'; // decimal

    return 0;
}
```

*This prints:*
12
c
c
14
12
12

Printing in binary is a little harder, as std::cout doesn’t come with this capability built-in. Fortunately, the C++ standard library includes a type called std::bitset that will do this for us (in the <bitset> header). To use std::bitset, we can define a std::bitset variable and tell std::bitset how many bits we want to store. The number of bits must be a compile time constant. std::bitset can be initialized with an unsigned integral value (in any format, including decimal, octal, hex, or binary).

```
#include <bitset> // for std::bitset
#include <iostream>

int main()
{
	// std::bitset<8> means we want to store 8 bits
	std::bitset<8> bin1{ 0b1100'0101 }; // binary literal for binary 1100 0101
	std::bitset<8> bin2{ 0xC5 }; // hexadecimal literal for binary 1100 0101

	std::cout << bin1 << ' ' << bin2 << '\n';
	std::cout << std::bitset<4>{ 0b1010 } << '\n'; // we can also print from std::bitset directly

	return 0;
}
```

*This prints:*

11000101 11000101

1010

*We can also create a temporary (anonymous) std::bitset to print a single value. In the above code, this line:*

```
std::cout << std::bitset<4>{ 0b1010 } << '\n'; // we can also print from std::bitset directly
```

*creates a temporary std::bitset object with 4 bits, initializes it with 0b1010, prints the value in binary, and then discards the temporary std::bitset.*

#### Best practice

**Don’t use magic numbers in your code.**
