#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include<iostream>
#include "node.h"
using namespace std;
 
template<class T>
class linkedlist
{
private: 
	node<T>*front,*rear; 
	node<T>*prevPtr,*currPtr;
	int size; 
	int position;		
	node<T>*nextNode(const T&item,node<T>*ptrNext=NULL);
	void freeNode(node<T>*p); 
	void copy(linkedlist<T>&L); 
public: 
	void print();
	linkedlist(); 
	linkedlist(linkedlist<T>&L);
	~linkedlist();
	linkedlist<T>&operator=(linkedlist<T>&L); 
	int getSize()const;
	bool isEmpty()const; 
	void reset(int pos=0); 
	void next();
	bool endOfList()const; 
	int currentPosition(void);
	void insertFront(const T&item); 
	void insertRear(const T&item);
	void insertAt(const T&item); 
	void insertAfter(const T&item);
	T deleteFront(); 
	void deleteCurrent(); 
	T&data();
	const T&data()const; 
	void clear();	
};

template<class T>
node<T>*linkedlist<T>::nextNode(const T&item,node<T>*ptrNext)
 { node<T>*tempPtr=new node<T>(item,ptrNext); return tempPtr; }
 
template<class T>
void linkedlist<T>::freeNode(node<T>*p)//释放结点
{delete p;}

template<class T>
void linkedlist<T>::print()
{    reset();
	while(!endOfList()) { 
		cout<<data()<<" "; 
		next(); 
	}
	cout<<endl; cout<<"size="<<getSize()<<endl;
}

template<class T>
linkedlist<T>::linkedlist()//构造函数
{    size=0;
	front=rear=new node<T>(0); currPtr=prevPtr=front;
}

template<class T>
int linkedlist<T>::currentPosition(void)//返回游标当前的位置
{   node<T>*tempPtr=front->nextNode(); position=0;
	while(tempPtr!=currPtr)
	{ tempPtr=tempPtr->nextNode(); position++; }
	return position;	}
	
template<class T>
int linkedlist<T>::getSize()const//返回链表中的元素个数
{return size;}

template<class T>
T&linkedlist<T>::data()//返回对当前结点成员数据的引用
{return currPtr->data;}

template<class T>
const T&linkedlist<T>::data()const//返回对当前结点成员数据的常引用
{return currPtr->data;}

template<class T>
void linkedlist<T>::next()//使游标移动到下一个结点
{
	prevPtr=currPtr;
	currPtr=currPtr->nextNode();
}

template<class T>
bool linkedlist<T>::endOfList()const//游标是否到了链尾
{
	if(currPtr==NULL)return true;
	else return false;
}

template<class T>
bool linkedlist<T>::isEmpty()const//链表是否为空  
{
	if(front==rear)return true;
	else return false;
}

template<class T>
void linkedlist<T>::reset(int pos)//初始化游标的位置（第一位数的位置设为0)
{
	prevPtr=front;
	currPtr=front->nextNode();
	position=pos;
	for(int i=0;i<position;i++)
	{
		prevPtr=currPtr;
		currPtr=currPtr->nextNode();
	}
}

template<class T>
void linkedlist<T>::insertFront(const T&item)//在表头插入结点
{
	prevPtr=currPtr;
    currPtr=nextNode(item,front->nextNode());
	front->next=currPtr;
	if(rear==front)
	{
		rear=currPtr;
	}
	size++;
}

template<class T>
void linkedlist<T>::insertRear(const T&item)//在表尾添加结点
{
	prevPtr=currPtr;
	currPtr=nextNode(item,rear->nextNode());
	rear->next=currPtr;
	rear=currPtr;
	size++;
}

template<class T>
void linkedlist<T>::insertAfter(const T&item)//在当前结点之后插入结点
{
	prevPtr=currPtr;
	node<T>*tempPtr=nextNode(item,currPtr->nextNode());
	currPtr->next=tempPtr;
	if(currPtr==rear)
	{rear=tempPtr;}
	currPtr=tempPtr;  size++;}
	
template<class T>
void linkedlist<T>::insertAt(const T&item)//在当前结点之前插入结点
{
	currPtr=nextNode(item,prevPtr->nextNode());
	prevPtr->next=currPtr; size++;
}

template<class T>
T linkedlist<T>::deleteFront()//删除头结点
{ currPtr=front->nextNode(); delete front; front=currPtr; size--; return front->data;}

template<class T>
void linkedlist<T>::deleteCurrent()//删除当前结点
{ node<T>*tempPtr=currPtr; prevPtr->deleteAfter();  delete currPtr; currPtr=prevPtr; size--;}

template<class T>
void linkedlist<T>::clear()//清空链表：释放所有结点的内存空间。被析构函数和"operator ="调用
{
	node<T>*tempPtr=front->nextNode(); while(tempPtr!=NULL)
	{ node<T>*tempQ=tempPtr; tempPtr=tempPtr->nextNode(); delete tempQ; size--; }
	rear=front; currPtr=prevPtr=front;
}

template<class T>
linkedlist<T>::~linkedlist()//析构函数
{ clear(); delete front; }

template<class T>
void linkedlist<T>::copy(linkedlist<T>&L)//将链表L复制到当前表（假设当前表为空）被复制构造函数和"operator="调用
//（因实现需要，无法使用(linkedlist<T>const&L)作为形参表）
{   //clear();
	L.reset();
	for(int i=0;i<L.size;i++) { insertRear(L.data()); L.next(); }
}

template<class T>
linkedlist<T>&linkedlist<T>::operator =(linkedlist<T>&L)//重载赋值运算符（因实现需要，无法使用(linkedlist<T>const&L)作为形参表）
{    clear(); front->next=NULL; copy(L);
    cout<<"调用重载运算符="<<endl; return *this; }
    
template<class T>
linkedlist<T>::linkedlist(linkedlist<T>&L)//复制构造函数（因实现需要，无法使用(linkedlist<T>const&L)作为形参表）
{    size=0; front=rear=new node<T>(0);
	currPtr=prevPtr=front;  copy(L); cout<<"调用复制构造函数"<<endl; }
#endif

