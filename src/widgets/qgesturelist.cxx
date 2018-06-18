
// /usr/include/qt/QtWidgets/qgesture.h
#ifndef protected
#define protected public
#endif
#include <qgesture.h>
#include <QtWidgets>
#include "callback_inherit.h"

#ifndef QGestureList
#ifndef QGESTURELIST_H
typedef QList<QGesture *> QGestureList;
#endif
#endif
//  header block end

//  body block begin
// [-3] QList<T> & operator=(const QList<T> &)
extern "C"
QGestureList* C_QGestureList_operator_equal_0(void* this_ , QGestureList* l) {
    // QGestureList_operator_equal_0()
    auto rv =  ((QGestureList*)this_)->operator=(*l);
    return (QGestureList*)this_;
}

// [-3] QList<T> & operator=(QList<T> &&)
extern "C"
QGestureList* C_QGestureList_operator_equal_1(void* this_ , QGestureList* other) {
    // QGestureList_operator_equal_1()
    auto rv =  ((QGestureList*)this_)->operator=(*other);
    return (QGestureList*)this_;
}

// [-2] void swap(QList<T> &)
extern "C"
void C_QGestureList_swap_0(void* this_ , QGestureList* other) {
    // QGestureList_swap_0()
     ((QGestureList*)this_)->swap(*other);
}

// [1] bool operator==(const QList<T> &)
extern "C"
bool C_QGestureList_operator_equal_equal_0(void* this_ , QGestureList* l) {
    // QGestureList_operator_equal_equal_0()
    auto rv =  ((QGestureList*)this_)->operator==(*l);
    return rv;
}

// [1] bool operator!=(const QList<T> &)
extern "C"
bool C_QGestureList_operator_not_equal_0(void* this_ , QGestureList* l) {
    // QGestureList_operator_not_equal_0()
    auto rv =  ((QGestureList*)this_)->operator!=(*l);
    return rv;
}

// [4] int size()
extern "C"
int C_QGestureList_size_0(void* this_ ) {
    // QGestureList_size_0()
    auto rv =  ((QGestureList*)this_)->size();
    return rv;
}

// [-2] void detach()
extern "C"
void C_QGestureList_detach_0(void* this_ ) {
    // QGestureList_detach_0()
     ((QGestureList*)this_)->detach();
}

// [-2] void detachShared()
extern "C"
void C_QGestureList_detachShared_0(void* this_ ) {
    // QGestureList_detachShared_0()
     ((QGestureList*)this_)->detachShared();
}

// [1] bool isDetached()
extern "C"
bool C_QGestureList_isDetached_0(void* this_ ) {
    // QGestureList_isDetached_0()
    auto rv =  ((QGestureList*)this_)->isDetached();
    return rv;
}

// [-2] void setSharable(bool)
extern "C"
void C_QGestureList_setSharable_0(void* this_ , bool sharable) {
    // QGestureList_setSharable_0()
     ((QGestureList*)this_)->setSharable(sharable);
}

// [1] bool isSharedWith(const QList<T> &)
extern "C"
bool C_QGestureList_isSharedWith_0(void* this_ , QGestureList* other) {
    // QGestureList_isSharedWith_0()
    auto rv =  ((QGestureList*)this_)->isSharedWith(*other);
    return rv;
}

// [1] bool isEmpty()
extern "C"
bool C_QGestureList_isEmpty_0(void* this_ ) {
    // QGestureList_isEmpty_0()
    auto rv =  ((QGestureList*)this_)->isEmpty();
    return rv;
}

// [-2] void clear()
extern "C"
void C_QGestureList_clear_0(void* this_ ) {
    // QGestureList_clear_0()
     ((QGestureList*)this_)->clear();
}

// [-3] const T & at(int)
extern "C"
QGesture ** C_QGestureList_at_0(void* this_ , int i) {
    // QGestureList_at_0()
    auto rv =  ((QGestureList*)this_)->at(i);
    return new decltype(rv)(rv);
}

