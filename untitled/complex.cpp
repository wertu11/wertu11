#include "complex.h"
#include <cmath>
Complex Complex::sum(Complex x1)
{
    Complex z{ x1.re + this->re, x1.im + this->im };
    return z;
}
Complex Complex::diff(Complex x1)
{
    Complex z{ x1.re - this->re, x1.im - this->im };
    return z;

}
Complex Complex::mult(Complex x1)
{

    Complex z{ x1.re * this->re - x1.im * this->im,  x1.re * this->im + x1.im * this->re };
    return z;
}
Complex Complex::divis(Complex x1)
{

    Complex z{ (x1.re * this->re + x1.im * this->im) / (this->re * this->re + this->im * this->im), ((this->re * x1.im - x1.re * this->im) / (this->re * this->re + this->im * this->im)) };
    return z;
}

Complex modul(vector<Complex> arr, int n) {
    double k;
    Complex x;
    k = 0;
    x.re = x.im = 0;
    for (int i = 0; i < n; i++) {

        if (pow(arr[i].re, 2) + pow(arr[i].im, 2) > k) {
            k = (pow(arr[i].re, 2) + pow(arr[i].im, 2));
            x.re = arr[i].re;
            x.im = arr[i].im;
        }
    }

    return x;
}