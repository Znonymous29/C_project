
template<class T>
class DNode {
	private:
		DNode<T> *prior;
		DNode<T> *next;
	public:
		T data;
		
		DNode(const T &data, DNode<T> *prior=0, DNode<T> *next=0);
		DNode<T> * nextNode();
		DNode<T> * beforeNode();
		const DNode<T> * nextNode() const;
		const DNode<T> * beforeNode() const;
		void insertAfter(DNode<T> *p);
		void insertBefore(DNode<T> *p);
		DNode<T> * deleteAfter();
		DNode<T> * deleteBefore();	
};

template<class T>
DNode<T>::DNode(const T &data, DNode<T> *prior, DNode<T> *next):data(data),prior(prior),next(next){
};

template<class T>
DNode<T> * DNode<T>::nextNode(){
	return next;
};

template<class T>
const DNode<T> * DNode<T>::nextNode() const {
	return next;
};

template<class T>
DNode<T> * DNode<T>::beforeNode(){
	return prior;
};

template<class T>
const DNode<T> * DNode<T>::beforeNode() const {
	return prior;
};

template<class T>
void DNode<T>::insertAfter(DNode<T> *p) {
	p->next = next;
	next = p;
};

template<class T>
void DNode<T>::insertBefore(DNode<T> *p) {
	p->prior = prior;
	prior = p;
};

template<class T>
DNode<T> * DNode<T>::deleteAfter() {
	DNode<T> * tempPtr = next;
	if(next==0){
		return 0;
	}
	next=tempPtr->next;
	return tempPtr;
};

template<class T>
DNode<T> * DNode<T>::deleteBefore() {
	DNode<T> * tempPtr = prior;
	if(prior==0){
		return 0;
	}
	prior=tempPtr->prior;
	return tempPtr;
};



