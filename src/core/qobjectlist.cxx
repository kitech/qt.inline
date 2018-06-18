
// /usr/include/qt/QtCore/qobject.h
#ifndef protected
#define protected public
#endif
#include <qobject.h>
#include <QtCore>
#include "callback_inherit.h"

#ifndef QObjectList
#ifndef QOBJECTLIST_H
typedef QList<QObject *> QObjectList;
#endif
#endif
//  header block end

//  body block begin
// [-3] QList<T> & operator=(const QList<T> &)
extern "C"
QObjectList* C_QObjectList_operator_equal_0(void* this_ , QObjectList* l) {
    // QObjectList_operator_equal_0()
    auto rv =  ((QObjectList*)this_)->operator=(*l);
    return (QObjectList*)this_;
}

// [-3] QList<T> & operator=(QList<T> &&)
extern "C"
QObjectList* C_QObjectList_operator_equal_1(void* this_ , QObjectList* other) {
    // QObjectList_operator_equal_1()
    auto rv =  ((QObjectList*)this_)->operator=(*other);
    return (QObjectList*)this_;
}

// [-2] void swap(QList<T> &)
extern "C"
void C_QObjectList_swap_0(void* this_ , QObjectList* other) {
    // QObjectList_swap_0()
     ((QObjectList*)this_)->swap(*other);
}

// [1] bool operator==(const QList<T> &)
extern "C"
bool C_QObjectList_operator_equal_equal_0(void* this_ , QObjectList* l) {
    // QObjectList_operator_equal_equal_0()
    auto rv =  ((QObjectList*)this_)->operator==(*l);
    return rv;
}

// [1] bool operator!=(const QList<T> &)
extern "C"
bool C_QObjectList_operator_not_equal_0(void* this_ , QObjectList* l) {
    // QObjectList_operator_not_equal_0()
    auto rv =  ((QObjectList*)this_)->operator!=(*l);
    return rv;
}

// [4] int size()
extern "C"
int C_QObjectList_size_0(void* this_ ) {
    // QObjectList_size_0()
    auto rv =  ((QObjectList*)this_)->size();
    return rv;
}

// [-2] void detach()
extern "C"
void C_QObjectList_detach_0(void* this_ ) {
    // QObjectList_detach_0()
     ((QObjectList*)this_)->detach();
}

// [-2] void detachShared()
extern "C"
void C_QObjectList_detachShared_0(void* this_ ) {
    // QObjectList_detachShared_0()
     ((QObjectList*)this_)->detachShared();
}

// [1] bool isDetached()
extern "C"
bool C_QObjectList_isDetached_0(void* this_ ) {
    // QObjectList_isDetached_0()
    auto rv =  ((QObjectList*)this_)->isDetached();
    return rv;
}

// [-2] void setSharable(bool)
extern "C"
void C_QObjectList_setSharable_0(void* this_ , bool sharable) {
    // QObjectList_setSharable_0()
     ((QObjectList*)this_)->setSharable(sharable);
}

// [1] bool isSharedWith(const QList<T> &)
extern "C"
bool C_QObjectList_isSharedWith_0(void* this_ , QObjectList* other) {
    // QObjectList_isSharedWith_0()
    auto rv =  ((QObjectList*)this_)->isSharedWith(*other);
    return rv;
}

// [1] bool isEmpty()
extern "C"
bool C_QObjectList_isEmpty_0(void* this_ ) {
    // QObjectList_isEmpty_0()
    auto rv =  ((QObjectList*)this_)->isEmpty();
    return rv;
}

// [-2] void clear()
extern "C"
void C_QObjectList_clear_0(void* this_ ) {
    // QObjectList_clear_0()
     ((QObjectList*)this_)->clear();
}

// [-3] const T & at(int)
extern "C"
QObject ** C_QObjectList_at_0(void* this_ , int i) {
    // QObjectList_at_0()
    auto rv =  ((QObjectList*)this_)->at(i);
    return new decltype(rv)(rv);
}

