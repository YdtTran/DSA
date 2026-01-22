
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "List.hpp"
#include <sstream>
#include <type_traits>


template <typename U>
typename std::enable_if<std::is_arithmetic<U>::value, std::string>::type to_str (const U& value) {
	return std::to_string (value);
}

inline std::string to_str (const std::string& value) {
	return value;
}

inline std::string to_str (const char* value) {
	return std::string (value);
}

template <typename U>
typename std::enable_if<!std::is_arithmetic<U>::value, std::string>::type to_str (const U& value) {
	std::ostringstream oss;
	oss << value;
	return oss.str ();
}

template <typename T> class LinkedList : public List<T> {
	private:
	struct Node {
		/* data */
		T data;
		Node* next;
		Node (T val) : data (val), next (nullptr) {
		}
		std::string to_str () const {
			return ::to_str (this->data);
		}
	};
	unsigned int length = 0;
	Node* head			= nullptr;
	Node* tail			= nullptr;

	public:
	void add (T e) override;
	void add (int index, T e) override;
	T removeAt (int index) override;
	bool removeItem (T item) override;
	bool empty () override;
	int size () override;
	void clear () override;
	T get (int index) override;
	void set (int index, T e) override;
	int indexOf (T item) override;
	bool contains (T item) override;
	std::string toString () override;
	LinkedList () : length (0), head (), tail (nullptr) {
	}
};

// Skeleton method definitions
template <typename T>
// Pseudo code:
// IF:
//     the linkedList is empty then we consider new node head
// ELSE:
//     loop to the last element
void LinkedList<T>::add (T e) {
	Node* new_node = new Node (e);
	if (this->length == 0) { // Checking if this is an empty list
		this->head = new_node;
		this->tail = new_node;
	} else {
		Node* curr = this->head;
		while (curr->next != nullptr) {
			curr = curr->next;
		}
		curr->next = new_node;
	}
	this->length++;
}

template <typename T> void LinkedList<T>::add (int index, T e) {
	// TODO: implement
	// If index < 0 or index > this->length(0 1 2 3 ... length - 1); therefore, it is possible to make it the position length
	if (index < 0 || index > length)
		throw std::out_of_range ("Invalid index < 0 or > length");
	if (this->length == 0) {
		this->add (e);
		return;
	}
	Node* curr	  = this->head;
	Node* newNode = new Node (e);
	for (int i = 1; i < index; ++i) {
		curr = curr->next;
	}
	newNode->next = curr->next;
	curr->next	  = newNode;
}

template <typename T> T LinkedList<T>::removeAt (int index) {
	// TODO: implement
	return T ();
}

template <typename T> bool LinkedList<T>::removeItem (T item) {
	// TODO: implement
	return false;
}

template <typename T> bool LinkedList<T>::empty () {
	// TODO: implement
	return length == 0;
}

template <typename T> int LinkedList<T>::size () {
	// TODO: implement
	return length;
}

template <typename T> void LinkedList<T>::clear () {
	// TODO: implement
}

template <typename T> T LinkedList<T>::get (int index) {
	// TODO: implement
	return T ();
}

template <typename T> void LinkedList<T>::set (int index, T e) {
	// TODO: implement
}

template <typename T> int LinkedList<T>::indexOf (T item) {
	// TODO: implement
	return -1;
}

template <typename T> bool LinkedList<T>::contains (T item) {
	// TODO: implement
	return false;
}

template <typename T> std::string LinkedList<T>::toString () {
	// TODO: implement
	std::string str = "";
	Node* curr		= this->head;
	str				= str + curr->to_str ();
	while (curr->next != nullptr) {
		curr = curr->next;
		str	 = str + "->" + curr->to_str ();
	}
	return str;
}


#endif // LINKEDLIST_H