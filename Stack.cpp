#include <iostream>
using namespace std;

class Stack
{
  private:
   int  top;
  static const int MaxSize = 5;
  int arr[MaxSize];
  public:
  Stack(): top(-1){};
  void push(int data)
  {
    // check if stack is full (top is index of last element)
    if(top >= MaxSize - 1)
    {
      cout << "Stack is full\n";
    } else
    {
      top=top+1;
      arr [top]= data;
      cout << data << " Pushed\n";
    }
  }
  void pop(){
    if(top == -1)
    {
     cout << "Stack is empty";
    }else
    {
        cout << arr[top] << "\nPopped\n";
        top=top-1;
      }
    }

  void Display()
  {
    if(top == -1)
    {
      cout <<"Stack is empty";
    }
    else
    {
      cout << "\nElements are: ";
        for(int i = top; i >= 0; i--)
          cout << arr[i] << " ";
      cout << "\n";
    }
  }
};


  int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.Display();
    s.pop();
    s.Display();

    return 0;

}
