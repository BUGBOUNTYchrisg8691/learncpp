## Floating Point Numbers

Integers are great for counting whole numbers, but sometimes we need to store very large numbers, or numbers with a fractional component. A floating point type variable is a variable that can hold a real number, such as 4320.0, -3.33, or 0.01226. The floating part of the name floating point refers to the fact that the decimal point can “float”; that is, it can support a variable number of digits before and after the decimal point.

There are three different floating point data types: float, double, and long double. As with integers, C++ does not define the actual size of these types (but it does guarantee minimum sizes). On modern architectures, floating point representation almost always follows IEEE 754 binary format. In this format, a float is 4 bytes, a double is 8, and a long double can be equivalent to a double (8 bytes), 80-bits (often padded to 12 bytes), or 16 bytes.

Floating point data types are always signed (can hold positive and negative values).

| Category        | Type          | Minimum Size | Typical Size       |
|:----------------|:-------------:|:------------:|:------------------:|
| floating point	| *float*	      | 4 bytes	     | 4 bytes            |
|                 | *double*      | 8 bytes      | 8 bytes            |
|                 | *long double* | 8 bytes      | 8, 12, or 16 bytes |

*Here are some definitions of floating point numbers:*

```
float fValue;
double dValue;
long double ldValue;
```

*When using floating point literals, always include at least one decimal place (even if the decimal is 0). This helps the compiler understand that the number is a floating point number and not an integer.*

```
int x{5};      // 5 means integer
double y{5.0}; // 5.0 is a floating point literal (no suffix means double type by default)
float z{5.0f}; // 5.0 is a floating point literal, f suffix means float type
```

Note that by default, floating point literals default to type double. An f suffix is used to denote a literal of type float.

#### Best practice

Always make sure the type of your literals match the type of the variables they’re being assigned to or used to initialize. Otherwise an unnecessary conversion will result, possibly with a loss of precision.

#### Warning

*Make sure you don’t use integer literals where floating point literals should be used. This includes when initializing or assigning values to floating point objects, doing floating point arithmetic, and calling functions that expect floating point values.*

### Floating point range

**Assuming IEEE 754 representation:**

| Size                                    | Range                             | Precision                              |
|:---------------------------------------:|:----------------------------------|:---------------------------------------|
| 4 bytes	                                | ±1.18 x 10-38 to ±3.4 x 1038      | 6-9 significant digits, typically 7    |
| 8 bytes	                                | ±2.23 x 10-308 to ±1.80 x 10308	  | 15-18 significant digits, typically 16 |
| 80-bits (typically uses 12 or 16 bytes)	| ±3.36 x 10-4932 to ±1.18 x 104932	| 18-21 significant digits               |
| 16 bytes                                | ±3.36 x 10-4932 to ±1.18 x 104932 | 33-36 significant digits               |

The 80-bit floating point type is a bit of a historical anomaly. On modern processors, it is typically implemented using 12 or 16 bytes (which is a more natural size for processors to handle).

It may seem a little odd that the 80-bit floating point type has the same range as the 16-byte floating point type. This is because they have the same number of bits dedicated to the exponent -- however, the 16-byte number can store more significant digits.
