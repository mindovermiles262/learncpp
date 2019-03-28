#include <iostream>

int main()
{
  // Basic Variable Assignment:
  int width;
  width = 5;
  std::cout << width << "\n";

  // Copy-Initialization
  int height = 10;
  std::cout << height << "\n";

  // Direct initialization
  int direct( 10 );
  std::cout << direct << "\n";

  // Uniform Initialization (C++11)
  // (Not supported by g++)
  // int uniform{ 5 };
  // std::cout << uniform << "\n";
}
