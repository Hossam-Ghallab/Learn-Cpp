#include <iostream>
//#include <limits.h> // [ 22 ]
using namespace std;

// [ 21 ]
void without_value()
{
    // Nothing To Return
}
int main()
{
    /////// [ 21 ] ///////
    /*
      Primitive Data Types

      - bool => Boolean
      --- Only Two Possible Values [true, false]
      --- Value Is Case Sensitive
      --- When We Use Boolean Values
      ------ Anything Has On/Off, Yes/No, True/False
      --- Test Boolean In Math
      --- Test > And <
      --- Test Data [100, 0, -100, ""]

      - void => Valueless
      --- Without Value
    */
    //bool is_open = true;
    //cout << is_open + 10 << endl;        // 1 + 10 = 11
    //cout << true + true + false << endl; // 1 + 1 + 0 = 2
    //bool test_one = 10 > 5;              // Yes => True => 1
    //bool test_two = 10 > 100;            // No => False => 0
    //cout << test_one << endl;            // 1
    //cout << test_two << endl;            // 0
    //int num = 1;
    //cout << sizeof(test_one) << endl; // 1 Byte
    //cout << sizeof(num) << endl;      // 4 Bytes
    //bool num_one = 100;
    //bool num_two = -100;
    //bool num_three = 0;
    //cout << num_one << endl;   // 1
    //cout << num_two << endl;   // 1
    //cout << num_three << endl; // 0

    // ======================== //

    /////// [ 22 ] ///////
    /*
      Primitive Data Types
      - Modifiers
      --- Modify The Length Of Data => See Limits

      ----- Signed [int, char]
      -------- Store Positive, Negative Integers And 0
      -------- int Is Signed By Default

      ----- Unsigned [int, char]
      -------- Store Positive Only

      ----- Short [int]
      -------- Can Be short Instead of short int

      ----- Long [int, double]
      -------- Store Maximum Value
      -------- Can Be long Instead of long int

      - Type Alias
      --- using identifier = type;
      --- typedef unsigned long UL;

    */
    //int age = 300;
    //cout << sizeof(age) << "\n"; // 4 Bytes

    //short int new_age = 300;
    //cout << sizeof(new_age) << "\n"; // 2 Bytes

    //short last_age = 300;
    //cout << sizeof(last_age) << "\n"; // 2 Bytes

    //cout << "==================\n";
    //cout << sizeof(short int) << "\n";
    //cout << sizeof(short) << "\n";
    //cout << sizeof(long int) << "\n";
    //cout << sizeof(long) << "\n";
    //cout << sizeof(long long int) << "\n";
    //cout << sizeof(long long) << "\n";
    //cout << "==================\n";

    //int num_one = 100;
    //cout << num_one << "\n";

    //signed int num_two = 0;
    //cout << num_two << "\n";

    //unsigned int num_three = 100;
    //cout << num_three << "\n";

    //// unsigned int num_four = -10; // Problem
    //// cout << num_four << "\n";

    //// Type Alias
    //// using bignum = long long int;
    //typedef long long int bignum;

    //bignum my_number = 100010001000;
    //cout << my_number << "\n";

    // ======================== //

    /////// [ 23 ] ///////
    /*
      Data Types
      - Type Conversion
      --- Convert Data of One Type To Another

      - Implicit Conversion
      --- Conversion Is Done Automatically By The Compiler

      - Explicit Conversion AKA Type Casting
      --- Conversion Is Done By The Programmer

      - Data Loss
      --- When Larger Type Is Converted To Smaller Type
    */
    //// Implicit Conversion
    //cout << "=====================\n";
    //int a;
    //double b = 20.5;
    //a = b;                     // Compiler Will Convert Double Value Then Assign
    //cout << a << "\n";         // 20
    //cout << sizeof(a) << "\n"; // 4 Bytes
    //cout << "=====================\n";

    //cout << "=====================\n";
    //char c = 'C';
    //int d = 20;
    //cout << int(c) << "\n"; // 67
    //cout << c + d << "\n";  // 67 + 20 = 87
    //cout << "=====================\n";

    //cout << "=====================\n";
    //int e = 20;
    //double f = 20.5;
    //cout << e + f << "\n";         // 20.5 + 20 = 40.5
    //cout << sizeof(e + f) << "\n"; // 8 Bytes
    //cout << "=====================\n";
    //// Explicit Conversion
    //cout << "=====================\n";
    //int g = 20;
    //double h = 20.5;
    //cout << g + (int)h << "\n";         // 20 + 20 = 40
    //cout << g + int(h) << "\n";         // 20 + 20 = 40
    //cout << sizeof(g + (int)h) << "\n"; // 4 Bytes
    //cout << sizeof(g + int(h)) << "\n"; // 4 Bytes
    //cout << "=====================\n";

    // ======================== //

    /////// [ 24 ] ///////
    /*
      Operators & Operands
      "Symbols To Operate On Data"

      - Arithmetic Operators
      "For Mathematical Operations"

      --- + => Addition
      --- - => Subtraction
      --- * => Multiplication
      --- / => Division
      --- % => Modulo => Remainder After Division

      What Is Operand ?
      - The Part Of an Instruction Representing The Data Manipulated by The Operator
    */
    //cout << 10 + 10 << "\n";              // 20
    //cout << sizeof(10 + 10) << "\n";      // 4
    //cout << 10.5f + 9.5f << "\n";         // 20
    //cout << sizeof(10.5f + 9.5f) << "\n"; // 4
    //cout << int(10.5 + 9.5) << "\n";      // 20
    //cout << "====================\n";
    //cout << sizeof(10.5 + 9.5) << "\n";      // 8
    //cout << sizeof(int(10.5 + 9.5)) << "\n"; // 4

    //cout << 100 - 50 << "\n";  // 50
    //cout << 100 - -50 << "\n"; // 150

    //cout << 10 * 5 << "\n"; // 50

    //cout << 20 / 5 << "\n";   // 4
    //cout << 12 / 5 << "\n";   // 2 => int / int = int
    //cout << 12.f / 5 << "\n"; // 2.4 

    //cout << 20 % 5 << "\n"; // 0
    //cout << 21 % 5 << "\n"; // 1
    //cout << 24 % 5 << "\n"; // 4
    //// cout << 24.5 % 5 << "\n"; // Problem

    // ======================== //

    /////// [ 25 ] ///////
    /*
      Operators & Operands
      "Symbols To Operate On Data"

      - Assignment Operators
      "For Assigning Operations"

      --- = Assign
      --- += Addition
      --- -= Subtraction
      --- *= Multiplication
      --- /= Division
      --- %= Modulo => Remainder After Division
    */
    //cout << 4 % 2 << "\n";  // 0
    //cout << 6 % 2 << "\n";  // 0
    //cout << 8 % 2 << "\n";  // 0
    //cout << 11 % 2 << "\n"; // 1

    //int a = 10;
    //// a = a + 10;        // a = 10 + 10 = 20
    //a += 10; // a = 10 + 10 = 20
    //// a = a + 10
    //// a += 10
    //cout << a << "\n"; // 20

    //int b = 20;
    //// b = b - 10; // b = 20 - 10 = 10
    //b -= 10; // b = b - 10
    //cout << b << "\n";

    //int c = 5;
    //// c = c * 10; // c = 5 * 10 = 50;
    //c *= 10; // c = c * 10
    //cout << c << "\n";

    // ======================== //

    /////// [ 26 ] ///////
    /*
      Operators & Operands
      "Symbols To Operate On Data"

      - Increment And Decrement Operators
      "For incrementing And Decrementing Values"

      --- Pre/Post Increment
      --- Pre/Post Decrement
    */
    //int likes = 0;
    //cout << likes-- << "\n"; // 0
    //cout << likes << "\n";   // -1

    //int views = 0;
    //cout << --views << "\n"; // -1
    //cout << views << "\n";   // -1

    // ======================== //

    /////// [ 27 ] ///////
    /*
      Operators & Operands
      "Symbols To Operate On Data"

      - Comparison Operators
      "For Comparing Values"

      --- == Equal
      --- != Not Equal
      --- > Greater Than
      --- < Less Than
      --- >= Greater Than Or Equal
      --- <= Less Than Or Equal
    */
    //cout << (10 == 10) << "\n";    // 1 => True
    //cout << (1000 == 100) << "\n"; // 0 => False

    //cout << (10 != 10) << "\n";    // 0 => False
    //cout << (1000 != 100) << "\n"; // 1 => True

    //cout << (40 > 18) << "\n"; // 1 => True
    //cout << (18 > 18) << "\n"; // 0 => False

    //cout << (16 < 18) << "\n"; // 1 => True

    //cout << (40 >= 18) << "\n"; // 1 => True
    //cout << (18 >= 18) << "\n"; // 1 => True

    // ======================== //

    /////// [ 28 ] ///////
    /*
      Operators & Operands
      "Symbols To Operate On Data"

      - Logical Operators
      "For Logic Between Values"

      --- && And
      --- || Or
      --- ! Not
    */
    //// int age = 20;
    //// int points = 800;
    //// cout << (age >= 18 && points >= 500) << endl; // 1 => True

    //// int age = 16;
    //// int points = 800;
    //// cout << (age >= 18 && points >= 500) << endl; // 0 => False

    //// int age = 16;
    //// int points = 800;
    //// cout << (age >= 18 || points >= 500) << endl; // 1 => True

    //// int age = 16;
    //// int points = 450;
    //// cout << (age >= 18 || points >= 500) << endl;                    // 0 => False
    //// cout << (100 == 10 || 50 == 10 || 20 == 10 || 10 == 10) << endl; // 1 => True

    //cout << (10 == 10) << endl;   // 1 => True
    //cout << !(10 == 10) << endl;  // 0 => False
    //cout << !(100 == 10) << endl; // 1 => True


    // ======================== //

    /////// [ 29 ] ///////



    // ======================== //

    /////// [ 30 ] ///////



    // ======================== //

    return 0;
}