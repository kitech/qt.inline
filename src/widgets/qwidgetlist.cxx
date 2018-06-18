
// /usr/include/qt/QtWidgets/qwidget.h
#ifndef protected
#define protected public
#endif
#include <qwidget.h>
#include <QtWidgets>
#include "callback_inherit.h"

#ifndef QWidgetList
#ifndef QWIDGETLIST_H
typedef QList<QWidget *> QWidgetList;
#endif
#endif
//  header block end

//  body block begin
// [-3] QList<T> & operator=(const QList<T> &)
extern "C"
QWidgetList* C_QWidgetList_operator_equal_0(void* this_ , QWidgetList* l) {
    // QWidgetList_operator_equal_0()
    auto rv =  ((QWidgetList*)this_)->operator=(*l);
    return (QWidgetList*)this_;
}

// [-3] QList<T> & operator=(QList<T> &&)
extern "C"
QWidgetList* C_QWidgetList_operator_equal_1(void* this_ , QWidgetList* other) {
    // QWidgetList_operator_equal_1()
    auto rv =  ((QWidgetList*)this_)->operator=(*other);
    return (QWidgetList*)this_;
}

// [-2] void swap(QList<T> &)
extern "C"
void C_QWidgetList_swap_0(void* this_ , QWidgetList* other) {
    // QWidgetList_swap_0()
     ((QWidgetList*)this_)->swap(*other);
}

// [1] bool operator==(const QList<T> &)
extern "C"
bool C_QWidgetList_operator_equal_equal_0(void* this_ , QWidgetList* l) {
    // QWidgetList_operator_equal_equal_0()
    auto rv =  ((QWidgetList*)this_)->operator==(*l);
    return rv;
}

// [1] bool operator!=(const QList<T> &)
extern "C"
bool C_QWidgetList_operator_not_equal_0(void* this_ , QWidgetList* l) {
    // QWidgetList_operator_not_equal_0()
    auto rv =  ((QWidgetList*)this_)->operator!=(*l);
    return rv;
}

// [4] int size()
extern "C"
int C_QWidgetList_size_0(void* this_ ) {
    // QWidgetList_size_0()
    auto rv =  ((QWidgetList*)this_)->size();
    return rv;
}

// [-2] void detach()
extern "C"
void C_QWidgetList_detach_0(void* this_ ) {
    // QWidgetList_detach_0()
     ((QWidgetList*)this_)->detach();
}

// [-2] void detachShared()
extern "C"
void C_QWidgetList_detachShared_0(void* this_ ) {
    // QWidgetList_detachShared_0()
     ((QWidgetList*)this_)->detachShared();
}

// [1] bool isDetached()
extern "C"
bool C_QWidgetList_isDetached_0(void* this_ ) {
    // QWidgetList_isDetached_0()
    auto rv =  ((QWidgetList*)this_)->isDetached();
    return rv;
}

// [-2] void setSharable(bool)
extern "C"
void C_QWidgetList_setSharable_0(void* this_ , bool sharable) {
    // QWidgetList_setSharable_0()
     ((QWidgetList*)this_)->setSharable(sharable);
}

// [1] bool isSharedWith(const QList<T> &)
extern "C"
bool C_QWidgetList_isSharedWith_0(void* this_ , QWidgetList* other) {
    // QWidgetList_isSharedWith_0()
    auto rv =  ((QWidgetList*)this_)->isSharedWith(*other);
    return rv;
}

// [1] bool isEmpty()
extern "C"
bool C_QWidgetList_isEmpty_0(void* this_ ) {
    // QWidgetList_isEmpty_0()
    auto rv =  ((QWidgetList*)this_)->isEmpty();
    return rv;
}

// [-2] void clear()
extern "C"
void C_QWidgetList_clear_0(void* this_ ) {
    // QWidgetList_clear_0()
     ((QWidgetList*)this_)->clear();
}

// [-3] const T & at(int)
extern "C"
QWidget ** C_QWidgetList_at_0(void* this_ , int i) {
    // QWidgetList_at_0()
    auto rv =  ((QWidgetList*)this_)->at(i);
    return new decltype(rv)(rv);
}

