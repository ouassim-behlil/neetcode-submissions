class DynamicArray {
public:

    int *arr;
    int capacity;
    int size;

    DynamicArray(int capacity) {
        this->capacity = capacity;
        this->size = 0;
        this->arr = new int[capacity];
    }

    int get(int i) {
        return (arr[i]);
    }

    void set(int i, int n) {
        arr[i] = n;
    }

    void pushback(int n) {
        if (this->size == this->capacity)
            resize();
        this->arr[size] = n;
        this->size += 1;
    }

    int popback() {
        int val = this->arr[this->size -1];
        this->size -= 1;
        return val;
    }

    void resize() {
        int new_capacity = this->capacity * 2;
        int *new_arr = new int[new_capacity];

        for (int i = 0; i < this->capacity; i++) {
            new_arr[i] = this->arr[i];
        }

        delete[] this->arr;
        this->arr = new_arr;
        this->capacity = new_capacity;
    }

    int getSize() {
        return (this->size);
    }

    int getCapacity() {
        return (this->capacity);
    }
};
