//Shivangi Singh
//24070123148
//B3

#include <iostream>
#define MAXSIZE 5

class Stack
{
    private:
        int arr[MAXSIZE];
        int top;
    public:
        Stack():top(-1){}
        void push(int data){
            top++;
            arr[top]=data;
        }
        void pop()
        {
            top--;
        }
        void display()
        {
            for(int i=0; i<=top; i++)
            {
                std::cout << arr[top] << " ";
            }
            std::cout << std::endl;
        }
};
int main()
{
    Stack s;
    s.push(11);
    s.push(12);
    s.pop();
    s.display();
}

//Output:
//11
