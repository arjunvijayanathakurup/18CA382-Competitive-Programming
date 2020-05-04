// Circular Linked List using C++

#include<bits/stdc++.h>

using namespace std;

struct node{
	int data;
	struct node *next;
};


struct node *head;
struct node *mainHead;

// Insertion at front
void beginsert()  
{  
    struct node *ptr;  
    int item;  
    ptr = (struct node *) malloc(sizeof(struct node *));  
    cout << "\nEnter value\n";    
    cin >> item;    
    ptr->data = item;

    if(head == NULL)  
    {  
        head = ptr;
        ptr-> next = head; 
    }  
    else  
    {  
    	struct node *temp;
    	temp = head;
    	while(temp -> next != head){
    		temp = temp -> next;
    	}
        ptr -> next = head;  
        temp -> next = ptr;
        head = ptr;
        cout << "\nNode inserted";  
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
    else if(head -> next == mainHead)  
    {  
        head = NULL;  
        free(head);  
        cout << "\nOnly node of the list deleted ...\n";  
    }  
          
    else  
    {  
        ptr = head;   
        while(ptr->next != mainHead)  
        {  
            ptr1 = ptr;  
            ptr = ptr ->next;  
        }  
        ptr1->next = mainHead;  
        free(ptr);  
        cout << "\nDeleted Node from the last ...\n";  
    }     
}  

// Display list
void display()  
{  
    struct node *ptr;     
    if(head == NULL)  
    {  
        cout << "Nothing to print";  
    }  
    else  
    {  
        cout << "\nprinting values . . . . .\n"; 
        ptr = head;  
        while (ptr -> next != head)  
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
        cout << "\n1.Insert \n2.Delete from last\n3.Show\n4.Exit\n";  
        cout << "\nEnter your choice?\n";         
        cin >> choice;  
        switch(choice)  
        {  
            case 1:  
	            beginsert();      
	            break;  
            case 2:  
	            last_delete();         
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
