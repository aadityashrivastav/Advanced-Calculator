#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

const double PI = 3.1415;

void addition();
void subtraction();
void multiplication();
void division();
void squaring();
void cubing();
void squareRoot();
void cubeRoot();
void nthRoot();
void absoluteValue();
void percentageCalculation();
void fractionAddition();
void fractionSubtraction();
void fractionMultiplication();
void fractionDivision();
void decimalToFractionConversion();
void fractionToDecimalConversion();
void integerDivision();
void remainderDivision();
void compareNumbers();
void average();
void median();
void mode();
void range();
void roundNumber();
void floorFunction();
void ceilingFunction();
void gcd();
void lcm();
void primeFactorization();
void factorsOfNumber();
void exponentialNotation();
void scientificNotation();
void logarithm();
void antilogarithm();
void trigFunctions();
void inverseTrigFunctions();
void pythagoreanTheorem();
void angleConversion();
void areaAndPerimeter();
void surfaceArea();
void volume();
void simpleInterest();
void compoundInterest();
void percentageChange();
void slope();
void distanceFormula();
void midpointFormula();
void perimeterAndAreaForCircle();
void volumeAndSurfaceAreaForCylinder();

int main() {
    int choice;
    do {
        cout << "Select an operation:" << endl;
        cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Squaring\n6. Cubing\n7. Square Root\n"
                "8. Cube Root\n9. Finding the nth root\n10. Absolute Value\n11. Percentage Calculation\n12. Fraction Addition\n"
                "13. Fraction Subtraction\n14. Fraction Multiplication\n15. Fraction Division\n16. Decimal to Fraction Conversion\n"
                "17. Fraction to Decimal Conversion\n18. Integer Division (Quotient)\n19. Remainder Division (Modulo)\n20. Comparing Numbers\n"
                "21. Finding the Average (Mean)\n22. Finding the Median\n23. Finding the Mode\n24. Finding the Range\n25. Rounding Numbers\n"
                "26. Floor Function (Rounding Down)\n27. Ceiling Function (Rounding Up)\n28. Greatest Common Divisor (GCD)\n29. Least Common Multiple (LCM)\n"
                "30. Prime Factorization\n31. Finding Factors of a Number\n32. Exponential Notation\n33. Scientific Notation\n34. Logarithm\n"
                "35. Antilogarithm\n36. Trigonometric Functions\n37. Inverse Trigonometric Functions\n38. Pythagorean Theorem Calculations\n"
                "39. Angle Conversion (Degrees to Radians, Radians to Degrees)\n40. Area and Perimeter Calculations for Basic Geometric Shapes\n"
                "41. Surface Area Calculations for Basic 3D Shapes\n42. Volume Calculations for Basic 3D Shapes\n43. Simple Interest Calculation\n"
                "44. Compound Interest Calculation\n45. Percentage Change Calculation\n46. Slope Calculation\n47. Distance Formula Calculation\n"
                "48. Midpoint Formula Calculation\n49. Perimeter and Area Calculations for Circles\n50. Volume and Surface Area Calculations for Cylinders\n";
        
        cout << "Enter your choice (0 to exit): ";
        cin >> choice;

        switch (choice) {
            case 1:
                addition();
                break;
            case 2:
                subtraction();
                break;
            case 3:
                multiplication();
                break;
            case 4:
                division();
                break;
            case 5:
                squaring();
                break;
            case 6:
                cubing();
                break;
            case 7:
                squareRoot();
                break;
            case 8:
                cubeRoot();
                break;
            case 9:
                nthRoot();
                break;
            case 10:
                absoluteValue();
                break;
            case 11:
                percentageCalculation();
                break;
            case 12:
                fractionAddition();
                break;
            case 13:
                fractionSubtraction();
                break;
            case 14:
                fractionMultiplication();
                break;
            case 15:
                fractionDivision();
                break;
            case 16:
                decimalToFractionConversion();
                break;
            case 17:
                fractionToDecimalConversion();
                break;
            case 18:
                integerDivision();
                break;
            case 19:
                remainderDivision();
                break;
            case 20:
                compareNumbers();
                break;
            case 21:
                average();
                break;
            case 22:
                median();
                break;
            case 23:
                mode();
                break;
            case 24:
                range();
                break;
            case 25:
                roundNumber();
                break;
            case 26:
                floorFunction();
                break;
            case 27:
                ceilingFunction();
                break;
            case 28:
                gcd();
                break;
            case 29:
                lcm();
                break;
            case 30:
                primeFactorization();
                break;
            case 31:
                factorsOfNumber();
                break;
            case 32:
                exponentialNotation();
                break;
            case 33:
                scientificNotation();
                break;
            case 34:
                logarithm();
                break;
            case 35:
                antilogarithm();
                break;
            case 36:
                trigFunctions();
                break;
            case 37:
                inverseTrigFunctions();
                break;
            case 38:
                pythagoreanTheorem();
                break;
            case 39:
                angleConversion();
                break;
            case 40:
                areaAndPerimeter();
                break;
            case 41:
                surfaceArea();
                break;
            case 42:
                volume();
                break;
            case 43:
                simpleInterest();
                break;
            case 44:
                compoundInterest();
                break;
            case 45:
                percentageChange();
                break;
            case 46:
                slope();
                break;
            case 47:
                distanceFormula();
                break;
            case 48:
                midpointFormula();
                break;
            case 49:
                perimeterAndAreaForCircle();
                break;
            case 50:
                volumeAndSurfaceAreaForCylinder();
                break;
            case 0:
                cout << "Exiting...";
                break;
            default:
                cout << "Invalid choice! Please enter a valid option." << endl;
        }

    } while (choice != 0);

    return 0;
}


