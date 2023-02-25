#include <iostream>
using namespace std;

class sajal{
    public:
    int data;
    sajal* next;

    sajal(int num){
        this -> data = num;
        this -> next = NULL;
    }
};

void insertathead(sajal* &head, int n){
    sajal* temp = new sajal(n);
    temp -> next = head;
    head = temp;
}

void insertAtTail(sajal* &tail, int n){
    sajal* temp = new sajal(n);
    tail -> next = temp;
    tail = tail -> next;
}

//traverse in a linked list
void print(sajal* &head){
    sajal* temp = head;
    while(temp != NULL){
        cout<< temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

void insertAtPosition(sajal* &head, sajal* &tail, int pos, int num){
    if(pos == 1){
        insertathead(head, num);
        return;
    }

    sajal* temp = head;
    int cnt =1;

    while(cnt < pos-1){
        temp = temp-> next;
        cnt++;
    }

    if(temp -> next == NULL){
        insertAtTail(tail, num);
        return;
    }

    //creating a node for num
    sajal* nodetoinsert = new sajal(num);
    nodetoinsert -> next = temp -> next;
    temp -> next = nodetoinsert; 
}

int main(){
    sajal* sajal1 = new sajal(20);
//    cout << sajal1 -> data <<endl;
  //  cout << sajal1 -> next << endl;

    sajal* head  = sajal1;
    
    sajal* tail = sajal1;
    
    insertAtTail(tail, 24);
      print(tail);
    insertAtTail(tail, 23);
      print(tail);
   

    insertAtTail( tail, 34);
    print(tail);

    insertAtPosition(head, tail, 5, 100);
    print(head);
}