
// /usr/include/qt/QtCore/qbytearray.h
#ifndef protected
#define protected public
#endif
#include <qbytearray.h>
#include <QtCore>
#include "callback_inherit.h"

#ifndef QByteArrayList
#ifndef QBYTEARRAYLIST_H
typedef QList<QByteArray> QByteArrayList;
#endif
#endif
//  header block end

//  body block begin
// [-3] QList<T> & operator=(const QList<T> &)
extern "C"
QByteArrayList* C_QByteArrayList_operator_equal_0(void* this_ , QByteArrayList* l) {
    // QByteArrayList_operator_equal_0()
    auto rv =  ((QByteArrayList*)this_)->operator=(*l);
    return (QByteArrayList*)this_;
}

// [-3] QList<T> & operator=(QList<T> &&)
extern "C"
QByteArrayList* C_QByteArrayList_operator_equal_1(void* this_ , QByteArrayList* other) {
    // QByteArrayList_operator_equal_1()
    auto rv =  ((QByteArrayList*)this_)->operator=(*other);
    return (QByteArrayList*)this_;
}

// [-2] void swap(QList<T> &)
extern "C"
void C_QByteArrayList_swap_0(void* this_ , QByteArrayList* other) {
    // QByteArrayList_swap_0()
     ((QByteArrayList*)this_)->swap(*other);
}

// [1] bool operator==(const QList<T> &)
extern "C"
bool C_QByteArrayList_operator_equal_equal_0(void* this_ , QByteArrayList* l) {
    // QByteArrayList_operator_equal_equal_0()
    auto rv =  ((QByteArrayList*)this_)->operator==(*l);
    return rv;
}

// [1] bool operator!=(const QList<T> &)
extern "C"
bool C_QByteArrayList_operator_not_equal_0(void* this_ , QByteArrayList* l) {
    // QByteArrayList_operator_not_equal_0()
    auto rv =  ((QByteArrayList*)this_)->operator!=(*l);
    return rv;
}

// [4] int size()
extern "C"
int C_QByteArrayList_size_0(void* this_ ) {
    // QByteArrayList_size_0()
    auto rv =  ((QByteArrayList*)this_)->size();
    return rv;
}

// [-2] void detach()
extern "C"
void C_QByteArrayList_detach_0(void* this_ ) {
    // QByteArrayList_detach_0()
     ((QByteArrayList*)this_)->detach();
}

// [-2] void detachShared()
extern "C"
void C_QByteArrayList_detachShared_0(void* this_ ) {
    // QByteArrayList_detachShared_0()
     ((QByteArrayList*)this_)->detachShared();
}

// [1] bool isDetached()
extern "C"
bool C_QByteArrayList_isDetached_0(void* this_ ) {
    // QByteArrayList_isDetached_0()
    auto rv =  ((QByteArrayList*)this_)->isDetached();
    return rv;
}

// [-2] void setSharable(bool)
extern "C"
void C_QByteArrayList_setSharable_0(void* this_ , bool sharable) {
    // QByteArrayList_setSharable_0()
     ((QByteArrayList*)this_)->setSharable(sharable);
}

// [1] bool isSharedWith(const QList<T> &)
extern "C"
bool C_QByteArrayList_isSharedWith_0(void* this_ , QByteArrayList* other) {
    // QByteArrayList_isSharedWith_0()
    auto rv =  ((QByteArrayList*)this_)->isSharedWith(*other);
    return rv;
}

// [1] bool isEmpty()
extern "C"
bool C_QByteArrayList_isEmpty_0(void* this_ ) {
    // QByteArrayList_isEmpty_0()
    auto rv =  ((QByteArrayList*)this_)->isEmpty();
    return rv;
}

// [-2] void clear()
extern "C"
void C_QByteArrayList_clear_0(void* this_ ) {
    // QByteArrayList_clear_0()
     ((QByteArrayList*)this_)->clear();
}

// [-3] const T & at(int)
extern "C"
QByteArray* C_QByteArrayList_at_0(void* this_ , int i) {
    // QByteArrayList_at_0()
    auto rv =  ((QByteArrayList*)this_)->at(i);
    return new decltype(rv)(rv);
}

