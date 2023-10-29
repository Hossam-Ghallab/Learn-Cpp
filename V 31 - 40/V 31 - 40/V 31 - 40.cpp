#include <iostream>
using namespace std;

int main()
{
    /////// [ 37 - Switch Training – Create Three Application ] ///////
    /*
      Control Flow
      - Switch Trainings
      --- Award System Application
      --- Discount Application
      --- Simple Calculator Application
    */
    //// App 1 => Award System Application

    //int num;
    //cout << "Type The Number\n";
    //cin >> num;

    //switch (num)
    //{
    //case 100:
    //case 110:
    //case 120:
    //    cout << "Congratz For The iPhone";
    //    break;
    //case 200:
    //    cout << "Congratz For The iPad";
    //    break;
    //case 300:
    //    cout << "Congratz For The TV";
    //    break;
    //case 400:
    //    cout << "Congratz For The KeyChain";
    //    break;
    //default:
    //    cout << "No Award For This Number";
    //}

    //// App 2 => Discount Application

    //int price = 100;
    //int discount = 10;
    //int years;
    //cout << "Type The Number Of Years in Company\n";
    //cin >> years;

    //switch (years)
    //{
    //case 1:
    //    discount = 20;
    //    break;
    //case 2:
    //    discount = 40;
    //    break;
    //case 3:
    //    discount = 80;
    //    break;
    //}

    //cout << "The Price Is " << price - discount << "\n";

    // App 3 => Simple Calculator

    //int n1, n2, op;
    //cout << "Type Number One\n";
    //cin >> n1;
    //cout << "Type Number Two\n";
    //cin >> n2;
    //cout << "Choose Operation Number\n";
    //cout << "[1] +\n";
    //cout << "[2] -\n";
    //cout << "[3] /\n";
    //cout << "[4] *\n";
    //cin >> op;

    ///* if (op == 1)
    //{
    //    cout << num_one + num_two << "\n";
    //}
    //else if (op == 2)
    //{
    //    cout << num_one - num_two << "\n";
    //}
    //else if (op == 3)
    //{
    //    cout << num_one / num_two << "\n";
    //}
    //else if (op == 4)
    //{
    //    cout << num_one * num_two << "\n";
    //}
    //else
    //{
    //    cout << "Operation Is Not Valid\n";
    //} */

    //switch (op)
    //{
    //case 1:
    //    cout << n1 << "+" << n2 << "= " << n1 + n2 << "\n";
    //    break;
    //case 2:
    //    cout << n1 << "-" << n2 << "= " << n1 - n2 << "\n";
    //    break;
    //case 3:
    //    cout << n1 << "/ " << n2 << "= " << n1 / n2 << "\n";
    //    break;
    //case 4:
    //    cout << n1 << "*" << n2 << "= " << n1 * n2 << "\n";
    //    break;
    //default:
    //    cout << "Operation Is Not Valid\n";
    //}

    // ======================== //
    
    /////// [ 38 - Array – What Is Array ] ///////
    /*
      Arrays
      - What Is Array ?
      --- Collection Of Elements Of The Same Type
      --- Placed in Contiguous Memory Locations
      --- Referenced By Index Started From 0
      - Why We Need Array ?
      - Creating Array Syntax
      - Check Array Size
      - Create Array Without Size
    */
    //int nums[4] = { 100, 200, 300, 400 };
    //cout << sizeof(int) << "\n";  // 4 Bytes
    //cout << sizeof(nums) << "\n"; // 16 Bytes

    //double dos[4] = { 100, 200, 300, 400 };
    //cout << sizeof(double) << "\n"; // 8 Bytes
    //cout << sizeof(dos) << "\n";    // 32 Bytes

    //int rands[]{ 100, 5000, 950 };

    // ======================== //

    /////// [ 39 - Array – Access Elements & Memory Location ] ///////
    /*
        Arrays
        - Access Array Elements
        - Check Element Location
    */
    //int nums[]{ 100, 200, 300 };

    //cout << "First Element: " << nums[0] << "\n";
    //cout << "Last Element: " << nums[2] << "\n"; // Number Of Elements - 1

    //cout << "Location: " << &nums[0] << "\n";
    //cout << "Location: " << &nums[1] << "\n";
    //cout << "Location: " << &nums[2] << "\n";

    // ======================== //

    /////// [ 40 - Array – Add And Update Elements ] ///////
    /*
      Arrays
      - Declare Empty Array
      - Add Elements To Array
      - Update Array Elements
      - Get Length Of Array With Sizeof
    */
    //int nums[4];

    //nums[3] = 400; // Last Element
    //nums[0] = 100; // First Element
    //nums[1] = 200; // Second Element
    //nums[2] = 300; // Third Element

    //cout << "Element 1: " << nums[0] << "\n";
    //cout << "Element 2: " << nums[1] << "\n";
    //cout << "Element 3: " << nums[2] << "\n";
    //cout << "Element 4: " << nums[3] << "\n";

    //nums[1] = 1000; // Second Element

    //cout << "Element 2: " << nums[1] << "\n";

    //int anums[] = { 100, 200, 300, 400, 500, 600 }; // 24 / 4 = 6
    //cout << "Array Elements Count Is " << sizeof(anums) / sizeof(anums[0]);

    // ======================== //

return 0; }
