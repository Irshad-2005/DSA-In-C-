/* 2.  multi level inheritance */

#include<iostream>
using namespace std;

class Fruit
{
        public:
          int weight;
          Fruit()
          {
                cout<<"Constructor Fruit class..."<<endl;
          }
};
class Mongo:public Fruit
{
            public:
               string color;
               Mongo()
               {
                  cout<<"Constructor Mongo class..."<<endl;
               }
};

class Alphonso :public Mongo{
        public:
          int sugarLevel;
          Alphonso()
          {
                cout<<"Constructor Alphonso class..."<<endl;
          }

};

int main()
{
        Alphonso a;
        cout<<a.weight<<endl;
        cout<<a.color<<endl;
        cout<<a.sugarLevel<<endl;
        return 0;
}