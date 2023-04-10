#include <iostream>
#include <limits>

bool checkError(){
  if (std::cin.fail() || std::cin.peek() != '\n') {
    std::cerr << "Enter Error!" << std::endl;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return false;
  } else
    return true;
}

int numberOfWays(int n) {
  if (n < 0)
    return 0;
  if (n == 0)
    return 1;
  return numberOfWays(n - 3) + numberOfWays(n - 2) + numberOfWays(n - 1);
}

int main() {
  std::cout << "Input number of steps: " << std::endl;
  int n;
  std::cin >> n;
 if(checkError())
    std::cout << numberOfWays(n);
}
