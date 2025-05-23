#include <iostream>
#include <string>

// This is necessary for input and output

int
main()
{
  std::string name;
  // Prompt the user for their name
  std::cout << "Enter your name: ";
  std::cin >> name;
  // Display personalized message
  std::cout << "Hello world from @" << name << std::endl;
  return 0;
}
