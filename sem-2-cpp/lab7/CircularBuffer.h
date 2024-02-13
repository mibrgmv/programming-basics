#ifndef CBUFF
#define CBUFF
#include "iostream"

template <typename T>
class CircularBuffer {
private:
    T* m_buffer;
    size_t m_capacity;
    size_t m_size;
    size_t m_head;
    size_t m_tail;
public:
    CircularBuffer(size_t capacity = 10) : m_capacity(capacity), m_size(0), m_head(0), m_tail(0) {
        m_buffer = new T[m_capacity];
    }
    ~CircularBuffer() {
        delete[] m_buffer;
    }
    void push_back(const T& value);
    void push_front(const T& value);
    void pop_back();
    void pop_front();
    T& back();
    const T& back() const;
    T& front();
    const T& front() const;
    T& operator[](size_t index);
    const T& operator[](size_t index) const;
    void resize(size_t capacity);
    size_t size() const;
    size_t capacity() const;
};
#endif
