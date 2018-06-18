
// /usr/include/qt/QtGui/qkeysequence.h
#ifndef protected
#define protected public
#endif
#include <qkeysequence.h>
#include <QtGui>
#include "callback_inherit.h"

#ifndef QKeySequenceList
#ifndef QKEYSEQUENCELIST_H
typedef QList<QKeySequence> QKeySequenceList;
#endif
#endif
//  header block end

//  body block begin
// [-3] QList<T> & operator=(const QList<T> &)
extern "C"
QKeySequenceList* C_QKeySequenceList_operator_equal_0(void* this_ , QKeySequenceList* l) {
    // QKeySequenceList_operator_equal_0()
    auto rv =  ((QKeySequenceList*)this_)->operator=(*l);
    return (QKeySequenceList*)this_;
}

// [-3] QList<T> & operator=(QList<T> &&)
extern "C"
QKeySequenceList* C_QKeySequenceList_operator_equal_1(void* this_ , QKeySequenceList* other) {
    // QKeySequenceList_operator_equal_1()
    auto rv =  ((QKeySequenceList*)this_)->operator=(*other);
    return (QKeySequenceList*)this_;
}

// [-2] void swap(QList<T> &)
extern "C"
void C_QKeySequenceList_swap_0(void* this_ , QKeySequenceList* other) {
    // QKeySequenceList_swap_0()
     ((QKeySequenceList*)this_)->swap(*other);
}

// [1] bool operator==(const QList<T> &)
extern "C"
bool C_QKeySequenceList_operator_equal_equal_0(void* this_ , QKeySequenceList* l) {
    // QKeySequenceList_operator_equal_equal_0()
    auto rv =  ((QKeySequenceList*)this_)->operator==(*l);
    return rv;
}

// [1] bool operator!=(const QList<T> &)
extern "C"
bool C_QKeySequenceList_operator_not_equal_0(void* this_ , QKeySequenceList* l) {
    // QKeySequenceList_operator_not_equal_0()
    auto rv =  ((QKeySequenceList*)this_)->operator!=(*l);
    return rv;
}

// [4] int size()
extern "C"
int C_QKeySequenceList_size_0(void* this_ ) {
    // QKeySequenceList_size_0()
    auto rv =  ((QKeySequenceList*)this_)->size();
    return rv;
}

// [-2] void detach()
extern "C"
void C_QKeySequenceList_detach_0(void* this_ ) {
    // QKeySequenceList_detach_0()
     ((QKeySequenceList*)this_)->detach();
}

// [-2] void detachShared()
extern "C"
void C_QKeySequenceList_detachShared_0(void* this_ ) {
    // QKeySequenceList_detachShared_0()
     ((QKeySequenceList*)this_)->detachShared();
}

// [1] bool isDetached()
extern "C"
bool C_QKeySequenceList_isDetached_0(void* this_ ) {
    // QKeySequenceList_isDetached_0()
    auto rv =  ((QKeySequenceList*)this_)->isDetached();
    return rv;
}

// [-2] void setSharable(bool)
extern "C"
void C_QKeySequenceList_setSharable_0(void* this_ , bool sharable) {
    // QKeySequenceList_setSharable_0()
     ((QKeySequenceList*)this_)->setSharable(sharable);
}

// [1] bool isSharedWith(const QList<T> &)
extern "C"
bool C_QKeySequenceList_isSharedWith_0(void* this_ , QKeySequenceList* other) {
    // QKeySequenceList_isSharedWith_0()
    auto rv =  ((QKeySequenceList*)this_)->isSharedWith(*other);
    return rv;
}

// [1] bool isEmpty()
extern "C"
bool C_QKeySequenceList_isEmpty_0(void* this_ ) {
    // QKeySequenceList_isEmpty_0()
    auto rv =  ((QKeySequenceList*)this_)->isEmpty();
    return rv;
}

// [-2] void clear()
extern "C"
void C_QKeySequenceList_clear_0(void* this_ ) {
    // QKeySequenceList_clear_0()
     ((QKeySequenceList*)this_)->clear();
}

