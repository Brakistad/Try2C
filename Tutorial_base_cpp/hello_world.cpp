// my first structured program in c++
#include <iostream>
#include <string> // compound data types needs to be included !
#include <sstream> // stringstream header
#include <cstdlib> // C Standard General Utilities Library
#include <array> // Array lib, native. For higher functionalities

// using define to define contants
#define PI 3.14159
#define NEWLINE '\n'

using namespace std; // The "using" declaration

int calc()
{
    /*
    declaring variables as they are initialized
    int a = 5;

    int b = 2;

    a = a + 1;

    int result = a - b;
    
    return result;
    alternative declerations:
    constructor initialization
    int x (0); // Variable x declared as zero with constructor initialization
    
    uniform initialization
    int x {0};

    type deduction
    int foo = 0;
    auto bar = foo; // same as: int bar = foo;
    decltype(foo) bar2; // same as: int bar2;
    */
   int a, b, result;
   a = 5;
   b = 2;
   a = a + 1;
   result = a - b;
   return result;
}

void message(int addition = -1)
{
    string mystring;
    mystring = "this is the string";
    cout << mystring << NEWLINE;
        if (addition)
    {
        cout << addition << endl;
    }
}
void numerals(int case_flip = -1)
{
    int dec, oct, hex;
    dec = 75;
    oct = 0113;
    hex = 0x4b;
    cout << "Lets compare numeral types: ";
    switch(case_flip)
    {
        case(-1):
        {
            cout << "Fuck you !" << endl;
        }
        case(0):
        {
            cout << (dec == oct) << endl;
        }
        case(1):
        {
            cout << (oct == hex) << endl;
        }
        case(2):
        {
            cout << (hex == dec) << endl;
        }
    }
    dec = 75;       // int
    int decu = 75u;     // unsigned int
    int decl = 75l;     // long
    int decul = 75ul;   // unsigned long 
    int declu = 75lu;   // unsigned long 
}

void floating_point()
{
    float pi, avogadro, couloumb_e;
    pi = 3.14159;    // 3.14159
    avogadro = 6.02e23;    // 6.02 x 10^23
    couloumb_e = 1.6e-19;    // 1.6 x 10^-19
}

void char_n_string()
{
    char c1, c2;
    string s1, s2;
    // characters
    c1 = 'z';
    c2 = 'p';
    // strings
    s1 = "Hello world";
    s2 = "How do you do, do you?";
    // escape codes
    char nl = '\n';
    char cr = '\r';
    char tab = '\t';
    char vt = '\v';
    char backspace = '\b';
    char ff = '\f';
    char alert = '\a';
    char sq = '\'';
    char dq = '\"';
    char qm = '\?';
    char backslash = '\\';

    string message =
    "this forms" "a single"     " string "
    "of characters";

}

void typed_constants()
{
    // typed constants given a CONSTANT value
    const double pi = 3.1415926;
    const char tab = '\t';

}

string interact()
{
    int value;
    cout << "Please enter an integer value: " << endl;
    cin >> value;
    cin.ignore(1000, '\n');
    cout << "You have an IQ of " << value << ". \nImpressive..." << endl;
    cout << "Prove your superiority!";
    cout << endl;
    cout << "Write a intelligent sentence: ";
    string user_line;
    getline (cin, user_line);
    cout << endl << '\"' << user_line << '\"' << endl;
    cout << "You sound like a twat!  Sorry bruv." << endl;
    return user_line;
}

int str_to_int(string to_convert)
{
    int from_convert;
    stringstream(to_convert) >> from_convert;
    return from_convert;
}

bool check_if_hello(string hello)
{
    bool check = (hello == "Hello" or "hello");
    if (check)
    {
        cout << "Yes, hello there!" << endl;
    }
    return check;
}

