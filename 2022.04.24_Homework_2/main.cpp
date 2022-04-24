#include <iostream>
#include "ArrayList.h"

int main(int argc, char* argv[]) {
    //TESTS
    ArrayList c;
    std::cout << c << "SIZE: " << c.size() << ' ' << "CAPACITY: " << c.capacity() << '\n';
    c.push_back(11); // 11
    std::cout << c << "SIZE: " << c.size() << ' ' << "CAPACITY: " << c.capacity() << '\n';

    c.push_front(11); // 11 11
    std::cout << c << "SIZE: " << c.size() << ' ' << "CAPACITY: " << c.capacity() << '\n';

    c.insert(2, 5); // 11 11 5
    std::cout << c << "SIZE: " << c.size() << ' ' << "CAPACITY: " << c.capacity() << '\n';

    c.push_front(5); // 5 11 11 5
    c.erase(2); // 5 11 5
    //ArrayList c;
    c.push_back(111); 
    c.push_back(222);
    c.push_back(333); // 5 11 5 111 222 333
    c[0] = 222;
    // 222 11 5 111 222 333
    c.push_front(333);
    // 333 222 11 5 111 222 333
    c.push_front(444);
    // 444 333 222 11 5 111 222 333
    std::cout << c << "SIZE: " << c.size() << ' ' << "CAPACITY: " << c.capacity() << '\n';
    c.pop_front();
    std::cout << c << "SIZE: " << c.size() << ' ' << "CAPACITY: " << c.capacity() << '\n';
    c.insert(2, 5);
    std::cout << c << "SIZE: " << c.size() << ' ' << "CAPACITY: " << c.capacity() << '\n';

    //c.insert(0, 999);
    c.push_front(999);
    std::cout << c << "SIZE: " << c.size() << ' ' << "CAPACITY: " << c.capacity() << '\n';

    c.push_back(1010);
    std::cout << c << "SIZE: " << c.size() << ' ' << "CAPACITY: " << c.capacity() << '\n';
    c.erase(0);
    std::cout << c << "SIZE: " << c.size() << ' ' << "CAPACITY: " << c.capacity() << '\n';
    c.sort();
    std::cout << c << "SIZE: " << c.size() << ' ' << "CAPACITY: " << c.capacity() << '\n';
    
    // COPY CONSTRUCTOR TESTS
    ArrayList t = c;
    t.push_back(10);
    t.push_front(20);
    t.push_back(30);
    t.erase(2);
    std::cout << t << "SIZE: " << t.size() << ' ' << "CAPACITY: " << t.capacity() << '\n';
    return EXIT_SUCCESS;
}