#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;
struct Complex
{

    double re;
    double im;

    Complex sum(Complex x1);
    Complex diff(Complex x1);
    Complex mult(Complex x1);
    Complex divis(Complex x1);
    string Get() {
        return to_string(re) + "+i*(" + to_string(im) + ")";
    }

};
Complex modul(vector<Complex> arr, int n);