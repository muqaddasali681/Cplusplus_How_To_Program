// This is the second excercise of the Book " C++ How To Program by Deitel and Deitel"
//Write a single C++ statement to accomplish each of the following
//(assume that using declarations have not been used):
//a) Declare the variables c, thisIsAVariable, q76354 and number to be of type int.

#include <iostream>
using namespace std;

int main() {
    int c, thisIsAVariable, q76354, number;

//b) Prompt the user to enter an integer. End your prompting message with a 
//colon (:) followed by a space and leave the cursor positioned after the space.
cout << "Enter an integer: " ;
cin >> number;

//c) Read an integer from the user at the keyboard and store it in integer variable age
int age;
cout << "Enter the age: ";
cin >> age;

//d) If the variable number is not equal to 7, print "The variable number is not equal to 7"

if(number != 7) {
    cout << " The variable is not equal to 7\n";

}

//e) Print the message "This is a C++ program" on one line.
//f) Print the message "This is a C++ program" on two lines. End the first line with C++.
//g) Print the message "This is a C++ program" with each word on a separate line.
//h) Print the message "This is a C++ program". Separate each word from the next by a tab.
cout << "This is a C++ program\n";
cout << "This is a C++ \nprogram\n";
cout << "This\nis\na\nC++\nprogram\n";
cout << "This\tis\ta\tC++\tprogram\n";

//2.4 Write a statement (or comment) to accomplish each of the following (assume that using
//declarations have been used for cin, cout and endl):
//a) State that a program calculates the sum of two integers.

int a, b, sum;
cout << " Enter two integars: ";
cin >> a >> b;
sum = a + b;
cout << "The sum of two integars is: " << sum << endl;

return 0;

}
