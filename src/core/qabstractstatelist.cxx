
// /usr/include/qt/QtCore/qabstractstate.h
#ifndef protected
#define protected public
#endif
#include <qabstractstate.h>
#include <QtCore>
#include "callback_inherit.h"

#ifndef QAbstractStateList
#ifndef QABSTRACTSTATELIST_H
typedef QList<QAbstractState *> QAbstractStateList;
#endif
#endif
//  header block end

//  body block begin
// [-3] QList<T> & operator=(const QList<T> &)
extern "C"
QAbstractStateList* C_QAbstractStateList_operator_equal_0(void* this_ , QAbstractStateList* l) {
    // QAbstractStateList_operator_equal_0()
    auto rv =  ((QAbstractStateList*)this_)->operator=(*l);
    return (QAbstractStateList*)this_;
}

// [-3] QList<T> & operator=(QList<T> &&)
extern "C"
QAbstractStateList* C_QAbstractStateList_operator_equal_1(void* this_ , QAbstractStateList* other) {
    // QAbstractStateList_operator_equal_1()
    auto rv =  ((QAbstractStateList*)this_)->operator=(*other);
    return (QAbstractStateList*)this_;
}

// [-2] void swap(QList<T> &)
extern "C"
void C_QAbstractStateList_swap_0(void* this_ , QAbstractStateList* other) {
    // QAbstractStateList_swap_0()
     ((QAbstractStateList*)this_)->swap(*other);
}

// [1] bool operator==(const QList<T> &)
extern "C"
bool C_QAbstractStateList_operator_equal_equal_0(void* this_ , QAbstractStateList* l) {
    // QAbstractStateList_operator_equal_equal_0()
    auto rv =  ((QAbstractStateList*)this_)->operator==(*l);
    return rv;
}

// [1] bool operator!=(const QList<T> &)
extern "C"
bool C_QAbstractStateList_operator_not_equal_0(void* this_ , QAbstractStateList* l) {
    // QAbstractStateList_operator_not_equal_0()
    auto rv =  ((QAbstractStateList*)this_)->operator!=(*l);
    return rv;
}

// [4] int size()
extern "C"
int C_QAbstractStateList_size_0(void* this_ ) {
    // QAbstractStateList_size_0()
    auto rv =  ((QAbstractStateList*)this_)->size();
    return rv;
}

// [-2] void detach()
extern "C"
void C_QAbstractStateList_detach_0(void* this_ ) {
    // QAbstractStateList_detach_0()
     ((QAbstractStateList*)this_)->detach();
}

// [-2] void detachShared()
extern "C"
void C_QAbstractStateList_detachShared_0(void* this_ ) {
    // QAbstractStateList_detachShared_0()
     ((QAbstractStateList*)this_)->detachShared();
}

// [1] bool isDetached()
extern "C"
bool C_QAbstractStateList_isDetached_0(void* this_ ) {
    // QAbstractStateList_isDetached_0()
    auto rv =  ((QAbstractStateList*)this_)->isDetached();
    return rv;
}

// [-2] void setSharable(bool)
extern "C"
void C_QAbstractStateList_setSharable_0(void* this_ , bool sharable) {
    // QAbstractStateList_setSharable_0()
     ((QAbstractStateList*)this_)->setSharable(sharable);
}

// [1] bool isSharedWith(const QList<T> &)
extern "C"
bool C_QAbstractStateList_isSharedWith_0(void* this_ , QAbstractStateList* other) {
    // QAbstractStateList_isSharedWith_0()
    auto rv =  ((QAbstractStateList*)this_)->isSharedWith(*other);
    return rv;
}

// [1] bool isEmpty()
extern "C"
bool C_QAbstractStateList_isEmpty_0(void* this_ ) {
    // QAbstractStateList_isEmpty_0()
    auto rv =  ((QAbstractStateList*)this_)->isEmpty();
    return rv;
}

// [-2] void clear()
extern "C"
void C_QAbstractStateList_clear_0(void* this_ ) {
    // QAbstractStateList_clear_0()
     ((QAbstractStateList*)this_)->clear();
}

