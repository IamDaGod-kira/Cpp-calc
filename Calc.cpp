/*
First give a try run without input then give input in second run
*/
/*
Please share with every person u know in sololearn ! it always helps .....
*/
#include <iostream>
#include <cmath>
using namespace std;

struct {
  double num1;
  double num2;
  char op;
} Mystruct;

class calc {

  public:
  calc () {
    cout << "Enter a number: \n";
    cin >> Mystruct.num1;
    cout << "Enter another number: \n";
    cin >> Mystruct.num2;
    cout << "Enter an operator: \n";
    cout << "\n";
    cout << "T = table \n";
    cout << "# = exponent \n";
    cout << "_ = Divisibility check \n";
    cout << "d = division in decimals \n";
    cout << "% = square root \n";
    cout << "+ = addition \n";
    cout << "- = subtraction \n";
    cout << "* = multiplication \n";
    cout << "/ = division \n";
    cout << "\n";
    cin >> Mystruct.op;
    cout << "Your Operation : " << endl;
    cout << Mystruct.num1 << " " << Mystruct.op << " " << Mystruct.num2 << "\n";
    cout << "\n";
  }

  ~calc () {
    cout << "\n";
    cout << "v2.6" << endl;
  }

  void table (double num1, double num2) {
    cout << "table of " << num1 << " till " << num2 << " is " << endl;
    for (double _2 = 1; _2 <= num2; _2++) {
      cout << num1 << " x " << _2 << " = " << (num1*_2) << endl;
    }
  }

  void expo (double x2, double x3) {
    cout << x2 << " to the power of " << x3 << " = " << pow(x2, x3) << endl;
  }

  void add (double x, double y) {
    cout << x << " + " << y << " = " << x + y << endl;
  }

  void sub (double p, double q) {
    cout << p << " - " << q << " = " << p - q << endl;
  }

  void mult (double t, double u) {
    cout << t << " * " << u << " = " << t * u << endl;
  }

  void div (double m, double n) {
    int m2 = int(m);
    int n2 = int(n);
    cout << m << " / " << n << " = " << m / n << endl;
    cout << "Remainder = " << m2 % n2 << endl;
  }

  void sq2 (double _q) {
    if (Mystruct.num1 > 0) {
      cout << "Square Root " << _q << " = " << sqrt(_q) << endl;
    }
  }

  void divd (double _m, double _n) {
    cout << _m << " / " << _n << " in decimals = " << (float) _m / (float) _n << endl;
  }

  void divs (double po, double sq) {
    int po2 = int(po);
    int sq2 = int(sq);
    if (po2 % sq2 == 0) {
      cout << sq << " is divisible by " << po << endl;
    }
    else {
      cout << sq << " is not divisible by " << po << endl;
    }
  }
};

int main() {
  calc obj;

  cout << "\n";
  cout << max(Mystruct.num1, Mystruct.num2) << " > " << min(Mystruct.num1, Mystruct.num2) << endl;
  cout << "\n";
  try {

    switch (Mystruct.op) {

      case '+':
      obj.add(Mystruct.num1, Mystruct.num2);
      break;

      case '-':
      obj.sub(Mystruct.num1, Mystruct.num2);
      break;

      case '/':
      obj.div(Mystruct.num1, Mystruct.num2);
      break;

      case '*':
      obj.mult(Mystruct.num1, Mystruct.num2);
      break;

      case '%':
      obj.sq2(Mystruct.num1);
      break;

      case 'd':
      obj.divd(Mystruct.num1, Mystruct.num2);
      break;

      case '_':
      obj.divs(Mystruct.num1, Mystruct.num2);
      break;

      case '#':
      obj.expo(Mystruct.num1, Mystruct.num2);
      break;

      case 'T':
      if (Mystruct.num2 != 0 && Mystruct.num2 > 0) {
        obj.table(Mystruct.num1, Mystruct.num2);
      }
      if (Mystruct.num2 == 0) {
        obj.table(Mystruct.num1, 10);
      }
      break;

      default:
      if (Mystruct.num1 != 0 || Mystruct.num2 != 0) {
        throw 96;
      }
      break;
    }

    // more try conditional
    if (Mystruct.num1 == 0 && Mystruct.num2 == 0) {
      throw 99;
    }
    if (Mystruct.op == '%' && Mystruct.num1 <= 0) {
      throw 98;
    }
    if (Mystruct.op == 'T' && Mystruct.num2 < 0) {
      throw 97;
    }
  }
  catch (double error) {
    cout << "Something Went Wrong " << endl;
    cout << "Error code : " << error << endl;
  }
}