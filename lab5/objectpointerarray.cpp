#include <iostream>
#include <string.h>
using namespace std;

class Ant
{
private:
    char name[20];
    float length;
    float width;

public:
    Ant(char n[] = "Ant Bataa", float length = 10, float width=1)
    {
        strcpy(name, n);
        this->length = length;
        this->width = width;
    }
    ~Ant()
    {
        cout << "Ant has retired." << endl;
    }
    void display(){
        cout<<"name: "<<name<<" length: "<<length<<" width: "<<width<<endl;
    }
};

int main()
{
    typedef Ant *AntPtr;
    int num_ants;
    cout<<"Enter number of ants: ";cin>>num_ants;
    AntPtr *ants = new AntPtr[num_ants];
    for (int i = 0; i < num_ants; ++i)
    {
        ants[i] = new Ant();
    }

    for (int i = 0; i < num_ants; ++i)
    {
        ants[i]->display();
    }

    return 0;
}
