#include <iostream>
#include <vector>

// #2
std::vector<double> regular_fares = {2.75, 32.00, 121.00};
// std::vector<double> reduced_fares = {1.35, 16.00, 60.50};
std::vector<std::string> fare_options = {"pay per ride", "7 day unlimited", "30 day unlimited"};

// #4
std::vector<double> cost_per_ride(int rides, int days) {

  double ppr_price = ((2.75 * rides) + (rides * 0.05)) / rides;
  int weeks = days / 7;
  double unlimited7_price = (32.00 * weeks) / rides;
  if (days % 7 > 0) {

    unlimited7_price += 32.00;
  
  }
  double unlimited30 = 121.00 / rides;

  std::vector<double> prices = {ppr_price, unlimited7_price, unlimited30};
  return prices;

}


// #3
void get_best_fare(int rides, int days) {

  std::vector<double> ride_prices = cost_per_ride(rides, days);

  float best_fare = ride_prices[0];
  std::string best_option = fare_options[0];

  for(int i = 0; i < ride_prices.size(); i++) {
    
    if (ride_prices[i] < best_fare) {

      best_fare = ride_prices[i];
      best_option = fare_options[i];

    }

  }

  std::cout << "You should get the " << best_option << " option at " << best_fare << " per ride.\n";

}


