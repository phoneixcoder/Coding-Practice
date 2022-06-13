#include <iostream>

#include <iomanip>

#include <process>

using namespace std;

class stack

{

private:
    int *s;

    int max;

    int top;

public:
    class FULL
    {
    }; // for exception handling

    class EMPTY
    {
    }; // for exception handling

    stack(int);

    void push(int);

    int pop(void);

    void display(void);
};

stack::stack(int m)

{

    s = new int[m];

    top = -1;

    max = m;
}

void stack::push(int item)

{

    if (top < max - 1)

        s[++top] = item;

    else

        throw FULL(); // FULL object is thrown
}

int stack::pop(void)

{

    if (top >= 0)

        return s[top–];

    else

        throw EMPTY(); // EMPTY object is thrown
}

void stack::display(void)

{

    if (top >= 0)

        for (int i = top; i >= 0; i–)

            cout <<“\n\t |”<< setw(4) << s[i] <<“|\n\t——“;

    else

        throw EMPTY();
}

int main()

{

    int item, size;

    int ch = 1;

    cout <<“\nEnter the size of stack…”;

    cin >> size;

    stack s1(size);

    cout <<“\nStack with Exception Handling”;

    cout <<“\n\n\tMENU\n1.PUSH\n2.POP\n3.SHOW STACK\n4.EXIT”;

    cout <<“\nEnter your choice…”;

    cin >> ch;

    do

    {

        switch (ch)

        {

        case 1:

            cout <<“\nEnter the item to push…”;

            cin >> item;

            try

            {

                s1.push(item);
            }

            catch (stack::FULL) // FULL object is caught

            {

                cout <<“\n * **Stack Overflow * **\n”;
            }

            break;

        case 2:

            try

            {

                cout <<“\nPoped Item is…”<< s1.pop();
            }

            catch (stack::EMPTY) // EMPTY object caught

            {

                cout <<“\n * **Stack Empty * **\n”;
            }

            break;

        case 3:

            cout <<“\nThe Stack is…\n”;

            try

            {
                s1.display();
            }

            catch (stack::EMPTY)

            {

                cout <<“\n * **Stack Empty * **\n”;
            }

            break;

        case 4:

            exit(0);
        }

        cout <<“\nEnter your choice…”;

        cin >> ch;

    } while (ch < 5);

    return 0;
}