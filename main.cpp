#include <iostream>
#include <list>

int main() {
    std::cout << "Hello, World!" << std::endl;
    std:: list<int> list = {1,2,3,4,5,6,7};
    std:: list<int>::iterator it = list.begin();
    std:: list<int>::iterator it2= it++;
    std:: list<int>::iterator it3 = it2++;
    std:: list<int>::iterator it4 = list.end();
    //std:: list<int>::iterator it5 = list.begin();
    std::cout << *it << std::endl;
    std::cout << *it2 << std::endl;
    std::cout << *it3 << std::endl;
    std::cout << *it4 << std::endl;

    std::cout << "after erase" << std::endl;
    list.erase(it3);
    std::cout << *it << std::endl;
    std::cout << *it2 << std::endl;
    std::cout << *it3 << std::endl;
    std::cout << *it4 << std::endl;

    return 0;
}
