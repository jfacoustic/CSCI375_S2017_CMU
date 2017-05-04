#include <iostream>
#include <string>
#include "pool.h"

using namespace std;
using namespace pools;

struct Thing : public Poolable {
  string name;
  std::vector<Thing*> knows;
  Thing(Pool &_pool, string _name) 
    : Poolable(_pool), name(_name) {}
  ~Thing() { cout << "deleted thing " << name << endl; }
};

int main() {
  Pool *pool1 = new Pool();
  Pool *pool2 = new Pool();

  Thing *thing1 = new Thing(*pool1,"thing1");
  Thing *thing2 = new Thing(*pool1,"thing2");
  thing1->knows.push_back(thing2);
  thing2->knows.push_back(thing1);
  Thing *thing3 = new Thing(*pool2,"thing3");
  Thing *thing4 = new Thing(*pool2,"thing4");

  cout << "delete pool1" << endl;
  delete pool1;

  cout << "delete pool2" << endl;
  delete pool2;
  
  return 0;
}
