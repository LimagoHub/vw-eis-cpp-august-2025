//
// Created by JoachimWagner on 13.08.2025.
//

#pragma once


class Stapel {
private:
    int data[10];
    int index;

public:
    Stapel() {
        index = 0;
        for (int i = 0; i < 10; ++i) {
            data[i]  = 0;
        }
    }

    void push(int value){ 
        if(isFull()) return;
        data[index++] = value;

    }
    int pop() {
        if(isEmpty()) return 0;
        return data[--index];
    }

    bool isEmpty() {
        return index == 0;
    }

    bool isFull() {
        return index == 10;
    }
};
