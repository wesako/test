#include<iostream>
#include<cstdlib>
using namespace std;
typedef struct BiTree{
	int data;
	BiTree* lchild;
	BiTree* rchild;
}; 
typedef BiTree* BT;
void insert(BT &T,int k){
	if(T==NULL){
		T = (BiTree*)malloc(sizeof(BiTree));
		T->data = k;
		T->lchild = T->rchild = NULL;
	}
	else if(k<=T->data) insert(T->lchild,k);
	else if(k>T->data) insert(T->rchild,k);
}
int count=0,count1=1;
void inOrder(BiTree* T){
	if(T == NULL) return;
	inOrder(T->lchild);
	if(count<count1){
	    cout<<T->data<<" ";
	    count++;		
	}
    else{
    	cout<<T->data;
	}
	inOrder(T->rchild);
}
int main(){
	BiTree* T = NULL; int k;
	cin>>k;
	while(k!=-1){
		insert(T,k);
		cin>>k;
		count1++;
	}
	cout<<"中序遍历结果为:"<<endl;
	inOrder(T);	
	return 0;
}