// [-3] const T & operator[](int)
extern "C"
QGesture ** C_QGestureList_operator_get_index_0(void* this_ , int i) {
    // QGestureList_operator_get_index_0()
    auto rv =  ((QGestureList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-3] T & operator[](int)
extern "C"
QGesture ** C_QGestureList_operator_get_index_1(void* this_ , int i) {
    // QGestureList_operator_get_index_1()
    auto rv =  ((QGestureList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-2] void reserve(int)
extern "C"
void C_QGestureList_reserve_0(void* this_ , int size) {
    // QGestureList_reserve_0()
     ((QGestureList*)this_)->reserve(size);
}

// [-2] void append(const T &)
extern "C"
void C_QGestureList_append_0(void* this_ , QGesture * t) {
    // QGestureList_append_0()
     ((QGestureList*)this_)->append(t);
}

// [-2] void append(const QList<T> &)
extern "C"
void C_QGestureList_append_1(void* this_ , QGestureList* t) {
    // QGestureList_append_1()
     ((QGestureList*)this_)->append(*t);
}

// [-2] void prepend(const T &)
extern "C"
void C_QGestureList_prepend_0(void* this_ , QGesture * t) {
    // QGestureList_prepend_0()
     ((QGestureList*)this_)->prepend(t);
}

// [-2] void insert(int, const T &)
extern "C"
void C_QGestureList_insert_0(void* this_ , int i, QGesture * t) {
    // QGestureList_insert_0()
     ((QGestureList*)this_)->insert(i, t);
}

// [-2] void replace(int, const T &)
extern "C"
void C_QGestureList_replace_0(void* this_ , int i, QGesture * t) {
    // QGestureList_replace_0()
     ((QGestureList*)this_)->replace(i, t);
}

// [-2] void removeAt(int)
extern "C"
void C_QGestureList_removeAt_0(void* this_ , int i) {
    // QGestureList_removeAt_0()
     ((QGestureList*)this_)->removeAt(i);
}

// [4] int removeAll(const T &)
extern "C"
int C_QGestureList_removeAll_0(void* this_ , QGesture * t) {
    // QGestureList_removeAll_0()
    auto rv =  ((QGestureList*)this_)->removeAll(t);
    return rv;
}

// [1] bool removeOne(const T &)
extern "C"
bool C_QGestureList_removeOne_0(void* this_ , QGesture * t) {
    // QGestureList_removeOne_0()
    auto rv =  ((QGestureList*)this_)->removeOne(t);
    return rv;
}

// [-3] T takeAt(int)
extern "C"
QGesture ** C_QGestureList_takeAt_0(void* this_ , int i) {
    // QGestureList_takeAt_0()
    auto rv =  ((QGestureList*)this_)->takeAt(i);
    return new decltype(rv)(rv);
}

// [-3] T takeFirst()
extern "C"
QGesture ** C_QGestureList_takeFirst_0(void* this_ ) {
    // QGestureList_takeFirst_0()
    auto rv =  ((QGestureList*)this_)->takeFirst();
    return new decltype(rv)(rv);
}

// [-3] T takeLast()
extern "C"
QGesture ** C_QGestureList_takeLast_0(void* this_ ) {
    // QGestureList_takeLast_0()
    auto rv =  ((QGestureList*)this_)->takeLast();
    return new decltype(rv)(rv);
}

// [-2] void move(int, int)
extern "C"
void C_QGestureList_move_0(void* this_ , int from, int to) {
    // QGestureList_move_0()
     ((QGestureList*)this_)->move(from, to);
}

// [-2] void swap(int, int)
extern "C"
void C_QGestureList_swap_1(void* this_ , int i, int j) {
    // QGestureList_swap_1()
     ((QGestureList*)this_)->swap(i, j);
}

// [4] int indexOf(const T &, int)
extern "C"
int C_QGestureList_indexOf_0(void* this_ , QGesture * t, int from) {
    // QGestureList_indexOf_0()
    auto rv =  ((QGestureList*)this_)->indexOf(t, from);
    return rv;
}

// [4] int lastIndexOf(const T &, int)
extern "C"
int C_QGestureList_lastIndexOf_0(void* this_ , QGesture * t, int from) {
    // QGestureList_lastIndexOf_0()
    auto rv =  ((QGestureList*)this_)->lastIndexOf(t, from);
    return rv;
}

// [1] bool contains(const T &)
extern "C"
bool C_QGestureList_contains_0(void* this_ , QGesture * t) {
    // QGestureList_contains_0()
    auto rv =  ((QGestureList*)this_)->contains(t);
    return rv;
}

// [4] int count(const T &)
extern "C"
int C_QGestureList_count_0(void* this_ , QGesture * t) {
    // QGestureList_count_0()
    auto rv =  ((QGestureList*)this_)->count(t);
    return rv;
}

// [-3] QList::iterator begin()
extern "C"
QGestureList::iterator* C_QGestureList_begin_0(void* this_ ) {
    // QGestureList_begin_0()
    auto rv =  ((QGestureList*)this_)->begin();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator end()
extern "C"
QGestureList::iterator* C_QGestureList_end_0(void* this_ ) {
    // QGestureList_end_0()
    auto rv =  ((QGestureList*)this_)->end();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rbegin()
extern "C"
QGestureList::reverse_iterator* C_QGestureList_rbegin_0(void* this_ ) {
    // QGestureList_rbegin_0()
    auto rv =  ((QGestureList*)this_)->rbegin();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rend()
extern "C"
QGestureList::reverse_iterator* C_QGestureList_rend_0(void* this_ ) {
    // QGestureList_rend_0()
    auto rv =  ((QGestureList*)this_)->rend();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator insert(QList::iterator, const T &)
extern "C"
QGestureList::iterator* C_QGestureList_insert_1(void* this_ , QGestureList::iterator* before, QGesture * t) {
    // QGestureList_insert_1()
    auto rv =  ((QGestureList*)this_)->insert(*before, t);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator)
extern "C"
QGestureList::iterator* C_QGestureList_erase_0(void* this_ , QGestureList::iterator* pos) {
    // QGestureList_erase_0()
    auto rv =  ((QGestureList*)this_)->erase(*pos);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator, QList::iterator)
extern "C"
QGestureList::iterator* C_QGestureList_erase_1(void* this_ , QGestureList::iterator* first, QGestureList::iterator* last) {
    // QGestureList_erase_1()
    auto rv =  ((QGestureList*)this_)->erase(*first, *last);
    return new decltype(rv)(rv);
}

// [4] int count()
extern "C"
int C_QGestureList_count_1(void* this_ ) {
    // QGestureList_count_1()
    auto rv =  ((QGestureList*)this_)->count();
    return rv;
}

// [4] int length()
extern "C"
int C_QGestureList_length_0(void* this_ ) {
    // QGestureList_length_0()
    auto rv =  ((QGestureList*)this_)->length();
    return rv;
}

// [-3] T & first()
extern "C"
QGesture ** C_QGestureList_first_0(void* this_ ) {
    // QGestureList_first_0()
    auto rv =  ((QGestureList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] const T & constFirst()
extern "C"
QGesture ** C_QGestureList_constFirst_0(void* this_ ) {
    // QGestureList_constFirst_0()
    auto rv =  ((QGestureList*)this_)->constFirst();
    return new decltype(rv)(rv);
}

// [-3] const T & first()
extern "C"
QGesture ** C_QGestureList_first_1(void* this_ ) {
    // QGestureList_first_1()
    auto rv =  ((QGestureList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] T & last()
extern "C"
QGesture ** C_QGestureList_last_0(void* this_ ) {
    // QGestureList_last_0()
    auto rv =  ((QGestureList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & last()
extern "C"
QGesture ** C_QGestureList_last_1(void* this_ ) {
    // QGestureList_last_1()
    auto rv =  ((QGestureList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & constLast()
extern "C"
QGesture ** C_QGestureList_constLast_0(void* this_ ) {
    // QGestureList_constLast_0()
    auto rv =  ((QGestureList*)this_)->constLast();
    return new decltype(rv)(rv);
}

// [-2] void removeFirst()
extern "C"
void C_QGestureList_removeFirst_0(void* this_ ) {
    // QGestureList_removeFirst_0()
     ((QGestureList*)this_)->removeFirst();
}

// [-2] void removeLast()
extern "C"
void C_QGestureList_removeLast_0(void* this_ ) {
    // QGestureList_removeLast_0()
     ((QGestureList*)this_)->removeLast();
}

// [1] bool startsWith(const T &)
extern "C"
bool C_QGestureList_startsWith_0(void* this_ , QGesture * t) {
    // QGestureList_startsWith_0()
    auto rv =  ((QGestureList*)this_)->startsWith(t);
    return rv;
}

// [1] bool endsWith(const T &)
extern "C"
bool C_QGestureList_endsWith_0(void* this_ , QGesture * t) {
    // QGestureList_endsWith_0()
    auto rv =  ((QGestureList*)this_)->endsWith(t);
    return rv;
}

// [-3] QList<T> mid(int, int)
extern "C"
QGestureList* C_QGestureList_mid_0(void* this_ , int pos, int length) {
    // QGestureList_mid_0()
    auto rv =  ((QGestureList*)this_)->mid(pos, length);
    return (QGestureList*)this_;
}

// [-3] T value(int)
extern "C"
QGesture ** C_QGestureList_value_0(void* this_ , int i) {
    // QGestureList_value_0()
    auto rv =  ((QGestureList*)this_)->value(i);
    return new decltype(rv)(rv);
}

// [-3] T value(int, const T &)
extern "C"
QGesture ** C_QGestureList_value_1(void* this_ , int i, QGesture * defaultValue) {
    // QGestureList_value_1()
    auto rv =  ((QGestureList*)this_)->value(i, defaultValue);
    return new decltype(rv)(rv);
}

// [-2] void push_back(const T &)
extern "C"
void C_QGestureList_push_back_0(void* this_ , QGesture * t) {
    // QGestureList_push_back_0()
     ((QGestureList*)this_)->push_back(t);
}

// [-2] void push_front(const T &)
extern "C"
void C_QGestureList_push_front_0(void* this_ , QGesture * t) {
    // QGestureList_push_front_0()
     ((QGestureList*)this_)->push_front(t);
}

// [-3] T & front()
extern "C"
QGesture ** C_QGestureList_front_0(void* this_ ) {
    // QGestureList_front_0()
    auto rv =  ((QGestureList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] const T & front()
extern "C"
QGesture ** C_QGestureList_front_1(void* this_ ) {
    // QGestureList_front_1()
    auto rv =  ((QGestureList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] T & back()
extern "C"
QGesture ** C_QGestureList_back_0(void* this_ ) {
    // QGestureList_back_0()
    auto rv =  ((QGestureList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-3] const T & back()
extern "C"
QGesture ** C_QGestureList_back_1(void* this_ ) {
    // QGestureList_back_1()
    auto rv =  ((QGestureList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-2] void pop_front()
extern "C"
void C_QGestureList_pop_front_0(void* this_ ) {
    // QGestureList_pop_front_0()
     ((QGestureList*)this_)->pop_front();
}

// [-2] void pop_back()
extern "C"
void C_QGestureList_pop_back_0(void* this_ ) {
    // QGestureList_pop_back_0()
     ((QGestureList*)this_)->pop_back();
}

// [1] bool empty()
extern "C"
bool C_QGestureList_empty_0(void* this_ ) {
    // QGestureList_empty_0()
    auto rv =  ((QGestureList*)this_)->empty();
    return rv;
}

// [-3] QList<T> & operator+=(const QList<T> &)
extern "C"
QGestureList* C_QGestureList_operator_add_equal_0(void* this_ , QGestureList* l) {
    // QGestureList_operator_add_equal_0()
    auto rv =  ((QGestureList*)this_)->operator+=(*l);
    return (QGestureList*)this_;
}

// [-3] QList<T> operator+(const QList<T> &)
extern "C"
QGestureList* C_QGestureList_operator_add_0(void* this_ , QGestureList* l) {
    // QGestureList_operator_add_0()
    auto rv =  ((QGestureList*)this_)->operator+(*l);
    return (QGestureList*)this_;
}

// [-3] QList<T> & operator+=(const T &)
extern "C"
QGestureList* C_QGestureList_operator_add_equal_1(void* this_ , QGesture * t) {
    // QGestureList_operator_add_equal_1()
    auto rv =  ((QGestureList*)this_)->operator+=(t);
    return (QGestureList*)this_;
}

// [-3] QList<T> & operator<<(const T &)
extern "C"
QGestureList* C_QGestureList_operator_left_shift_0(void* this_ , QGesture * t) {
    // QGestureList_operator_left_shift_0()
    auto rv =  ((QGestureList*)this_)->operator<<(t);
    return (QGestureList*)this_;
}

// [-3] QList<T> & operator<<(const QList<T> &)
extern "C"
QGestureList* C_QGestureList_operator_left_shift_1(void* this_ , QGestureList* l) {
    // QGestureList_operator_left_shift_1()
    auto rv =  ((QGestureList*)this_)->operator<<(*l);
    return (QGestureList*)this_;
}

// [-3] QVector<T> toVector()
extern "C"
void C_QGestureList_toVector_0(void* this_ ) {
    // QGestureList_toVector_0()
    auto rv =  ((QGestureList*)this_)->toVector();
}

// [-3] std::list<T> toStdList()
extern "C"
void C_QGestureList_toStdList_0(void* this_ ) {
    // QGestureList_toStdList_0()
    auto rv =  ((QGestureList*)this_)->toStdList();
}

//  body block end
