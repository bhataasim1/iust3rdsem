# Object Oriented Programming Lab assignment
## Write C++ program for following using if,if-else, switch control statements wherever applicable.

1) Keith’s Sheet Music needs a program to implement its music teacher’s discount policy.The program prompts the user to enter the purchase total and indicate whether the purchaser is a teacher. Music teachers receive a 10% discount on their sheet music purchases unless the purchase total is $100 or higher. In that case, the discount is 12%. The discount calculation occurs before the addition of the 5% sales tax. Here are two sample outputs —one for a teacher and one for a nonteacher. Use necessary manipulators to format your output.
   <pre>
    <b>(For Teacher)</b>
   Total purchases              $122.00
   Teacher's discount (12%)      14.64
   Discounted total              107.36
   Sales tax (5%)                5.37
   Total                        $112.73
   <b>(For Non-teacher)</b>
   Total purchases              $ 24.90
   Sales tax (5%)                 1.25
   Total                        $ 26.15
   </pre>
  
  
2) Write a program that calculates the user’s body mass index (BMI) and categorizes it as underweight, normal, overweight, or obese, based on the following table from the United States Centers for Disease Control:
   | BMI | WEIGHT STATUS |
   |-----| ------------- |
   |Below 18.5 | Underweight |
   |18.5 - 24.9 | Normal |
   |25.0 - 29.96 | Overweight |
   |30.0 and Above | Obese |
   To calculate BMI based on weight in pounds ( wt_lb ) and height in inches ( ht_in ), use this formula (rounded to tenths):
   <pre>
   703 * wt_lb /ht_in2
   </pre>
   Prompt the user to enter weight in pounds and height in inches.
   
3) The National Earthquake Information Center has asked you to write a program implementing the following decision table to characterize an earthquake based on its Richter scale number.
   | Richter Scale Number (n) | Characterization |
   |--------------------------| -----------------|
   | n < 5.0       | Little or no damage |
   | 5.0<=n< 5.5   | 5 Some damage |
   | 5.5<=n< 6.5    | Serious damage: walls may crack or fall |
   | 5.6<=n< 7.5  | Disaster: houses and buildings may collapse |
   | higher | Catastrophe: most buildings destroyed |
   
   Could you handle this problem with a switch statement? If so, use a switch statement; if not, explain Why?

4) Write a program that takes the x – y coordinates of a point in the Cartesian plane and prints a message telling either an axis on which the point lies or the quadrant in which it is found.
   <pre>Sample lines of output:
   (-1.0, -2.5) is in quadrant III
   (0.0, 4.8) is on the y-axis </pre>
   
5) Write a program that interacts with the user like this:
   <pre>
   (1) Carbon monoxide
   (2) Hydrocarbons
   (3) Nitrogen oxides
   (4) Nonmethane hydrocarbons
   
   Enter pollutant number>> 2
   Enter number of grams emitted per mile>> 0.35
   Enter odometer reading>> 40112
   Emissions exceed permitted level of 0.31 grams/mile.
   </pre>
   
   Use the table of emissions limits below to determine the appropriate message.
   |           | First 50,000 Miles | Second 50,000 Miles |
   |-----------|--------------------|---------------------|
   |carbon Monoxide | monoxide 3.4 grams/mile | 4.2 grams/mile |
   |hydrocarbons | 0.31 grams/mile | 0.39 grams/mile |
   |nitrogen oxides | 0.4 grams/mile | 0.5 grams/mile |
   |Nonmethane hydrocarbons | 0.25 grams/mile | 0.31 grams/mile|
