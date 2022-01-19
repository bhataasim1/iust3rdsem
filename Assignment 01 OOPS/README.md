# C++ Programming Lab Assignment 1
## Loops and Decisions

1) Write a program that will find the smallest, largest, and average values in a collection of N numbers. Get the value of N before scanning each value in the collection of N numbers.

2) Modify your program to compute and display both the range of values in the data collection and the standard deviation of the data collection. To compute the standard deviation, accumulate the sum of the squares of the data values ( sum_squares ) in the main loop. After loop exit, use the formula

3) Write a program to process a collection of daily high temperatures. Your program should count and print the number of hot days (high temperature 85 or higher), the number of pleasant days (high temperature 60–84),and the number of cold days (high temperatures less than 60). It shouldalso display the category of each temperature. Test your program on the following data:

<pre>      55 62 68 74 59 45 41 58 60 67 65 78 82 88 91
      92 90 93 87 80 78 79 72 68 61 59 </pre>

4) Modify your program to display the average temperature (a real number) at the end of the run.

5) Write a program to process weekly employee time cards for all employees of an organization. Each employee will have three data items: an identification number, the hourly wage rate, and the number of hours worked during a given week. Each employee is to be paid time and a half for all hours worked over 40. A tax amount of 3.625% of gross salary will be deducted. The program output should show the employee’s number and net pay. Display the total payroll and the average amount paid at the end of the run.

6) Suppose you give a dinner party for six guests, but your table seats only four. In how many ways can four of the six guests arrange themselves at the table? Any of the six guests can sit in the first chair. Any of the remaining five can sit in the second chair. Any of the remaining four can sit in the third chair, and any of the remaining three can sit in the fourth chair. (The last two will have to stand.) So the number of possible arrangements of six guests in four chairs is 654*3, which is 360. Write a program that calculates the number of possible arrangements for any number of guests and any number of chairs. (Assume there will never be fewer guests than chairs.) Don’t let this get too complicated. A simple for loop should do it.

7) Use for loops to construct a program that displays a pyramid of Xs on the screen. The pyramid should look like this:
<pre>
    X
    XXX
    XXXXX
    XXXXXXX
    XXXXXXXXX
  </pre>
Except, it should be 20 lines high, instead of the 5 lines shown here. One way to do this is to nest two inner loops, one to print spaces and one to print Xs, inside an outer loop that steps down the screen from line to line.
