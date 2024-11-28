#include<iostream>
using namespace std;

class User
{
        public:
           int age;
           int weight;
           string name;
         virtual void running()
         {

         }
      
      

};

class Student : public User
{
        public:
           int rollno;
           int classes;
           void running()
           {
                cout<<"Student running fast...."<<endl;
           }
};

class Worker : public User
{
        public:
          int workerId;
        void running()
        {
                cout<<"Worker running ..."<<endl;
        }
};


int main()
{
        Student s1;
        Worker w1;
        s1.running();
        w1.running();

       

        return 0;

}