void addition() {
    double num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Sum: " << num1 + num2 << endl;
}

void subtraction() {
    double num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Difference: " << num1 - num2 << endl;
}

void multiplication() {
    double num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Product: " << num1 * num2 << endl;
}

void division() {
    double num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    if (num2 == 0) {
        cout << "Error! Division by zero is not allowed." << endl;
    } else {
        cout << "Quotient: " << num1 / num2 << endl;
    }
}

void squaring() {
    double num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Square: " << pow(num, 2) << endl;
}

void cubing() {
    double num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Cube: " << pow(num, 3) << endl;
}

void squareRoot() {
    double num;
    cout << "Enter a number: ";
    cin >> num;
    if (num < 0) {
        cout << "Error! Square root of a negative number is not defined." << endl;
    } else {
        cout << "Square root: " << sqrt(num) << endl;
    }
}

void cubeRoot() {
    double num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Cube root: " << cbrt(num) << endl;
}

void nthRoot() {
    double num, n;
    cout << "Enter a number and the value of n: ";
    cin >> num >> n;
    if (num < 0 && fmod(n, 2) == 0) {
        cout << "Error! Even root of a negative number is not defined." << endl;
    } else {
        cout << n << "th root: " << pow(num, 1/n) << endl;
    }
}

void absoluteValue() {
    double num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Absolute value: " << abs(num) << endl;
}

void percentageCalculation() {
    double num, percentage;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter percentage: ";
    cin >> percentage;
    cout << "Result: " << (num * percentage) / 100 << endl;
}

void fractionAddition() {
    int num1, denom1, num2, denom2;
    cout << "Enter first fraction (numerator and denominator): ";
    cin >> num1 >> denom1;
    cout << "Enter second fraction (numerator and denominator): ";
    cin >> num2 >> denom2;
    int resultNum = num1 * denom2 + num2 * denom1;
    int resultDenom = denom1 * denom2;
    cout << "Sum: " << resultNum << "/" << resultDenom << endl;
}

void fractionSubtraction() {
    int num1, denom1, num2, denom2;
    cout << "Enter first fraction (numerator and denominator): ";
    cin >> num1 >> denom1;
    cout << "Enter second fraction (numerator and denominator): ";
    cin >> num2 >> denom2;
    int resultNum = num1 * denom2 - num2 * denom1;
    int resultDenom = denom1 * denom2;
    cout << "Difference: " << resultNum << "/" << resultDenom << endl;
}

void fractionMultiplication() {
    int num1, denom1, num2, denom2;
    cout << "Enter first fraction (numerator and denominator): ";
    cin >> num1 >> denom1;
    cout << "Enter second fraction (numerator and denominator): ";
    cin >> num2 >> denom2;
    int resultNum = num1 * num2;
    int resultDenom = denom1 * denom2;
    cout << "Product: " << resultNum << "/" << resultDenom << endl;
}

void fractionDivision() {
    int num1, denom1, num2, denom2;
    cout << "Enter first fraction (numerator and denominator): ";
    cin >> num1 >> denom1;
    cout << "Enter second fraction (numerator and denominator): ";
    cin >> num2 >> denom2;
    if (num2 == 0) {
        cout << "Error! Division by zero is not allowed." << endl;
    } else {
        int resultNum = num1 * denom2;
        int resultDenom = denom1 * num2;
        cout << "Quotient: " << resultNum << "/" << resultDenom << endl;
    }
}

