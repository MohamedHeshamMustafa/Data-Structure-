#include <iostream>
#include <cmath>
#include "classes.h"
using namespace std;

int main()
{
    int index;
    int item;


/*polynomial* B = new polynomial;
int ARRAY [3] = {3, 6, 8};
B -> addPolynomial (ARRAY, 3);
cout << B->subtitute_polynomial(2) << endl;*/
polynomial *A = new polynomial;
polynomial *B = new polynomial;
int a[] = {3, 6, 8};
int b[] = {7, 4, 9};
A->addPolynomial(a, 3);
B->addPolynomial(b, 3);

//cout << A->MultiplyPolynomial(B) << endl;

A->differentiate().print_polynomial();
B->differentiate().print_polynomial();

A->print_polynomial();
B->print_polynomial();
}
