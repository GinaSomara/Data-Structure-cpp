#pragma once
#include <stdlib.h>
#include <iostream>
#include "Node.cpp"
#include "BagInterface.h"
using std::cout;


template<typename ItemType>
class LinkedBag : public BagInterface<ItemType> {

/*--------------------------CSC340-------------------------------------*/
public:
	bool removeSecondNode340();
	bool addEnd340(const ItemType&);  //need to give item name in implementation
	int getCurrentSize340Iterative() const;
	int getCurrentSize340Recursive() const;
	int getCurrentSize340RecursiveNoHelper() const;
	int getFrequencyOf340Recursive(const ItemType&) const;   //need to give item name in implementation
	int getFrequencyOf340RecursiveNoHelper(const ItemType&) const;   //need to give item name in implementation
    ItemType removeRandom340();
private:
	int getCurrentSize340RecursiveHelper(Node<ItemType>*) const; // if needed
	int getFrequencyOf340RecursiveHelper(Node<ItemType>*, const ItemType&) const; // if needed
/*----------------------------------------------------------------------*/

public:
	LinkedBag();
	LinkedBag(const LinkedBag<ItemType>&);
	virtual ~LinkedBag();
	int getCurrentSize() const;
	bool isEmpty() const;
	bool add(const ItemType&);
	bool remove(const ItemType&);
	void clear();
	bool contains(const ItemType&) const;
	int getFrequencyOf(const ItemType&) const;
	std::vector<ItemType> toVector() const;

private:
	Node<ItemType>* headPtr{ nullptr }; // Pointer to first node
	int itemCount{ 0 };					// Current count of bag items

	// pointer to the node or the null pointer 
	Node<ItemType>* getPointerTo(const ItemType&) const;
};