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
float x=455;
float & y=x;
int main(){
    cout<<y<<endl;
    cout<<x<<endl;
    int a = 45;
    float b = 45.46;
    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of a is "<<float(a)<<endl;
    cout<<"The value of b is "<<(int)b<<endl;
    cout<<"The value of b is "<<int(b)<<endl;
    int c = int(b);
    cout<<"The expression is "<<a + b<<endl;
    cout<<"The expression is "<<a + int(b)<<endl;
    cout<<"The expression is "<<a + (int)b<<endl;
    

    return 0;
}