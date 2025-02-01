#include <iostream> //header

// p1
// int main() {
//     std::cout << "Hello, World!" << std::endl;
//     return 0;
// }
// this line of code "std" is a namespace, "::" is the scope resolution operator
// and "cout<<" is a function which is used to output data, "hello world" 


// questions 
// "std::cout" tells the compiler that the "cout" identifier resides in the std namespace. Main key points here are:
// what is namespace and scope resolution operator
// "std::cout" tells the compiler that the "cout" identifier resides in the std namespace. 
// what is kernel
// how compiler is realed to kernel and comp architecture and os


//p2
using namespace std;
// int main(){
//     int sum=6;
//     cout<<"Hello world "<< sum;
//     return 0;
// }



// built in variables- int float char couble boolean
// user defined struct, union, enum
// derived data tupes--> array pointer function


// p3
// int main(){

//     int a=14, b=15;
//     float pi=3.14;
//     char c='d';
//     cout<<"thisi i "<<a<<".\nthis is pi "<<pi;
//     return 0;
// }




//p4
// int glo=6;
// void sum(){
//     int a;
//     cout<<"glo from inside sum: "<<glo<<"\n";

// }

// int main(){
//     int glo=9;
//     int a=14;
//     bool is_true=false;
//     sum();
//     cout<<"glow from inside main "<<glo<<" is true "<<is_true;
//     cout<<"global glo "<<::glow;
//     return 0;
// }

// conclusion--> looks like if it is inside a function, then the function will call that variable, if not then whatever is outisde the function(before main), that varibale will be called


//p5-- user input

// int main()
//     {
//         int num1, num2;
//         cout<<" entr the vaulue of num1:\n";
//         cin>>num1;
//         return 0;

//     }


// p6- operators in c
// +,-,*,/,%,a++,a--,++a,--a
// comparision operator ==,!=, >=, <=, >,<
// logical operator &&,||,  !-->?

// int main(){
//     int a=8;
//     cout<<"the value of a is "<<a<<endl;
//     cout<<"the value of a++ is "<<a++<<endl;
//     cout<<"the value of a is "<<a<<endl;
//     cout<<"the value of ++a is "<<++a<<endl;
//     cout<<"the value of a is "<<a<<endl;
//     cout<<"the value of --a is "<<--a<<endl;
//     cout<<"the value of a is "<<a<<endl;
//     cout<<"the value of a-- is "<<a--<<endl;
//     cout<<"the value of a is "<<a++<<endl;
//     cout<<"a : "<<a<<" a++: "<<a++<<" a: "<<a<<" a-- "<<a--<<endl; //??

//     return 0;
// }


// p7- built in data types
// float double and long double literals
// float d=34.4F;
// long double e= 34.4L;
// float a=34.4;
// int main(){
// cout<<"size of 34.4: "<<sizeof(34.4)<<endl;
// cout<<"size of 34.4f: "<<sizeof(34.4f)<<endl;
// cout<<"size of 34.4L: "<<sizeof(e)<<endl;
// return 0;

// }


// p8 reference variable-->, typecasting--> changing one variable to another
// float x=455;
// float & y=x;
// int main(){
//     cout<<y<<endl;
//     cout<<x<<endl;
//     int a = 45;
//     float b = 45.46;
//     cout<<"The value of a is "<<(float)a<<endl; // does both of it works
//     cout<<"The value of a is "<<float(a)<<endl;
//     cout<<"The value of b is "<<(int)b<<endl;
//     cout<<"The value of b is "<<int(b)<<endl;
//     int c = int(b);
//     cout<<"The expression is "<<a + b<<endl;
//     cout<<"The expression is "<<a + int(b)<<endl;
//     cout<<"The expression is "<<a + (int)b<<endl;
    

//     return 0;
// }


// p9 operator precedence and operator associativity 
// Operator Precedence

// int main(){
// int a =3, b=4;
// // int c = (a*5)+b;
// int c = ((((a*5)+b)-45)+87);
// cout<<c;
// return 0;
// }


// important
// p 10- if else, case, switch , loop, break, continue statement

// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     if (num > 0) {
//         cout << "The number is positive.\n";
//     } else if (num < 0) {
//         cout << "The number is negative.\n";
//     } else {
//         cout << "The number is zero.\n";
//     }

//      for (int i = 1; i <= 5; i++) {
//         cout << i << " ";

//     }

//      int i = 1;
//     while (i <= 5) {
//         cout << i << " ";
//         i++;
//     }


//     do {
//         cout << "Enter a positive number: ";
//         cin >> num;
//     } while (num <= 0);
    
//     cout << "You entered: " << num << endl;

//     return 0;
// }




// pointers important

// 12. Pointers in C++ | 12
// The “&” operator is called “address off" operator, and the "*” operator is called “value at” dereference operator. 

// int main(){
//     int a=3;
//     int*b=&a;
//     int** c= &b;
//     int k =4;
//     int*l = &k; //l is a pointer to k if we say k= 4 then error
//     cout<<"the address of b is "<<&b<<endl;
//     cout<<"the address of b is (c): "<<c<<endl;
//     cout<<"the value at address c is (address of a) "<<*c<<endl;
//     cout<<"the value at address value_at(value_at(c)) is "<<**c<<endl;
//     // cout<<"the vlaue at l** is "<<**l<<endl throws an error 
//     return 0;
// }

// 13. Arrays & Pointers Arithmetic in C++ | 13-- 44
// int main(){
//     int marks[]={23,24,67,32};
//     int *ptr=marks;
//     cout<<"the value of marks[0] is "<<*ptr<<endl;
//     cout<<"the value of marks[1] is "<<*(ptr+1)<<endl;
//     cout<<"the value of marks[2] is "<<*(ptr+2)<<endl;
//     cout<<"the value of marks[3] is "<<*(ptr+3)<<endl;
//     return 0;
// }


// int main(){
    
//     return 0;
// }


// 14. Structures, Unions & Enums in C++ | 14
// Define a struct
struct Person {
    string name;
    int age;
    float height;
};
typedef struct employee
{
    int eId;
    char facChar;
    float salary;

}ep;

// //application of struct
// Used for data modeling (e.g., students, employees, vehicles).
// Groups related attributes without requiring methods (unlike classes).
// Can be used in linked lists, trees, and other data structures.

// define union 
union myUnion {
    int i;
    char car;
    float f;
};

// //application of enum
// Purpose: Groups multiple variables sharing the same memory space.
// Memory: Allocates memory equal to the largest member.
// Use Case: Useful when only one of the variables is needed at a time


// // application of enum
// Defining categories (e.g., colors, days, directions).
// State management (e.g., traffic lights, game states).
// Improves readability compared to using integer constants
int main(){
     // Create an instance of struct
    Person p1;
    ep harry;
    // creating union
    myUnion u;
    //creating enumns
    enum Meal{ breakfast, lunch, dinner};
    
    u.i=32;


    cout<<"the value of i is "<<u.i<<endl;

    harry.eId = 1;
    harry.facChar = 'A';
    harry.salary = 50000.0;

    // Assign values to members
    p1.name = "Alice";
    p1.age = 25;
    p1.height = 5.6;

    // Print struct values
    cout << "Name: " << p1.name << endl;
    cout << "Age: " << p1.age << endl;
    cout << "Height: " << p1.height << " feet" << endl;
    
    return 0;
}




// 15. Functions & Function Prototypes in C++ |
// 16. Call by Value & Call by Reference in C++ |
// 17. Inline Functions, Default Arguments & Constant Arguments in C++ |
// 18. Recursions & Recursive Functions in C++ |
// 19. Function Overloading with Examples in C++ | 19