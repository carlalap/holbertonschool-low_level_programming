
0x08. C - Recursion

Resources

<a href="https://www.youtube.com/watch?v=Mv9NEXX1VHc" > What on Earth is Recursion? - Computerphile</a> 
<br><a href="https://www.tutorialspoint.com/cprogramming/c_recursion.htm" > C - Recursion</a>
<br><a href="https://www.youtube.com/watch?v=XGxbXMP6k8k" >C Programming Tutorial 85, Recursion pt.1</a>
<br><a href="https://www.youtube.com/watch?v=7XiIS6HobNs" >C Programming Tutorial 86, Recursion pt.2</a>



Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General
What is recursion
How to implement recursion
In what situations you should implement recursion
In what situations you shouldn’t implement recursion

0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget
mandatory
Write a function that prints a string, followed by a new line.
Prototype: void _puts_recursion(char *s);

1. Why is it so important to dream? Because, in my dreams we are together mandatory
Write a function that prints a string in reverse.
Prototype: void _print_rev_recursion(char *s);

2. Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange
mandatory
Write a function that returns the length of a string.
Prototype: int _strlen_recursion(char *s);
FYI: The standard library provides a similar function: strlen. Run man strlen to learn more.

3. You mustn't be afraid to dream a little bigger, darling
mandatory
Write a function that returns the factorial of a given number.
Prototype: int factorial(int n);
If n is lower than 0, the function should return -1 to indicate an error
Factorial of 0 is 1

4. Once an idea has taken hold of the brain it's almost impossible to eradicate
mandatory
Write a function that returns the value of x raised to the power of y.
Prototype: int _pow_recursion(int x, int y);
If y is lower than 0, the function should return -1
FYI: The standard library provides a different function: pow. Run man pow to learn more.

5. Your subconscious is looking for the dreamer
mandatory
Write a function that returns the natural square root of a number.
Prototype: int _sqrt_recursion(int n);
If n does not have a natural square root, the function should return -1
FYI: The standard library provides a different function: sqrt. Run man sqrt to learn more.

6. Inception. Is it possible?
mandatory
Write a function that returns 1 if the input integer is a prime number, otherwise return 0.
Prototype: int is_prime_number(int n);
