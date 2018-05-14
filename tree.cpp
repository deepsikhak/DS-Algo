#include <iostream>
#include <queue>
#include <vector>

using namespace std;

class Node {
	int data;
	Node* left;
	Node* right;

	public: 
	Node(int d){
		data = d;
		left = NULL;
		right = NULL;
	}

	
	int getData(){
		return data;
	}

	void setData(int d){
		data = d;
	}

	
	Node* getLeft(){
		return left;
	}

	void setLeft(Node* node){
		left = node;
	}

	Node* getRight(){
		return right;
	}

	void setRight(Node* node){
		right = node;
	}
};


class bst{
	Node* root;

	public: 
	bst(int data){
		root = new Node(data);
	}

	Node* getRoot(){
		return root;
	}

	void setRoot(Node* node){
		root = node;
	}

	void insert(Node* root, Node* newNode){
		if(root==NULL)setRoot(newNode);
		if(newNode->getData()<=root->getData()){
			if(root->getLeft() == NULL){
				root->setLeft(newNode);
			} else {
				insert(root->getLeft(), newNode);
			}
		}
		else {
			if(root->getRight()==NULL){
				root->setRight(newNode);
			} else {
				insert(root->getRight(),newNode);
			}
		};

	}

	void inOrder(Node* root){
		if(root==NULL)return ;
		inOrder(root->getLeft());
		cout<<root->getData()<<" ";
		inOrder(root->getRight());
	}

	void preOrder(Node* root){
		if(root==NULL)return;
		cout<<root->getData()<< " ";
		preOrder(root->getLeft());
		preOrder(root->getRight());
	}

	void postOrder(Node* root){
		if(root==NULL)return;
		postOrder(root->getLeft());
		postOrder(root->getLeft());
		cout<<root->getData();
	}

	void levelOrder(Node* root){
		if(root==NULL)return;
		queue<Node*>q;
		q.push(root);
		while(!q.empty()){
			if(root->getLeft())q.push(root->getLeft());
			if(root->getRight())q.push(root->getRight());
			cout<<root->getData();
			q.pop();
		}


	}

	int maxHeight(Node* root){
		if(root==NULL)return 0;
		return maxHeight(max(root->getLeft(), root->getRight()))+1;
	}

	int minHeight(Node* root){

	}

	int leafNode(Node* root){

	}

	int sumNodes(Node* root){
		if(root==NULL)return 0;
		return sumNodes(root->getLeft()) + sumNodes(root->getRight()) + root->getData();
	}
};


int main(){
	bst* BT = new bst(100);
	int choice,newNumber;
	Node* p;
	int a,s,sum;
	cout<<"A Binary Search Tree created with value 100 as the root";
	while(1){
		cout<<"\n0 - To exit"<<endl;
		cout<<"1 - To Insert Value in the binary search tree"<<endl;
		cout<<"2 - TO print value in Order"<<endl;
		cout<<"3 - To print Inorder traversal"<<endl;
		cin>>choice;
		switch(choice){
			case 0:
				return 0;
				break;
			case 1:
				cout<<"Please enter number you want to add to bst";
				cin>>newNumber;
				p = new Node(newNumber);
				BT->insert(BT->getRoot(), p);
				break;
			case 2:
				BT->inOrder(BT->getRoot());
				break;
			case 3:
				BT->preOrder(BT->getRoot());
				break;
			case 4:
				BT->postOrder(BT->getRoot());
				break;
			case 5:
				BT->levelOrder(BT->getRoot());
				break;
			case 6:
				a = BT->maxHeight(BT->getRoot());
				cout<<"the Maximum Height is "<<a<<endl;
				break;
			case 7:
				s = BT->minHeight(BT->getRoot());
				cout<<"The minimum height is "<<s<<endl;
				break;
			case 8:
				sum = BT->sumNodes(BT->getRoot());
				cout<<"The sum of the nodes is "<<sum<<endl;
			default:
				cout<<"Please enter a valid Choice"<<endl;
				break;
		}
	}
	return 0;
}
