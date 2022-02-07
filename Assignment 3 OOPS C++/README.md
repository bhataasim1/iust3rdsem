# OOPS IN C++ Chapter 5 Assignment
## Chapter 5 : Functions
### Below are the Questions.

1) Refer to the CIRCAREA program in Chapter 2, “C++ Programming Basics.” Write a function called ___circarea()___ that finds the area of a circle in a similar way. It should take an argument of type float and return an argument of the same type. Write a _main()_ function that gets a radius value from the user, calls ___circarea()___, and displays the result.

2) Raising a number _n_ to a __power p__ is the same as multiplying _n_ by itself __p__ times. Write a function called __power()__ that takes a _double_ value for __n__ and an ___int value for p___, and returns the result as a _double value_. Use a default argument of 2 for __p__, so that if this argument is omitted, the number ___n___ will be squared. Write a ___main()___ function that gets values from the user to test this function.

3) Write a function called ___zeroSmaller()___ that is passed two int arguments by reference and then sets the smaller of the two numbers to 0. Write a ___main()___ program to exercise this function.

4) Write a function that takes two Distance values as arguments and returns the larger one. Include a *__main()__* program that accepts two Distance values from the user, compares them, and displays the larger. (See the RETSTRC program for hints.)

5) Write a function called ___hms_to_secs()___ that takes three int values—for ___hours, minutes, and seconds___ —as arguments, and returns the equivalent time in _seconds (type long)_. Create a program that exercises this function by repeatedly obtaining a time value in hours, minutes, and seconds from the user (___format 12:59:59___), calling the function, and displaying the value of _seconds_ it returns.

6) Start with the program from Exercise 11 in Chapter 4, *“Structures,”* which adds two struct time values. Keep the same functionality, but modify the program so that it uses two functions. The first, ___time_to_secs()___, takes as its only argument a structure of type time, and returns the equivalent in ___seconds (type long)___. The second function, ___secs_to_time()___, takes as its only argument a time in ___seconds (type long)___, and returns a structure of type time.

7) Start with the ___power()___ function of Exercise 2, which works only with type double. Create a series of overloaded functions with the same name that, in addition to double,
also work with types ___char, int, long, and float___. Write a ___main()___ program that exercises these overloaded functions with all argument types.

8) Write a function called ___swap()___ that interchanges two int values passed to it by the calling program. (Note that this function swaps the values of the variables in the calling program, not those in the function.) You’ll need to decide how to pass the arguments. Create a ___main()___ program to exercise the function.

9) Repeat ___Question 8___, but instead of two int variables, have the ___swap()___ function interchange two struct time values ( see Exercise 6 ).

10) Write a function that, when you call it, displays a message telling how many times it has been called: ___“I have been called 3 times”___, for instance. Write a ___main()___ program that calls this function at least ___10 times___. Try implementing this function in two different ways. First, use a global variable to store the count. Second, use a local static variable. Which is more appropriate? Why can’t you use a local variable?

11) Write a program, based on the sterling structure of Exercise 10 in Chapter 4, that obtains from the user two money amounts in old-style British format ___(£9:19:11)___, adds them, and displays the result, again in old-style format. Use three functions. The first should obtain a pounds-shillings-pence value from the user and return the value as a structure of type sterling. The second should take two arguments of type sterling and return a value of the same type, which is the sum of the arguments. The third should take a sterling structure as its argument and display its value.

12) Revise the four-function fraction calculator from Exercise 12, Chapter 4, so that it uses functions for each of the four arithmetic operations. They can be called ___fadd(), fsub(), fmul(), and fdiv()___. Each of these functions should take two arguments of type struct fraction, and return an argument of the same type.