// [-3] const T & at(int)
extern "C"
QKeySequence* C_QKeySequenceList_at_0(void* this_ , int i) {
    // QKeySequenceList_at_0()
    auto rv =  ((QKeySequenceList*)this_)->at(i);
    return new decltype(rv)(rv);
}

// [-3] const T & operator[](int)
extern "C"
QKeySequence* C_QKeySequenceList_operator_get_index_0(void* this_ , int i) {
    // QKeySequenceList_operator_get_index_0()
    auto rv =  ((QKeySequenceList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-3] T & operator[](int)
extern "C"
QKeySequence* C_QKeySequenceList_operator_get_index_1(void* this_ , int i) {
    // QKeySequenceList_operator_get_index_1()
    auto rv =  ((QKeySequenceList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-2] void reserve(int)
extern "C"
void C_QKeySequenceList_reserve_0(void* this_ , int size) {
    // QKeySequenceList_reserve_0()
     ((QKeySequenceList*)this_)->reserve(size);
}

// [-2] void append(const T &)
extern "C"
void C_QKeySequenceList_append_0(void* this_ , QKeySequence* t) {
    // QKeySequenceList_append_0()
     ((QKeySequenceList*)this_)->append(*t);
}

// [-2] void append(const QList<T> &)
extern "C"
void C_QKeySequenceList_append_1(void* this_ , QKeySequenceList* t) {
    // QKeySequenceList_append_1()
     ((QKeySequenceList*)this_)->append(*t);
}

// [-2] void prepend(const T &)
extern "C"
void C_QKeySequenceList_prepend_0(void* this_ , QKeySequence* t) {
    // QKeySequenceList_prepend_0()
     ((QKeySequenceList*)this_)->prepend(*t);
}

// [-2] void insert(int, const T &)
extern "C"
void C_QKeySequenceList_insert_0(void* this_ , int i, QKeySequence* t) {
    // QKeySequenceList_insert_0()
     ((QKeySequenceList*)this_)->insert(i, *t);
}

// [-2] void replace(int, const T &)
extern "C"
void C_QKeySequenceList_replace_0(void* this_ , int i, QKeySequence* t) {
    // QKeySequenceList_replace_0()
     ((QKeySequenceList*)this_)->replace(i, *t);
}

// [-2] void removeAt(int)
extern "C"
void C_QKeySequenceList_removeAt_0(void* this_ , int i) {
    // QKeySequenceList_removeAt_0()
     ((QKeySequenceList*)this_)->removeAt(i);
}

// [4] int removeAll(const T &)
extern "C"
int C_QKeySequenceList_removeAll_0(void* this_ , QKeySequence* t) {
    // QKeySequenceList_removeAll_0()
    auto rv =  ((QKeySequenceList*)this_)->removeAll(*t);
    return rv;
}

// [1] bool removeOne(const T &)
extern "C"
bool C_QKeySequenceList_removeOne_0(void* this_ , QKeySequence* t) {
    // QKeySequenceList_removeOne_0()
    auto rv =  ((QKeySequenceList*)this_)->removeOne(*t);
    return rv;
}

// [-3] T takeAt(int)
extern "C"
QKeySequence* C_QKeySequenceList_takeAt_0(void* this_ , int i) {
    // QKeySequenceList_takeAt_0()
    auto rv =  ((QKeySequenceList*)this_)->takeAt(i);
    return new decltype(rv)(rv);
}

// [-3] T takeFirst()
extern "C"
QKeySequence* C_QKeySequenceList_takeFirst_0(void* this_ ) {
    // QKeySequenceList_takeFirst_0()
    auto rv =  ((QKeySequenceList*)this_)->takeFirst();
    return new decltype(rv)(rv);
}

// [-3] T takeLast()
extern "C"
QKeySequence* C_QKeySequenceList_takeLast_0(void* this_ ) {
    // QKeySequenceList_takeLast_0()
    auto rv =  ((QKeySequenceList*)this_)->takeLast();
    return new decltype(rv)(rv);
}

// [-2] void move(int, int)
extern "C"
void C_QKeySequenceList_move_0(void* this_ , int from, int to) {
    // QKeySequenceList_move_0()
     ((QKeySequenceList*)this_)->move(from, to);
}

// [-2] void swap(int, int)
extern "C"
void C_QKeySequenceList_swap_1(void* this_ , int i, int j) {
    // QKeySequenceList_swap_1()
     ((QKeySequenceList*)this_)->swap(i, j);
}

// [4] int indexOf(const T &, int)
extern "C"
int C_QKeySequenceList_indexOf_0(void* this_ , QKeySequence* t, int from) {
    // QKeySequenceList_indexOf_0()
    auto rv =  ((QKeySequenceList*)this_)->indexOf(*t, from);
    return rv;
}

// [4] int lastIndexOf(const T &, int)
extern "C"
int C_QKeySequenceList_lastIndexOf_0(void* this_ , QKeySequence* t, int from) {
    // QKeySequenceList_lastIndexOf_0()
    auto rv =  ((QKeySequenceList*)this_)->lastIndexOf(*t, from);
    return rv;
}

// [1] bool contains(const T &)
extern "C"
bool C_QKeySequenceList_contains_0(void* this_ , QKeySequence* t) {
    // QKeySequenceList_contains_0()
    auto rv =  ((QKeySequenceList*)this_)->contains(*t);
    return rv;
}

// [4] int count(const T &)
extern "C"
int C_QKeySequenceList_count_0(void* this_ , QKeySequence* t) {
    // QKeySequenceList_count_0()
    auto rv =  ((QKeySequenceList*)this_)->count(*t);
    return rv;
}

// [-3] QList::iterator begin()
extern "C"
QKeySequenceList::iterator* C_QKeySequenceList_begin_0(void* this_ ) {
    // QKeySequenceList_begin_0()
    auto rv =  ((QKeySequenceList*)this_)->begin();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator end()
extern "C"
QKeySequenceList::iterator* C_QKeySequenceList_end_0(void* this_ ) {
    // QKeySequenceList_end_0()
    auto rv =  ((QKeySequenceList*)this_)->end();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rbegin()
extern "C"
QKeySequenceList::reverse_iterator* C_QKeySequenceList_rbegin_0(void* this_ ) {
    // QKeySequenceList_rbegin_0()
    auto rv =  ((QKeySequenceList*)this_)->rbegin();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rend()
extern "C"
QKeySequenceList::reverse_iterator* C_QKeySequenceList_rend_0(void* this_ ) {
    // QKeySequenceList_rend_0()
    auto rv =  ((QKeySequenceList*)this_)->rend();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator insert(QList::iterator, const T &)
extern "C"
QKeySequenceList::iterator* C_QKeySequenceList_insert_1(void* this_ , QKeySequenceList::iterator* before, QKeySequence* t) {
    // QKeySequenceList_insert_1()
    auto rv =  ((QKeySequenceList*)this_)->insert(*before, *t);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator)
extern "C"
QKeySequenceList::iterator* C_QKeySequenceList_erase_0(void* this_ , QKeySequenceList::iterator* pos) {
    // QKeySequenceList_erase_0()
    auto rv =  ((QKeySequenceList*)this_)->erase(*pos);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator, QList::iterator)
extern "C"
QKeySequenceList::iterator* C_QKeySequenceList_erase_1(void* this_ , QKeySequenceList::iterator* first, QKeySequenceList::iterator* last) {
    // QKeySequenceList_erase_1()
    auto rv =  ((QKeySequenceList*)this_)->erase(*first, *last);
    return new decltype(rv)(rv);
}

// [4] int count()
extern "C"
int C_QKeySequenceList_count_1(void* this_ ) {
    // QKeySequenceList_count_1()
    auto rv =  ((QKeySequenceList*)this_)->count();
    return rv;
}

// [4] int length()
extern "C"
int C_QKeySequenceList_length_0(void* this_ ) {
    // QKeySequenceList_length_0()
    auto rv =  ((QKeySequenceList*)this_)->length();
    return rv;
}

// [-3] T & first()
extern "C"
QKeySequence* C_QKeySequenceList_first_0(void* this_ ) {
    // QKeySequenceList_first_0()
    auto rv =  ((QKeySequenceList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] const T & constFirst()
extern "C"
QKeySequence* C_QKeySequenceList_constFirst_0(void* this_ ) {
    // QKeySequenceList_constFirst_0()
    auto rv =  ((QKeySequenceList*)this_)->constFirst();
    return new decltype(rv)(rv);
}

// [-3] const T & first()
extern "C"
QKeySequence* C_QKeySequenceList_first_1(void* this_ ) {
    // QKeySequenceList_first_1()
    auto rv =  ((QKeySequenceList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] T & last()
extern "C"
QKeySequence* C_QKeySequenceList_last_0(void* this_ ) {
    // QKeySequenceList_last_0()
    auto rv =  ((QKeySequenceList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & last()
extern "C"
QKeySequence* C_QKeySequenceList_last_1(void* this_ ) {
    // QKeySequenceList_last_1()
    auto rv =  ((QKeySequenceList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & constLast()
extern "C"
QKeySequence* C_QKeySequenceList_constLast_0(void* this_ ) {
    // QKeySequenceList_constLast_0()
    auto rv =  ((QKeySequenceList*)this_)->constLast();
    return new decltype(rv)(rv);
}

// [-2] void removeFirst()
extern "C"
void C_QKeySequenceList_removeFirst_0(void* this_ ) {
    // QKeySequenceList_removeFirst_0()
     ((QKeySequenceList*)this_)->removeFirst();
}

// [-2] void removeLast()
extern "C"
void C_QKeySequenceList_removeLast_0(void* this_ ) {
    // QKeySequenceList_removeLast_0()
     ((QKeySequenceList*)this_)->removeLast();
}

// [1] bool startsWith(const T &)
extern "C"
bool C_QKeySequenceList_startsWith_0(void* this_ , QKeySequence* t) {
    // QKeySequenceList_startsWith_0()
    auto rv =  ((QKeySequenceList*)this_)->startsWith(*t);
    return rv;
}

// [1] bool endsWith(const T &)
extern "C"
bool C_QKeySequenceList_endsWith_0(void* this_ , QKeySequence* t) {
    // QKeySequenceList_endsWith_0()
    auto rv =  ((QKeySequenceList*)this_)->endsWith(*t);
    return rv;
}

// [-3] QList<T> mid(int, int)
extern "C"
QKeySequenceList* C_QKeySequenceList_mid_0(void* this_ , int pos, int length) {
    // QKeySequenceList_mid_0()
    auto rv =  ((QKeySequenceList*)this_)->mid(pos, length);
    return (QKeySequenceList*)this_;
}

// [-3] T value(int)
extern "C"
QKeySequence* C_QKeySequenceList_value_0(void* this_ , int i) {
    // QKeySequenceList_value_0()
    auto rv =  ((QKeySequenceList*)this_)->value(i);
    return new decltype(rv)(rv);
}

// [-3] T value(int, const T &)
extern "C"
QKeySequence* C_QKeySequenceList_value_1(void* this_ , int i, QKeySequence* defaultValue) {
    // QKeySequenceList_value_1()
    auto rv =  ((QKeySequenceList*)this_)->value(i, *defaultValue);
    return new decltype(rv)(rv);
}

// [-2] void push_back(const T &)
extern "C"
void C_QKeySequenceList_push_back_0(void* this_ , QKeySequence* t) {
    // QKeySequenceList_push_back_0()
     ((QKeySequenceList*)this_)->push_back(*t);
}

// [-2] void push_front(const T &)
extern "C"
void C_QKeySequenceList_push_front_0(void* this_ , QKeySequence* t) {
    // QKeySequenceList_push_front_0()
     ((QKeySequenceList*)this_)->push_front(*t);
}

// [-3] T & front()
extern "C"
QKeySequence* C_QKeySequenceList_front_0(void* this_ ) {
    // QKeySequenceList_front_0()
    auto rv =  ((QKeySequenceList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] const T & front()
extern "C"
QKeySequence* C_QKeySequenceList_front_1(void* this_ ) {
    // QKeySequenceList_front_1()
    auto rv =  ((QKeySequenceList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] T & back()
extern "C"
QKeySequence* C_QKeySequenceList_back_0(void* this_ ) {
    // QKeySequenceList_back_0()
    auto rv =  ((QKeySequenceList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-3] const T & back()
extern "C"
QKeySequence* C_QKeySequenceList_back_1(void* this_ ) {
    // QKeySequenceList_back_1()
    auto rv =  ((QKeySequenceList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-2] void pop_front()
extern "C"
void C_QKeySequenceList_pop_front_0(void* this_ ) {
    // QKeySequenceList_pop_front_0()
     ((QKeySequenceList*)this_)->pop_front();
}

// [-2] void pop_back()
extern "C"
void C_QKeySequenceList_pop_back_0(void* this_ ) {
    // QKeySequenceList_pop_back_0()
     ((QKeySequenceList*)this_)->pop_back();
}

// [1] bool empty()
extern "C"
bool C_QKeySequenceList_empty_0(void* this_ ) {
    // QKeySequenceList_empty_0()
    auto rv =  ((QKeySequenceList*)this_)->empty();
    return rv;
}

// [-3] QList<T> & operator+=(const QList<T> &)
extern "C"
QKeySequenceList* C_QKeySequenceList_operator_add_equal_0(void* this_ , QKeySequenceList* l) {
    // QKeySequenceList_operator_add_equal_0()
    auto rv =  ((QKeySequenceList*)this_)->operator+=(*l);
    return (QKeySequenceList*)this_;
}

// [-3] QList<T> operator+(const QList<T> &)
extern "C"
QKeySequenceList* C_QKeySequenceList_operator_add_0(void* this_ , QKeySequenceList* l) {
    // QKeySequenceList_operator_add_0()
    auto rv =  ((QKeySequenceList*)this_)->operator+(*l);
    return (QKeySequenceList*)this_;
}

// [-3] QList<T> & operator+=(const T &)
extern "C"
QKeySequenceList* C_QKeySequenceList_operator_add_equal_1(void* this_ , QKeySequence* t) {
    // QKeySequenceList_operator_add_equal_1()
    auto rv =  ((QKeySequenceList*)this_)->operator+=(*t);
    return (QKeySequenceList*)this_;
}

// [-3] QList<T> & operator<<(const T &)
extern "C"
QKeySequenceList* C_QKeySequenceList_operator_left_shift_0(void* this_ , QKeySequence* t) {
    // QKeySequenceList_operator_left_shift_0()
    auto rv =  ((QKeySequenceList*)this_)->operator<<(*t);
    return (QKeySequenceList*)this_;
}

// [-3] QList<T> & operator<<(const QList<T> &)
extern "C"
QKeySequenceList* C_QKeySequenceList_operator_left_shift_1(void* this_ , QKeySequenceList* l) {
    // QKeySequenceList_operator_left_shift_1()
    auto rv =  ((QKeySequenceList*)this_)->operator<<(*l);
    return (QKeySequenceList*)this_;
}

// [-3] QVector<T> toVector()
extern "C"
void C_QKeySequenceList_toVector_0(void* this_ ) {
    // QKeySequenceList_toVector_0()
    auto rv =  ((QKeySequenceList*)this_)->toVector();
}

// [-3] std::list<T> toStdList()
extern "C"
void C_QKeySequenceList_toStdList_0(void* this_ ) {
    // QKeySequenceList_toStdList_0()
    auto rv =  ((QKeySequenceList*)this_)->toStdList();
}

//  body block end
