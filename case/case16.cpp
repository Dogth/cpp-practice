#include <string>
#include <vector>

std::string solve(int number) {
  std::vector<std::string> tens{
    "","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety" };
  std::vector<std::string> ones{
    "","one","two","three","four","five","six","seven","eight","nine" };
  return tens[number / 10] + ones[number % 10];
}

int main(){
  return 0;
}
