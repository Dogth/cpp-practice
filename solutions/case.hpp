#ifndef CASE_HPP
#define CASE_HPP

#include <string>
#include <map>

std::string solveCase2(int grade){
  switch(grade){
    case 5  : return "awesome";
    case 4  : return "good";
    case 3  : return "acceptable";
    case 2  : return "unacceptable";
    default : return "bad";
  }
}

std::string solveCase10(std::string direction, int command){
  enum directs {N="North", W="West",S="South",E="East"}; 
  return directs;
}

std::string solveCase16(const int &age){
  int ageDigit = age % 10;
  std::map<int, std::string> dict = {
    {0,  ""       },
    {1,  "one"    },
    {2,  "two"    },
    {3,  "three"  },
    {4,  "four"   },
    {5,  "five"   },
    {6,  "six"    },
    {7,  "seven"  },
    {8,  "eight"  },
    {9,  "nine"   },
    {20, "twenty" },
    {30, "thirty" },
    {40, "forty"  },
    {50, "fifty"  },
    {60, "sixty"  },
    {70, "seventy"},
    {80, "eighty" },
    {90, "ninety" }
  };
  return dict[age - ageDigit] + dict[ageDigit];
}

#endif
