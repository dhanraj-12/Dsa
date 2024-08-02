#include<bits/stdc++.h>
using namespace std;

class Human {
    public:
    int height;
    int age;
    int weight;

    int getage() {
        return age;
    }

};

class Male : public Human {
  string color; 
  public:
  void setcolor(string color) {
     this->color = color;
  }
  void getcolor() {
     cout << "Color of the male: " << color << endl;
  }
};

int main() {
   
   Male m1;
   m1.height = 175;
   m1.setcolor("black");
   m1.getcolor();

    return 0;
}