#include<iostream>
#include<vector>
using namespace std;


// ADT of List
//template <class Elem>class List
//{
//public:
//	virtual void clear() = 0;
//	virtual bool insert(const Elem&) = 0;
//	virtual bool append(const Elem&) = 0;
//	virtual bool remove(Elem&) = 0;
//	virtual bool setPos(int pos) = 0;
//};

template<class Elem> class LinkNode {
public:
	int element;
	LinkNode *next;
	LinkNode(const Elem& elemval, LinkNode* nextval = NULL) {
		element = elemval;
		next = nextval;
	}
	LinkNode(LinkNode* nextval = NULL) {
		next = nextval;
	}
};
template <class Elem> class LList {
private:
	LinkNode<int>* head;
	LinkNode<int>* tail;
	LinkNode<int>* fence;
	int leftcnt;
	int rightcnt;
	//static int defaultsize = leftcnt + rightcnt;
public:
	void initial() {
		fence = tail = head = new LinkNode<Elem>;
		leftcnt = rightcnt = 0;
	}
	bool insert(const Elem& item) {
		fence->next = new LinkNode <Elem>(item, fence->next); // set the next value of fence as the new link node , and the next value as the next one of fence .
		if (tail == fence) tail = fence->next;
		rightcnt++;
		return true;

	};
	bool remove() {
		if (fence->next == NULL) return false;
		Elem& posval = fence->next->element;
		LinkNode<Elem>* temp = fence->next;
		fence->next = temp->next;
		if (tail = temp) tail = fence;
		delete temp;
		rightcnt--;
		return true;
	};
	bool  setPos(int pos) {
		if (pos < 0 || pos> leftcnt + rightcnt)return false;
		fence = head;
		for (int i = 0; i < pos; ++i)
		{
			fence = fence->next;
		}
		rightcnt = leftcnt + rightcnt - pos;
		leftcnt = pos;
		return true;

	};
	bool append(const Elem& elem) {
		tail = tail->next = new LinkNode<Elem>(item, NULL);

	}
	void print() const {
		if (head == tail) return;
		LinkNode<Elem>* temp = head;
		cout << "<";
		
	
		while (temp != fence) {
			cout << temp->next->element <<"->";
			temp = temp->next;
		}
		cout << "|";
		while (temp->next != NULL) {
			cout << temp->next->element;
			temp = temp->next;
			cout << (temp->next == NULL ? "" : "->");
		}

		cout << ">\n";
	};
};

template <class Elem> class LStack  {
private:
	LinkNode<Elem>* top; // Pointer to first element
	int size; // Number of elements
public:
	LStack(int sz = 0) { top = NULL; size = 0; }
	LStack(const LStack& ls) { ls.top = this.top;
	ls.size = this.size;
	}
	~LStack() { clear(); } // Destructor
	bool push(const Elem& it) { // Put it on stack
		top = new LinkNode<Elem>(it, top);
		size++;
		return true;
	} 
	bool pop(Elem& it) { // Remove it from stack
		if (size == 0) return false;
		it = top->element;
		LinkNode<Elem>* ltemp = top->next;
		delete top;
		top = ltemp;
		size--;
		return true;
	}
	bool print()  {
		if (size == 0) {
			cout << "The Stack Is Empty!";  return false;
		}
		LinkNode<Elem>* ltemp = top; 
		for (int i = 0; i < size; i++)
		{
			Elem it = ltemp->element;
			cout << it << "  " ;
			ltemp = ltemp->next;
		}
		cout <<"|bottom|"<< endl;
		return true;

	}
	bool clear() {
		if (size == 0) return false;
		Elem it;
		int thesize = size;
		for (int i = 0; i<thesize; i++) pop(it);  //the trap here maybe that size is decreasing,cannot keep it anymore.
		return true;
	}
};
int main() {
	LList<int> ll;
	ll.initial();
	if (ll.insert(4)) cout << "\nInsert 4 \n";
	ll.print();
	if (ll.insert(13)) cout << "\nInsert 13 \n";
	ll.print();
	if (ll.insert(34)) cout << "\nInsert 34 \n";
	ll.print();

	if (ll.setPos(2)) cout << "\nSet position at 2 \n";
	ll.print();
	if (ll.insert(44)) cout << "\nInsert 44 \n";
	ll.print();
	if (ll.insert(7)) cout << "\nInsert 7 \n";
	ll.print();
	if (ll.remove()) cout << "\nRemove \n";
	ll.print();



	LStack<int> ls;
	int val;
	if (ls.push(9)) cout << "\nPush 9 \n";
	ls.print();
	if (ls.push(3)) cout << "\nPush 3 \n";
	ls.print();
	if (ls.push(4)) cout << "\nPush 4 \n";
	ls.print();
	if (ls.pop(val)) cout << "\nPop \n";
	ls.print();
	if (ls.push(4)) cout << "\nPush 4 \n";
	ls.print(); 
	if (ls.push(4)) cout << "\nPush 4 \n";
	ls.print();
	if (ls.push(4)) cout << "\nPush 4 \n";
	ls.print(); 
	if (ls.push(4)) cout << "\nPush 4 \n";
	ls.print();
	if (ls.push(4)) cout << "\nPush 4 \n";
	ls.print(); 
	if (ls.push(4)) cout << "\nPush 4 \n";
	ls.print();
	if (ls.clear()) cout << "\nClear\n";
	ls.print();
	cout << endl;
	return 0;
}


