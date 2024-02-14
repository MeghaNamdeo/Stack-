
#include <iostream>
using namespace std;
class Stack
{
    public :
    int *arr;
    int top;
    int size;
    
    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top = -1;
    }
    
    void push(int data)
    {
        if(size-top>1)
        {
            //space available
            //insert
            top++;
            arr[top]=data;
            
            
        }
        else
        {
            //space not available
            cout<<"Stack Overflow"<<endl;
        }
    }
    void pop()
    {
        if(top == -1)
        {
           //stack is empty
           cout<<"Stack Underflow , cant delete element"<<endl;
        }
        else
        {
           //stack is not empty 
           top--;
        }
    }
    int getTop()
    {
        if(top == -1 )
        {
            cout<<" There is no element in Stack "<<endl;
            
        }
        else
        {
            return arr[top];
        }
        
    }
    //number of valid element present in stack
    int getSize()
    {
           return top + 1;
    }
    bool isEmpty()
    {
        if(top==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    
    
};
int main()
{
    Stack s(10);
    //insertion 
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    while(!s.isEmpty())
    {
        cout<<s.getTop()<<" ";
        s.pop();
    }
    cout<<endl;
    cout<<"Size of Stack : "<<s.getSize()<<endl;
    
    return 0;
}


//Another way 

#include <iostream>
using namespace std;

#define MAXSIZE 10
#define clrscr system("cls")
class MyStack
{
    private:
    int stack[MAXSIZE],top;
    public:
    MyStack()
    {
        top=-1;
    }
    void push();  
    void pop();   
    void display();  
};
void MyStack::push()
{
    int n;
    if(top == MAXSIZE -1 )
    {
        cout<<"\nStack is in Overflow ";
    }
    else
    {
       
        top++;
        cout<<"Enter element for push : ";
        cin>>n;
        stack[top]=n;
    }
}

void MyStack::pop()
{
    int n;
    if(top ==  -1 )
    {
        cout<<"\nStack is in Underflow ";
    }
    else
    {
       n = stack[top];
       n--;
       cout<<"\n Poped  element";
        
    }
}
void MyStack::display()
{
    if(top ==  -1 )
    {
        cout<<"\nStack is empty ";
    }
    else
    {
        cout<<"Stack Element : ";
        for(int i = top ; i >=0; i--)
        {
            cout<<stack[i]<<"\n";
        }
    }
}

int main()
{
   int choice;
   MyStack s;
   
   do
   {
       cout<<"\n----------------Stack Menu---------------";
       cout<<"\n1 PUSH";
       cout<<"\n2 POP";
       cout<<"\n3 DISPALY";
       cout<<"\n4 EXIT";
       cout<<"\n----------------------------------------";
       cout<<"\nEnter your choice  : ";
       cin>>choice;
       switch(choice)
       {
           case 1: s.push(); break;
           case 2: s.pop(); break;
           case 3: s.display(); break;
           case 4:  break;
           default:cout<<"\n Invalid choice";
       }
    }
    while(choice!=4);
    return 0;
}

