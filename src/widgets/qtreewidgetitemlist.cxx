
// /usr/include/qt/QtWidgets/qtreewidget.h
#ifndef protected
#define protected public
#endif
#include <qtreewidget.h>
#include <QtWidgets>
#include "callback_inherit.h"

#ifndef QTreeWidgetItemList
#ifndef QTREEWIDGETITEMLIST_H
typedef QList<QTreeWidgetItem *> QTreeWidgetItemList;
#endif
#endif
//  header block end

//  body block begin
// [-3] QList<T> & operator=(const QList<T> &)
extern "C"
QTreeWidgetItemList* C_QTreeWidgetItemList_operator_equal_0(void* this_ , QTreeWidgetItemList* l) {
    // QTreeWidgetItemList_operator_equal_0()
    auto rv =  ((QTreeWidgetItemList*)this_)->operator=(*l);
    return (QTreeWidgetItemList*)this_;
}

// [-3] QList<T> & operator=(QList<T> &&)
extern "C"
QTreeWidgetItemList* C_QTreeWidgetItemList_operator_equal_1(void* this_ , QTreeWidgetItemList* other) {
    // QTreeWidgetItemList_operator_equal_1()
    auto rv =  ((QTreeWidgetItemList*)this_)->operator=(*other);
    return (QTreeWidgetItemList*)this_;
}

// [-2] void swap(QList<T> &)
extern "C"
void C_QTreeWidgetItemList_swap_0(void* this_ , QTreeWidgetItemList* other) {
    // QTreeWidgetItemList_swap_0()
     ((QTreeWidgetItemList*)this_)->swap(*other);
}

// [1] bool operator==(const QList<T> &)
extern "C"
bool C_QTreeWidgetItemList_operator_equal_equal_0(void* this_ , QTreeWidgetItemList* l) {
    // QTreeWidgetItemList_operator_equal_equal_0()
    auto rv =  ((QTreeWidgetItemList*)this_)->operator==(*l);
    return rv;
}

// [1] bool operator!=(const QList<T> &)
extern "C"
bool C_QTreeWidgetItemList_operator_not_equal_0(void* this_ , QTreeWidgetItemList* l) {
    // QTreeWidgetItemList_operator_not_equal_0()
    auto rv =  ((QTreeWidgetItemList*)this_)->operator!=(*l);
    return rv;
}

// [4] int size()
extern "C"
int C_QTreeWidgetItemList_size_0(void* this_ ) {
    // QTreeWidgetItemList_size_0()
    auto rv =  ((QTreeWidgetItemList*)this_)->size();
    return rv;
}

// [-2] void detach()
extern "C"
void C_QTreeWidgetItemList_detach_0(void* this_ ) {
    // QTreeWidgetItemList_detach_0()
     ((QTreeWidgetItemList*)this_)->detach();
}

// [-2] void detachShared()
extern "C"
void C_QTreeWidgetItemList_detachShared_0(void* this_ ) {
    // QTreeWidgetItemList_detachShared_0()
     ((QTreeWidgetItemList*)this_)->detachShared();
}

// [1] bool isDetached()
extern "C"
bool C_QTreeWidgetItemList_isDetached_0(void* this_ ) {
    // QTreeWidgetItemList_isDetached_0()
    auto rv =  ((QTreeWidgetItemList*)this_)->isDetached();
    return rv;
}

// [-2] void setSharable(bool)
extern "C"
void C_QTreeWidgetItemList_setSharable_0(void* this_ , bool sharable) {
    // QTreeWidgetItemList_setSharable_0()
     ((QTreeWidgetItemList*)this_)->setSharable(sharable);
}

// [1] bool isSharedWith(const QList<T> &)
extern "C"
bool C_QTreeWidgetItemList_isSharedWith_0(void* this_ , QTreeWidgetItemList* other) {
    // QTreeWidgetItemList_isSharedWith_0()
    auto rv =  ((QTreeWidgetItemList*)this_)->isSharedWith(*other);
    return rv;
}

// [1] bool isEmpty()
extern "C"
bool C_QTreeWidgetItemList_isEmpty_0(void* this_ ) {
    // QTreeWidgetItemList_isEmpty_0()
    auto rv =  ((QTreeWidgetItemList*)this_)->isEmpty();
    return rv;
}

// [-2] void clear()
extern "C"
void C_QTreeWidgetItemList_clear_0(void* this_ ) {
    // QTreeWidgetItemList_clear_0()
     ((QTreeWidgetItemList*)this_)->clear();
}

