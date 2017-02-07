#include <iostream>

#include "Food.h"
#include "Spaghetti.h"

int main() {
  foods::Spaghetti * plate = new foods::Spaghetti(2.23,67,51);
  std::cout << "calories of your spaghetti plate:  " << plate->getCalories() << std::endl;
  delete plate;
  return 0;
}
