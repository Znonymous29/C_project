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
void linkedlist<T>::freeNode(node<T>*p)//�ͷŽ��
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
linkedlist<T>::linkedlist()//���캯��
{    size=0;
	front=rear=new node<T>(0); currPtr=prevPtr=front;
}

template<class T>
int linkedlist<T>::currentPosition(void)//�����α굱ǰ��λ��
{   node<T>*tempPtr=front->nextNode(); position=0;
	while(tempPtr!=currPtr)
	{ tempPtr=tempPtr->nextNode(); position++; }
	return position;	}
	
template<class T>
int linkedlist<T>::getSize()const//���������е�Ԫ�ظ���
{return size;}

template<class T>
T&linkedlist<T>::data()//���ضԵ�ǰ����Ա���ݵ�����
{return currPtr->data;}

template<class T>
const T&linkedlist<T>::data()const//���ضԵ�ǰ����Ա���ݵĳ�����
{return currPtr->data;}

template<class T>
void linkedlist<T>::next()//ʹ�α��ƶ�����һ�����
{
	prevPtr=currPtr;
	currPtr=currPtr->nextNode();
}

template<class T>
bool linkedlist<T>::endOfList()const//�α��Ƿ�����β
{
	if(currPtr==NULL)return true;
	else return false;
}

template<class T>
bool linkedlist<T>::isEmpty()const//�����Ƿ�Ϊ��  
{
	if(front==rear)return true;
	else return false;
}

template<class T>
void linkedlist<T>::reset(int pos)//��ʼ���α��λ�ã���һλ����λ����Ϊ0)
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
void linkedlist<T>::insertFront(const T&item)//�ڱ�ͷ������
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
void linkedlist<T>::insertRear(const T&item)//�ڱ�β��ӽ��
{
	prevPtr=currPtr;
	currPtr=nextNode(item,rear->nextNode());
	rear->next=currPtr;
	rear=currPtr;
	size++;
}

template<class T>
void linkedlist<T>::insertAfter(const T&item)//�ڵ�ǰ���֮�������
{
	prevPtr=currPtr;
	node<T>*tempPtr=nextNode(item,currPtr->nextNode());
	currPtr->next=tempPtr;
	if(currPtr==rear)
	{rear=tempPtr;}
	currPtr=tempPtr;  size++;}
	
template<class T>
void linkedlist<T>::insertAt(const T&item)//�ڵ�ǰ���֮ǰ������
{
	currPtr=nextNode(item,prevPtr->nextNode());
	prevPtr->next=currPtr; size++;
}

template<class T>
T linkedlist<T>::deleteFront()//ɾ��ͷ���
{ currPtr=front->nextNode(); delete front; front=currPtr; size--; return front->data;}

template<class T>
void linkedlist<T>::deleteCurrent()//ɾ����ǰ���
{ node<T>*tempPtr=currPtr; prevPtr->deleteAfter();  delete currPtr; currPtr=prevPtr; size--;}

template<class T>
void linkedlist<T>::clear()//��������ͷ����н����ڴ�ռ䡣������������"operator ="����
{
	node<T>*tempPtr=front->nextNode(); while(tempPtr!=NULL)
	{ node<T>*tempQ=tempPtr; tempPtr=tempPtr->nextNode(); delete tempQ; size--; }
	rear=front; currPtr=prevPtr=front;
}

template<class T>
linkedlist<T>::~linkedlist()//��������
{ clear(); delete front; }

template<class T>
void linkedlist<T>::copy(linkedlist<T>&L)//������L���Ƶ���ǰ�����赱ǰ��Ϊ�գ������ƹ��캯����"operator="����
//����ʵ����Ҫ���޷�ʹ��(linkedlist<T>const&L)��Ϊ�βα�
{   //clear();
	L.reset();
	for(int i=0;i<L.size;i++) { insertRear(L.data()); L.next(); }
}

template<class T>
linkedlist<T>&linkedlist<T>::operator =(linkedlist<T>&L)//���ظ�ֵ���������ʵ����Ҫ���޷�ʹ��(linkedlist<T>const&L)��Ϊ�βα�
{    clear(); front->next=NULL; copy(L);
    cout<<"�������������="<<endl; return *this; }
    
template<class T>
linkedlist<T>::linkedlist(linkedlist<T>&L)//���ƹ��캯������ʵ����Ҫ���޷�ʹ��(linkedlist<T>const&L)��Ϊ�βα�
{    size=0; front=rear=new node<T>(0);
	currPtr=prevPtr=front;  copy(L); cout<<"���ø��ƹ��캯��"<<endl; }
#endif