// [-3] const T & operator[](int)
extern "C"
QWidget ** C_QWidgetList_operator_get_index_0(void* this_ , int i) {
    // QWidgetList_operator_get_index_0()
    auto rv =  ((QWidgetList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-3] T & operator[](int)
extern "C"
QWidget ** C_QWidgetList_operator_get_index_1(void* this_ , int i) {
    // QWidgetList_operator_get_index_1()
    auto rv =  ((QWidgetList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-2] void reserve(int)
extern "C"
void C_QWidgetList_reserve_0(void* this_ , int size) {
    // QWidgetList_reserve_0()
     ((QWidgetList*)this_)->reserve(size);
}

// [-2] void append(const T &)
extern "C"
void C_QWidgetList_append_0(void* this_ , QWidget * t) {
    // QWidgetList_append_0()
     ((QWidgetList*)this_)->append(t);
}

// [-2] void append(const QList<T> &)
extern "C"
void C_QWidgetList_append_1(void* this_ , QWidgetList* t) {
    // QWidgetList_append_1()
     ((QWidgetList*)this_)->append(*t);
}

// [-2] void prepend(const T &)
extern "C"
void C_QWidgetList_prepend_0(void* this_ , QWidget * t) {
    // QWidgetList_prepend_0()
     ((QWidgetList*)this_)->prepend(t);
}

// [-2] void insert(int, const T &)
extern "C"
void C_QWidgetList_insert_0(void* this_ , int i, QWidget * t) {
    // QWidgetList_insert_0()
     ((QWidgetList*)this_)->insert(i, t);
}

// [-2] void replace(int, const T &)
extern "C"
void C_QWidgetList_replace_0(void* this_ , int i, QWidget * t) {
    // QWidgetList_replace_0()
     ((QWidgetList*)this_)->replace(i, t);
}

// [-2] void removeAt(int)
extern "C"
void C_QWidgetList_removeAt_0(void* this_ , int i) {
    // QWidgetList_removeAt_0()
     ((QWidgetList*)this_)->removeAt(i);
}

// [4] int removeAll(const T &)
extern "C"
int C_QWidgetList_removeAll_0(void* this_ , QWidget * t) {
    // QWidgetList_removeAll_0()
    auto rv =  ((QWidgetList*)this_)->removeAll(t);
    return rv;
}

// [1] bool removeOne(const T &)
extern "C"
bool C_QWidgetList_removeOne_0(void* this_ , QWidget * t) {
    // QWidgetList_removeOne_0()
    auto rv =  ((QWidgetList*)this_)->removeOne(t);
    return rv;
}

// [-3] T takeAt(int)
extern "C"
QWidget ** C_QWidgetList_takeAt_0(void* this_ , int i) {
    // QWidgetList_takeAt_0()
    auto rv =  ((QWidgetList*)this_)->takeAt(i);
    return new decltype(rv)(rv);
}

// [-3] T takeFirst()
extern "C"
QWidget ** C_QWidgetList_takeFirst_0(void* this_ ) {
    // QWidgetList_takeFirst_0()
    auto rv =  ((QWidgetList*)this_)->takeFirst();
    return new decltype(rv)(rv);
}

// [-3] T takeLast()
extern "C"
QWidget ** C_QWidgetList_takeLast_0(void* this_ ) {
    // QWidgetList_takeLast_0()
    auto rv =  ((QWidgetList*)this_)->takeLast();
    return new decltype(rv)(rv);
}

// [-2] void move(int, int)
extern "C"
void C_QWidgetList_move_0(void* this_ , int from, int to) {
    // QWidgetList_move_0()
     ((QWidgetList*)this_)->move(from, to);
}

// [-2] void swap(int, int)
extern "C"
void C_QWidgetList_swap_1(void* this_ , int i, int j) {
    // QWidgetList_swap_1()
     ((QWidgetList*)this_)->swap(i, j);
}

// [4] int indexOf(const T &, int)
extern "C"
int C_QWidgetList_indexOf_0(void* this_ , QWidget * t, int from) {
    // QWidgetList_indexOf_0()
    auto rv =  ((QWidgetList*)this_)->indexOf(t, from);
    return rv;
}

// [4] int lastIndexOf(const T &, int)
extern "C"
int C_QWidgetList_lastIndexOf_0(void* this_ , QWidget * t, int from) {
    // QWidgetList_lastIndexOf_0()
    auto rv =  ((QWidgetList*)this_)->lastIndexOf(t, from);
    return rv;
}

// [1] bool contains(const T &)
extern "C"
bool C_QWidgetList_contains_0(void* this_ , QWidget * t) {
    // QWidgetList_contains_0()
    auto rv =  ((QWidgetList*)this_)->contains(t);
    return rv;
}

// [4] int count(const T &)
extern "C"
int C_QWidgetList_count_0(void* this_ , QWidget * t) {
    // QWidgetList_count_0()
    auto rv =  ((QWidgetList*)this_)->count(t);
    return rv;
}

// [-3] QList::iterator begin()
extern "C"
QWidgetList::iterator* C_QWidgetList_begin_0(void* this_ ) {
    // QWidgetList_begin_0()
    auto rv =  ((QWidgetList*)this_)->begin();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator end()
extern "C"
QWidgetList::iterator* C_QWidgetList_end_0(void* this_ ) {
    // QWidgetList_end_0()
    auto rv =  ((QWidgetList*)this_)->end();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rbegin()
extern "C"
QWidgetList::reverse_iterator* C_QWidgetList_rbegin_0(void* this_ ) {
    // QWidgetList_rbegin_0()
    auto rv =  ((QWidgetList*)this_)->rbegin();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rend()
extern "C"
QWidgetList::reverse_iterator* C_QWidgetList_rend_0(void* this_ ) {
    // QWidgetList_rend_0()
    auto rv =  ((QWidgetList*)this_)->rend();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator insert(QList::iterator, const T &)
extern "C"
QWidgetList::iterator* C_QWidgetList_insert_1(void* this_ , QWidgetList::iterator* before, QWidget * t) {
    // QWidgetList_insert_1()
    auto rv =  ((QWidgetList*)this_)->insert(*before, t);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator)
extern "C"
QWidgetList::iterator* C_QWidgetList_erase_0(void* this_ , QWidgetList::iterator* pos) {
    // QWidgetList_erase_0()
    auto rv =  ((QWidgetList*)this_)->erase(*pos);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator, QList::iterator)
extern "C"
QWidgetList::iterator* C_QWidgetList_erase_1(void* this_ , QWidgetList::iterator* first, QWidgetList::iterator* last) {
    // QWidgetList_erase_1()
    auto rv =  ((QWidgetList*)this_)->erase(*first, *last);
    return new decltype(rv)(rv);
}

// [4] int count()
extern "C"
int C_QWidgetList_count_1(void* this_ ) {
    // QWidgetList_count_1()
    auto rv =  ((QWidgetList*)this_)->count();
    return rv;
}

// [4] int length()
extern "C"
int C_QWidgetList_length_0(void* this_ ) {
    // QWidgetList_length_0()
    auto rv =  ((QWidgetList*)this_)->length();
    return rv;
}

// [-3] T & first()
extern "C"
QWidget ** C_QWidgetList_first_0(void* this_ ) {
    // QWidgetList_first_0()
    auto rv =  ((QWidgetList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] const T & constFirst()
extern "C"
QWidget ** C_QWidgetList_constFirst_0(void* this_ ) {
    // QWidgetList_constFirst_0()
    auto rv =  ((QWidgetList*)this_)->constFirst();
    return new decltype(rv)(rv);
}

// [-3] const T & first()
extern "C"
QWidget ** C_QWidgetList_first_1(void* this_ ) {
    // QWidgetList_first_1()
    auto rv =  ((QWidgetList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] T & last()
extern "C"
QWidget ** C_QWidgetList_last_0(void* this_ ) {
    // QWidgetList_last_0()
    auto rv =  ((QWidgetList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & last()
extern "C"
QWidget ** C_QWidgetList_last_1(void* this_ ) {
    // QWidgetList_last_1()
    auto rv =  ((QWidgetList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & constLast()
extern "C"
QWidget ** C_QWidgetList_constLast_0(void* this_ ) {
    // QWidgetList_constLast_0()
    auto rv =  ((QWidgetList*)this_)->constLast();
    return new decltype(rv)(rv);
}

// [-2] void removeFirst()
extern "C"
void C_QWidgetList_removeFirst_0(void* this_ ) {
    // QWidgetList_removeFirst_0()
     ((QWidgetList*)this_)->removeFirst();
}

// [-2] void removeLast()
extern "C"
void C_QWidgetList_removeLast_0(void* this_ ) {
    // QWidgetList_removeLast_0()
     ((QWidgetList*)this_)->removeLast();
}

// [1] bool startsWith(const T &)
extern "C"
bool C_QWidgetList_startsWith_0(void* this_ , QWidget * t) {
    // QWidgetList_startsWith_0()
    auto rv =  ((QWidgetList*)this_)->startsWith(t);
    return rv;
}

// [1] bool endsWith(const T &)
extern "C"
bool C_QWidgetList_endsWith_0(void* this_ , QWidget * t) {
    // QWidgetList_endsWith_0()
    auto rv =  ((QWidgetList*)this_)->endsWith(t);
    return rv;
}

// [-3] QList<T> mid(int, int)
extern "C"
QWidgetList* C_QWidgetList_mid_0(void* this_ , int pos, int length) {
    // QWidgetList_mid_0()
    auto rv =  ((QWidgetList*)this_)->mid(pos, length);
    return (QWidgetList*)this_;
}

// [-3] T value(int)
extern "C"
QWidget ** C_QWidgetList_value_0(void* this_ , int i) {
    // QWidgetList_value_0()
    auto rv =  ((QWidgetList*)this_)->value(i);
    return new decltype(rv)(rv);
}

// [-3] T value(int, const T &)
extern "C"
QWidget ** C_QWidgetList_value_1(void* this_ , int i, QWidget * defaultValue) {
    // QWidgetList_value_1()
    auto rv =  ((QWidgetList*)this_)->value(i, defaultValue);
    return new decltype(rv)(rv);
}

// [-2] void push_back(const T &)
extern "C"
void C_QWidgetList_push_back_0(void* this_ , QWidget * t) {
    // QWidgetList_push_back_0()
     ((QWidgetList*)this_)->push_back(t);
}

// [-2] void push_front(const T &)
extern "C"
void C_QWidgetList_push_front_0(void* this_ , QWidget * t) {
    // QWidgetList_push_front_0()
     ((QWidgetList*)this_)->push_front(t);
}

// [-3] T & front()
extern "C"
QWidget ** C_QWidgetList_front_0(void* this_ ) {
    // QWidgetList_front_0()
    auto rv =  ((QWidgetList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] const T & front()
extern "C"
QWidget ** C_QWidgetList_front_1(void* this_ ) {
    // QWidgetList_front_1()
    auto rv =  ((QWidgetList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] T & back()
extern "C"
QWidget ** C_QWidgetList_back_0(void* this_ ) {
    // QWidgetList_back_0()
    auto rv =  ((QWidgetList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-3] const T & back()
extern "C"
QWidget ** C_QWidgetList_back_1(void* this_ ) {
    // QWidgetList_back_1()
    auto rv =  ((QWidgetList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-2] void pop_front()
extern "C"
void C_QWidgetList_pop_front_0(void* this_ ) {
    // QWidgetList_pop_front_0()
     ((QWidgetList*)this_)->pop_front();
}

// [-2] void pop_back()
extern "C"
void C_QWidgetList_pop_back_0(void* this_ ) {
    // QWidgetList_pop_back_0()
     ((QWidgetList*)this_)->pop_back();
}

// [1] bool empty()
extern "C"
bool C_QWidgetList_empty_0(void* this_ ) {
    // QWidgetList_empty_0()
    auto rv =  ((QWidgetList*)this_)->empty();
    return rv;
}

// [-3] QList<T> & operator+=(const QList<T> &)
extern "C"
QWidgetList* C_QWidgetList_operator_add_equal_0(void* this_ , QWidgetList* l) {
    // QWidgetList_operator_add_equal_0()
    auto rv =  ((QWidgetList*)this_)->operator+=(*l);
    return (QWidgetList*)this_;
}

// [-3] QList<T> operator+(const QList<T> &)
extern "C"
QWidgetList* C_QWidgetList_operator_add_0(void* this_ , QWidgetList* l) {
    // QWidgetList_operator_add_0()
    auto rv =  ((QWidgetList*)this_)->operator+(*l);
    return (QWidgetList*)this_;
}

// [-3] QList<T> & operator+=(const T &)
extern "C"
QWidgetList* C_QWidgetList_operator_add_equal_1(void* this_ , QWidget * t) {
    // QWidgetList_operator_add_equal_1()
    auto rv =  ((QWidgetList*)this_)->operator+=(t);
    return (QWidgetList*)this_;
}

// [-3] QList<T> & operator<<(const T &)
extern "C"
QWidgetList* C_QWidgetList_operator_left_shift_0(void* this_ , QWidget * t) {
    // QWidgetList_operator_left_shift_0()
    auto rv =  ((QWidgetList*)this_)->operator<<(t);
    return (QWidgetList*)this_;
}

// [-3] QList<T> & operator<<(const QList<T> &)
extern "C"
QWidgetList* C_QWidgetList_operator_left_shift_1(void* this_ , QWidgetList* l) {
    // QWidgetList_operator_left_shift_1()
    auto rv =  ((QWidgetList*)this_)->operator<<(*l);
    return (QWidgetList*)this_;
}

// [-3] QVector<T> toVector()
extern "C"
void C_QWidgetList_toVector_0(void* this_ ) {
    // QWidgetList_toVector_0()
    auto rv =  ((QWidgetList*)this_)->toVector();
}

// [-3] std::list<T> toStdList()
extern "C"
void C_QWidgetList_toStdList_0(void* this_ ) {
    // QWidgetList_toStdList_0()
    auto rv =  ((QWidgetList*)this_)->toStdList();
}

//  body block end
