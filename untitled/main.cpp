#include "complex.h"

int main()
{
    Complex x1;
    cout << "Input x1 Real and x1 Imaginary:" << endl;
    cin >> x1.re >> x1.im;
    Complex x2;
    cout << "Input x2 Real and x2 Imaginary:" << endl;
    cin >> x2.re >> x2.im;

    cout << "Sum: " << x1.sum(x2).Get() << endl;
    cout << "Diff: " << x1.diff(x2).Get() << endl;
    cout << "Mult: " << x1.mult(x2).Get() << endl;
    cout << "Divis: " << x1.divis(x2).Get() << endl;



    ifstream in("complex.txt");
    int n;
    double k;
    in >> n;
    vector<Complex>arr(n);
    for (int i = 0; i < n; i++) {
        in >> arr[i].re;
        in >> arr[i].im;
    }
    cout << "Max modul: " << modul(arr, n).Get();
    in.close();
    return 0;
}