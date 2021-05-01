### How to convert numbers to scientific notation

**Use the following procedure:**

* Your exponent starts at zero.
* Slide the decimal so there is only one non-zero digit to the left of the decimal.
  * Each place you slide the decimal to the left increases the exponent by 1.
  * Each place you slide the decimal to the right decreases the exponent by 1.
* Trim off any leading zeros (on the left end of the significand)
* Trim off any trailing zeros (on the right end of the significand) only if the original number had no decimal point. We’re assuming they’re not significant unless otherwise specified.

**Here’s some examples:**

```
Start with: 42030
Slide decimal left 4 spaces: 4.2030e4
No leading zeros to trim: 4.2030e4
Trim trailing zeros: 4.203e4 (4 significant digits)
```

```
Start with: 0.0078900
Slide decimal right 3 spaces: 0007.8900e-3
Trim leading zeros: 7.8900e-3
Don't trim trailing zeros: 7.8900e-3 (5 significant digits)
```

```
Start with: 600.410
Slide decimal left 2 spaces: 6.00410e2
No leading zeros to trim: 6.00410e2
Don't trim trailing zeros: 6.00410e2 (6 significant digits)
```

Here’s the most important thing to understand: The digits in the significand (the part before the ‘e’) are called the significant digits. The number of significant digits defines a number’s precision. The more digits in the significand, the more precise a number is.

### Precision and trailing zeros after the decimal

Consider the case where we ask two lab assistants each to weigh the same apple. One returns and says the apple weighs 87 grams. The other returns and says the apple weighs 87.00 grams. Let’s assume the weighing is correct. In the former case, the actual weight of the apple could be anywhere between 86.50 and 87.49 grams. Maybe the scale was only precise to the nearest gram. Or maybe our assistant rounded a bit. In the latter case, we are confident about the actual weight of the apple to a much higher degree (it weighs between 86.9950 and 87.0049 grams, which has much less variability).

So in standard scientific notation, we prefer to keep trailing zeros after a decimal point, because those digits impart useful information about the precision of the number.

However, in C++, 87 and 87.000 are treated exactly the same, and the compiler will store the same value for each. There’s no technical reason why we should prefer one over the other (though there might be scientific reasons, if you’re using the source code as documentation).

Now that we’ve covered scientific notation, we’re ready to cover floating point numbers.
