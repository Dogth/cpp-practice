#include <string>

std::string solve(int grade){
  switch (grade) {
    case 5:
      return "Отлично";
    case 4:
      return "Хорошо";
    case 3:
      return "Удовлетворительно";
    case 2:
      return "Неудовлетворительно";
    case 1:
      return "Плохо";
    default:
      return "Плохо";
  }
}