void a_while_ago(int i_set = 10, string msg = "hello")
{
    int i = i_set;
    cout << "while loop: " << endl;
    while (i>0){
        cout << i << ", ";
        --i;
    }
    cout << "done" << endl;

    cout << "do while loop: " << endl;
    i = i_set;
    do
    {
        cout << i << ", ";
        --i;
    } while (i>0);
    cout << "done" << endl;

    cout << "for loop: " << endl;
    // basic setup
    for (i=i_set; i > 0; --i) {
        cout << i << ", ";
    }
    cout << "done" << endl;

    cout << "for loop with comma(,) operator: " << endl;
    for (int n = 0, i=i_set; i!=n, n < i; --i, ++n){
        cout << i << " | " << n << ", ";
    }
    cout << "done" << endl;

    cout << "range-based for loop : " << endl;
    for (char c: msg){
        cout << "[" << c << "]";
    }
    cout << endl << "done" << endl;


    
}
inline void alter(int& a) 
// "inline" tells compiler to replace the call
// to this function with its statements directly.
//  
// ampersant(&) signifies a reference parameter,
// pointing to the original variable.
// 
{
    a*=3;
}

inline void alter(string& a) 
// "inline" tells compiler to replace the call
// to this function with its statements directly.
//  
// ampersant(&) signifies a reference parameter,
// pointing to the original variable.
// 
{
    string b = "";
    for (int i = a.length()-1; i >= 0; --i)
    {
        char c = a[i];
        b += c;
    }
    a = b;
}
// templates and overloads
int sum(int a, int b)
{
    return a+b;
}

double sum(double a, double b)
{
    return a+b;
}

// also you can use templates
template <class SomeType>
SomeType sum (SomeType a, SomeType b)
{
    return a+b;
}

// non-type template arguments
template <class T, int N> // these template arguments are determined on
// compile-time !! OBS !
T fixed_multiply(T val)
{
    return val * N;
}

namespace somewhere // defining different scope
{
    // also you can use templates in this scope
    template <class SomeType>
    SomeType sum (SomeType a, SomeType b)
    {
        return a+b+1;
    }

    // non-type template arguments
    template <class T, int N> // these template arguments are determined on
    // compile-time !! OBS !
    T fixed_multiply(T val)
    {
        return val * (N + 1);
    }
} // namespace somewhere

// working with arrays
template <unsigned long long int N>
array<unsigned long long int, N> fibonacci() // you can create a array type parameter with "int arg[]"
// but if you want to return a array or something like this, you need the <array> lib 
{
    array<unsigned long long int, N> fibonacci = {1, 1};
    for (int i = 0; i < N; ++i ){
        if (i > 1){
            fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
        }
    }
    return fibonacci;
}

int main()
{
    std::cout << "Hello world!" << endl; // The explicit qualification, to qualify directly
    
    cout 
    << 
    "I'm a C++ program"
    <<
    "\n"
    ; // The "using" declaration allows cout 
    // to be accessed in an unqualified manner
    int calc_result = calc();
    cout << calc_result; // calc was not declared in this scope
    message(calc_result);
    string user_line = interact();
    alter(user_line);
    cout << "This is it backwards: " << user_line << endl;
    cout << "Great, but give me a integer";
    cout << endl;
    string to_convert;
    int number;
    getline(cin,to_convert);
    number = str_to_int(to_convert);
    int number_unaltered = number;
    cout << "You typed: " << number << endl;
    alter(number);
    cout << "You did'nt type: " << number << endl;
    cout << "Thank you!" << endl;
    a_while_ago(number);
    // alter(number);
    // a_while_ago(number);
    cout << "Give me another word: " << endl;
    string other_word;
    getline(cin,other_word);
    cout << "result of some sums " 
    << sum<int>(number, number_unaltered) 
    << ", "
    << sum(number, number_unaltered)
    << ", "
    << fixed_multiply<int, 5>( number )
    << ", "
    << somewhere::sum<int>(number, number_unaltered) 
    << ", "
    << somewhere::sum(number, number_unaltered)
    << ", "
    << somewhere::fixed_multiply<int, 5>( number )
    << " (integer sum), "
    << sum<string>(user_line, other_word)
    << " (string sum)"
    << endl<<endl<<endl;
    std::cout << "And here are some fibonacci numbers" << endl << "> ";
    array<unsigned long long int, 100> fib = fibonacci<100>();
    for (unsigned long long int num : fib){
        cout << num << ", ";
    }cout<<endl;
    int x = 10; // This is a variable
    auto x_addr = &x; // This is a pointer for the variable
    int x_2 = *x_addr; // Using dereference operator to access the value of the address
    cout << "The variable x has the value " 
    << x 
    << " and the address "
    << x_addr
    << endl
    << "Also x_2 then has the value "
    << x_2
    << " and the address "
    << &x_2
    <<endl;



    return EXIT_SUCCESS;
}