// [-3] const T & operator[](int)
extern "C"
QByteArray* C_QByteArrayList_operator_get_index_0(void* this_ , int i) {
    // QByteArrayList_operator_get_index_0()
    auto rv =  ((QByteArrayList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-3] T & operator[](int)
extern "C"
QByteArray* C_QByteArrayList_operator_get_index_1(void* this_ , int i) {
    // QByteArrayList_operator_get_index_1()
    auto rv =  ((QByteArrayList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-2] void reserve(int)
extern "C"
void C_QByteArrayList_reserve_0(void* this_ , int size) {
    // QByteArrayList_reserve_0()
     ((QByteArrayList*)this_)->reserve(size);
}

// [-2] void append(const T &)
extern "C"
void C_QByteArrayList_append_0(void* this_ , QByteArray* t) {
    // QByteArrayList_append_0()
     ((QByteArrayList*)this_)->append(*t);
}

// [-2] void append(const QList<T> &)
extern "C"
void C_QByteArrayList_append_1(void* this_ , QByteArrayList* t) {
    // QByteArrayList_append_1()
     ((QByteArrayList*)this_)->append(*t);
}

// [-2] void prepend(const T &)
extern "C"
void C_QByteArrayList_prepend_0(void* this_ , QByteArray* t) {
    // QByteArrayList_prepend_0()
     ((QByteArrayList*)this_)->prepend(*t);
}

// [-2] void insert(int, const T &)
extern "C"
void C_QByteArrayList_insert_0(void* this_ , int i, QByteArray* t) {
    // QByteArrayList_insert_0()
     ((QByteArrayList*)this_)->insert(i, *t);
}

// [-2] void replace(int, const T &)
extern "C"
void C_QByteArrayList_replace_0(void* this_ , int i, QByteArray* t) {
    // QByteArrayList_replace_0()
     ((QByteArrayList*)this_)->replace(i, *t);
}

// [-2] void removeAt(int)
extern "C"
void C_QByteArrayList_removeAt_0(void* this_ , int i) {
    // QByteArrayList_removeAt_0()
     ((QByteArrayList*)this_)->removeAt(i);
}

// [4] int removeAll(const T &)
extern "C"
int C_QByteArrayList_removeAll_0(void* this_ , QByteArray* t) {
    // QByteArrayList_removeAll_0()
    auto rv =  ((QByteArrayList*)this_)->removeAll(*t);
    return rv;
}

// [1] bool removeOne(const T &)
extern "C"
bool C_QByteArrayList_removeOne_0(void* this_ , QByteArray* t) {
    // QByteArrayList_removeOne_0()
    auto rv =  ((QByteArrayList*)this_)->removeOne(*t);
    return rv;
}

// [-3] T takeAt(int)
extern "C"
QByteArray* C_QByteArrayList_takeAt_0(void* this_ , int i) {
    // QByteArrayList_takeAt_0()
    auto rv =  ((QByteArrayList*)this_)->takeAt(i);
    return new decltype(rv)(rv);
}

// [-3] T takeFirst()
extern "C"
QByteArray* C_QByteArrayList_takeFirst_0(void* this_ ) {
    // QByteArrayList_takeFirst_0()
    auto rv =  ((QByteArrayList*)this_)->takeFirst();
    return new decltype(rv)(rv);
}

// [-3] T takeLast()
extern "C"
QByteArray* C_QByteArrayList_takeLast_0(void* this_ ) {
    // QByteArrayList_takeLast_0()
    auto rv =  ((QByteArrayList*)this_)->takeLast();
    return new decltype(rv)(rv);
}

// [-2] void move(int, int)
extern "C"
void C_QByteArrayList_move_0(void* this_ , int from, int to) {
    // QByteArrayList_move_0()
     ((QByteArrayList*)this_)->move(from, to);
}

// [-2] void swap(int, int)
extern "C"
void C_QByteArrayList_swap_1(void* this_ , int i, int j) {
    // QByteArrayList_swap_1()
     ((QByteArrayList*)this_)->swap(i, j);
}

// [4] int indexOf(const T &, int)
extern "C"
int C_QByteArrayList_indexOf_0(void* this_ , QByteArray* t, int from) {
    // QByteArrayList_indexOf_0()
    auto rv =  ((QByteArrayList*)this_)->indexOf(*t, from);
    return rv;
}

// [4] int lastIndexOf(const T &, int)
extern "C"
int C_QByteArrayList_lastIndexOf_0(void* this_ , QByteArray* t, int from) {
    // QByteArrayList_lastIndexOf_0()
    auto rv =  ((QByteArrayList*)this_)->lastIndexOf(*t, from);
    return rv;
}

// [1] bool contains(const T &)
extern "C"
bool C_QByteArrayList_contains_0(void* this_ , QByteArray* t) {
    // QByteArrayList_contains_0()
    auto rv =  ((QByteArrayList*)this_)->contains(*t);
    return rv;
}

// [4] int count(const T &)
extern "C"
int C_QByteArrayList_count_0(void* this_ , QByteArray* t) {
    // QByteArrayList_count_0()
    auto rv =  ((QByteArrayList*)this_)->count(*t);
    return rv;
}

// [-3] QList::iterator begin()
extern "C"
QByteArrayList::iterator* C_QByteArrayList_begin_0(void* this_ ) {
    // QByteArrayList_begin_0()
    auto rv =  ((QByteArrayList*)this_)->begin();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator end()
extern "C"
QByteArrayList::iterator* C_QByteArrayList_end_0(void* this_ ) {
    // QByteArrayList_end_0()
    auto rv =  ((QByteArrayList*)this_)->end();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rbegin()
extern "C"
QByteArrayList::reverse_iterator* C_QByteArrayList_rbegin_0(void* this_ ) {
    // QByteArrayList_rbegin_0()
    auto rv =  ((QByteArrayList*)this_)->rbegin();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rend()
extern "C"
QByteArrayList::reverse_iterator* C_QByteArrayList_rend_0(void* this_ ) {
    // QByteArrayList_rend_0()
    auto rv =  ((QByteArrayList*)this_)->rend();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator insert(QList::iterator, const T &)
extern "C"
QByteArrayList::iterator* C_QByteArrayList_insert_1(void* this_ , QByteArrayList::iterator* before, QByteArray* t) {
    // QByteArrayList_insert_1()
    auto rv =  ((QByteArrayList*)this_)->insert(*before, *t);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator)
extern "C"
QByteArrayList::iterator* C_QByteArrayList_erase_0(void* this_ , QByteArrayList::iterator* pos) {
    // QByteArrayList_erase_0()
    auto rv =  ((QByteArrayList*)this_)->erase(*pos);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator, QList::iterator)
extern "C"
QByteArrayList::iterator* C_QByteArrayList_erase_1(void* this_ , QByteArrayList::iterator* first, QByteArrayList::iterator* last) {
    // QByteArrayList_erase_1()
    auto rv =  ((QByteArrayList*)this_)->erase(*first, *last);
    return new decltype(rv)(rv);
}

// [4] int count()
extern "C"
int C_QByteArrayList_count_1(void* this_ ) {
    // QByteArrayList_count_1()
    auto rv =  ((QByteArrayList*)this_)->count();
    return rv;
}

// [4] int length()
extern "C"
int C_QByteArrayList_length_0(void* this_ ) {
    // QByteArrayList_length_0()
    auto rv =  ((QByteArrayList*)this_)->length();
    return rv;
}

// [-3] T & first()
extern "C"
QByteArray* C_QByteArrayList_first_0(void* this_ ) {
    // QByteArrayList_first_0()
    auto rv =  ((QByteArrayList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] const T & constFirst()
extern "C"
QByteArray* C_QByteArrayList_constFirst_0(void* this_ ) {
    // QByteArrayList_constFirst_0()
    auto rv =  ((QByteArrayList*)this_)->constFirst();
    return new decltype(rv)(rv);
}

// [-3] const T & first()
extern "C"
QByteArray* C_QByteArrayList_first_1(void* this_ ) {
    // QByteArrayList_first_1()
    auto rv =  ((QByteArrayList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] T & last()
extern "C"
QByteArray* C_QByteArrayList_last_0(void* this_ ) {
    // QByteArrayList_last_0()
    auto rv =  ((QByteArrayList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & last()
extern "C"
QByteArray* C_QByteArrayList_last_1(void* this_ ) {
    // QByteArrayList_last_1()
    auto rv =  ((QByteArrayList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & constLast()
extern "C"
QByteArray* C_QByteArrayList_constLast_0(void* this_ ) {
    // QByteArrayList_constLast_0()
    auto rv =  ((QByteArrayList*)this_)->constLast();
    return new decltype(rv)(rv);
}

// [-2] void removeFirst()
extern "C"
void C_QByteArrayList_removeFirst_0(void* this_ ) {
    // QByteArrayList_removeFirst_0()
     ((QByteArrayList*)this_)->removeFirst();
}

// [-2] void removeLast()
extern "C"
void C_QByteArrayList_removeLast_0(void* this_ ) {
    // QByteArrayList_removeLast_0()
     ((QByteArrayList*)this_)->removeLast();
}

// [1] bool startsWith(const T &)
extern "C"
bool C_QByteArrayList_startsWith_0(void* this_ , QByteArray* t) {
    // QByteArrayList_startsWith_0()
    auto rv =  ((QByteArrayList*)this_)->startsWith(*t);
    return rv;
}

// [1] bool endsWith(const T &)
extern "C"
bool C_QByteArrayList_endsWith_0(void* this_ , QByteArray* t) {
    // QByteArrayList_endsWith_0()
    auto rv =  ((QByteArrayList*)this_)->endsWith(*t);
    return rv;
}

// [-3] QList<T> mid(int, int)
extern "C"
QByteArrayList* C_QByteArrayList_mid_0(void* this_ , int pos, int length) {
    // QByteArrayList_mid_0()
    auto rv =  ((QByteArrayList*)this_)->mid(pos, length);
    return (QByteArrayList*)this_;
}

// [-3] T value(int)
extern "C"
QByteArray* C_QByteArrayList_value_0(void* this_ , int i) {
    // QByteArrayList_value_0()
    auto rv =  ((QByteArrayList*)this_)->value(i);
    return new decltype(rv)(rv);
}

// [-3] T value(int, const T &)
extern "C"
QByteArray* C_QByteArrayList_value_1(void* this_ , int i, QByteArray* defaultValue) {
    // QByteArrayList_value_1()
    auto rv =  ((QByteArrayList*)this_)->value(i, *defaultValue);
    return new decltype(rv)(rv);
}

// [-2] void push_back(const T &)
extern "C"
void C_QByteArrayList_push_back_0(void* this_ , QByteArray* t) {
    // QByteArrayList_push_back_0()
     ((QByteArrayList*)this_)->push_back(*t);
}

// [-2] void push_front(const T &)
extern "C"
void C_QByteArrayList_push_front_0(void* this_ , QByteArray* t) {
    // QByteArrayList_push_front_0()
     ((QByteArrayList*)this_)->push_front(*t);
}

// [-3] T & front()
extern "C"
QByteArray* C_QByteArrayList_front_0(void* this_ ) {
    // QByteArrayList_front_0()
    auto rv =  ((QByteArrayList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] const T & front()
extern "C"
QByteArray* C_QByteArrayList_front_1(void* this_ ) {
    // QByteArrayList_front_1()
    auto rv =  ((QByteArrayList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] T & back()
extern "C"
QByteArray* C_QByteArrayList_back_0(void* this_ ) {
    // QByteArrayList_back_0()
    auto rv =  ((QByteArrayList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-3] const T & back()
extern "C"
QByteArray* C_QByteArrayList_back_1(void* this_ ) {
    // QByteArrayList_back_1()
    auto rv =  ((QByteArrayList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-2] void pop_front()
extern "C"
void C_QByteArrayList_pop_front_0(void* this_ ) {
    // QByteArrayList_pop_front_0()
     ((QByteArrayList*)this_)->pop_front();
}

// [-2] void pop_back()
extern "C"
void C_QByteArrayList_pop_back_0(void* this_ ) {
    // QByteArrayList_pop_back_0()
     ((QByteArrayList*)this_)->pop_back();
}

// [1] bool empty()
extern "C"
bool C_QByteArrayList_empty_0(void* this_ ) {
    // QByteArrayList_empty_0()
    auto rv =  ((QByteArrayList*)this_)->empty();
    return rv;
}

// [-3] QList<T> & operator+=(const QList<T> &)
extern "C"
QByteArrayList* C_QByteArrayList_operator_add_equal_0(void* this_ , QByteArrayList* l) {
    // QByteArrayList_operator_add_equal_0()
    auto rv =  ((QByteArrayList*)this_)->operator+=(*l);
    return (QByteArrayList*)this_;
}

// [-3] QList<T> operator+(const QList<T> &)
extern "C"
QByteArrayList* C_QByteArrayList_operator_add_0(void* this_ , QByteArrayList* l) {
    // QByteArrayList_operator_add_0()
    auto rv =  ((QByteArrayList*)this_)->operator+(*l);
    return (QByteArrayList*)this_;
}

// [-3] QList<T> & operator+=(const T &)
extern "C"
QByteArrayList* C_QByteArrayList_operator_add_equal_1(void* this_ , QByteArray* t) {
    // QByteArrayList_operator_add_equal_1()
    auto rv =  ((QByteArrayList*)this_)->operator+=(*t);
    return (QByteArrayList*)this_;
}

// [-3] QList<T> & operator<<(const T &)
extern "C"
QByteArrayList* C_QByteArrayList_operator_left_shift_0(void* this_ , QByteArray* t) {
    // QByteArrayList_operator_left_shift_0()
    auto rv =  ((QByteArrayList*)this_)->operator<<(*t);
    return (QByteArrayList*)this_;
}

// [-3] QList<T> & operator<<(const QList<T> &)
extern "C"
QByteArrayList* C_QByteArrayList_operator_left_shift_1(void* this_ , QByteArrayList* l) {
    // QByteArrayList_operator_left_shift_1()
    auto rv =  ((QByteArrayList*)this_)->operator<<(*l);
    return (QByteArrayList*)this_;
}

// [-3] QVector<T> toVector()
extern "C"
void C_QByteArrayList_toVector_0(void* this_ ) {
    // QByteArrayList_toVector_0()
    auto rv =  ((QByteArrayList*)this_)->toVector();
}

// [-3] std::list<T> toStdList()
extern "C"
void C_QByteArrayList_toStdList_0(void* this_ ) {
    // QByteArrayList_toStdList_0()
    auto rv =  ((QByteArrayList*)this_)->toStdList();
}

//  body block end
