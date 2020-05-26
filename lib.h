#ifndef LIB_H
#define LIB_H
#include <string>
using namespace std;


class Numbers{
    private:
    double randomNumber(string favorite_word);

    public:
    Numbers(); //constructor
    ~Numbers(); //deconstructor
}
class Hello{
    private:
    double calculateSomething(string location);
    //something about calculateSomething (user location should be private)

    public:
    Exposure(); //constructor
    ~Exposure(); //destructor

    friend class Goodbye; //this class can access private variables from class Hello

}

class Goodbye{
    private:
    //something
    public:
    //something
    Goodbye();
    ~Goodbye();
}










#endif
