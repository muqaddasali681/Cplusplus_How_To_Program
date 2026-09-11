// This is the second excercise of the Book " C++ How To Program by Deitel and Deitel"
//Write a single C++ statement to accomplish each of the following
//(assume that using declarations have not been used):
//a) Declare the variables c, thisIsAVariable, q76354 and number to be of type int.

#include <iostream>
using namespace std;

int main() {
    // int c, thisIsAVariable, q76354, number;

// //b) Prompt the user to enter an integer. End your prompting message with a 
// //colon (:) followed by a space and leave the cursor positioned after the space.
// cout << "Enter an integer: " ;
// cin >> number;

// //c) Read an integer from the user at the keyboard and store it in integer variable age
// int age;
// cout << "Enter the age: ";
// cin >> age;

// //d) If the variable number is not equal to 7, print "The variable number is not equal to 7"

// if(number != 7) {
//     cout << " The variable is not equal to 7\n";

// }

// //e) Print the message "This is a C++ program" on one line.
// //f) Print the message "This is a C++ program" on two lines. End the first line with C++.
// //g) Print the message "This is a C++ program" with each word on a separate line.
// //h) Print the message "This is a C++ program". Separate each word from the next by a tab.
// cout << "This is a C++ program\n";
// cout << "This is a C++ \nprogram\n";
// cout << "This\nis\na\nC++\nprogram\n";
// cout << "This\tis\ta\tC++\tprogram\n";

// //2.4 Write a statement (or comment) to accomplish each of the following (assume that using
// //declarations have been used for cin, cout and endl):
// //a) State that a program calculates the sum of two integers.

// int a, b, sum;
// cout << " Enter two integars: ";
// cin >> a >> b;
// sum = a + b;
// cout << "The sum of two integars is: " << sum << endl;

// //b) Declare the variables x, y, z and result to be of type int (in separate statements).
// //c) Prompt the user to enter three integers.
// //d) Read three integers from the keyboard and store them in the variables x, y and z.
// //e) Compute the product of the three integers contained in variables x, y and z, and assign
// //the result to the variable result.
// //f) Print "The product is " followed by the value of the variable result.
// //g) Return a value from main indicating that the program terminated successfully.

// int x;
// int y;
// int z;
// int result;

// cout <<"Enter three integers: ";
// cin >> x >> y >> z;
// result = x*y*z;
// cout << "The product is: " << result << endl;

//2.5 Using the statements you wrote in Exercise 2.4, write a complete program that calculates
//and displays the product of three integers. Add comments to the code where appropriate. [Note:
//You’ll need to write the necessary using declarations.]

//Sol: Already done that in 2.4

//2.9 Write a single C++ statement or line that accomplishes each of the following:
//a) Print the message "Enter three numbers".
//b) Assign the sum of variables x and y to variable z.
//c) State that a program that calculate the average marks in three subjects.
//d) Input 4 integer values from the keyboard into  variables a, b, c and d. 

//cout << "Enter three numbers: ";
// int x , y, z;
// z = x + y;
// int sub1, sub2, sub3, avgMarks;

// cout << "Enter marks in three subjects: ";
// cin >> sub1 >> sub2 >> sub3;
// avgMarks = (sub1 + sub2 + sub3) /3;
// cout << "Average marks in three subjects is: " << avgMarks << endl;

// int a, b, c, d;
// cout << "Enter 4 integer values:";
// cin >> a >> b >> c >> d;

//2.12 What, if anything, prints when each of the following C++ statements is performed? If nothing prints, then answer “nothing.” Assume x = 2 and y = 3.
// int x = 2, y = 3, z;
//  cout << y << " " <<x << endl;
//  cout << (x + y) << endl;
//  cout << "x=" << x << endl;
//  cout << "y = " << y << endl;
//  z = x - y;
//  z = x*y ;
//  cout << x << " // " << y << endl;
// //cout  << x << y;
//  cout  << x<<"\n"<<y << endl;

//2.16 (Arithmetic) Write a program that asks the user to enter two numbers, obtains the two
//numbers from the user and prints the sum, product, difference, and quotient of the two numbers.
int a , b;
int sum , product, difference, quotient;

cout << "Enter two integers: ";
cin >> a >> b;

sum = a + b;
difference = a - b;
product = a * b;
quotient = a / b;

cout << "The sum is: " << sum << endl;
cout << "The difference is: " << difference << endl;
cout << "The product is: " << product << endl;
cout << "The quotient is: " << quotient << endl;






return 0;

}
