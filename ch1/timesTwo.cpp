#include <iostream>

int main()
{
  std::cout << "Enter an integer: ";
  int num( 5 );
  std::cin >> num;

  std::cout << "Double your number is " << num * 2 << '\n';
  return 0;
}
