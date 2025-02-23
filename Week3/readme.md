**Recursive Functions in C++**

This repository contains various recursive function implementations in C++.  We used recursion in different scenarios including factorial calculation, string reversal, power computation, Ackermann function, binomial coefficients, and prime number checking.

 **Example 3.1: Factorial Calculation**
**Function:**
`fact(int n)`
**Variables:**
`n` (int): Represents the number for which factorial is calculated. 
**Description:**
Uses recursion to compute `n! = n * (n  1)!`.  
Base case: If `n == 0`, returns `1`.  
Recursive case: Returns `n * fact(n  1)`.

**Example 3.2: String Reversal**
**Function:** 
`rev()`
**Variables:**  
`ch` (character): Stores input characters.  
**Description:**  
Reads a character and recursively calls itself until a newline is found.
After recursion, it prints the characters in reverse order.

**Example 3.3 & Exercise 3.1: Power**
**Function:** 
`Power(int X, int N)`
 **Variables:**  
  `X` (int): The base.  
  `N` (int): The exponent.  
 **Description:**  
  Computes (X^N) using recursion, where: 
   Base case: If `N == 0`, returns `1`.
   Recursive case: Returns `Power(X, N  1) * X`.

**Example 3.4 & Exercise 3.2: Ackermann Function**
**Function:** 
`Ackermann(int m, int n)`
**Variables:**  
`m` (int): First parameter of the Ackermann function.  
`n` (int): Second parameter.  
 **Description:**  
A deep recursive function used in theoretical computer science.
Base case: If `m == 0`, returns `n + 1`.
Recursive cases:
     If `m > 0` and `n == 0`, calls `Ackermann(m  1, 1)`.
     If `m > 0` and `n > 0`, calls `Ackermann(m  1, Ackermann(m, n  1))`.

 **Exercise 3.3a: Recursive Printing from N to 0**
 **Function:** `PrintN(int n)`
 **Variables:**  
   `n` (int): The number from which to start printing.  
 **Description:**  
Prints numbers from `n` to `0` using recursion.
Base case: If `n < 0`, returns.
Recursive case: Prints `n` and calls `PrintN(n  1)`.

 **Exercise 3.3b: Binomial Coefficients**
 **Function:** 
 `CBC(int n, int k)`
 **Variables:**  
`n` (int): Total number of items.  
`k` (int): Number of selected items.  
 **Description:**  
   Computes binomial coefficient using Pascal’s triangle formula.
   Base case: If `k == 0` or `k == n`, returns `1`.
   Recursive case: Returns `CBC(n  1, k  1) + CBC(n  1, k)`.

 **Exercise 3.3c: Prime Number Checking**
 **Functions:**  
   `CheckPrime(int num, int divisor)`
   `IsNumberPrime(int num)`
 **Variables:**  
   `num` (int): Number to check for primality.  
   `divisor` (int): Used to check divisibility.  
 **Description:**  
   `CheckPrime(int num, int divisor)`
     Recursively checks if `num` is divisible by `divisor`.
     Base case: If `divisor == 1`, returns `true` (number is prime).
     If `num % divisor == 0`, returns `false` (number is not prime).
     Recursive case: Calls `CheckPrime(num, divisor  1)`.
   `IsNumberPrime(int num)`
     Calls `CheckPrime(num, num  1)` for initial divisor.





