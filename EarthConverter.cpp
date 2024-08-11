#include <iostream>

int main() {
  
  double earthGram;
  double mercuryGram, venusGram, marsGram, jupiterGram, saturnGram, uranusGram, neptuneGram;


  int choose_one_or_two_of_list;
  std::cout << "Enter number (1 - convert to all planets, 2 - choose planet to convert): ";
  std::cin >> choose_one_or_two_of_list;

  if (choose_one_or_two_of_list == 1) {
 
    std::cout << "Enter weight of earth (gram): ";
    std::cin >> earthGram;

    mercuryGram = 0.38 * earthGram;
    venusGram = 0.91 * earthGram;
    marsGram = 0.38 * earthGram;
    jupiterGram = 2.34 * earthGram;
    saturnGram = 1.06 * earthGram;
    uranusGram = 0.92 * earthGram;
    neptuneGram = 1.19 * earthGram;

    std::cout << "\n" << mercuryGram << " gram(s) in Mercury\n";
    std::cout << venusGram << " gram(s) in Venus\n";
    std::cout << marsGram << " gram(s) in Mars\n";
    std::cout << jupiterGram << " gram(s) in Jupiter\n";
    std::cout << saturnGram << " gram(s) in Saturn\n";
    std::cout << uranusGram << " gram(s) in Uranus\n";
    std::cout << neptuneGram << " gram(s) in Neptune\n";

  } else if (choose_one_or_two_of_list == 2) {

    int choose_of_planet_list;
    std::cout << "1 - Mercury\n2 - Venus\n3 - Mars\n4 - Jupiter\n5 - Saturn\n6 - Uranus\n7 - Neptune\n\nEnter number: ";
    std::cin >> choose_of_planet_list;
    
    switch (choose_of_planet_list) {
      case 1:
      std::cout << "Enter weight of earth (gram): ";
      std::cin >> earthGram;
      mercuryGram = 0.38 * earthGram;
      std::cout << mercuryGram << " gram(s) in Mercury\n";    
      break;

      case 2:
      std::cout << "Enter weight of earth (gram): ";
      std::cin >> earthGram;
      venusGram = 0.91 * earthGram;
      std::cout << venusGram << " gram(s) in Venus\n";    
      break;

      case 3:
      std::cout << "Enter weight of earth (gram): ";
      std::cin >> earthGram;
      marsGram = 0.38 * earthGram;
      std::cout << marsGram << " gram(s) in Mars\n";    
      break;

      case 4:
      std::cout << "Enter weight of earth (gram): ";
      std::cin >> earthGram;
      jupiterGram = 2.34 * earthGram;
      std::cout << jupiterGram << " gram(s) in Jupiter\n";   
      break;
      
      case 5:
      std::cout << "Enter weight of earth (gram): ";
      std::cin >> earthGram;
      saturnGram = 1.06 * earthGram;
      std::cout << saturnGram << " gram(s) in Saturn\n";  
      break;
      
      case 6:
      std::cout << "Enter weight of earth (gram): ";
      std::cin >> earthGram;
      uranusGram = 0.92 * earthGram;
      std::cout << uranusGram << " gram(s) in Uranus\n";   
      break;
      
      case 7:
      std::cout << "Enter weight of earth (gram): ";
      std::cin >> earthGram;
      neptuneGram = 1.19 * earthGram;
      std::cout << neptuneGram << " gram(s) in Neptune\n"; 
      break;
      
      default:
      // add function return if entered incorrect or unknown number
      // it will be ended for temporary
      std::cout << "You entered incorrect or unknown.\n";
      break;
    }

  } else {
    std::cout << "You entered number incorrect or unknown.\n";
  }
  
  return 0;
  
}