// [-3] const T & at(int)
extern "C"
QAbstractState ** C_QAbstractStateList_at_0(void* this_ , int i) {
    // QAbstractStateList_at_0()
    auto rv =  ((QAbstractStateList*)this_)->at(i);
    return new decltype(rv)(rv);
}

// [-3] const T & operator[](int)
extern "C"
QAbstractState ** C_QAbstractStateList_operator_get_index_0(void* this_ , int i) {
    // QAbstractStateList_operator_get_index_0()
    auto rv =  ((QAbstractStateList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-3] T & operator[](int)
extern "C"
QAbstractState ** C_QAbstractStateList_operator_get_index_1(void* this_ , int i) {
    // QAbstractStateList_operator_get_index_1()
    auto rv =  ((QAbstractStateList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-2] void reserve(int)
extern "C"
void C_QAbstractStateList_reserve_0(void* this_ , int size) {
    // QAbstractStateList_reserve_0()
     ((QAbstractStateList*)this_)->reserve(size);
}

// [-2] void append(const T &)
extern "C"
void C_QAbstractStateList_append_0(void* this_ , QAbstractState * t) {
    // QAbstractStateList_append_0()
     ((QAbstractStateList*)this_)->append(t);
}

// [-2] void append(const QList<T> &)
extern "C"
void C_QAbstractStateList_append_1(void* this_ , QAbstractStateList* t) {
    // QAbstractStateList_append_1()
     ((QAbstractStateList*)this_)->append(*t);
}

// [-2] void prepend(const T &)
extern "C"
void C_QAbstractStateList_prepend_0(void* this_ , QAbstractState * t) {
    // QAbstractStateList_prepend_0()
     ((QAbstractStateList*)this_)->prepend(t);
}

// [-2] void insert(int, const T &)
extern "C"
void C_QAbstractStateList_insert_0(void* this_ , int i, QAbstractState * t) {
    // QAbstractStateList_insert_0()
     ((QAbstractStateList*)this_)->insert(i, t);
}

// [-2] void replace(int, const T &)
extern "C"
void C_QAbstractStateList_replace_0(void* this_ , int i, QAbstractState * t) {
    // QAbstractStateList_replace_0()
     ((QAbstractStateList*)this_)->replace(i, t);
}

// [-2] void removeAt(int)
extern "C"
void C_QAbstractStateList_removeAt_0(void* this_ , int i) {
    // QAbstractStateList_removeAt_0()
     ((QAbstractStateList*)this_)->removeAt(i);
}

// [4] int removeAll(const T &)
extern "C"
int C_QAbstractStateList_removeAll_0(void* this_ , QAbstractState * t) {
    // QAbstractStateList_removeAll_0()
    auto rv =  ((QAbstractStateList*)this_)->removeAll(t);
    return rv;
}

// [1] bool removeOne(const T &)
extern "C"
bool C_QAbstractStateList_removeOne_0(void* this_ , QAbstractState * t) {
    // QAbstractStateList_removeOne_0()
    auto rv =  ((QAbstractStateList*)this_)->removeOne(t);
    return rv;
}

// [-3] T takeAt(int)
extern "C"
QAbstractState ** C_QAbstractStateList_takeAt_0(void* this_ , int i) {
    // QAbstractStateList_takeAt_0()
    auto rv =  ((QAbstractStateList*)this_)->takeAt(i);
    return new decltype(rv)(rv);
}

// [-3] T takeFirst()
extern "C"
QAbstractState ** C_QAbstractStateList_takeFirst_0(void* this_ ) {
    // QAbstractStateList_takeFirst_0()
    auto rv =  ((QAbstractStateList*)this_)->takeFirst();
    return new decltype(rv)(rv);
}

// [-3] T takeLast()
extern "C"
QAbstractState ** C_QAbstractStateList_takeLast_0(void* this_ ) {
    // QAbstractStateList_takeLast_0()
    auto rv =  ((QAbstractStateList*)this_)->takeLast();
    return new decltype(rv)(rv);
}

// [-2] void move(int, int)
extern "C"
void C_QAbstractStateList_move_0(void* this_ , int from, int to) {
    // QAbstractStateList_move_0()
     ((QAbstractStateList*)this_)->move(from, to);
}

// [-2] void swap(int, int)
extern "C"
void C_QAbstractStateList_swap_1(void* this_ , int i, int j) {
    // QAbstractStateList_swap_1()
     ((QAbstractStateList*)this_)->swap(i, j);
}

// [4] int indexOf(const T &, int)
extern "C"
int C_QAbstractStateList_indexOf_0(void* this_ , QAbstractState * t, int from) {
    // QAbstractStateList_indexOf_0()
    auto rv =  ((QAbstractStateList*)this_)->indexOf(t, from);
    return rv;
}

// [4] int lastIndexOf(const T &, int)
extern "C"
int C_QAbstractStateList_lastIndexOf_0(void* this_ , QAbstractState * t, int from) {
    // QAbstractStateList_lastIndexOf_0()
    auto rv =  ((QAbstractStateList*)this_)->lastIndexOf(t, from);
    return rv;
}

// [1] bool contains(const T &)
extern "C"
bool C_QAbstractStateList_contains_0(void* this_ , QAbstractState * t) {
    // QAbstractStateList_contains_0()
    auto rv =  ((QAbstractStateList*)this_)->contains(t);
    return rv;
}

// [4] int count(const T &)
extern "C"
int C_QAbstractStateList_count_0(void* this_ , QAbstractState * t) {
    // QAbstractStateList_count_0()
    auto rv =  ((QAbstractStateList*)this_)->count(t);
    return rv;
}

// [-3] QList::iterator begin()
extern "C"
QAbstractStateList::iterator* C_QAbstractStateList_begin_0(void* this_ ) {
    // QAbstractStateList_begin_0()
    auto rv =  ((QAbstractStateList*)this_)->begin();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator end()
extern "C"
QAbstractStateList::iterator* C_QAbstractStateList_end_0(void* this_ ) {
    // QAbstractStateList_end_0()
    auto rv =  ((QAbstractStateList*)this_)->end();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rbegin()
extern "C"
QAbstractStateList::reverse_iterator* C_QAbstractStateList_rbegin_0(void* this_ ) {
    // QAbstractStateList_rbegin_0()
    auto rv =  ((QAbstractStateList*)this_)->rbegin();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rend()
extern "C"
QAbstractStateList::reverse_iterator* C_QAbstractStateList_rend_0(void* this_ ) {
    // QAbstractStateList_rend_0()
    auto rv =  ((QAbstractStateList*)this_)->rend();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator insert(QList::iterator, const T &)
extern "C"
QAbstractStateList::iterator* C_QAbstractStateList_insert_1(void* this_ , QAbstractStateList::iterator* before, QAbstractState * t) {
    // QAbstractStateList_insert_1()
    auto rv =  ((QAbstractStateList*)this_)->insert(*before, t);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator)
extern "C"
QAbstractStateList::iterator* C_QAbstractStateList_erase_0(void* this_ , QAbstractStateList::iterator* pos) {
    // QAbstractStateList_erase_0()
    auto rv =  ((QAbstractStateList*)this_)->erase(*pos);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator, QList::iterator)
extern "C"
QAbstractStateList::iterator* C_QAbstractStateList_erase_1(void* this_ , QAbstractStateList::iterator* first, QAbstractStateList::iterator* last) {
    // QAbstractStateList_erase_1()
    auto rv =  ((QAbstractStateList*)this_)->erase(*first, *last);
    return new decltype(rv)(rv);
}

// [4] int count()
extern "C"
int C_QAbstractStateList_count_1(void* this_ ) {
    // QAbstractStateList_count_1()
    auto rv =  ((QAbstractStateList*)this_)->count();
    return rv;
}

// [4] int length()
extern "C"
int C_QAbstractStateList_length_0(void* this_ ) {
    // QAbstractStateList_length_0()
    auto rv =  ((QAbstractStateList*)this_)->length();
    return rv;
}

// [-3] T & first()
extern "C"
QAbstractState ** C_QAbstractStateList_first_0(void* this_ ) {
    // QAbstractStateList_first_0()
    auto rv =  ((QAbstractStateList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] const T & constFirst()
extern "C"
QAbstractState ** C_QAbstractStateList_constFirst_0(void* this_ ) {
    // QAbstractStateList_constFirst_0()
    auto rv =  ((QAbstractStateList*)this_)->constFirst();
    return new decltype(rv)(rv);
}

// [-3] const T & first()
extern "C"
QAbstractState ** C_QAbstractStateList_first_1(void* this_ ) {
    // QAbstractStateList_first_1()
    auto rv =  ((QAbstractStateList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] T & last()
extern "C"
QAbstractState ** C_QAbstractStateList_last_0(void* this_ ) {
    // QAbstractStateList_last_0()
    auto rv =  ((QAbstractStateList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & last()
extern "C"
QAbstractState ** C_QAbstractStateList_last_1(void* this_ ) {
    // QAbstractStateList_last_1()
    auto rv =  ((QAbstractStateList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & constLast()
extern "C"
QAbstractState ** C_QAbstractStateList_constLast_0(void* this_ ) {
    // QAbstractStateList_constLast_0()
    auto rv =  ((QAbstractStateList*)this_)->constLast();
    return new decltype(rv)(rv);
}

// [-2] void removeFirst()
extern "C"
void C_QAbstractStateList_removeFirst_0(void* this_ ) {
    // QAbstractStateList_removeFirst_0()
     ((QAbstractStateList*)this_)->removeFirst();
}

// [-2] void removeLast()
extern "C"
void C_QAbstractStateList_removeLast_0(void* this_ ) {
    // QAbstractStateList_removeLast_0()
     ((QAbstractStateList*)this_)->removeLast();
}

// [1] bool startsWith(const T &)
extern "C"
bool C_QAbstractStateList_startsWith_0(void* this_ , QAbstractState * t) {
    // QAbstractStateList_startsWith_0()
    auto rv =  ((QAbstractStateList*)this_)->startsWith(t);
    return rv;
}

// [1] bool endsWith(const T &)
extern "C"
bool C_QAbstractStateList_endsWith_0(void* this_ , QAbstractState * t) {
    // QAbstractStateList_endsWith_0()
    auto rv =  ((QAbstractStateList*)this_)->endsWith(t);
    return rv;
}

// [-3] QList<T> mid(int, int)
extern "C"
QAbstractStateList* C_QAbstractStateList_mid_0(void* this_ , int pos, int length) {
    // QAbstractStateList_mid_0()
    auto rv =  ((QAbstractStateList*)this_)->mid(pos, length);
    return (QAbstractStateList*)this_;
}

// [-3] T value(int)
extern "C"
QAbstractState ** C_QAbstractStateList_value_0(void* this_ , int i) {
    // QAbstractStateList_value_0()
    auto rv =  ((QAbstractStateList*)this_)->value(i);
    return new decltype(rv)(rv);
}

// [-3] T value(int, const T &)
extern "C"
QAbstractState ** C_QAbstractStateList_value_1(void* this_ , int i, QAbstractState * defaultValue) {
    // QAbstractStateList_value_1()
    auto rv =  ((QAbstractStateList*)this_)->value(i, defaultValue);
    return new decltype(rv)(rv);
}

// [-2] void push_back(const T &)
extern "C"
void C_QAbstractStateList_push_back_0(void* this_ , QAbstractState * t) {
    // QAbstractStateList_push_back_0()
     ((QAbstractStateList*)this_)->push_back(t);
}

// [-2] void push_front(const T &)
extern "C"
void C_QAbstractStateList_push_front_0(void* this_ , QAbstractState * t) {
    // QAbstractStateList_push_front_0()
     ((QAbstractStateList*)this_)->push_front(t);
}

// [-3] T & front()
extern "C"
QAbstractState ** C_QAbstractStateList_front_0(void* this_ ) {
    // QAbstractStateList_front_0()
    auto rv =  ((QAbstractStateList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] const T & front()
extern "C"
QAbstractState ** C_QAbstractStateList_front_1(void* this_ ) {
    // QAbstractStateList_front_1()
    auto rv =  ((QAbstractStateList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] T & back()
extern "C"
QAbstractState ** C_QAbstractStateList_back_0(void* this_ ) {
    // QAbstractStateList_back_0()
    auto rv =  ((QAbstractStateList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-3] const T & back()
extern "C"
QAbstractState ** C_QAbstractStateList_back_1(void* this_ ) {
    // QAbstractStateList_back_1()
    auto rv =  ((QAbstractStateList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-2] void pop_front()
extern "C"
void C_QAbstractStateList_pop_front_0(void* this_ ) {
    // QAbstractStateList_pop_front_0()
     ((QAbstractStateList*)this_)->pop_front();
}

// [-2] void pop_back()
extern "C"
void C_QAbstractStateList_pop_back_0(void* this_ ) {
    // QAbstractStateList_pop_back_0()
     ((QAbstractStateList*)this_)->pop_back();
}

// [1] bool empty()
extern "C"
bool C_QAbstractStateList_empty_0(void* this_ ) {
    // QAbstractStateList_empty_0()
    auto rv =  ((QAbstractStateList*)this_)->empty();
    return rv;
}

// [-3] QList<T> & operator+=(const QList<T> &)
extern "C"
QAbstractStateList* C_QAbstractStateList_operator_add_equal_0(void* this_ , QAbstractStateList* l) {
    // QAbstractStateList_operator_add_equal_0()
    auto rv =  ((QAbstractStateList*)this_)->operator+=(*l);
    return (QAbstractStateList*)this_;
}

// [-3] QList<T> operator+(const QList<T> &)
extern "C"
QAbstractStateList* C_QAbstractStateList_operator_add_0(void* this_ , QAbstractStateList* l) {
    // QAbstractStateList_operator_add_0()
    auto rv =  ((QAbstractStateList*)this_)->operator+(*l);
    return (QAbstractStateList*)this_;
}

// [-3] QList<T> & operator+=(const T &)
extern "C"
QAbstractStateList* C_QAbstractStateList_operator_add_equal_1(void* this_ , QAbstractState * t) {
    // QAbstractStateList_operator_add_equal_1()
    auto rv =  ((QAbstractStateList*)this_)->operator+=(t);
    return (QAbstractStateList*)this_;
}

// [-3] QList<T> & operator<<(const T &)
extern "C"
QAbstractStateList* C_QAbstractStateList_operator_left_shift_0(void* this_ , QAbstractState * t) {
    // QAbstractStateList_operator_left_shift_0()
    auto rv =  ((QAbstractStateList*)this_)->operator<<(t);
    return (QAbstractStateList*)this_;
}

// [-3] QList<T> & operator<<(const QList<T> &)
extern "C"
QAbstractStateList* C_QAbstractStateList_operator_left_shift_1(void* this_ , QAbstractStateList* l) {
    // QAbstractStateList_operator_left_shift_1()
    auto rv =  ((QAbstractStateList*)this_)->operator<<(*l);
    return (QAbstractStateList*)this_;
}

// [-3] QVector<T> toVector()
extern "C"
void C_QAbstractStateList_toVector_0(void* this_ ) {
    // QAbstractStateList_toVector_0()
    auto rv =  ((QAbstractStateList*)this_)->toVector();
}

// [-3] std::list<T> toStdList()
extern "C"
void C_QAbstractStateList_toStdList_0(void* this_ ) {
    // QAbstractStateList_toStdList_0()
    auto rv =  ((QAbstractStateList*)this_)->toStdList();
}

//  body block end
