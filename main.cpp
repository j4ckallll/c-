#include <iostream>
#include <random>
#include <cmath>

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<double> distr(1.0, 100.0);

    double random_num = distr(gen);
    double log_val = std::log(random_num); 

    std::cout << "Random Number: " << random_num << std::endl;
    std::cout << "Natural Log (ln): " << log_val << std::endl;

    return 0;
}