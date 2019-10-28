#include <iostream>
#include <string>

using namespace std;

class Hero {
  private:
    string name;
    int level;
  public:
    Hero (string n , int num){
      name = n;
      level = num;
    }
  string getName() {
    return name;
  }
 
  int getLevel() {
    return level;
  }
};

int main()
{
    int level1,level;
    string name1,name;
    cin >> name1;
    cin >> level1;
    Hero P(name1,level1);
    cout << P.getName() << " " << P.getLevel();
}
