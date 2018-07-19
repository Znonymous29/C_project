#ifndef NODE_H//结点类模板
#define NODE_H
template<class T>
class linkedlist;//新添
template<class T>//新添
class node
{ 
private:  
	node<T>*next;
public:
	T data; 
	node(const T&data,node<T>*next=0);
	void insertAfter(node<T>*p);
	node<T>*deleteAfter(); 
	node<T>*nextNode();
	const node<T>*nextNode()const; 
	friend linkedlist<T>; 
};

template<class T>
node<T>::node(const T&data,node<T>*next/*=0*/):data(data),next(next){}

template<class T>
node<T>*node<T>::nextNode()
{  return next;  }

template<class T>
const node<T>*node<T>::nextNode()const
{  return next;  }

template<class T>
void node<T>::insertAfter(node<T>*p)
{ p->next=next; next=p;	}

template<class T>
node<T>*node<T>::deleteAfter()
{
	node<T>*tempPtr=next; 
	if(next==0)return 0;
	next=tempPtr->next; 
	return tempPtr;
}
#endif