// [-3] const T & at(int)
extern "C"
QTreeWidgetItem ** C_QTreeWidgetItemList_at_0(void* this_ , int i) {
    // QTreeWidgetItemList_at_0()
    auto rv =  ((QTreeWidgetItemList*)this_)->at(i);
    return new decltype(rv)(rv);
}

// [-3] const T & operator[](int)
extern "C"
QTreeWidgetItem ** C_QTreeWidgetItemList_operator_get_index_0(void* this_ , int i) {
    // QTreeWidgetItemList_operator_get_index_0()
    auto rv =  ((QTreeWidgetItemList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-3] T & operator[](int)
extern "C"
QTreeWidgetItem ** C_QTreeWidgetItemList_operator_get_index_1(void* this_ , int i) {
    // QTreeWidgetItemList_operator_get_index_1()
    auto rv =  ((QTreeWidgetItemList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-2] void reserve(int)
extern "C"
void C_QTreeWidgetItemList_reserve_0(void* this_ , int size) {
    // QTreeWidgetItemList_reserve_0()
     ((QTreeWidgetItemList*)this_)->reserve(size);
}

// [-2] void append(const T &)
extern "C"
void C_QTreeWidgetItemList_append_0(void* this_ , QTreeWidgetItem * t) {
    // QTreeWidgetItemList_append_0()
     ((QTreeWidgetItemList*)this_)->append(t);
}

// [-2] void append(const QList<T> &)
extern "C"
void C_QTreeWidgetItemList_append_1(void* this_ , QTreeWidgetItemList* t) {
    // QTreeWidgetItemList_append_1()
     ((QTreeWidgetItemList*)this_)->append(*t);
}

// [-2] void prepend(const T &)
extern "C"
void C_QTreeWidgetItemList_prepend_0(void* this_ , QTreeWidgetItem * t) {
    // QTreeWidgetItemList_prepend_0()
     ((QTreeWidgetItemList*)this_)->prepend(t);
}

// [-2] void insert(int, const T &)
extern "C"
void C_QTreeWidgetItemList_insert_0(void* this_ , int i, QTreeWidgetItem * t) {
    // QTreeWidgetItemList_insert_0()
     ((QTreeWidgetItemList*)this_)->insert(i, t);
}

// [-2] void replace(int, const T &)
extern "C"
void C_QTreeWidgetItemList_replace_0(void* this_ , int i, QTreeWidgetItem * t) {
    // QTreeWidgetItemList_replace_0()
     ((QTreeWidgetItemList*)this_)->replace(i, t);
}

// [-2] void removeAt(int)
extern "C"
void C_QTreeWidgetItemList_removeAt_0(void* this_ , int i) {
    // QTreeWidgetItemList_removeAt_0()
     ((QTreeWidgetItemList*)this_)->removeAt(i);
}

// [4] int removeAll(const T &)
extern "C"
int C_QTreeWidgetItemList_removeAll_0(void* this_ , QTreeWidgetItem * t) {
    // QTreeWidgetItemList_removeAll_0()
    auto rv =  ((QTreeWidgetItemList*)this_)->removeAll(t);
    return rv;
}

// [1] bool removeOne(const T &)
extern "C"
bool C_QTreeWidgetItemList_removeOne_0(void* this_ , QTreeWidgetItem * t) {
    // QTreeWidgetItemList_removeOne_0()
    auto rv =  ((QTreeWidgetItemList*)this_)->removeOne(t);
    return rv;
}

// [-3] T takeAt(int)
extern "C"
QTreeWidgetItem ** C_QTreeWidgetItemList_takeAt_0(void* this_ , int i) {
    // QTreeWidgetItemList_takeAt_0()
    auto rv =  ((QTreeWidgetItemList*)this_)->takeAt(i);
    return new decltype(rv)(rv);
}

// [-3] T takeFirst()
extern "C"
QTreeWidgetItem ** C_QTreeWidgetItemList_takeFirst_0(void* this_ ) {
    // QTreeWidgetItemList_takeFirst_0()
    auto rv =  ((QTreeWidgetItemList*)this_)->takeFirst();
    return new decltype(rv)(rv);
}

// [-3] T takeLast()
extern "C"
QTreeWidgetItem ** C_QTreeWidgetItemList_takeLast_0(void* this_ ) {
    // QTreeWidgetItemList_takeLast_0()
    auto rv =  ((QTreeWidgetItemList*)this_)->takeLast();
    return new decltype(rv)(rv);
}

// [-2] void move(int, int)
extern "C"
void C_QTreeWidgetItemList_move_0(void* this_ , int from, int to) {
    // QTreeWidgetItemList_move_0()
     ((QTreeWidgetItemList*)this_)->move(from, to);
}

// [-2] void swap(int, int)
extern "C"
void C_QTreeWidgetItemList_swap_1(void* this_ , int i, int j) {
    // QTreeWidgetItemList_swap_1()
     ((QTreeWidgetItemList*)this_)->swap(i, j);
}

// [4] int indexOf(const T &, int)
extern "C"
int C_QTreeWidgetItemList_indexOf_0(void* this_ , QTreeWidgetItem * t, int from) {
    // QTreeWidgetItemList_indexOf_0()
    auto rv =  ((QTreeWidgetItemList*)this_)->indexOf(t, from);
    return rv;
}

// [4] int lastIndexOf(const T &, int)
extern "C"
int C_QTreeWidgetItemList_lastIndexOf_0(void* this_ , QTreeWidgetItem * t, int from) {
    // QTreeWidgetItemList_lastIndexOf_0()
    auto rv =  ((QTreeWidgetItemList*)this_)->lastIndexOf(t, from);
    return rv;
}

// [1] bool contains(const T &)
extern "C"
bool C_QTreeWidgetItemList_contains_0(void* this_ , QTreeWidgetItem * t) {
    // QTreeWidgetItemList_contains_0()
    auto rv =  ((QTreeWidgetItemList*)this_)->contains(t);
    return rv;
}

// [4] int count(const T &)
extern "C"
int C_QTreeWidgetItemList_count_0(void* this_ , QTreeWidgetItem * t) {
    // QTreeWidgetItemList_count_0()
    auto rv =  ((QTreeWidgetItemList*)this_)->count(t);
    return rv;
}

// [-3] QList::iterator begin()
extern "C"
QTreeWidgetItemList::iterator* C_QTreeWidgetItemList_begin_0(void* this_ ) {
    // QTreeWidgetItemList_begin_0()
    auto rv =  ((QTreeWidgetItemList*)this_)->begin();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator end()
extern "C"
QTreeWidgetItemList::iterator* C_QTreeWidgetItemList_end_0(void* this_ ) {
    // QTreeWidgetItemList_end_0()
    auto rv =  ((QTreeWidgetItemList*)this_)->end();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rbegin()
extern "C"
QTreeWidgetItemList::reverse_iterator* C_QTreeWidgetItemList_rbegin_0(void* this_ ) {
    // QTreeWidgetItemList_rbegin_0()
    auto rv =  ((QTreeWidgetItemList*)this_)->rbegin();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rend()
extern "C"
QTreeWidgetItemList::reverse_iterator* C_QTreeWidgetItemList_rend_0(void* this_ ) {
    // QTreeWidgetItemList_rend_0()
    auto rv =  ((QTreeWidgetItemList*)this_)->rend();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator insert(QList::iterator, const T &)
extern "C"
QTreeWidgetItemList::iterator* C_QTreeWidgetItemList_insert_1(void* this_ , QTreeWidgetItemList::iterator* before, QTreeWidgetItem * t) {
    // QTreeWidgetItemList_insert_1()
    auto rv =  ((QTreeWidgetItemList*)this_)->insert(*before, t);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator)
extern "C"
QTreeWidgetItemList::iterator* C_QTreeWidgetItemList_erase_0(void* this_ , QTreeWidgetItemList::iterator* pos) {
    // QTreeWidgetItemList_erase_0()
    auto rv =  ((QTreeWidgetItemList*)this_)->erase(*pos);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator, QList::iterator)
extern "C"
QTreeWidgetItemList::iterator* C_QTreeWidgetItemList_erase_1(void* this_ , QTreeWidgetItemList::iterator* first, QTreeWidgetItemList::iterator* last) {
    // QTreeWidgetItemList_erase_1()
    auto rv =  ((QTreeWidgetItemList*)this_)->erase(*first, *last);
    return new decltype(rv)(rv);
}

// [4] int count()
extern "C"
int C_QTreeWidgetItemList_count_1(void* this_ ) {
    // QTreeWidgetItemList_count_1()
    auto rv =  ((QTreeWidgetItemList*)this_)->count();
    return rv;
}

// [4] int length()
extern "C"
int C_QTreeWidgetItemList_length_0(void* this_ ) {
    // QTreeWidgetItemList_length_0()
    auto rv =  ((QTreeWidgetItemList*)this_)->length();
    return rv;
}

// [-3] T & first()
extern "C"
QTreeWidgetItem ** C_QTreeWidgetItemList_first_0(void* this_ ) {
    // QTreeWidgetItemList_first_0()
    auto rv =  ((QTreeWidgetItemList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] const T & constFirst()
extern "C"
QTreeWidgetItem ** C_QTreeWidgetItemList_constFirst_0(void* this_ ) {
    // QTreeWidgetItemList_constFirst_0()
    auto rv =  ((QTreeWidgetItemList*)this_)->constFirst();
    return new decltype(rv)(rv);
}

// [-3] const T & first()
extern "C"
QTreeWidgetItem ** C_QTreeWidgetItemList_first_1(void* this_ ) {
    // QTreeWidgetItemList_first_1()
    auto rv =  ((QTreeWidgetItemList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] T & last()
extern "C"
QTreeWidgetItem ** C_QTreeWidgetItemList_last_0(void* this_ ) {
    // QTreeWidgetItemList_last_0()
    auto rv =  ((QTreeWidgetItemList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & last()
extern "C"
QTreeWidgetItem ** C_QTreeWidgetItemList_last_1(void* this_ ) {
    // QTreeWidgetItemList_last_1()
    auto rv =  ((QTreeWidgetItemList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & constLast()
extern "C"
QTreeWidgetItem ** C_QTreeWidgetItemList_constLast_0(void* this_ ) {
    // QTreeWidgetItemList_constLast_0()
    auto rv =  ((QTreeWidgetItemList*)this_)->constLast();
    return new decltype(rv)(rv);
}

// [-2] void removeFirst()
extern "C"
void C_QTreeWidgetItemList_removeFirst_0(void* this_ ) {
    // QTreeWidgetItemList_removeFirst_0()
     ((QTreeWidgetItemList*)this_)->removeFirst();
}

// [-2] void removeLast()
extern "C"
void C_QTreeWidgetItemList_removeLast_0(void* this_ ) {
    // QTreeWidgetItemList_removeLast_0()
     ((QTreeWidgetItemList*)this_)->removeLast();
}

// [1] bool startsWith(const T &)
extern "C"
bool C_QTreeWidgetItemList_startsWith_0(void* this_ , QTreeWidgetItem * t) {
    // QTreeWidgetItemList_startsWith_0()
    auto rv =  ((QTreeWidgetItemList*)this_)->startsWith(t);
    return rv;
}

// [1] bool endsWith(const T &)
extern "C"
bool C_QTreeWidgetItemList_endsWith_0(void* this_ , QTreeWidgetItem * t) {
    // QTreeWidgetItemList_endsWith_0()
    auto rv =  ((QTreeWidgetItemList*)this_)->endsWith(t);
    return rv;
}

// [-3] QList<T> mid(int, int)
extern "C"
QTreeWidgetItemList* C_QTreeWidgetItemList_mid_0(void* this_ , int pos, int length) {
    // QTreeWidgetItemList_mid_0()
    auto rv =  ((QTreeWidgetItemList*)this_)->mid(pos, length);
    return (QTreeWidgetItemList*)this_;
}

// [-3] T value(int)
extern "C"
QTreeWidgetItem ** C_QTreeWidgetItemList_value_0(void* this_ , int i) {
    // QTreeWidgetItemList_value_0()
    auto rv =  ((QTreeWidgetItemList*)this_)->value(i);
    return new decltype(rv)(rv);
}

// [-3] T value(int, const T &)
extern "C"
QTreeWidgetItem ** C_QTreeWidgetItemList_value_1(void* this_ , int i, QTreeWidgetItem * defaultValue) {
    // QTreeWidgetItemList_value_1()
    auto rv =  ((QTreeWidgetItemList*)this_)->value(i, defaultValue);
    return new decltype(rv)(rv);
}

// [-2] void push_back(const T &)
extern "C"
void C_QTreeWidgetItemList_push_back_0(void* this_ , QTreeWidgetItem * t) {
    // QTreeWidgetItemList_push_back_0()
     ((QTreeWidgetItemList*)this_)->push_back(t);
}

// [-2] void push_front(const T &)
extern "C"
void C_QTreeWidgetItemList_push_front_0(void* this_ , QTreeWidgetItem * t) {
    // QTreeWidgetItemList_push_front_0()
     ((QTreeWidgetItemList*)this_)->push_front(t);
}

// [-3] T & front()
extern "C"
QTreeWidgetItem ** C_QTreeWidgetItemList_front_0(void* this_ ) {
    // QTreeWidgetItemList_front_0()
    auto rv =  ((QTreeWidgetItemList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] const T & front()
extern "C"
QTreeWidgetItem ** C_QTreeWidgetItemList_front_1(void* this_ ) {
    // QTreeWidgetItemList_front_1()
    auto rv =  ((QTreeWidgetItemList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] T & back()
extern "C"
QTreeWidgetItem ** C_QTreeWidgetItemList_back_0(void* this_ ) {
    // QTreeWidgetItemList_back_0()
    auto rv =  ((QTreeWidgetItemList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-3] const T & back()
extern "C"
QTreeWidgetItem ** C_QTreeWidgetItemList_back_1(void* this_ ) {
    // QTreeWidgetItemList_back_1()
    auto rv =  ((QTreeWidgetItemList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-2] void pop_front()
extern "C"
void C_QTreeWidgetItemList_pop_front_0(void* this_ ) {
    // QTreeWidgetItemList_pop_front_0()
     ((QTreeWidgetItemList*)this_)->pop_front();
}

// [-2] void pop_back()
extern "C"
void C_QTreeWidgetItemList_pop_back_0(void* this_ ) {
    // QTreeWidgetItemList_pop_back_0()
     ((QTreeWidgetItemList*)this_)->pop_back();
}

// [1] bool empty()
extern "C"
bool C_QTreeWidgetItemList_empty_0(void* this_ ) {
    // QTreeWidgetItemList_empty_0()
    auto rv =  ((QTreeWidgetItemList*)this_)->empty();
    return rv;
}

// [-3] QList<T> & operator+=(const QList<T> &)
extern "C"
QTreeWidgetItemList* C_QTreeWidgetItemList_operator_add_equal_0(void* this_ , QTreeWidgetItemList* l) {
    // QTreeWidgetItemList_operator_add_equal_0()
    auto rv =  ((QTreeWidgetItemList*)this_)->operator+=(*l);
    return (QTreeWidgetItemList*)this_;
}

// [-3] QList<T> operator+(const QList<T> &)
extern "C"
QTreeWidgetItemList* C_QTreeWidgetItemList_operator_add_0(void* this_ , QTreeWidgetItemList* l) {
    // QTreeWidgetItemList_operator_add_0()
    auto rv =  ((QTreeWidgetItemList*)this_)->operator+(*l);
    return (QTreeWidgetItemList*)this_;
}

// [-3] QList<T> & operator+=(const T &)
extern "C"
QTreeWidgetItemList* C_QTreeWidgetItemList_operator_add_equal_1(void* this_ , QTreeWidgetItem * t) {
    // QTreeWidgetItemList_operator_add_equal_1()
    auto rv =  ((QTreeWidgetItemList*)this_)->operator+=(t);
    return (QTreeWidgetItemList*)this_;
}

// [-3] QList<T> & operator<<(const T &)
extern "C"
QTreeWidgetItemList* C_QTreeWidgetItemList_operator_left_shift_0(void* this_ , QTreeWidgetItem * t) {
    // QTreeWidgetItemList_operator_left_shift_0()
    auto rv =  ((QTreeWidgetItemList*)this_)->operator<<(t);
    return (QTreeWidgetItemList*)this_;
}

// [-3] QList<T> & operator<<(const QList<T> &)
extern "C"
QTreeWidgetItemList* C_QTreeWidgetItemList_operator_left_shift_1(void* this_ , QTreeWidgetItemList* l) {
    // QTreeWidgetItemList_operator_left_shift_1()
    auto rv =  ((QTreeWidgetItemList*)this_)->operator<<(*l);
    return (QTreeWidgetItemList*)this_;
}

// [-3] QVector<T> toVector()
extern "C"
void C_QTreeWidgetItemList_toVector_0(void* this_ ) {
    // QTreeWidgetItemList_toVector_0()
    auto rv =  ((QTreeWidgetItemList*)this_)->toVector();
}

// [-3] std::list<T> toStdList()
extern "C"
void C_QTreeWidgetItemList_toStdList_0(void* this_ ) {
    // QTreeWidgetItemList_toStdList_0()
    auto rv =  ((QTreeWidgetItemList*)this_)->toStdList();
}

//  body block end
