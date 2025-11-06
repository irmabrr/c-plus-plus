#include <iostream>

int main() {
  
  int pesos;
  int reais;
  int soles;
  double dollars;
  
  std::cout << "Enter number of Columbian Pesos:";
  std::cin >> pesos;
  // 1 Colombian Peso equals 0.00026 United States Dollar
  double conversion_rate1 = 0.00026;

  std::cout << "Enter number of Brazilian Reais:";
  std::cin >> reais;
  // 1 Brazilian Real equals 0.19 United States Dollar
  double conversion_rate2 = 0.19;

  std::cout << "Enter number of Peruvian Soles:";
  std::cin >> soles;
  // 1 Sol equals 0.30 United States Dollar
  double conversion_rate3 = 0.3;

  dollars = (conversion_rate1 * pesos) + (conversion_rate2 * reais) + (conversion_rate3 * soles);

  std::cout << "US Dollars = $" << dollars; 

}