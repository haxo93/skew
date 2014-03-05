skew
====
Lab: Stepwise Refinement
CS250
This lab (really, part 1 of an assignment) will give you practice in applying stepwise refinement to develop a new algorithm. For the follow-up assignment, you will carry that design through to the implementation of the program.
You may work in pairs on the laboratory portion of the assignment if you wish. If you choose to work together, both people should submit the assignment, but their submissions should indicate the names of both people who worked upon it.
1. General Instructions
Read the Skewed Data problem description below. Apply the technique of stepwise refinement to design an algorithm for the skewed data program.
This portion of the assignment is to be completed during the lab period. (Late submissions will be accepted at a 25% penalty until the due date of the acompanying assignment.)
Use a text editor (e.g., emacs, the Code::Blocks editor or NotePad) to make your first pseudocode statement of the problem.
Each time you refine a step, copy and paste your current version of the function design to the end of your text file, then make your change. Try to follow the instructor’s convention of using different number of ** to indicate the level of expansion responsible for each statement. When you are done with the design, you should have a complete record of the design process you followed to reach your final design.
Use the button below to submit your completed design.
Make sure you keep a copy of your design. If you have been working with someone, both of you should submit, but your submissions should each list the names of both students who worked on it.
You will receive the familiar automatic grade report, though it will not contain a grade. (This assignment is graded manually.) It will, however, confirm receipt of your submission and will provide you with the link to part 2 of the assignment.

2. Problem Description: Skewed Data

bellcurve In almost any kind of experiment where sampling is done, experimental measurements are subject to random error and other sources of variation. In many cases, a histogram of the collected data would approximate a bell-shaped curve like the one shown here.
Suppose we have collected a number of data values d1,d2,…,dn. The peak of this curve will occur at the mean average of the data,
The width of the curve is controlled by the standard deviation of the data,
skewed If, however, some sort of systematic bias creeps into the measurement process, then the data may be skewed. Experimenters are often interested in detecting skew, so that they can then track down and maybe eliminate the bias responsible for it.
One way to measure skew is
where Md is the median of the di (defined below). If this quantity exceeds plus or minus 1, we will say that the data is “badly skewed”.
The median of a collection of measurements is obtained by sorting the measurements into ascending order, then selecting the middle value from the sorted list if there are an odd number of measurements, or the midpoint between the two middle values if the number of measurements is even.
Design a program to determine whether data sets are badly skewed.

2.1 Input

Input consists of one or more floating point numbers, one per line. These continue to the end of input.
There will be at most 10,000 numbers in the dataset.

2.2 Output

The program should print one line of output. This line will consist of the phrase “Badly skewed” or “Not badly skewed”, as appropriate.

2.3 Example

Given the input

1.0
2.0
3.0

the output should be

Not badly skewed

Given the input

2.0
30.0
1.0

the output should be
Badly skewed
