#include <iostream>
#include <string>
using namespace std;

struct Node {
    char data;
    Node* next;
};

int main(){
    Node* top = nullptr;

    //input kata
    string kata;
    cout << "Masukkan sebuah kata: ";
    cin >> kata;

    //push setiap huruf ke stack
    for(int i = 0; i < kata.length(); i++){
        Node* baru = new Node();
        baru->data = kata[i];
        baru->next = top;
        top = baru;
    }

    //tampilkan stack
    Node* temp = top;
    cout << "Isi stack: ";
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    //top
    if(top != nullptr){
        cout << "top : " << top->data << endl;
    }

    //size
    int size = 0;
    temp = top;
    while(temp != nullptr){
        size++;
        temp = temp->next;
    }
    cout << "size : " << size << endl;

    //isEmpty
    if(top == nullptr){
        cout << "stack kosong" << endl;
    } else {
        cout << "stack tidak kosong" << endl;
    }

    //pop semua isi stack -> hasilnya kata terbalik
    string terbalik = "";
    while(top != nullptr){
        Node* hapus = top;
        terbalik += top->data;
        top = top->next;
        delete hapus;
    }

    //tampilkan hasil
    cout << "Kata terbalik : " << terbalik << endl;

    //isEmpty setelah pop
    if(top == nullptr){
        cout << "stack kosong" << endl;
    }

    return 0;
}