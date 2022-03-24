//list.h -- declaration of List-class
#ifndef LIST_H_
#define LIST_H_
//list will work with an "Items"
typedef int Item;

class List
{
private:
	enum{MAX=10};				//limit of list
	int count;			
	Item list[MAX];
public:
	//create empty list
	List();	
	~List();					//destructor
	bool is_empty() const;
	bool is_full() const;
	void add(const Item& element);
	void show() const;
	void visit(Item (*pf)(Item&));
};

#endif // !LIST_H_