
// /usr/include/qt/QtGui/qaccessible.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaccessible.h>
#include <QtGui>
#include "callback_inherit.h"

#ifndef QAccessibleInterfaceList
#ifndef QACCESSIBLEINTERFACELIST_H
typedef QList<QAccessibleInterface *> QAccessibleInterfaceList;
#endif
#endif
//  header block end

//  body block begin
// [-3] QList<T> & operator=(const QList<T> &)
extern "C" Q_DECL_EXPORT
QAccessibleInterfaceList* C_QAccessibleInterfaceList_operator_equal_0(void* this_ , QAccessibleInterfaceList* l) {
    // QAccessibleInterfaceList_operator_equal_0()
    auto rv =  ((QAccessibleInterfaceList*)this_)->operator=(*l);
    return (QAccessibleInterfaceList*)this_;
}

// [-3] QList<T> & operator=(QList<T> &&)
extern "C" Q_DECL_EXPORT
QAccessibleInterfaceList* C_QAccessibleInterfaceList_operator_equal_1(void* this_ , QAccessibleInterfaceList* other) {
    // QAccessibleInterfaceList_operator_equal_1()
    auto rv =  ((QAccessibleInterfaceList*)this_)->operator=(*other);
    return (QAccessibleInterfaceList*)this_;
}

// [-2] void swap(QList<T> &)
extern "C" Q_DECL_EXPORT
void C_QAccessibleInterfaceList_swap_0(void* this_ , QAccessibleInterfaceList* other) {
    // QAccessibleInterfaceList_swap_0()
     ((QAccessibleInterfaceList*)this_)->swap(*other);
}

// [1] bool operator==(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QAccessibleInterfaceList_operator_equal_equal_0(void* this_ , QAccessibleInterfaceList* l) {
    // QAccessibleInterfaceList_operator_equal_equal_0()
    auto rv =  ((QAccessibleInterfaceList*)this_)->operator==(*l);
    return rv;
}

// [1] bool operator!=(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QAccessibleInterfaceList_operator_not_equal_0(void* this_ , QAccessibleInterfaceList* l) {
    // QAccessibleInterfaceList_operator_not_equal_0()
    auto rv =  ((QAccessibleInterfaceList*)this_)->operator!=(*l);
    return rv;
}

// [4] int size()
extern "C" Q_DECL_EXPORT
int C_QAccessibleInterfaceList_size_0(void* this_ ) {
    // QAccessibleInterfaceList_size_0()
    auto rv =  ((QAccessibleInterfaceList*)this_)->size();
    return rv;
}

// [-2] void detach()
extern "C" Q_DECL_EXPORT
void C_QAccessibleInterfaceList_detach_0(void* this_ ) {
    // QAccessibleInterfaceList_detach_0()
     ((QAccessibleInterfaceList*)this_)->detach();
}

// [-2] void detachShared()
extern "C" Q_DECL_EXPORT
void C_QAccessibleInterfaceList_detachShared_0(void* this_ ) {
    // QAccessibleInterfaceList_detachShared_0()
     ((QAccessibleInterfaceList*)this_)->detachShared();
}

// [1] bool isDetached()
extern "C" Q_DECL_EXPORT
bool C_QAccessibleInterfaceList_isDetached_0(void* this_ ) {
    // QAccessibleInterfaceList_isDetached_0()
    auto rv =  ((QAccessibleInterfaceList*)this_)->isDetached();
    return rv;
}

// [-2] void setSharable(bool)
extern "C" Q_DECL_EXPORT
void C_QAccessibleInterfaceList_setSharable_0(void* this_ , bool sharable) {
    // QAccessibleInterfaceList_setSharable_0()
     ((QAccessibleInterfaceList*)this_)->setSharable(sharable);
}

// [1] bool isSharedWith(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QAccessibleInterfaceList_isSharedWith_0(void* this_ , QAccessibleInterfaceList* other) {
    // QAccessibleInterfaceList_isSharedWith_0()
    auto rv =  ((QAccessibleInterfaceList*)this_)->isSharedWith(*other);
    return rv;
}

// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_QAccessibleInterfaceList_isEmpty_0(void* this_ ) {
    // QAccessibleInterfaceList_isEmpty_0()
    auto rv =  ((QAccessibleInterfaceList*)this_)->isEmpty();
    return rv;
}

// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_QAccessibleInterfaceList_clear_0(void* this_ ) {
    // QAccessibleInterfaceList_clear_0()
     ((QAccessibleInterfaceList*)this_)->clear();
}

// [-3] const T & at(int)
extern "C" Q_DECL_EXPORT
QAccessibleInterface ** C_QAccessibleInterfaceList_at_0(void* this_ , int i) {
    // QAccessibleInterfaceList_at_0()
    auto rv =  ((QAccessibleInterfaceList*)this_)->at(i);
    return new decltype(rv)(rv);
}

// [-3] const T & operator[](int)
extern "C" Q_DECL_EXPORT
QAccessibleInterface ** C_QAccessibleInterfaceList_operator_get_index_0(void* this_ , int i) {
    // QAccessibleInterfaceList_operator_get_index_0()
    auto rv =  ((QAccessibleInterfaceList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-3] T & operator[](int)
extern "C" Q_DECL_EXPORT
QAccessibleInterface ** C_QAccessibleInterfaceList_operator_get_index_1(void* this_ , int i) {
    // QAccessibleInterfaceList_operator_get_index_1()
    auto rv =  ((QAccessibleInterfaceList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-2] void reserve(int)
extern "C" Q_DECL_EXPORT
void C_QAccessibleInterfaceList_reserve_0(void* this_ , int size) {
    // QAccessibleInterfaceList_reserve_0()
     ((QAccessibleInterfaceList*)this_)->reserve(size);
}

// [-2] void append(const T &)
extern "C" Q_DECL_EXPORT
void C_QAccessibleInterfaceList_append_0(void* this_ , QAccessibleInterface * t) {
    // QAccessibleInterfaceList_append_0()
     ((QAccessibleInterfaceList*)this_)->append(t);
}

// [-2] void append(const QList<T> &)
extern "C" Q_DECL_EXPORT
void C_QAccessibleInterfaceList_append_1(void* this_ , QAccessibleInterfaceList* t) {
    // QAccessibleInterfaceList_append_1()
     ((QAccessibleInterfaceList*)this_)->append(*t);
}

// [-2] void prepend(const T &)
extern "C" Q_DECL_EXPORT
void C_QAccessibleInterfaceList_prepend_0(void* this_ , QAccessibleInterface * t) {
    // QAccessibleInterfaceList_prepend_0()
     ((QAccessibleInterfaceList*)this_)->prepend(t);
}

// [-2] void insert(int, const T &)
extern "C" Q_DECL_EXPORT
void C_QAccessibleInterfaceList_insert_0(void* this_ , int i, QAccessibleInterface * t) {
    // QAccessibleInterfaceList_insert_0()
     ((QAccessibleInterfaceList*)this_)->insert(i, t);
}

// [-2] void replace(int, const T &)
extern "C" Q_DECL_EXPORT
void C_QAccessibleInterfaceList_replace_0(void* this_ , int i, QAccessibleInterface * t) {
    // QAccessibleInterfaceList_replace_0()
     ((QAccessibleInterfaceList*)this_)->replace(i, t);
}

// [-2] void removeAt(int)
extern "C" Q_DECL_EXPORT
void C_QAccessibleInterfaceList_removeAt_0(void* this_ , int i) {
    // QAccessibleInterfaceList_removeAt_0()
     ((QAccessibleInterfaceList*)this_)->removeAt(i);
}

// [4] int removeAll(const T &)
extern "C" Q_DECL_EXPORT
int C_QAccessibleInterfaceList_removeAll_0(void* this_ , QAccessibleInterface * t) {
    // QAccessibleInterfaceList_removeAll_0()
    auto rv =  ((QAccessibleInterfaceList*)this_)->removeAll(t);
    return rv;
}

// [1] bool removeOne(const T &)
extern "C" Q_DECL_EXPORT
bool C_QAccessibleInterfaceList_removeOne_0(void* this_ , QAccessibleInterface * t) {
    // QAccessibleInterfaceList_removeOne_0()
    auto rv =  ((QAccessibleInterfaceList*)this_)->removeOne(t);
    return rv;
}

// [-3] T takeAt(int)
extern "C" Q_DECL_EXPORT
QAccessibleInterface ** C_QAccessibleInterfaceList_takeAt_0(void* this_ , int i) {
    // QAccessibleInterfaceList_takeAt_0()
    auto rv =  ((QAccessibleInterfaceList*)this_)->takeAt(i);
    return new decltype(rv)(rv);
}

// [-3] T takeFirst()
extern "C" Q_DECL_EXPORT
QAccessibleInterface ** C_QAccessibleInterfaceList_takeFirst_0(void* this_ ) {
    // QAccessibleInterfaceList_takeFirst_0()
    auto rv =  ((QAccessibleInterfaceList*)this_)->takeFirst();
    return new decltype(rv)(rv);
}

// [-3] T takeLast()
extern "C" Q_DECL_EXPORT
QAccessibleInterface ** C_QAccessibleInterfaceList_takeLast_0(void* this_ ) {
    // QAccessibleInterfaceList_takeLast_0()
    auto rv =  ((QAccessibleInterfaceList*)this_)->takeLast();
    return new decltype(rv)(rv);
}

// [-2] void move(int, int)
extern "C" Q_DECL_EXPORT
void C_QAccessibleInterfaceList_move_0(void* this_ , int from, int to) {
    // QAccessibleInterfaceList_move_0()
     ((QAccessibleInterfaceList*)this_)->move(from, to);
}

// [-2] void swap(int, int)
extern "C" Q_DECL_EXPORT
void C_QAccessibleInterfaceList_swap_1(void* this_ , int i, int j) {
    // QAccessibleInterfaceList_swap_1()
     ((QAccessibleInterfaceList*)this_)->swap(i, j);
}

// [4] int indexOf(const T &, int)
extern "C" Q_DECL_EXPORT
int C_QAccessibleInterfaceList_indexOf_0(void* this_ , QAccessibleInterface * t, int from) {
    // QAccessibleInterfaceList_indexOf_0()
    auto rv =  ((QAccessibleInterfaceList*)this_)->indexOf(t, from);
    return rv;
}

// [4] int lastIndexOf(const T &, int)
extern "C" Q_DECL_EXPORT
int C_QAccessibleInterfaceList_lastIndexOf_0(void* this_ , QAccessibleInterface * t, int from) {
    // QAccessibleInterfaceList_lastIndexOf_0()
    auto rv =  ((QAccessibleInterfaceList*)this_)->lastIndexOf(t, from);
    return rv;
}

// [1] bool contains(const T &)
extern "C" Q_DECL_EXPORT
bool C_QAccessibleInterfaceList_contains_0(void* this_ , QAccessibleInterface * t) {
    // QAccessibleInterfaceList_contains_0()
    auto rv =  ((QAccessibleInterfaceList*)this_)->contains(t);
    return rv;
}

// [4] int count(const T &)
extern "C" Q_DECL_EXPORT
int C_QAccessibleInterfaceList_count_0(void* this_ , QAccessibleInterface * t) {
    // QAccessibleInterfaceList_count_0()
    auto rv =  ((QAccessibleInterfaceList*)this_)->count(t);
    return rv;
}

// [-3] QList::iterator begin()
extern "C" Q_DECL_EXPORT
QAccessibleInterfaceList::iterator* C_QAccessibleInterfaceList_begin_0(void* this_ ) {
    // QAccessibleInterfaceList_begin_0()
    auto rv =  ((QAccessibleInterfaceList*)this_)->begin();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator end()
extern "C" Q_DECL_EXPORT
QAccessibleInterfaceList::iterator* C_QAccessibleInterfaceList_end_0(void* this_ ) {
    // QAccessibleInterfaceList_end_0()
    auto rv =  ((QAccessibleInterfaceList*)this_)->end();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rbegin()
extern "C" Q_DECL_EXPORT
QAccessibleInterfaceList::reverse_iterator* C_QAccessibleInterfaceList_rbegin_0(void* this_ ) {
    // QAccessibleInterfaceList_rbegin_0()
    auto rv =  ((QAccessibleInterfaceList*)this_)->rbegin();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rend()
extern "C" Q_DECL_EXPORT
QAccessibleInterfaceList::reverse_iterator* C_QAccessibleInterfaceList_rend_0(void* this_ ) {
    // QAccessibleInterfaceList_rend_0()
    auto rv =  ((QAccessibleInterfaceList*)this_)->rend();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator insert(QList::iterator, const T &)
extern "C" Q_DECL_EXPORT
QAccessibleInterfaceList::iterator* C_QAccessibleInterfaceList_insert_1(void* this_ , QAccessibleInterfaceList::iterator* before, QAccessibleInterface * t) {
    // QAccessibleInterfaceList_insert_1()
    auto rv =  ((QAccessibleInterfaceList*)this_)->insert(*before, t);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator)
extern "C" Q_DECL_EXPORT
QAccessibleInterfaceList::iterator* C_QAccessibleInterfaceList_erase_0(void* this_ , QAccessibleInterfaceList::iterator* pos) {
    // QAccessibleInterfaceList_erase_0()
    auto rv =  ((QAccessibleInterfaceList*)this_)->erase(*pos);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator, QList::iterator)
extern "C" Q_DECL_EXPORT
QAccessibleInterfaceList::iterator* C_QAccessibleInterfaceList_erase_1(void* this_ , QAccessibleInterfaceList::iterator* first, QAccessibleInterfaceList::iterator* last) {
    // QAccessibleInterfaceList_erase_1()
    auto rv =  ((QAccessibleInterfaceList*)this_)->erase(*first, *last);
    return new decltype(rv)(rv);
}

// [4] int count()
extern "C" Q_DECL_EXPORT
int C_QAccessibleInterfaceList_count_1(void* this_ ) {
    // QAccessibleInterfaceList_count_1()
    auto rv =  ((QAccessibleInterfaceList*)this_)->count();
    return rv;
}

// [4] int length()
extern "C" Q_DECL_EXPORT
int C_QAccessibleInterfaceList_length_0(void* this_ ) {
    // QAccessibleInterfaceList_length_0()
    auto rv =  ((QAccessibleInterfaceList*)this_)->length();
    return rv;
}

// [-3] T & first()
extern "C" Q_DECL_EXPORT
QAccessibleInterface ** C_QAccessibleInterfaceList_first_0(void* this_ ) {
    // QAccessibleInterfaceList_first_0()
    auto rv =  ((QAccessibleInterfaceList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] const T & constFirst()
extern "C" Q_DECL_EXPORT
QAccessibleInterface ** C_QAccessibleInterfaceList_constFirst_0(void* this_ ) {
    // QAccessibleInterfaceList_constFirst_0()
    auto rv =  ((QAccessibleInterfaceList*)this_)->constFirst();
    return new decltype(rv)(rv);
}

// [-3] const T & first()
extern "C" Q_DECL_EXPORT
QAccessibleInterface ** C_QAccessibleInterfaceList_first_1(void* this_ ) {
    // QAccessibleInterfaceList_first_1()
    auto rv =  ((QAccessibleInterfaceList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] T & last()
extern "C" Q_DECL_EXPORT
QAccessibleInterface ** C_QAccessibleInterfaceList_last_0(void* this_ ) {
    // QAccessibleInterfaceList_last_0()
    auto rv =  ((QAccessibleInterfaceList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & last()
extern "C" Q_DECL_EXPORT
QAccessibleInterface ** C_QAccessibleInterfaceList_last_1(void* this_ ) {
    // QAccessibleInterfaceList_last_1()
    auto rv =  ((QAccessibleInterfaceList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & constLast()
extern "C" Q_DECL_EXPORT
QAccessibleInterface ** C_QAccessibleInterfaceList_constLast_0(void* this_ ) {
    // QAccessibleInterfaceList_constLast_0()
    auto rv =  ((QAccessibleInterfaceList*)this_)->constLast();
    return new decltype(rv)(rv);
}

// [-2] void removeFirst()
extern "C" Q_DECL_EXPORT
void C_QAccessibleInterfaceList_removeFirst_0(void* this_ ) {
    // QAccessibleInterfaceList_removeFirst_0()
     ((QAccessibleInterfaceList*)this_)->removeFirst();
}

// [-2] void removeLast()
extern "C" Q_DECL_EXPORT
void C_QAccessibleInterfaceList_removeLast_0(void* this_ ) {
    // QAccessibleInterfaceList_removeLast_0()
     ((QAccessibleInterfaceList*)this_)->removeLast();
}

// [1] bool startsWith(const T &)
extern "C" Q_DECL_EXPORT
bool C_QAccessibleInterfaceList_startsWith_0(void* this_ , QAccessibleInterface * t) {
    // QAccessibleInterfaceList_startsWith_0()
    auto rv =  ((QAccessibleInterfaceList*)this_)->startsWith(t);
    return rv;
}

// [1] bool endsWith(const T &)
extern "C" Q_DECL_EXPORT
bool C_QAccessibleInterfaceList_endsWith_0(void* this_ , QAccessibleInterface * t) {
    // QAccessibleInterfaceList_endsWith_0()
    auto rv =  ((QAccessibleInterfaceList*)this_)->endsWith(t);
    return rv;
}

// [-3] QList<T> mid(int, int)
extern "C" Q_DECL_EXPORT
QAccessibleInterfaceList* C_QAccessibleInterfaceList_mid_0(void* this_ , int pos, int length) {
    // QAccessibleInterfaceList_mid_0()
    auto rv =  ((QAccessibleInterfaceList*)this_)->mid(pos, length);
    return (QAccessibleInterfaceList*)this_;
}

// [-3] T value(int)
extern "C" Q_DECL_EXPORT
QAccessibleInterface ** C_QAccessibleInterfaceList_value_0(void* this_ , int i) {
    // QAccessibleInterfaceList_value_0()
    auto rv =  ((QAccessibleInterfaceList*)this_)->value(i);
    return new decltype(rv)(rv);
}

// [-3] T value(int, const T &)
extern "C" Q_DECL_EXPORT
QAccessibleInterface ** C_QAccessibleInterfaceList_value_1(void* this_ , int i, QAccessibleInterface * defaultValue) {
    // QAccessibleInterfaceList_value_1()
    auto rv =  ((QAccessibleInterfaceList*)this_)->value(i, defaultValue);
    return new decltype(rv)(rv);
}

// [-2] void push_back(const T &)
extern "C" Q_DECL_EXPORT
void C_QAccessibleInterfaceList_push_back_0(void* this_ , QAccessibleInterface * t) {
    // QAccessibleInterfaceList_push_back_0()
     ((QAccessibleInterfaceList*)this_)->push_back(t);
}

// [-2] void push_front(const T &)
extern "C" Q_DECL_EXPORT
void C_QAccessibleInterfaceList_push_front_0(void* this_ , QAccessibleInterface * t) {
    // QAccessibleInterfaceList_push_front_0()
     ((QAccessibleInterfaceList*)this_)->push_front(t);
}

// [-3] T & front()
extern "C" Q_DECL_EXPORT
QAccessibleInterface ** C_QAccessibleInterfaceList_front_0(void* this_ ) {
    // QAccessibleInterfaceList_front_0()
    auto rv =  ((QAccessibleInterfaceList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] const T & front()
extern "C" Q_DECL_EXPORT
QAccessibleInterface ** C_QAccessibleInterfaceList_front_1(void* this_ ) {
    // QAccessibleInterfaceList_front_1()
    auto rv =  ((QAccessibleInterfaceList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] T & back()
extern "C" Q_DECL_EXPORT
QAccessibleInterface ** C_QAccessibleInterfaceList_back_0(void* this_ ) {
    // QAccessibleInterfaceList_back_0()
    auto rv =  ((QAccessibleInterfaceList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-3] const T & back()
extern "C" Q_DECL_EXPORT
QAccessibleInterface ** C_QAccessibleInterfaceList_back_1(void* this_ ) {
    // QAccessibleInterfaceList_back_1()
    auto rv =  ((QAccessibleInterfaceList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-2] void pop_front()
extern "C" Q_DECL_EXPORT
void C_QAccessibleInterfaceList_pop_front_0(void* this_ ) {
    // QAccessibleInterfaceList_pop_front_0()
     ((QAccessibleInterfaceList*)this_)->pop_front();
}

// [-2] void pop_back()
extern "C" Q_DECL_EXPORT
void C_QAccessibleInterfaceList_pop_back_0(void* this_ ) {
    // QAccessibleInterfaceList_pop_back_0()
     ((QAccessibleInterfaceList*)this_)->pop_back();
}

// [1] bool empty()
extern "C" Q_DECL_EXPORT
bool C_QAccessibleInterfaceList_empty_0(void* this_ ) {
    // QAccessibleInterfaceList_empty_0()
    auto rv =  ((QAccessibleInterfaceList*)this_)->empty();
    return rv;
}

// [-3] QList<T> & operator+=(const QList<T> &)
extern "C" Q_DECL_EXPORT
QAccessibleInterfaceList* C_QAccessibleInterfaceList_operator_add_equal_0(void* this_ , QAccessibleInterfaceList* l) {
    // QAccessibleInterfaceList_operator_add_equal_0()
    auto rv =  ((QAccessibleInterfaceList*)this_)->operator+=(*l);
    return (QAccessibleInterfaceList*)this_;
}

// [-3] QList<T> operator+(const QList<T> &)
extern "C" Q_DECL_EXPORT
QAccessibleInterfaceList* C_QAccessibleInterfaceList_operator_add_0(void* this_ , QAccessibleInterfaceList* l) {
    // QAccessibleInterfaceList_operator_add_0()
    auto rv =  ((QAccessibleInterfaceList*)this_)->operator+(*l);
    return (QAccessibleInterfaceList*)this_;
}

// [-3] QList<T> & operator+=(const T &)
extern "C" Q_DECL_EXPORT
QAccessibleInterfaceList* C_QAccessibleInterfaceList_operator_add_equal_1(void* this_ , QAccessibleInterface * t) {
    // QAccessibleInterfaceList_operator_add_equal_1()
    auto rv =  ((QAccessibleInterfaceList*)this_)->operator+=(t);
    return (QAccessibleInterfaceList*)this_;
}

// [-3] QList<T> & operator<<(const T &)
extern "C" Q_DECL_EXPORT
QAccessibleInterfaceList* C_QAccessibleInterfaceList_operator_left_shift_0(void* this_ , QAccessibleInterface * t) {
    // QAccessibleInterfaceList_operator_left_shift_0()
    auto rv =  ((QAccessibleInterfaceList*)this_)->operator<<(t);
    return (QAccessibleInterfaceList*)this_;
}

// [-3] QList<T> & operator<<(const QList<T> &)
extern "C" Q_DECL_EXPORT
QAccessibleInterfaceList* C_QAccessibleInterfaceList_operator_left_shift_1(void* this_ , QAccessibleInterfaceList* l) {
    // QAccessibleInterfaceList_operator_left_shift_1()
    auto rv =  ((QAccessibleInterfaceList*)this_)->operator<<(*l);
    return (QAccessibleInterfaceList*)this_;
}

// [-3] QVector<T> toVector()
extern "C" Q_DECL_EXPORT
void C_QAccessibleInterfaceList_toVector_0(void* this_ ) {
    // QAccessibleInterfaceList_toVector_0()
    auto rv =  ((QAccessibleInterfaceList*)this_)->toVector();
}

// [-3] std::list<T> toStdList()
extern "C" Q_DECL_EXPORT
void C_QAccessibleInterfaceList_toStdList_0(void* this_ ) {
    // QAccessibleInterfaceList_toStdList_0()
    auto rv =  ((QAccessibleInterfaceList*)this_)->toStdList();
}

//  body block end
