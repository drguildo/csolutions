#include <iostream> // apparently iostream.h is not a standard header

class Fraction {
public:
    Fraction(int, int);
    void print();
    Fraction operator*(Fraction);
    Fraction operator+(Fraction);
    Fraction operator-(Fraction);
    Fraction operator/(Fraction);
private:
    int numerator;
    int denominator;
    void reduce();
    int gcd(int, int);
};

int main(void) {
    Fraction f(12, 60);

    f.print();

    return 0;
}

Fraction::Fraction(int num = 0, int denom = 1) {
    numerator = num;
    denominator = denom;
    reduce();
}

void Fraction::print() {
    // cout is now std::cout
    std::cout << numerator;
    std::cout << "/";
    std::cout << denominator;
    std::cout << std::endl;
}

Fraction Fraction::operator*(Fraction f) {
    Fraction result(numerator * f.numerator, denominator * f.denominator);

    return result;
}

Fraction Fraction::operator+(Fraction f) {
    Fraction result(numerator + f.numerator, denominator + f.denominator);

    return result;
}

Fraction Fraction::operator-(Fraction f) {
    Fraction result(numerator - f.numerator, denominator - f.denominator);

    return result;
}

Fraction Fraction::operator/(Fraction f) {
    Fraction result(numerator / f.numerator, denominator / f.denominator);

    return result;
}

void Fraction::reduce() {
    int greatest = gcd(numerator, denominator);

    numerator /= greatest;
    denominator /= greatest;
}

int Fraction::gcd(int m, int n) {
    return n == 0 ? m : gcd(n, m % n);
}
