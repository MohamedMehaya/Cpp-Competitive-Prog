#include <iostream>
 
int main() {
 
  // The magic starts here
  int gryffindor = 0, hufflepuff = 0, ravenclaw = 0, slytherin = 0;
  int answer1, answer2, answer3, answer4;

  std::cout << "The Sorting Hat Quiz!\n";

  std::cout << "Q1) When I'm dead, I want people to remember me as:\n\n"; 

  std::cout << "  1) The Good\n";
  std::cout << "  2) The Great\n";
  std::cout << "  3) The Wise\n";
  std::cout << "  4) The Bold\n\n";

  std::cin >> answer1;
  
  switch(answer1){
    case 1:
      hufflepuff+=1;
      break;
    case 2:
      slytherin+=1;
      break;
    case 3:
      ravenclaw+=1;
      break;
    case 4:
      gryffindor+=1;
      break;
    default:
      std::cout << " Invalid input";
  }

  std::cout << "Q2) Dawn or Dusk?\n\n"; 

  std::cout << "  1) Dawn\n";
  std::cout << "  2) Dusk\n";  

  std::cin >> answer2;

  if (answer2) {
 
  gryffindor++;
  ravenclaw++;
  } else if (answer2 == 2) {
 
  hufflepuff++;
  slytherin++; 
  } else {
  std::cout << " Invalid input";
  }

  std::cout << "Q3) Which kind of instrument most pleases your ear?\n\n"; 

  std::cout << "  1) The violin\n";
  std::cout << "  2) The trumpet\n";
  std::cout << "  3) The piano\n";
  std::cout << "  4) The drum\n\n";

  std::cin >> answer3;

  switch(answer3){
    case 1:
      slytherin++;
      break;
    case 2:
      hufflepuff++;
      break;
    case 3:
      ravenclaw++;
      break;
    case 4:
      gryffindor++;
      break;
    default:
      std::cout << " Invalid input";
  }

  std::cout << "Q4)  Which road tempts you most?\n\n"; 

  std::cout << "  1) The wide, sunny grassy lane\n";
  std::cout << "  2) The narrow, dark, lantern-lit alley\n";
  std::cout << "  3) The twisting, leaf-strewn path through woods\n";
  std::cout << "  4) The cobbled street lined (ancient buildings)\n\n";

  std::cin >> answer4;

  switch(answer4){
    case 1:
      hufflepuff++;
      break;
    case 2:
      slytherin++;
      break;
    case 3:
      gryffindor++;
      break;
    case 4:
      ravenclaw++;
      break;
    default:
      std::cout << " Invalid input";
  }

  std::string house;
  int max=0;
  max = gryffindor;
  house = "Gryffindor";
 
if (hufflepuff > max) {
 
  max = hufflepuff;
  house = "Hufflepuff";
 
}
 
if (ravenclaw > max) {
 
  max = ravenclaw;
  house = "Ravenclaw";
 
}
 
if (slytherin > max) {
 
  max = slytherin;
  house = "Slytherin";
 
}
 
std::cout << house << "!\n";


}

