#include "TreeT.h"

template<class T>
TreeT<T>::TreeT() {
}

template<class T>
TreeT<T>::~TreeT() {
}

template<class T>
TreeT<T> & TreeT<T>::operator=(const TreeT &otherTree) {
}

template<class T>
void TreeT<T>::Add(T value) {
}

template<class T>
void TreeT<T>::Remove(T value) {
}

template<class T>
bool TreeT<T>::Contains(T value) {
}

template<class T>
int TreeT<T>::Size() {
}

template<class T>
void TreeT<T>::ResetIterator(Order traverseOrder) {
}

template<class T>
T TreeT<T>::GetNextItem() {
}

template<class T>
void TreeT<T>::DestroyTree(Node *node) {
}

template<class T>
void TreeT<T>::RemoveHelper(Node *&subtree, T value) {
}

template<class T>
void TreeT<T>::DeleteNode(Node *&subtree) {
}

template<class T>
void TreeT<T>::GetPredecessor(Node *curr, T &value) {
}

template<class T>
void TreeT<T>::CopyHelper(Node *&thisTree, Node *otherTree) {
}

template<class T>
void TreeT<T>::PlacePreOrder(Node *node) {
}

template<class T>
void TreeT<T>::PlacePostOrder(Node *node) {
}

template<class T>
void TreeT<T>::PlaceInOrder(Node *node) {
}