#include<iostream>

using namespace std;


class linkedList{
    private:
        struct node{
            int data;
            node *next;
        };
        typedef node NODE;

        int len;
        NODE *head;

        NODE* getNode(int num){
            NODE *temp = new NODE;
            temp->data = num;
            temp->next = NULL;
            return temp;
        }

    public:

        linkedList(){
            this->head = getNode(0);
        }

        void pushFront(int x);
        void pushBack(int x);
        int popFront();
        int popBack();
        int getSize();
        void print();
};

int linkedList::getSize(){
    return this->head->data;
}

void linkedList::pushFront(int x){
    NODE *newNode = getNode(x);
    newNode->next = this->head->next;
    this->head->next = newNode;
    this->head->data++;
}

int linkedList::popFront(){
    if(this->head->data == 0){
        throw underflow_error("No more elements to pop");
    }
    NODE *temp = this->head->next;
    int data = temp->data;
    this->head->next = temp->next;
    free(temp);
    this->head->data --;
    return data;
}

int linkedList::popBack(){
    if(this->head->data == 0){
        throw underflow_error("No more elements to pop");
    }
    NODE *temp = this->head->next;
    while(temp->next->next!=NULL){
        temp = temp->next;
    }
    int data = temp->next->data;
    free(temp->next);
    temp->next=NULL;
    this->head->data --;
    return data;
}

void linkedList::pushBack(int x){
    NODE *newNode = getNode(x);
    NODE *temp = this->head;
    while( temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    this->head->data++;
}

void linkedList::print(){
    NODE *temp = this->head->next;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){
    linkedList ll;
    ll.pushBack(5);
    ll.pushBack(6);
    ll.pushBack(7);
    ll.pushBack(8);
    ll.pushFront(1);
    ll.print();
    cout<<"\nPOPF:"<<ll.popFront()<<endl;
    cout<<"\nPOPB:"<<ll.popBack()<<endl;
    ll.print();
    cout<<"\n"<<ll.getSize();
    return 0;
}