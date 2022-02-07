/*
(a) 010E2
    This is a legal floating constant but slightly misleading. As it starts
    with a zero one might assume that it is in octal, but because 
    this constant has an exponent it must be in base 10.
    This represents 10 * 10^2 (1,000).

(b) 32.1E+5
    This is a legal floating constant with the value representing
    32.1 * 10^5 (3,210,000)

(c) 0790
    This isn't a legal constant because it starts with a 0 indicating
    that it is in base 8 (octal), but contains the digit 9. Octal
    numbers can only be represented by the values 0-7.

(d) 100_000
    This constant is not legal as neither an integer or floating
    point value can contain an underscore.

(e) 3.978e-2
    This is a legal floating constant with the value representing
    3.978 * 10^-2 (0.03978)
*/