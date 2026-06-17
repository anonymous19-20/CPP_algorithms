#include<iostream>
using namespace std;

class DLL{
  public:
    struct node{
      int data;
      node* next;
      node* prev;
      node(int val){
        data=val;
        prev = nullptr;
        next = nullptr;
      }
    };
  private:
    node* head;
    node* tail;
  public:
    DLL()
    {
      head = nullptr;
      tail = nullptr;
    }
    ~DLL()
    {
    node* newptr = head;
    while(newptr)
    {
      node* nextnode = newptr->next;
      delete newptr;
      newptr=nextnode;
    };
    }
    void insertEnd(int val);
    void insertBeg(int val);
    void Display();
};
 void DLL::insertEnd(int val)
    {
      node* nnew = new node(val);
      if(head==nullptr)
        tail=head=nnew;
      else 
      {
        tail->next=nnew;
        nnew->prev=tail;
        tail=nnew;
      }
    }
void DLL::insertBeg(int val)
{
node* newnode= new node(val);
  if(head==nullptr)
    head=tail=newnode;
  else
  {
    head->prev=newnode;
    newnode->next=head;
    head=newnode;
  }

}
void DLL::Display()
    {
      node* tmp= head;;
     cout << "NULL<->";
      while(tmp!=nullptr)
      {
        cout << tmp->data << "<->";
        tmp=tmp->next;
      };
      cout << "NULL";

    }


int main()
{
  DLL l;
   cout<<"\n--------------New----------\n";
   l.insertEnd(34);
   l.insertEnd(54);
   l.insertBeg(564);
   l.Display();
  return 0;
}





