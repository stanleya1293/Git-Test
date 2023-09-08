
#include <iostream>

using namespace std;

int product(int n) {
  int product = 1;
  for (int i = 1; i <= n; i++) {
    product = product * i;
  }
  return product;
}

int sum(int n) {
  int sum = 0;
  for(int i = 1; i <= n; i++) {
    sum += i;
  }
  return sum;
}

int main() {
  int n;
  cout << "Please enter a number: ";
  cin >> n;
  cout << "product: " << product(n) << endl
       << "sum: " << sum(n) << endl;
  return 0;
}
