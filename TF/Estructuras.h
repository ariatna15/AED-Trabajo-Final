#pragma once
#include <iostream>
using namespace std;
using namespace System;

template <typename T>
class Node {
public:
	T data;
	Node<T>* next;

	Node(T data) {
		this->data = data;
		this->next = nullptr;
	}
};

template <typename T>
class LinkedList {
private:
	Node<T>* head;
public:
	LinkedList() {
		head = nullptr;
	}

	void insertar(T data) {
		Node<T>* nuevo = new Node<T>(data);
		if (head == nullptr) {
			head = nuevo;
		}
		else {
			Node<T>* aux = head;
			while (aux->next != nullptr) {
				aux = aux->next;
			}
			aux->next = nuevo;
		}
	}
	
	T* buscar(string id) {
		Node<T>* aux = head;
		while (aux != nullptr) {	
			if (aux->data.getID() == id) {	
				return &(aux->data);
			}
			aux = aux->next;
		}
		return nullptr;
	}

	
};

template <typename T>
class Cola {
private: 
	Node<T>* inicio;
	Node<T>* fin;
public:
	Cola() {
		this->inicio = nullptr;
		this->fin = nullptr;
	}

	void enqueue(T data) {
		Node<T>* node = new Node<T>(data);
		if (isEmpty()) {
			inicio = node;
			fin = node;
		}
		else {
			fin->next = node;
			fin = node;
		}
	}

	T dequeue() {
		T data = inicio->data;

		if (inicio == fin) {
			inicio = nullptr;
			fin = nullptr;
		}
		else {
			inicio = inicio->next;
		}
		return data;
	}

	bool isEmpty() {
		return (inicio == nullptr)
	}
};

template <typename T>
class Pila {
private:
	Node<T>* top;
public:
	Pila() {
		top = nullptr;
	}

	bool isEmpty() {
		return (top == nullptr);
	}

	void push(T data) {
		if (isEmpty()) {
			top = new Node<T>(data);
		}
		else {
			top = new Node<T>(data, top);
		}
	}

	T pop() {
		if (isEmpty()) {
			return nullptr;
		}
		else {
			T elemento = (T)(top->data);
			top = (Node<T>*) top->next;
			return elemento;
		}
	}
};