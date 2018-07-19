# ifndef LINKEDLIST_H
# define LINKEDLIST_H
# include <iostream>
# include "Node.h"
using namespace std;

template<class T>
class LinkedList {
	private:
		Node<T> *front, *rear;
		Node<T> *prevPtr, *currPtr;
		int size;
		int position; 
		
		Node<T> * newNode(const T&item, Node<T> *ptrNext=NULL);
		
		void freeNode(Node<T> *p);
		
		void copy(const LinkedList<T>&L);
	
	public:
		LinkedList();
		LinkedList(const LinkedList<T>&L);
		~LinkedList();
		LinkedList<T>& operator=(const LinkedList<T>&L);
		
		int getSize() const;
		bool isEmpty() const;
		
		void reset(int pos=0);
		void next();
		bool endOfList() const;
		int currentPosition(void) const;
		
		void insertFront(const T&item);
		void insertRear(const T&item);
		void insertAt(const T&item);
		void insertAfter(const T&item);
		
		T deleteFront();
		void deleteCurrent();
		
		T& data();
		const T& data() const;
		
		void clear();
}; 

template<class T>
Node<T> * LinkedList<T>::newNode(const T&item, Node<T> *ptrNext){
	Node<T> *newNode;
	newNode = new Node<T>(item, ptrNext);
	if(newNode==NULL){
		cout<<"ÄÚ´æ·ÖÅäÊ§°Ü"<<endl;
		exit(1);
	}
	return newNode;
}

template<class T>
void LinkedList<T>::freeNode(Node<T> *p){
	delete p;
}

template<class T>
void LinkedList<T>::copy(const LinkedList<T>&L){
	if(L.size==0){
		return;
	}
	front=rear=newNode(L.front->data);
	for(Node<T> *srcNode=L.front->nextNode();srcNode!=NULL;srcNode=srcNode){
		Node<T> *newNode = newNode(srcNode->Data);
		rear->insertAfter(newNode);
		rear = newNode;
	}
	size = L.size;
	reset(position = L.CurrentPosition());}
}

