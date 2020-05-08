// Queue implementation using linked list

#include<bits/stdc++.h>

using namespace std;

struct node{
	int data;
	struct node *next;
};


struct node *head;


// Insertion at the end
void enqueue()  
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

// Deletion from the front
void dequeue()  
{  
    struct node *ptr;  
    if(head == NULL)  
    {  
        cout << "\nList is empty\n";  
    }  
    else   
    {  
        ptr = head;  
        head = ptr->next;  
        free(ptr);  
        cout << "\nNode deleted from the begining ...\n";  
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
        cout << "\nprinting values . . . . .\n";   
        while (ptr!=NULL)  
        {  
            cout << "\n" << ptr->data;  
            ptr = ptr -> next;  
        }  
    }  
}     



int main(){
	int choice =0;  
    while(choice != 6)   
    {  
        cout << "\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n";  
        cout << "\nEnter your choice?\n";         
        cin >> choice;  
        switch(choice)  
        {  
            case 1:  
	            enqueue();      
	            break;  
            case 2:  
	            dequeue();         
	            break;  
            case 3:  
	            display(); 
	            break;  
            case 4:  
	            exit(0); 
	            break; 
            default:  
            	cout << "Please enter valid choice..";  
        }  
    }  
	return 0;
}
