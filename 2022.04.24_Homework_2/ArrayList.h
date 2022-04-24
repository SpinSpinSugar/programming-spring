#pragma once
#include <iostream>

class ArrayList {
private:
    int* _Array = nullptr;
    size_t _Size = 0;
    size_t _Capacity = 1;
public:
    ArrayList() : _Array(new int[1]) {};
    ArrayList(int value, size_t size);
    ArrayList(int value, size_t size, size_t capacity);
    ArrayList(int* array, size_t size, size_t capacity);
    //ArrayList(int* array); can't be realized
    ArrayList(const ArrayList& a);
    ~ArrayList();
    int& operator[](size_t i);
    size_t capacity() const;
    size_t size() const;
    void resize(size_t newsize);
    void reserve(size_t newcap);
    void push_back(const int& value);
    void pop_back();
    void push_front(const int& value);
    void pop_front();
    void insert(const size_t& position, const int& value);
    void erase(const size_t& position);
    void sort();
    friend std::ostream& operator<<(std::ostream& stream, ArrayList& list);
private: //methods for ArrayList::sort()
    void sorter(int* _Array, size_t left, size_t right);
    size_t partition(int* _Array, size_t left, size_t right); 
};