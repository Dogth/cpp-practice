#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

class rectangle{
  public:
    int width;
    int height;
    int area(){
      return width * height;
    }

  rectangle(int w, int h):width(w), height(h){}

  rectangle():width(rand() % 15), height(rand() % 15){}
};


std::vector<rectangle> getData(){
  using namespace std;
  int size;
  cin >> size;
  vector<rectangle> recs(size);
  for (auto &r : recs){
    recs.push_back(rectangle());
  }
  return recs;
}

rectangle solve(std::vector<rectangle> recs) {
  using namespace std;
  vector<rectangle>::iterator result = max_element(
    recs.begin(), recs.end(), [](rectangle r1, rectangle r2){return r1.area() < r2.area();});
  return *result;
}

int main(){
  using namespace std;
  vector<rectangle> recs = getData();
  rectangle r = solve(recs);
  cout << r.area() << endl;
  return 0;
}
