#include "CircularBuffer.h"

template <typename T> void CircularBuffer<T>::push_back(const T &value) {
    if (m_size == m_capacity) {
        resize(m_capacity * 2);
    }
    m_buffer[m_tail] = value;
    m_tail = (m_tail + 1) % m_capacity;
    m_size++;
}

template <typename T> void CircularBuffer<T>::push_front(const T &value) {
    if (m_size == m_capacity) {
        resize(m_capacity * 2);
    }
    m_head = (m_head - 1 + m_capacity) % m_capacity;
    m_buffer[m_head] = value;
    m_size++;
}

template <typename T> void CircularBuffer<T>::pop_back() {
    if (m_size > 0) {
        m_tail = (m_tail - 1 + m_capacity) % m_capacity;
        m_size--;
        if (m_size <= m_capacity / 4) {
            resize(m_capacity / 2);
        }
    }
}

template <typename T> void CircularBuffer<T>::pop_front() {
    if (m_size > 0) {
        m_head = (m_head + 1) % m_capacity;
        m_size--;
        if (m_size <= m_capacity / 4) {
            resize(m_capacity / 2);
        }
    }
}

template <typename T> T& CircularBuffer<T>::back() {
    return m_buffer[(m_tail - 1 + m_capacity) % m_capacity];
}

template <typename T> const T& CircularBuffer<T>::back() const {
    return m_buffer[(m_tail - 1 + m_capacity) % m_capacity];
}

template <typename T> T& CircularBuffer<T>::front() {
    return m_buffer[m_head];
}

template <typename T> const T& CircularBuffer<T>::front() const {
    return m_buffer[m_head];
}

template <typename T> T& CircularBuffer<T>::operator[](size_t index) {
    return m_buffer[(m_head + index) % m_capacity];
}

template <typename T> const T& CircularBuffer<T>::operator[](size_t index) const {
    return m_buffer[(m_head + index) % m_capacity];
}

template <typename T> void CircularBuffer<T>::resize(size_t capacity) {
    if (capacity < m_size) {
        throw std::logic_error("New capacity is less than current size");
    }
    T* new_buffer = new T[capacity];
    for (size_t i = 0; i < m_size; ++i) {
        new_buffer[i] = m_buffer[(m_head + i) % m_capacity];
    }
    delete[] m_buffer;
    m_buffer = new_buffer;
    m_capacity = capacity;
    m_head = 0;
    m_tail = m_size;
}

template <typename T> size_t CircularBuffer<T>::size() const {
    return m_size;
}

template <typename T> size_t CircularBuffer<T>::capacity() const {
    return m_capacity;
}
