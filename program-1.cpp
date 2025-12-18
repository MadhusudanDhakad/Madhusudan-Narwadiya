/*Problem-1: Create a small calculator which performs operations such as Addition, Subtraction, Multiplication and Division using class.
  Calculator inputs :> ‘a’, ‘b’ and ‘type of operation’
  Datatype :> ‘a’ = double, ‘b’ = double, ‘type of operation’ = string
  */
  
  #include<iostream>
  using namespace std;
  
  class Calculator {
	  private:
	  double a, b;
	  string typeOfString;
	  
	  public:
	  Calculator(double x, double y, string operation) {
		  a = x;
		  b = y;
		  typeOfString = operation;
	  }
	  
	  double calculate() {
		  if (typeOfString == "add") 
				return a+b;
		  else if (typeOfString == "sub") 
				return a-b;
		  else if (typeOfString == "mul") 
					return a*b;
		  else if (typeOfString == "div") {
				if (b == 0) {
					cout << "Error: division by zero" << endl;
					return 0;
				}
				return a/b;
			}
			else {
				cout << "Not a valid operation." << endl;
				return 0;
			}
	  }
  } ;
  
  int main() {
	  double a,b;
	  cout << "Enter first number: ";
	  cin >> a;
	  cout << "Enter second number: ";
	  cin >> b;
	  string ops;
	  cout << "Enter Operation: ";
	  cin >> ops;
	  
	  Calculator calc(a,b,ops);
	  cout << calc.calculate() << endl;
	  
	  return 0;
  }
  