#include<iostream>
using namespace std;

class Complex
{
    int real;
    int imaginary;

    public:
        Complex(int c, int d)
        {
            real = c;
            imaginary = d;
        }

        Complex add(Complex x)
        {
            int new_real =  real + x.real;
            int new_imaginary = imaginary + x.imaginary;
            
            return Complex(new_real, new_imaginary);
        }
        
        void displayinfo()
        {
            cout<<"The number is "<<real<<"+"<<imaginary<<"i"<<endl;
        }
};

int main()
{
    #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

    #endif // ONLINE_JUDGE


    // the sum of 5 + 3i and 4 + 2i is 9 + 5i. 
    // For another, the sum of 3 + i and –1 + 2i is 2 + 3i.
    
    Complex c1(5, 3);
    c1.displayinfo();


    Complex c2(4, 2);
    c2.displayinfo();

    
    Complex c3 = c1.add(c2);
    cout<<"After addition"<<endl;
    c3.displayinfo();
    

    return 0;
}