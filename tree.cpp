class Node {
	int data;
	Node* left;
	Node* right;

	Node(int data){
		this.data= data;
		left = null;
		right = null;
	}

	int getData(){
		return data;
	}

	void setData(data){
		this.data = data;
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
}


class bst{
	Node* root;


	bst(int data){
		root = new Node(data);
	}

	Node* getRoot(){
		return root;
	}

	void setRoot(Node* node){
		this.root = node;
	}

	void insert(Node* root, int newNumber){

	}

	void inOrder(Node* root){
		if(root==null)return ;
		inorder(root->getLeft());
		cout<<root->getData();
		inorder(root->getRight());
	}

	void preOrder(Node* root){

	}

	void postOrder(Node* root){

	}

	int maxHeight(Node* root){

	}

	int minHeight(Node* root){

	}

	int leftNode(Node* root){

	}

	int sumNodes(Node* root){

	}
}


int main(){
	bst BT = new bst(100);
	int choice,newNumber;
	cout<<"A Binary Search Tree created with value 100 as the root";
	while(1){
		cout<<"0 - To exit"<<endl;
		cout<<"1 - To Insert Value in the binary search tree"<<endl;
		cout<<"2 - TO print value in Order"<<endl;
		cin>>choice;
		switch(choice){
			case 0:
				return 0;
				break;
			case 1:
				cout<<"Please enter number you want to add to bst";
				cin>>newNumber;
				BT.insert(BT.getRoot(), newNumber)
				break;
			case 2:
				BT.inOrder(BT.getRoot());
				break;
			default:
				cout<<"Please enter a valid Choice"
				break;
		}
	}
	return 0;
}
