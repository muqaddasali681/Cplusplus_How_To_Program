

/**************************************************************************
 *                                                                        *
 * CHAPTER 2: Input/Output and Operators                                  *
 *                                                                        *
 * DISCLAIMER: This is the solved exercise solution of chapter 2 i.e.     *
 * Input/Output and Operators. If you want to test any code then decomment*
 * it and then run otherwise it will give you errors and you will not be  *
 * able to run the code because many variables are initialized with the   *
 *  same name so it will give you a bunch of errors.                      *
 * Thank you very much!                                                   *
 *************************************************************************/


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
// int a , b;
// int sum , product, difference, quotient;

// cout << "Enter two integers: ";
// cin >> a >> b;

// sum = a + b;
// difference = a - b;
// product = a * b;
// quotient = a / b;

// cout << "The sum is: " << sum << endl;
// cout << "The difference is: " << difference << endl;
// cout << "The product is: " << product << endl;
// cout << "The quotient is: " << quotient << endl;

//2.17 (Printing) Write a program that prints the message "Welcome to C++ programming" on one line 
//with each word separated by one space. Do this several ways:
// a) Using one statement with two stream insertion operator.
// b) Using one statement with four stream insertion operators.
// c) Using two statements with one stream insertion operator each.

// cout <<"Welcome to C++ programming" << endl;
// cout <<"Welcome " << "to " << "C++ programming" << endl;
// cout <<"Welcome to ";
// cout <<"C++ programming";

//2.18 (Comparing Integers) Write a program that asks the user to enter two integers, obtains the
// numbers from the user, If the numbers are not equal, print the message "These numbers are not equal,"
//then prints the smaller number followed by the words "is smaller."

// int num1, num2;
// cout << "Enter two integers: ";
// cin >> num1 >> num2;
// if(num1 != num2) {
//     cout << "These numbers are not equal" << endl;
//     if(num1 < num2) {
//         cout << num1 << " is smaller." << endl;
//     } else {
//         cout << num2 << " is smaller." << endl;
//     }
// }


//2.19 (Arithmetic, Smallest and Largest) Write a program that inputs three integers from the keyboard
 //and prints the sum, average, product, smallest and largest of these numbers. 
 //output should be like this:
 //Input three different integers: 13 27 14
// Sum is 54
// Average is 18
// Product is 4914
// Smallest is 13
// Largest is 27

// int g, h, i;
// int Sum;
// int Average;
// int Product;
// int Smallest;
// int Largest;
// cout << "Input three different integers: ";
// cin >> g >> h >> i;

// Sum = g + h + i;
// Average = (g + h +i)/3;
// Product = g * h * i;
// Smallest = min(g, min(h,i));
// Largest = max(g, max(h,i));

// cout << "Sum is " << Sum << endl;
// cout << "Average is " << Average << endl;
// cout << "Product is " << Product << endl;
// cout << "Smallest is " << Smallest << endl;
// cout << "Largest is " << Largest << endl;


//2.20 (Diameter, Circumference and Area of a Circle) Write a program that reads in the radius of
//a circle as an integer and prints the circle’s diameter, circumference and area. Use the constant value
//3.14159 for π. Do all calculations in output statements. [Note: In this chapter, we’ve discussed only
//integer constants and variables.

// int radius;
// int diameter;
// int circumference;
// int area;

// cout << "ENter the radius of a circle: ";
// cin >> radius;

// diameter = 2 * radius;
// circumference = 2 * 3.14159 * radius;
// area = 3.14159 * radius * radius;

// cout << "Diameter is: " << diameter << endl;
// cout << "Circumference is: " << circumference << endl;
// cout << "Area is: " << area << endl;

  //2.21 (Displaying Large Letter with Asterisks) Write a program that prints C++
//   cout << "  CCC  +      +  " << endl; 
//   cout << " C     +      +  " << endl; 
//   cout << "C    +++++  +++++  " << endl; 
//   cout << " C     +      +  " << endl; 
//   cout << "  CCC  +      +  " << endl; 

//2.22 What does the following code print?
// cout << "*\n**\n***\n****\n*****" << endl;
// cout << "%%%%%\n$$$$\n###\n@@\n*\n";


//2.23 (Largest and Smallest Integers) Write a program that reads in five integers and determines
// and prints the largest and the smallest integers in the group. Use only the programming techniques
// you learned in this chapter.

// int v, w, x, y, z;
// cout << "Enter 5 Integers: " << endl;
// cin >> v >> w >> x >> y >> z;

// int largest = v;
// int smallest = v;

// if (w > largest) {
//     largest = w;
// }
// if (x > largest) {
//     largest = x;
// }
// if (y > largest) {
//     largest = y;
// }
// if (z > largest) {
//     largest = z;
// }

// if (w < smallest) {
//     smallest = w;
// }
// if (x < smallest) {
//     smallest = x;
// }
// if (y < smallest) {
//     smallest = y;
// }
// if (z < smallest) {
//     smallest = z;
// }

