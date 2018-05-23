#include <iostream>
#include <queue>
#include <vector>

using namespace std;

class Node {
	int data;
	Node* next;

	 
	Node(int d){
		data = d;
		next = NULL;
	}

	
	int getVal(){
		return data;
	}

	void setVal(int d){
		data = d;
	}

	void setNext(Node* n){
		next=n;
	}

	Node* getNext(){
		return next;
	}
}

class linklist{
    Node* head;
	linklist(){
		head=NULL;
	
	}
	void setHead(Node* h){
		head=h;
	}
	Node getHead(){
			return head;
	}
	void addNode(Node* n){
		if(head==NULL){
			head=n;
		}
		else{
			n->setNext(head);
			head=n;
		}
	}
	void printLinked(){
		Node* currNode;
		currNode=head;
		cout<<("Node values:");
		while(currNode!=NULL){
			cout<<"-->" + currNode->getVal();
			currNode=currNode->getNext();
		}
		cout<<endl;
		
	}
	void addAtEnd(Node* n){
		Node* temp = head;
		Node* temp2=temp;
		while(temp!=NULL){
			temp2=temp;
			temp=temp->getNext();
		}
		temp2->setNext(n);

	}
	void AddAtPosition(Node* z){
		int n;
		cout<<"Enter the position to insert node : ";
		cin>>n;
		Node* temp=head;
		while(n!=0){
			if(temp==NULL){
				cout<<"Not found";
				return;
			}
			else{
			temp=temp->getNext();
			n--;
		}
		}
		Node* temp2=temp->getNext();
		temp->setNext(z);
		z->setNext(temp2);


	}
	void recdis(){
		cout<<"Printing Node Values ";
		recPrint(head);
	}

	void recPrint(Node* currNode){
		if(currNode==NULL){
			return;
		}
		else{
			cout<<"--> " << currNode->getVal();
			recPrint(currNode->getNext());
		}
	}
	void DeleteBeg(){
		if(head==NULL){
			cout<<"Linked list is empty->";
		}
		else{
			cout<<"1st node is deleted from the beginning->";
			head=head->getNext();

		}
	}
	void DeleteEnd(){
		if(head==NULL){
			cout<<"Linked list is empty->";
		}
		else{
			Node* curr;
			Node* prev;
			prev=head;
			curr=head; 
			while(curr->getNext()!=NULL){
				prev=curr;
				curr=curr->getNext();
			}
			cout<<"Last node is deleted from the beginning->";
			curr=NULL;
			prev->setNext(NULL);
		}
	}
}
class linklist{
	static void main(String[] arg){

		// linklist ll=new linklist();
		// Node n=new Node(1);
		// ll->addNode(n);
		// n=new Node(2);
		// ll->addNode(n);
		// n=new Node(3);
		// ll->addNode(n);
		// n=new Node(4);
		// ll->addNode(n);
		// n=new Node(5);
		// ll->printLinked();

		linklist ll=null;

		while(true){
			cout<<"1. To create a linked list.";
			cout<<"2. To add a node at beginning.";
			cout<<"3. To add a node at end.";
			cout<<"4. To add a node at position.";
			cout<<"5. To display linked list.";
			cout<<"6. To display linked list using recursion.";
			cout<<"7. To delete node from beginning.";
			cout<<"8. To delete node from end.";
			cout<<"0. To exit.";
			int n;
			cin>>n;
			switch(n){
				case 1:
					cout<<"Linked list created: ";
					ll=new linklist();
					break;
				case 2:
					if(ll==NULL){
						cout<<"Linked list is empty.\nCreate linked list first.";

//warning
					}
					else{
						cout<<"Insert the node.";
						int q = scanner.nextInt();
						Node x=new Node(q);
						ll->addNode(x);
					}
					break;
				case 3:
					if(ll==NULL){
						cout<<"Linked list is empty->\nCreate linked list first->";

					}
					else{
						cout<<"Insert the node->";
						int r = scanner->nextInt();
						Node* y=new Node(r);
						ll->addAtEnd(y);
					}
					break ;
				case 4:
					if(ll==NULL){
						cout<<"Linked list is empty->\nCreate linked list first->";

					}
					else{
						cout<<"Insert the node.";
						int r = scanner->nextInt();
						Node* y=new Node(r);
						ll->AddAtPosition(y);
					}
					break ;
				case 5:
					if(ll==NULL){
						cout<<"Linked list is empty->\n Create linked list first->";
//warning
					}
					else{
						cout<<"Linked list is: \n";
						ll->printLinked();	
					}
					break;
				case 6:
					if(ll==NULL){
						cout<<"Linked list is empty->\n Create linked list first->";
						return ;
//warning
					}
					else{
						ll->recdis();	
					}
					break;
				case 7:
					ll->DeleteBeg();
					break;
				case 8:
					ll->DeleteEnd();
					break;
				default:
					return ;

			}
			
		}

}