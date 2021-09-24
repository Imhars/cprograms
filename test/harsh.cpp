#include<iostream>
using namespace std;
class Data
{
   public:
   float radius;
   void dispay()
   {
        cout<<"enter a radius";
        cin>>this->radius;
   }
};
class Area:public Data
{
    float sum;
    public:
    void result()
    {
        this->sum =(3.14*radius *radius );
        cout<<"this area is "<<this->sum<<"\n";
    }
};
int main()
{
    Area a1;
    a1.result();

    return 0;
}