// [-3] const T & operator[](int)
extern "C"
QObject ** C_QObjectList_operator_get_index_0(void* this_ , int i) {
    // QObjectList_operator_get_index_0()
    auto rv =  ((QObjectList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-3] T & operator[](int)
extern "C"
QObject ** C_QObjectList_operator_get_index_1(void* this_ , int i) {
    // QObjectList_operator_get_index_1()
    auto rv =  ((QObjectList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-2] void reserve(int)
extern "C"
void C_QObjectList_reserve_0(void* this_ , int size) {
    // QObjectList_reserve_0()
     ((QObjectList*)this_)->reserve(size);
}

// [-2] void append(const T &)
extern "C"
void C_QObjectList_append_0(void* this_ , QObject * t) {
    // QObjectList_append_0()
     ((QObjectList*)this_)->append(t);
}

// [-2] void append(const QList<T> &)
extern "C"
void C_QObjectList_append_1(void* this_ , QObjectList* t) {
    // QObjectList_append_1()
     ((QObjectList*)this_)->append(*t);
}

// [-2] void prepend(const T &)
extern "C"
void C_QObjectList_prepend_0(void* this_ , QObject * t) {
    // QObjectList_prepend_0()
     ((QObjectList*)this_)->prepend(t);
}

// [-2] void insert(int, const T &)
extern "C"
void C_QObjectList_insert_0(void* this_ , int i, QObject * t) {
    // QObjectList_insert_0()
     ((QObjectList*)this_)->insert(i, t);
}

// [-2] void replace(int, const T &)
extern "C"
void C_QObjectList_replace_0(void* this_ , int i, QObject * t) {
    // QObjectList_replace_0()
     ((QObjectList*)this_)->replace(i, t);
}

// [-2] void removeAt(int)
extern "C"
void C_QObjectList_removeAt_0(void* this_ , int i) {
    // QObjectList_removeAt_0()
     ((QObjectList*)this_)->removeAt(i);
}

// [4] int removeAll(const T &)
extern "C"
int C_QObjectList_removeAll_0(void* this_ , QObject * t) {
    // QObjectList_removeAll_0()
    auto rv =  ((QObjectList*)this_)->removeAll(t);
    return rv;
}

// [1] bool removeOne(const T &)
extern "C"
bool C_QObjectList_removeOne_0(void* this_ , QObject * t) {
    // QObjectList_removeOne_0()
    auto rv =  ((QObjectList*)this_)->removeOne(t);
    return rv;
}

// [-3] T takeAt(int)
extern "C"
QObject ** C_QObjectList_takeAt_0(void* this_ , int i) {
    // QObjectList_takeAt_0()
    auto rv =  ((QObjectList*)this_)->takeAt(i);
    return new decltype(rv)(rv);
}

// [-3] T takeFirst()
extern "C"
QObject ** C_QObjectList_takeFirst_0(void* this_ ) {
    // QObjectList_takeFirst_0()
    auto rv =  ((QObjectList*)this_)->takeFirst();
    return new decltype(rv)(rv);
}

// [-3] T takeLast()
extern "C"
QObject ** C_QObjectList_takeLast_0(void* this_ ) {
    // QObjectList_takeLast_0()
    auto rv =  ((QObjectList*)this_)->takeLast();
    return new decltype(rv)(rv);
}

// [-2] void move(int, int)
extern "C"
void C_QObjectList_move_0(void* this_ , int from, int to) {
    // QObjectList_move_0()
     ((QObjectList*)this_)->move(from, to);
}

// [-2] void swap(int, int)
extern "C"
void C_QObjectList_swap_1(void* this_ , int i, int j) {
    // QObjectList_swap_1()
     ((QObjectList*)this_)->swap(i, j);
}

// [4] int indexOf(const T &, int)
extern "C"
int C_QObjectList_indexOf_0(void* this_ , QObject * t, int from) {
    // QObjectList_indexOf_0()
    auto rv =  ((QObjectList*)this_)->indexOf(t, from);
    return rv;
}

// [4] int lastIndexOf(const T &, int)
extern "C"
int C_QObjectList_lastIndexOf_0(void* this_ , QObject * t, int from) {
    // QObjectList_lastIndexOf_0()
    auto rv =  ((QObjectList*)this_)->lastIndexOf(t, from);
    return rv;
}

// [1] bool contains(const T &)
extern "C"
bool C_QObjectList_contains_0(void* this_ , QObject * t) {
    // QObjectList_contains_0()
    auto rv =  ((QObjectList*)this_)->contains(t);
    return rv;
}

// [4] int count(const T &)
extern "C"
int C_QObjectList_count_0(void* this_ , QObject * t) {
    // QObjectList_count_0()
    auto rv =  ((QObjectList*)this_)->count(t);
    return rv;
}

// [-3] QList::iterator begin()
extern "C"
QObjectList::iterator* C_QObjectList_begin_0(void* this_ ) {
    // QObjectList_begin_0()
    auto rv =  ((QObjectList*)this_)->begin();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator end()
extern "C"
QObjectList::iterator* C_QObjectList_end_0(void* this_ ) {
    // QObjectList_end_0()
    auto rv =  ((QObjectList*)this_)->end();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rbegin()
extern "C"
QObjectList::reverse_iterator* C_QObjectList_rbegin_0(void* this_ ) {
    // QObjectList_rbegin_0()
    auto rv =  ((QObjectList*)this_)->rbegin();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rend()
extern "C"
QObjectList::reverse_iterator* C_QObjectList_rend_0(void* this_ ) {
    // QObjectList_rend_0()
    auto rv =  ((QObjectList*)this_)->rend();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator insert(QList::iterator, const T &)
extern "C"
QObjectList::iterator* C_QObjectList_insert_1(void* this_ , QObjectList::iterator* before, QObject * t) {
    // QObjectList_insert_1()
    auto rv =  ((QObjectList*)this_)->insert(*before, t);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator)
extern "C"
QObjectList::iterator* C_QObjectList_erase_0(void* this_ , QObjectList::iterator* pos) {
    // QObjectList_erase_0()
    auto rv =  ((QObjectList*)this_)->erase(*pos);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator, QList::iterator)
extern "C"
QObjectList::iterator* C_QObjectList_erase_1(void* this_ , QObjectList::iterator* first, QObjectList::iterator* last) {
    // QObjectList_erase_1()
    auto rv =  ((QObjectList*)this_)->erase(*first, *last);
    return new decltype(rv)(rv);
}

// [4] int count()
extern "C"
int C_QObjectList_count_1(void* this_ ) {
    // QObjectList_count_1()
    auto rv =  ((QObjectList*)this_)->count();
    return rv;
}

// [4] int length()
extern "C"
int C_QObjectList_length_0(void* this_ ) {
    // QObjectList_length_0()
    auto rv =  ((QObjectList*)this_)->length();
    return rv;
}

// [-3] T & first()
extern "C"
QObject ** C_QObjectList_first_0(void* this_ ) {
    // QObjectList_first_0()
    auto rv =  ((QObjectList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] const T & constFirst()
extern "C"
QObject ** C_QObjectList_constFirst_0(void* this_ ) {
    // QObjectList_constFirst_0()
    auto rv =  ((QObjectList*)this_)->constFirst();
    return new decltype(rv)(rv);
}

// [-3] const T & first()
extern "C"
QObject ** C_QObjectList_first_1(void* this_ ) {
    // QObjectList_first_1()
    auto rv =  ((QObjectList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] T & last()
extern "C"
QObject ** C_QObjectList_last_0(void* this_ ) {
    // QObjectList_last_0()
    auto rv =  ((QObjectList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & last()
extern "C"
QObject ** C_QObjectList_last_1(void* this_ ) {
    // QObjectList_last_1()
    auto rv =  ((QObjectList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & constLast()
extern "C"
QObject ** C_QObjectList_constLast_0(void* this_ ) {
    // QObjectList_constLast_0()
    auto rv =  ((QObjectList*)this_)->constLast();
    return new decltype(rv)(rv);
}

// [-2] void removeFirst()
extern "C"
void C_QObjectList_removeFirst_0(void* this_ ) {
    // QObjectList_removeFirst_0()
     ((QObjectList*)this_)->removeFirst();
}

// [-2] void removeLast()
extern "C"
void C_QObjectList_removeLast_0(void* this_ ) {
    // QObjectList_removeLast_0()
     ((QObjectList*)this_)->removeLast();
}

// [1] bool startsWith(const T &)
extern "C"
bool C_QObjectList_startsWith_0(void* this_ , QObject * t) {
    // QObjectList_startsWith_0()
    auto rv =  ((QObjectList*)this_)->startsWith(t);
    return rv;
}

// [1] bool endsWith(const T &)
extern "C"
bool C_QObjectList_endsWith_0(void* this_ , QObject * t) {
    // QObjectList_endsWith_0()
    auto rv =  ((QObjectList*)this_)->endsWith(t);
    return rv;
}

// [-3] QList<T> mid(int, int)
extern "C"
QObjectList* C_QObjectList_mid_0(void* this_ , int pos, int length) {
    // QObjectList_mid_0()
    auto rv =  ((QObjectList*)this_)->mid(pos, length);
    return (QObjectList*)this_;
}

// [-3] T value(int)
extern "C"
QObject ** C_QObjectList_value_0(void* this_ , int i) {
    // QObjectList_value_0()
    auto rv =  ((QObjectList*)this_)->value(i);
    return new decltype(rv)(rv);
}

// [-3] T value(int, const T &)
extern "C"
QObject ** C_QObjectList_value_1(void* this_ , int i, QObject * defaultValue) {
    // QObjectList_value_1()
    auto rv =  ((QObjectList*)this_)->value(i, defaultValue);
    return new decltype(rv)(rv);
}

// [-2] void push_back(const T &)
extern "C"
void C_QObjectList_push_back_0(void* this_ , QObject * t) {
    // QObjectList_push_back_0()
     ((QObjectList*)this_)->push_back(t);
}

// [-2] void push_front(const T &)
extern "C"
void C_QObjectList_push_front_0(void* this_ , QObject * t) {
    // QObjectList_push_front_0()
     ((QObjectList*)this_)->push_front(t);
}

// [-3] T & front()
extern "C"
QObject ** C_QObjectList_front_0(void* this_ ) {
    // QObjectList_front_0()
    auto rv =  ((QObjectList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] const T & front()
extern "C"
QObject ** C_QObjectList_front_1(void* this_ ) {
    // QObjectList_front_1()
    auto rv =  ((QObjectList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] T & back()
extern "C"
QObject ** C_QObjectList_back_0(void* this_ ) {
    // QObjectList_back_0()
    auto rv =  ((QObjectList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-3] const T & back()
extern "C"
QObject ** C_QObjectList_back_1(void* this_ ) {
    // QObjectList_back_1()
    auto rv =  ((QObjectList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-2] void pop_front()
extern "C"
void C_QObjectList_pop_front_0(void* this_ ) {
    // QObjectList_pop_front_0()
     ((QObjectList*)this_)->pop_front();
}

// [-2] void pop_back()
extern "C"
void C_QObjectList_pop_back_0(void* this_ ) {
    // QObjectList_pop_back_0()
     ((QObjectList*)this_)->pop_back();
}

// [1] bool empty()
extern "C"
bool C_QObjectList_empty_0(void* this_ ) {
    // QObjectList_empty_0()
    auto rv =  ((QObjectList*)this_)->empty();
    return rv;
}

// [-3] QList<T> & operator+=(const QList<T> &)
extern "C"
QObjectList* C_QObjectList_operator_add_equal_0(void* this_ , QObjectList* l) {
    // QObjectList_operator_add_equal_0()
    auto rv =  ((QObjectList*)this_)->operator+=(*l);
    return (QObjectList*)this_;
}

// [-3] QList<T> operator+(const QList<T> &)
extern "C"
QObjectList* C_QObjectList_operator_add_0(void* this_ , QObjectList* l) {
    // QObjectList_operator_add_0()
    auto rv =  ((QObjectList*)this_)->operator+(*l);
    return (QObjectList*)this_;
}

// [-3] QList<T> & operator+=(const T &)
extern "C"
QObjectList* C_QObjectList_operator_add_equal_1(void* this_ , QObject * t) {
    // QObjectList_operator_add_equal_1()
    auto rv =  ((QObjectList*)this_)->operator+=(t);
    return (QObjectList*)this_;
}

// [-3] QList<T> & operator<<(const T &)
extern "C"
QObjectList* C_QObjectList_operator_left_shift_0(void* this_ , QObject * t) {
    // QObjectList_operator_left_shift_0()
    auto rv =  ((QObjectList*)this_)->operator<<(t);
    return (QObjectList*)this_;
}

// [-3] QList<T> & operator<<(const QList<T> &)
extern "C"
QObjectList* C_QObjectList_operator_left_shift_1(void* this_ , QObjectList* l) {
    // QObjectList_operator_left_shift_1()
    auto rv =  ((QObjectList*)this_)->operator<<(*l);
    return (QObjectList*)this_;
}

// [-3] QVector<T> toVector()
extern "C"
void C_QObjectList_toVector_0(void* this_ ) {
    // QObjectList_toVector_0()
    auto rv =  ((QObjectList*)this_)->toVector();
}

// [-3] std::list<T> toStdList()
extern "C"
void C_QObjectList_toStdList_0(void* this_ ) {
    // QObjectList_toStdList_0()
    auto rv =  ((QObjectList*)this_)->toStdList();
}

//  body block end