void decimalToFractionConversion() {
    double decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;
    const double EPSILON = 1.0e-9;
    int sign = (decimal > 0) ? 1 : ((decimal < 0) ? -1 : 0);
    double fractionPart = abs(decimal) - floor(abs(decimal));
    int wholePart = abs(decimal);
    int num = wholePart * sign;
    int denom = 1;
    while (abs(fractionPart - round(fractionPart)) > EPSILON) {
        fractionPart *= 10;
        denom *= 10;
    }
    num = (num * denom) + round(fractionPart);
    int gcdVal = __gcd(num, denom);
    num /= gcdVal;
    denom /= gcdVal;
    cout << "Fraction: " << num << "/" << denom << endl;
}

void fractionToDecimalConversion() {
    int num, denom;
    cout << "Enter a fraction (numerator and denominator): ";
    cin >> num >> denom;
    double decimal = static_cast<double>(num) / denom;
    cout << "Decimal: " << decimal << endl;
}

void integerDivision() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    if (num2 == 0) {
        cout << "Error! Division by zero is not allowed." << endl;
    } else {
        cout << "Quotient: " << num1 / num2 << endl;
    }
}

void remainderDivision() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    if (num2 == 0) {
        cout << "Error! Division by zero is not allowed." << endl;
    } else {
        cout << "Remainder: " << num1 % num2 << endl;
    }
}

void compareNumbers() {
    double num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    if (num1 == num2) {
        cout << "Both numbers are equal." << endl;
    } else if (num1 < num2) {
        cout << num1 << " is less than " << num2 << endl;
    } else {
        cout << num1 << " is greater than " << num2 << endl;
    }
}

void average() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    double sum = 0, num;
    for (int i = 0; i < n; ++i) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> num;
        sum += num;
    }
    cout << "Average: " << sum / n << endl;
}

void median() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<double> numbers(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }
    sort(numbers.begin(), numbers.end());
    double median;
    if (n % 2 == 0) {
        median = (numbers[n / 2 - 1] + numbers[n / 2]) / 2.0;
    } else {
        median = numbers[n / 2];
    }
    cout << "Median: " << median << endl;
}

void mode() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<double> numbers(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }
    sort(numbers.begin(), numbers.end());
    int maxCount = 0, modeCount = 0;
    double mode = numbers[0], prev = numbers[0];
    for (int i = 1; i < n; ++i) {
        if (numbers[i] == prev) {
            modeCount++;
        } else {
            if (modeCount > maxCount) {
                maxCount = modeCount;
                mode = prev;
            }
            modeCount = 1;
            prev = numbers[i];
        }
    }
    if (modeCount > maxCount) {
        mode = prev;
    }
    cout << "Mode: " << mode << endl;
}

void range() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<double> numbers(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }
    double minVal = *min_element(numbers.begin(), numbers.end());
    double maxVal = *max_element(numbers.begin(), numbers.end());
    cout << "Range: " << maxVal - minVal << endl;
}

void roundNumber() {
    double num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Rounded number: " << round(num) << endl;
}

void floorFunction() {
    double num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Floor value: " << floor(num) << endl;
}

void ceilingFunction() {
    double num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Ceiling value: " << ceil(num) << endl;
}

void gcd() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "GCD: " << __gcd(num1, num2) << endl;
}

void lcm() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "LCM: " << (num1 * num2) / __gcd(num1, num2) << endl;
}

void primeFactorization() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Prime factors: ";
    for (int i = 2; i * i <= num; ++i) {
        while (num % i == 0) {
            cout << i << " ";
            num /= i;
        }
    }
    if (num > 1) {
        cout << num;
    }
    cout << endl;
}

