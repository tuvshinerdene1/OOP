#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

class shape
{
protected:
    char *name;

public:
    char *get_name() { return this->name; }
    void set_name(char *n)
    {
        if (name != nullptr)
        {
            delete this->name;
        }
        name = new char(strlen(n) + 1);
        strcpy(name, n);
    }
    void print(){cout<<name<<" ";}
};
class twod : public shape
{
protected:
    int a;

public:
    float area() { return 0; };
    void print(){
        shape::print();
        cout<<a<<" ";
    }
    void print(){
        twod::print();
        cout<<this->area()<<" ";//hiiswer function ashiglaj dawhtsliig arilgaj bolno.
    }
};
class circle : public twod
{
    // when function overriding, name and parameters should be same as parent class' function.
public:
    float area()
    {
        return 3.14 * a * a;
    }
    void print(){
        twod::print();
        cout<<this->area()<<" ";//eh classiin function dahin ashiglalt, tsag hugatsaand hemnelttei.
    }
};

main(){
    twod d;
    float s = d.area(); //s=0
    circle c;
    s = c.area();//child class buyu tuhain classiin function iig duudna
    
}
