#pragma once
#include "cutie.hpp"

template<typename T>
class Queue {
    private:
        static const size_t MAX_SIZE = 1000;
        T data[MAX_SIZE];
        size_t current_size;
        T* top;
        T* start;

    public:
        Queue() {
            top= data; 
            start= data; 
            current_size = 0;
        }
        bool is_empty() {
            return top == start;
        }
        bool is_full() {
            return top == data + MAX_SIZE;
        }
        void enqueue(T item) {
            if (!is_full()) {
                *top = item;
                top++;
                current_size++;
            }
            else{
                throw std::runtime_error("Queue is full");
            }
        }
        T dequeue() {
            if (!is_empty()) {
                T popped = *start;
                start++;
                current_size--;
                return popped;
            }
            else{
                throw std::runtime_error("Queue is empty");
            }
        }
        size_t size() {
            return current_size;
        }
};