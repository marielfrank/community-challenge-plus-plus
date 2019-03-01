// set up file structure
#include "mta.hpp"

int main() {
  
  // #1
  int rides, days;
  std::cout << "Welcome to the MTA best fare calculator!\n";

  std::cout << "How many days do you need the card for?\n";
  std::cin >> days;

  std::cout << "How many rides do you think you'll end up taking?\n";
  std::cin >> rides;

  get_best_fare(rides, days);

}