void factorsOfNumber() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Factors: ";
    for (int i = 1; i <= num; ++i) {
        if (num % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

void exponentialNotation() {
    double base, exponent;
    cout << "Enter base and exponent: ";
    cin >> base >> exponent;
    cout << "Result: " << pow(base, exponent) << endl;
}

void scientificNotation() {
    double num;
    int exponent;
    cout << "Enter a number and its exponent: ";
    cin >> num >> exponent;
    cout << "Result: " << num * pow(10, exponent) << endl;
}

void logarithm() {
    double num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Natural logarithm: " << log(num) << endl;
}

void antilogarithm() {
    double num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Antilogarithm: " << exp(num) << endl;
}

void trigFunctions() {
    double angle;
    cout << "Enter an angle in radians: ";
    cin >> angle;
    cout << "Sine: " << sin(angle) << endl;
    cout << "Cosine: " << cos(angle) << endl;
    cout << "Tangent: " << tan(angle) << endl;
}

void inverseTrigFunctions() {
    double value;
    cout << "Enter a value: ";
    cin >> value;
    cout << "Arcsine: " << asin(value) << endl;
    cout << "Arccosine: " << acos(value) << endl;
    cout << "Arctangent: " << atan(value) << endl;
}

void pythagoreanTheorem() {
    double side1, side2;
    cout << "Enter the lengths of two sides of a right triangle: ";
    cin >> side1 >> side2;
    cout << "Hypotenuse: " << sqrt(pow(side1, 2) + pow(side2, 2)) << endl;
}

void angleConversion() {
    double angle;
    cout << "Enter an angle in degrees: ";
    cin >> angle;
    cout << "Radians: " << angle * M_PI / 180 << endl;
    cout << "Degrees: " << angle * 180 / M_PI << endl;
}

void areaAndPerimeter() {
    double length, width;
    cout << "Enter length and width of the rectangle: ";
    cin >> length >> width;

    double area = length * width;
    double perimeter = 2 * (length + width);

    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;
}

void surfaceArea() {
    double side;
    cout << "Enter the side length of the cube: ";
    cin >> side;

    double surfaceArea = 6 * side * side;

    cout << "Surface Area of Cube: " << surfaceArea << endl;
}

void volume() {
    double side;
    cout << "Enter the side length of the cube: ";
    cin >> side;

    double volume = side * side * side;

    cout << "Volume of Cube: " << volume << endl;
}

void simpleInterest() {
    double principal, rate, time;
    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter rate of interest (in percentage): ";
    cin >> rate;
    cout << "Enter time (in years): ";
    cin >> time;

    double simpleInterest = (principal * rate * time) / 100;

    cout << "Simple Interest: " << simpleInterest << endl;
}

void compoundInterest() {
    double principal, rate, time;
    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter rate of interest (in percentage): ";
    cin >> rate;
    cout << "Enter time (in years): ";
    cin >> time;

    double amount = principal * pow((1 + rate / 100), time);
    double compoundInterest = amount - principal;

    cout << "Compound Interest: " << compoundInterest << endl;
}

void percentageChange() {
    double initial, final;
    cout << "Enter initial value: ";
    cin >> initial;
    cout << "Enter final value: ";
    cin >> final;

    double change = ((final - initial) / initial) * 100;

    cout << "Percentage Change: " << change << "%" << endl;
}

void slope() {
    double x1, y1, x2, y2;
    cout << "Enter coordinates of first point (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Enter coordinates of second point (x2, y2): ";
    cin >> x2 >> y2;

    double slope = (y2 - y1) / (x2 - x1);

    cout << "Slope: " << slope << endl;
}

void distanceFormula() {
    double x1, y1, x2, y2;
    cout << "Enter coordinates of first point (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Enter coordinates of second point (x2, y2): ";
    cin >> x2 >> y2;

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    cout << "Distance between the two points: " << distance << endl;
}

void midpointFormula() {
    double x1, y1, x2, y2;
    cout << "Enter coordinates of first point (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Enter coordinates of second point (x2, y2): ";
    cin >> x2 >> y2;

    double midX = (x1 + x2) / 2;
    double midY = (y1 + y2) / 2;

    cout << "Midpoint coordinates: (" << midX << ", " << midY << ")" << endl;
}

void perimeterAndAreaForCircle() {
    double radius;
    cout << "Enter radius of the circle: ";
    cin >> radius;

    double perimeter = 2 * PI * radius;
    double area = PI * radius * radius;

    cout << "Perimeter of Circle: " << perimeter << endl;
    cout << "Area of Circle: " << area << endl;
}

void volumeAndSurfaceAreaForCylinder() {
    double radius, height;
    cout << "Enter radius of the cylinder: ";
    cin >> radius;
    cout << "Enter height of the cylinder: ";
    cin >> height;

    double surfaceArea = 2 * PI * radius * (radius + height);
    double volume = PI * radius * radius * height;

    cout << "Surface Area of Cylinder: " << surfaceArea << endl;
    cout << "Volume of Cylinder: " << volume << endl;
}