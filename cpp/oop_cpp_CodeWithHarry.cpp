
// object oriented programming 

// 4 pillars of OOP
// 1. Encapsulation - bundling data (variables) and methods (functions) that operate on the data into a single unit, typically a class.
// 2. Inheritance - Reusability 
// 3. Polymorphism- Ability to take more than one form
// 4. Abstraction - hiding complex implementation details and exposing only essential features.

// // oop_p1
// class Employee
// {
// private:
//     int a, b, c;
// public:
//     int d, e;
//     void setData(int a1, int b1, int c1); // Declaration
//     void getData(){
//         cout<<"The value of a is "<<a<<endl;
//         cout<<"The value of b is "<<b<<endl;
//         cout<<"The value of c is "<<c<<endl;
//         cout<<"The value of d is "<<d<<endl;
//         cout<<"The value of e is "<<e<<endl;
//     }
// };


// void Employee :: setData(int a1, int b1, int c1){
//     a = a1;
//     b = b1;
//     c = c1;
// }


// int main(){
//     Employee harry;
//     harry.d = 34;
//     harry.e = 89;
//     harry.setData(1,2,4);
//     harry.getData();
//     return 0;
//     }



// OOPs p2 nesting of member funcitons (functions defined inside a class that operate on the class's data)

// class binary
// {
// private:
//     string s;
//     void chk_bin(void);

// public:
//     void read(void);
//     void ones_compliment(void);
//     void display(void);
// };


// void binary::read(void)
// {
//     cout << "Enter a binary number" << endl;
//     cin >> s;
// }

// void binary::chk_bin(void)
// {
//     for (int i = 0; i < s.length(); i++) // is 's' a str? 
//     {
//         if (s.at(i) != '0' && s.at(i) != '1') // why am i becoming stupid day by day
//     {
//         cout << "Incorrect binary format" << endl;
//         exit(0);
//     }
//     }
// }


// void binary::ones_compliment(void)
// {
//     chk_bin();
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s.at(i) == '0')
//     {
//             s.at(i) = '1';
//     }
//         else
//     {
//             s.at(i) = '0';
//     }
//     }
// }

// void binary::display(void)
// {
//     cout<<"Displaying your binary number"<<endl;
//     for (int i = 0; i < s.length(); i++)
//     {
//         cout << s.at(i);
//     }
//     cout<<endl;
// }


// int main()
// {
//     binary b;
//     b.read();
//     // b.chk_bin();
//     b.display();
//     b.ones_compliment();
//     b.display();
//     return 0;
// }


// oops - C++ Objects Memory Allocation & using Arrays in Classes 
// meaning -->the memory is allocated to the function only once when the class is declared. 
// So the objects don’t have individual copies of functions
// only one copy is shared among each object

// class Shop
// {
//     int itemId[100]; // why not just to use dynamic memory allocation
//     int itemPrice[100];
//     int counter;
//     public:
//         void initCounter(void) { counter = 0; } // doubt what this line does
//         void setPrice(void);
//         void displayPrice(void);
// };

// void Shop ::setPrice(void)
// {
//     cout << "Enter Id of your item no " << counter + 1 << endl;
//     cin >> itemId[counter];
//     cout << "Enter Price of your item" << endl;
//     cin >> itemPrice[counter];
//     counter++;
// }

// void Shop ::displayPrice(void)
// {
//     for (int i = 0; i < counter; i++)
//     {
//         cout << "The Price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
//     }
// }
// int main()
// {
//     Shop dukaan;
//     dukaan.initCounter();
//     dukaan.setPrice();
//     dukaan.setPrice();
//     dukaan.setPrice();
//     dukaan.displayPrice();
//     return 0;
// }


// oops static data members & methods in C++ 

// class Employee
// {
//     int id;
//     static int count;
//     public:
//     void setData(void)
//     {
//         cout << "Enter the id" << endl;
//         cin >> id;
//         count++;
//     }
//     void getData(void)
//     {
//         cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
//     }
//     static void getCount(void){
//     // cout<<id; // throws an error
//         cout<<"The value of count is "<<count<<endl;
//     }
// };






// class Counter {
// private:
//     static int count; // Declaration of static data member
// public:
//     Counter() {
//         count++; // Increment count for each object
//     }
    
//     void showCount() {
//         cout << "Count: " << count << endl;
//     }

//     static void displayCount() { // Static method
//         cout << "Static Count: " << count << endl;
//     }
// };

// // Definition of static data member outside the class

// // In C++, a static data member belongs to 
// // the class itself (not individual objects), but it must be defined outside the class to allocate storage.

// int Counter::count = 0;
// A Tour of C++c++ primerasdf
// int main() {
//     Counter c1, c2, c3;
//     c1.showCount();  // Output: Count: 3
//     c2.showCount();  // Output: Count: 3

//     // Accessing static data member using class name
//     Counter::displayCount(); // Output: Static Count: 3

//     return 0;
// }



// passing object as function variable
// class complex{
//     int a;
//     int b;
//     public:
//     void setData(int v1, int v2){
//         a = v1;
//         b = v2;
//     }
//     void setDataBySum(complex o1, complex o2){
//         a = o1.a + o2.a;
//         b = o1.b + o2.b;
//     }
//     void printNumber(){
//         cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
//     }
// };



// int main(){
//     complex c1, c2, c3;
//     c1.setData(1, 2);
//     c1.printNumber();
//     c2.setData(3, 4);
//     c2.printNumber();
//     c3.setDataBySum(c1, c2);
//     c3.printNumber();
//     return 0;
// }








// Friend Functions in C++

// --Friend functions are those functions that have the right to access the private data members of class even though they are not defined inside the
// class.



// class Complex{
//     int a, b;
//     friend Complex sumComplex(Complex o1, Complex o2);
//     public:
//     void setNumber(int n1, int n2){
//     a = n1;
//     b = n2;
//     }
//     // Below line means that non member - sumComplex funtion is allowed to do anything with my private parts (members)
//     void printNumber(){
//     cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
//     }
//     };

// Complex sumComplex(Complex o1, Complex o2){
//     Complex o3;
//     o3.setNumber((o1.a + o2.a), (o1.b+o2.b))
//     ;
//     return o3;
// }





// Friend Classes & Member Friend Functions in C++
// Memeber Friend Functions in C++
// Member Friend Functions in C++


// class Complex
// {
//     int a, b;
//     // Individually declaring functions as friends

//     friend class Calculator;

//     public:
//     void setNumber(int n1, int n2)
//     {
//     a = n1;
//     b = n2;
//     }
//     void printNumber()
//     {
//     cout << "Your number is " << a << " + " << b << "i" << endl;
//     }
// };

// int Calculator ::sumRealComplex(Complex o1, Complex o2)
// {
// return (o1.a + o2.a);
// }
// int Calculator ::sumCompComplex(Complex o1, Complex o2)
// {
// return (o1.b + o2.b);
// }

// // Forward declaration
// class Complex;
// class Calculator
// {
// public:
// int add(int a, int b)
// {
// return (a + b);
// }
// int sumRealComplex(Complex, Complex);
// int sumCompComplex(Complex, Complex);
// };




// int main()
// {
// Complex o1, o2;
// o1.setNumber(1, 4);
// o2.setNumber(5, 7);
// Calculator calc;
// int res = calc.sumRealComplex(o1, o2);
// cout << "The sum of real part of o1 and o2 is " << res << endl;
// int resc = calc.sumCompComplex(o1, o2);
// cout << "The sum of complex part of o1 and o2 is " << resc << endl;
// return 0;
// }