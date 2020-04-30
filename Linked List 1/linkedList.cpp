#include<bits/stdc++.h>

using namespace std;

struct node{
	int data;
	struct node *next;
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

void begin_delete()  
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

// Deletion from the back
void last_delete()  
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
        cout << "\n1.Insert in begining\n2.Insert at last\n3.Delete from Beginning\n4.Delete from last\n5.Show\n6.Exit\n";  
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
	            begin_delete(); 
	            break;  
            case 4:  
	            last_delete();
	            break;  
            case 5:  
	            display();          
	            break;    
            case 6:  
	            exit(0);  
            	break;  
            default:  
            	cout << "Please enter valid choice..";  
        }  
    }  
	return 0;
}
