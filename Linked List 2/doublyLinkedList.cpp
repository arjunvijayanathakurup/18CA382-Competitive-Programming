// Doubly Linked List using c++

#include<bits/stdc++.h>

using namespace std;

struct node{
	int data;
	struct node *next;
	struct node *prev;
};


struct node *head;


// Insertion at front
void beginsert()  
{  
    struct node *ptr;  
    int item;  
    ptr = (struct node *) malloc(sizeof(struct node *));  
    if(ptr == NULL)  
    {  
        cout << "\nOVERFLOW";  
    }  
    else  
    {  
        cout << "\nEnter value\n";    
        cin >> item;    
        ptr->data = item;  
        ptr->next = head;
        ptr->prev = NULL;  
        head = ptr;  
        cout << "\nNode inserted";  
    }  
      
}  
// Insertion at the tail


void lastinsert()  
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
            ptr -> prev = NULL;  
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
            ptr->prev = temp;
            cout << "\nNode inserted";  
        }  
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


void revDisplay()
{
	struct node *ptr;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        cout << "Nothing to print";  
    }  
    while(ptr->next != NULL)
    {
    	ptr = ptr -> next;
    }
    while (ptr!=NULL)  
    {  
        cout << "\n" << ptr->data;  
        ptr = ptr -> prev;  
    }  
}


int main(){
	int choice =0;  
    while(choice != 6)   
    {  
        cout << "\n1.Insert in begining\n2.Insert at last\n3.Show\n4.Reverse Show\n5.Exit\n";  
        cout << "\nEnter your choice?\n";         
        cin >> choice;  
        switch(choice)  
        {  
            case 1:  
	            beginsert();      
	            break;  
            case 2:  
	            lastinsert();         
	            break;  
            case 3:  
	            display();
	            break;  
            case 4:  
	            revDisplay();
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