// cout << "Largest integer is: " << largest << endl;
// cout << "Smallest integer is: " << smallest << endl;


//2.24 (Odd or Even) Write a program that reads in two integer and determines and prints whether
// each integar is odd or even.as well as the sum o two integers is an odd number. [Hint: Use the modulus operator. An even number is a multiple of two. 
// Any multiple of two leaves a remainder of zero when divided by 2.]

// int number1, number2, sum;
// cout << "Enter two integers: ";
// cin >> number1 >> number2;

// if(number1 % 2 == 0) {
//     cout << number1 << " is even" << endl;
// } else {
//     cout << number1 << " is odd" << endl;
// }

// if(number2 % 2 == 0) {
//     cout << number2 << " is even" << endl;
// } else {
//     cout << number2 << " is odd" << endl;
// }

// sum = number1 + number2;
// if(sum % 2 == 0) {
//     cout << sum << " is even" << endl;
// } else {
//     cout << sum << " is odd" << endl;
// }


// 2.25 (Multiples) Write a program that reads in three integers and determines and prints if the first 
// two is a multiple of the third. [Hint: Use the modulus operator.]

// int mult1, mult2, number;
// cout << "Enter three integers: " << endl ;
// cin >> mult1 >> mult2 >> number ;

// if(number % mult1 == 0) {
//     cout << "mult1 " << mult1 << " is the multiple of the number " << number << endl;
// } else {
//     cout << "mult1 " << mult1 << " is not the multiple of the number " << number << endl;
// }

// if(number % mult2 == 0) {
//     cout << "mult2 " << mult2 << " is the multiple of the number " << number << endl;
// } else {
//     cout << "mult2 " << mult2 << " is not the multiple of the number " << number << endl;
// }

//2.26 (Checkerboard Pattern) Display the following checkerboard pattern with eight output
//statements, then display the same pattern using as few statements as possible. 

// cout << "* * * * * * * *" << endl;
// cout << " * * * * * * * *" << endl;
// cout << "* * * * * * * *" << endl;
// cout << " * * * * * * * *" << endl;
// cout << "* * * * * * * *" << endl;
// cout << " * * * * * * * *" << endl;
// cout << "* * * * * * * *" << endl;
// cout << " * * * * * * * *" << endl;

// for(int i=1; i<8; i++) {
//     for(int j=1; j<8; j++) {
//         if(i % 2 != 0){
//             cout << "  *";
//         } else{
//             cout << " * " ;
//         }    
//     }
//     cout << endl;
// }

//2.27 (Integer Equivalent of a Character) Here is a peek ahead. In this chapter you learned about
// integers and the type int. C++ can also represent uppercase letters, lowercase letters and a 
//considerable variety of special symbols. C++ uses small integers internally to represent each different
 //character. The set of characters a computer uses and the corresponding integer representations for those
// characters are called that computer’s character set. You can print a character by enclosing that
 //character in single quotes, as with
// cout << 'A'; // print an uppercase A
// You can print the integer equivalent of a character using static_cast as follows:
// cout << static_cast< int >( 'A' ); // print 'A' as an integer
// This is called a cast operation (we formally introduce casts in Chapter 4). When the preceding
// statement executes, it prints the value 65 (on systems that use the ASCII character set). Write a
// program that prints the integer equivalent of a character typed at the keyboard. Store the input in a
// variable of type char. Test your program  several times using uppercase letters, lowercase letters, 
//digits and special characters (like $).

// char alpha;
// cout << "Enter an alphabet or special character: ";
// cin >> alpha;

// cout << static_cast < int >(alpha);

//2.28 (Digits of an Integer) Write a program that inputs a five-digit integer, separates the integer
// into its digits and prints them separated by three spaces each. [Hint: Use the integer division and
// modulus operators.] For example, if the user types in 42339, the program should print: 9  3  3  2  4

// int integer;

// cout << "Enter a 5 digit integer: ";
// cin >> integer;

// int digit1 , digit2, digit3, digit4, digit5;

// digit1 = integer % 10;
// integer /= 10;
// digit2 = integer % 10;
// integer /= 10;
// digit3 = integer % 10;
// integer /= 10;
// digit4 = integer % 10;
// integer /= 10;
// digit5 = integer % 10;

// cout << digit1 << "   " << digit2 << "   " << digit3 << "   " << digit4 << "   " << digit5 << endl;


//2.29 (Table) Using the techniques of this chapter, write a program that calculates the perimeter 
//and area of the square from 1 to 5cm. Use tabs to print the following neatly formatted table of values:


 int square, perimeter, area;

 cout << "Side of Square (cm)      " << "Perimeter of the square(cm)      " << "Area of the square(cm)" << endl;
 for(square = 1; square <= 5; square++) {
   perimeter = 4 * square;
   area = square * square;
   cout << square << "                        " << perimeter <<"                                " << area << endl;
 }





return 0;

}
