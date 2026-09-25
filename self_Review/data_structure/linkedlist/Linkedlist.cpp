#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {} //建構子
};

class linkedlist{
    private:
        Node* head;
    public:
        linkedlist() : head(nullptr) {} //建構子

        ~linkedlist() {  //解構子
            Node* current = head;
            while(current != nullptr) {
                Node* nextNode = current->next;
                delete current;
                current = nextNode;
            }
        }

        void append(int val) {
            Node* newNode = new Node(val);
            if(head == nullptr) {
                head = newNode;
                return;
            }
            
            Node* current = head;
            while(current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }

        void display() const{
            Node* current = head;
            while(current != nullptr) {
                cout<<current->data<<" -> ";
                current = current->next;
            }
            cout<<"nullptr"<<endl;
        }
};

int main() {
    linkedlist list;
    list.append(30);
    list.append(40);
    list.append(50);
    list.display();
    return 0;
}