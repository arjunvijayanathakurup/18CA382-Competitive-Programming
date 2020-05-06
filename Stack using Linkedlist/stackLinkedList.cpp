//  Stack using Linked List in C++

#include<bits/stdc++.h>

using namespace std;

struct node{
	int data;
	struct node *next;
};


struct node *head;


// Insertion at the tail
void push()  
{  
    struct node *ptr, *temp;  
    int item;     
    ptr = (struct node*)malloc(sizeof(struct node));      
    if(ptr == NULL)  
    {  
        cout << "\nOVERFLOW";     
    }  
    else  
    {  
        cout <<"\nEnter value?\n";  
        cin >> item;  
        ptr->data = item;  
        if(head == NULL)  
        {  
            ptr -> next = NULL;  
            head = ptr;  
            cout << "\nNode inserted";  
        }  
        else  
        {  
            temp = head;  
            while (temp -> next != NULL)  
            {  
                temp = temp -> next;  
            }  
            temp->next = ptr;  
            ptr->next = NULL;  
            cout << "\nNode inserted";  
        }  
    }  
}  


// Deletion from the back
void pop()  
{  
    struct node *ptr,*ptr1;  
    if(head == NULL)  
    {  
        cout << "\nlist is empty";  
    }  
    else if(head -> next == NULL)  
    {  
        head = NULL;  
        free(head);  
        cout << "\nOnly node of the list deleted ...\n";  
    }  
          
    else  
    {  
        ptr = head;   
        while(ptr->next != NULL)  
        {  
            ptr1 = ptr;  
            ptr = ptr ->next;  
        }  
        ptr1->next = NULL;  
        free(ptr);  
        cout << "\nDeleted Node from the last ...\n";  
    }     
}  

// Display list
void display()  
{  
    struct node *ptr;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        cout << "Nothing to print";  
    }  
    else  
    {  
        cout << "\nprinting values . . .\n";   
        while (ptr!=NULL)  
        {  
            cout << "\t" << ptr->data;  
            ptr = ptr -> next;  
        }  
    }  
}     

// Peek of stack
void peek()
{
    struct node *ptr;
    ptr = head;
    if(ptr == NULL){
        cout << "Stack Empty";
    }
    else
    {
        cout << "\n Peek value is :\n";
        while(ptr -> next != NULL){
            ptr = ptr -> next;
        }
        cout << "\n" << ptr -> data;

    }
    
}

int main(){
	int choice =0;  
    while(choice != 6)   
    {  
        cout << "\n 1. Push \n 2. Pop \n 3. Peek \n 4. Display \n 5. Exit";  
        cout << "\nEnter your choice?\n";         
        cin >> choice;  
        switch(choice)  
        {  
            case 1:  
	            push();      
	            break;  
            case 2:  
	            pop();         
	            break;  
            case 3:  
	            peek(); 
	            break;  
            case 4:  
	            display();
	            break;  
            case 5:  
	            exit(0);           
	            break;
            default:  
            	cout << "Please enter valid choice..";  
        }  
    }  
	return 0;
}
