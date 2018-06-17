
// /usr/include/qt/QtWidgets/qmdisubwindow.h
#ifndef protected
#define protected public
#endif
#include <qmdisubwindow.h>
#include <QtWidgets>
#include "callback_inherit.h"

#ifndef QMdiSubWindowList
typedef QList<QMdiSubWindow *> QMdiSubWindowList;
#endif
//  header block end

//  body block begin
// [-3] QList<T> & operator=(const QList<T> &)
extern "C"
QMdiSubWindowList* C_QMdiSubWindowList_operator_equal_0(void* this_ , QMdiSubWindowList* l) {
    // QMdiSubWindowList_operator_equal_0()
    auto rv =  ((QMdiSubWindowList*)this_)->operator=(*l);
    return (QMdiSubWindowList*)this_;
}

// [-3] QList<T> & operator=(QList<T> &&)
extern "C"
QMdiSubWindowList* C_QMdiSubWindowList_operator_equal_1(void* this_ , QMdiSubWindowList* other) {
    // QMdiSubWindowList_operator_equal_1()
    auto rv =  ((QMdiSubWindowList*)this_)->operator=(*other);
    return (QMdiSubWindowList*)this_;
}

// [-2] void swap(QList<T> &)
extern "C"
void C_QMdiSubWindowList_swap_0(void* this_ , QMdiSubWindowList* other) {
    // QMdiSubWindowList_swap_0()
     ((QMdiSubWindowList*)this_)->swap(*other);
}

// [1] bool operator==(const QList<T> &)
extern "C"
bool C_QMdiSubWindowList_operator_equal_equal_0(void* this_ , QMdiSubWindowList* l) {
    // QMdiSubWindowList_operator_equal_equal_0()
    auto rv =  ((QMdiSubWindowList*)this_)->operator==(*l);
    return rv;
}

// [1] bool operator!=(const QList<T> &)
extern "C"
bool C_QMdiSubWindowList_operator_not_equal_0(void* this_ , QMdiSubWindowList* l) {
    // QMdiSubWindowList_operator_not_equal_0()
    auto rv =  ((QMdiSubWindowList*)this_)->operator!=(*l);
    return rv;
}

// [4] int size()
extern "C"
int C_QMdiSubWindowList_size_0(void* this_ ) {
    // QMdiSubWindowList_size_0()
    auto rv =  ((QMdiSubWindowList*)this_)->size();
    return rv;
}

// [-2] void detach()
extern "C"
void C_QMdiSubWindowList_detach_0(void* this_ ) {
    // QMdiSubWindowList_detach_0()
     ((QMdiSubWindowList*)this_)->detach();
}

// [-2] void detachShared()
extern "C"
void C_QMdiSubWindowList_detachShared_0(void* this_ ) {
    // QMdiSubWindowList_detachShared_0()
     ((QMdiSubWindowList*)this_)->detachShared();
}

// [1] bool isDetached()
extern "C"
bool C_QMdiSubWindowList_isDetached_0(void* this_ ) {
    // QMdiSubWindowList_isDetached_0()
    auto rv =  ((QMdiSubWindowList*)this_)->isDetached();
    return rv;
}

// [-2] void setSharable(bool)
extern "C"
void C_QMdiSubWindowList_setSharable_0(void* this_ , bool sharable) {
    // QMdiSubWindowList_setSharable_0()
     ((QMdiSubWindowList*)this_)->setSharable(sharable);
}

// [1] bool isSharedWith(const QList<T> &)
extern "C"
bool C_QMdiSubWindowList_isSharedWith_0(void* this_ , QMdiSubWindowList* other) {
    // QMdiSubWindowList_isSharedWith_0()
    auto rv =  ((QMdiSubWindowList*)this_)->isSharedWith(*other);
    return rv;
}

// [1] bool isEmpty()
extern "C"
bool C_QMdiSubWindowList_isEmpty_0(void* this_ ) {
    // QMdiSubWindowList_isEmpty_0()
    auto rv =  ((QMdiSubWindowList*)this_)->isEmpty();
    return rv;
}

// [-2] void clear()
extern "C"
void C_QMdiSubWindowList_clear_0(void* this_ ) {
    // QMdiSubWindowList_clear_0()
     ((QMdiSubWindowList*)this_)->clear();
}

// [-3] const T & at(int)
extern "C"
QMdiSubWindow ** C_QMdiSubWindowList_at_0(void* this_ , int i) {
    // QMdiSubWindowList_at_0()
    auto rv =  ((QMdiSubWindowList*)this_)->at(i);
    return new decltype(rv)(rv);
}

// [-3] const T & operator[](int)
extern "C"
QMdiSubWindow ** C_QMdiSubWindowList_operator_get_index_0(void* this_ , int i) {
    // QMdiSubWindowList_operator_get_index_0()
    auto rv =  ((QMdiSubWindowList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-3] T & operator[](int)
extern "C"
QMdiSubWindow ** C_QMdiSubWindowList_operator_get_index_1(void* this_ , int i) {
    // QMdiSubWindowList_operator_get_index_1()
    auto rv =  ((QMdiSubWindowList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-2] void reserve(int)
extern "C"
void C_QMdiSubWindowList_reserve_0(void* this_ , int size) {
    // QMdiSubWindowList_reserve_0()
     ((QMdiSubWindowList*)this_)->reserve(size);
}

// [-2] void append(const T &)
extern "C"
void C_QMdiSubWindowList_append_0(void* this_ , QMdiSubWindow * t) {
    // QMdiSubWindowList_append_0()
     ((QMdiSubWindowList*)this_)->append(t);
}

// [-2] void append(const QList<T> &)
extern "C"
void C_QMdiSubWindowList_append_1(void* this_ , QMdiSubWindowList* t) {
    // QMdiSubWindowList_append_1()
     ((QMdiSubWindowList*)this_)->append(*t);
}

// [-2] void prepend(const T &)
extern "C"
void C_QMdiSubWindowList_prepend_0(void* this_ , QMdiSubWindow * t) {
    // QMdiSubWindowList_prepend_0()
     ((QMdiSubWindowList*)this_)->prepend(t);
}

// [-2] void insert(int, const T &)
extern "C"
void C_QMdiSubWindowList_insert_0(void* this_ , int i, QMdiSubWindow * t) {
    // QMdiSubWindowList_insert_0()
     ((QMdiSubWindowList*)this_)->insert(i, t);
}

// [-2] void replace(int, const T &)
extern "C"
void C_QMdiSubWindowList_replace_0(void* this_ , int i, QMdiSubWindow * t) {
    // QMdiSubWindowList_replace_0()
     ((QMdiSubWindowList*)this_)->replace(i, t);
}

// [-2] void removeAt(int)
extern "C"
void C_QMdiSubWindowList_removeAt_0(void* this_ , int i) {
    // QMdiSubWindowList_removeAt_0()
     ((QMdiSubWindowList*)this_)->removeAt(i);
}

// [4] int removeAll(const T &)
extern "C"
int C_QMdiSubWindowList_removeAll_0(void* this_ , QMdiSubWindow * t) {
    // QMdiSubWindowList_removeAll_0()
    auto rv =  ((QMdiSubWindowList*)this_)->removeAll(t);
    return rv;
}

// [1] bool removeOne(const T &)
extern "C"
bool C_QMdiSubWindowList_removeOne_0(void* this_ , QMdiSubWindow * t) {
    // QMdiSubWindowList_removeOne_0()
    auto rv =  ((QMdiSubWindowList*)this_)->removeOne(t);
    return rv;
}

// [-3] T takeAt(int)
extern "C"
QMdiSubWindow ** C_QMdiSubWindowList_takeAt_0(void* this_ , int i) {
    // QMdiSubWindowList_takeAt_0()
    auto rv =  ((QMdiSubWindowList*)this_)->takeAt(i);
    return new decltype(rv)(rv);
}

// [-3] T takeFirst()
extern "C"
QMdiSubWindow ** C_QMdiSubWindowList_takeFirst_0(void* this_ ) {
    // QMdiSubWindowList_takeFirst_0()
    auto rv =  ((QMdiSubWindowList*)this_)->takeFirst();
    return new decltype(rv)(rv);
}

// [-3] T takeLast()
extern "C"
QMdiSubWindow ** C_QMdiSubWindowList_takeLast_0(void* this_ ) {
    // QMdiSubWindowList_takeLast_0()
    auto rv =  ((QMdiSubWindowList*)this_)->takeLast();
    return new decltype(rv)(rv);
}

// [-2] void move(int, int)
extern "C"
void C_QMdiSubWindowList_move_0(void* this_ , int from, int to) {
    // QMdiSubWindowList_move_0()
     ((QMdiSubWindowList*)this_)->move(from, to);
}

// [-2] void swap(int, int)
extern "C"
void C_QMdiSubWindowList_swap_1(void* this_ , int i, int j) {
    // QMdiSubWindowList_swap_1()
     ((QMdiSubWindowList*)this_)->swap(i, j);
}

// [4] int indexOf(const T &, int)
extern "C"
int C_QMdiSubWindowList_indexOf_0(void* this_ , QMdiSubWindow * t, int from) {
    // QMdiSubWindowList_indexOf_0()
    auto rv =  ((QMdiSubWindowList*)this_)->indexOf(t, from);
    return rv;
}

// [4] int lastIndexOf(const T &, int)
extern "C"
int C_QMdiSubWindowList_lastIndexOf_0(void* this_ , QMdiSubWindow * t, int from) {
    // QMdiSubWindowList_lastIndexOf_0()
    auto rv =  ((QMdiSubWindowList*)this_)->lastIndexOf(t, from);
    return rv;
}

// [1] bool contains(const T &)
extern "C"
bool C_QMdiSubWindowList_contains_0(void* this_ , QMdiSubWindow * t) {
    // QMdiSubWindowList_contains_0()
    auto rv =  ((QMdiSubWindowList*)this_)->contains(t);
    return rv;
}

// [4] int count(const T &)
extern "C"
int C_QMdiSubWindowList_count_0(void* this_ , QMdiSubWindow * t) {
    // QMdiSubWindowList_count_0()
    auto rv =  ((QMdiSubWindowList*)this_)->count(t);
    return rv;
}

// [-3] QList::iterator begin()
extern "C"
QMdiSubWindowList::iterator* C_QMdiSubWindowList_begin_0(void* this_ ) {
    // QMdiSubWindowList_begin_0()
    auto rv =  ((QMdiSubWindowList*)this_)->begin();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator end()
extern "C"
QMdiSubWindowList::iterator* C_QMdiSubWindowList_end_0(void* this_ ) {
    // QMdiSubWindowList_end_0()
    auto rv =  ((QMdiSubWindowList*)this_)->end();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rbegin()
extern "C"
QMdiSubWindowList::reverse_iterator* C_QMdiSubWindowList_rbegin_0(void* this_ ) {
    // QMdiSubWindowList_rbegin_0()
    auto rv =  ((QMdiSubWindowList*)this_)->rbegin();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rend()
extern "C"
QMdiSubWindowList::reverse_iterator* C_QMdiSubWindowList_rend_0(void* this_ ) {
    // QMdiSubWindowList_rend_0()
    auto rv =  ((QMdiSubWindowList*)this_)->rend();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator insert(QList::iterator, const T &)
extern "C"
QMdiSubWindowList::iterator* C_QMdiSubWindowList_insert_1(void* this_ , QMdiSubWindowList::iterator* before, QMdiSubWindow * t) {
    // QMdiSubWindowList_insert_1()
    auto rv =  ((QMdiSubWindowList*)this_)->insert(*before, t);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator)
extern "C"
QMdiSubWindowList::iterator* C_QMdiSubWindowList_erase_0(void* this_ , QMdiSubWindowList::iterator* pos) {
    // QMdiSubWindowList_erase_0()
    auto rv =  ((QMdiSubWindowList*)this_)->erase(*pos);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator, QList::iterator)
extern "C"
QMdiSubWindowList::iterator* C_QMdiSubWindowList_erase_1(void* this_ , QMdiSubWindowList::iterator* first, QMdiSubWindowList::iterator* last) {
    // QMdiSubWindowList_erase_1()
    auto rv =  ((QMdiSubWindowList*)this_)->erase(*first, *last);
    return new decltype(rv)(rv);
}

// [4] int count()
extern "C"
int C_QMdiSubWindowList_count_1(void* this_ ) {
    // QMdiSubWindowList_count_1()
    auto rv =  ((QMdiSubWindowList*)this_)->count();
    return rv;
}

// [4] int length()
extern "C"
int C_QMdiSubWindowList_length_0(void* this_ ) {
    // QMdiSubWindowList_length_0()
    auto rv =  ((QMdiSubWindowList*)this_)->length();
    return rv;
}

// [-3] T & first()
extern "C"
QMdiSubWindow ** C_QMdiSubWindowList_first_0(void* this_ ) {
    // QMdiSubWindowList_first_0()
    auto rv =  ((QMdiSubWindowList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] const T & constFirst()
extern "C"
QMdiSubWindow ** C_QMdiSubWindowList_constFirst_0(void* this_ ) {
    // QMdiSubWindowList_constFirst_0()
    auto rv =  ((QMdiSubWindowList*)this_)->constFirst();
    return new decltype(rv)(rv);
}

// [-3] const T & first()
extern "C"
QMdiSubWindow ** C_QMdiSubWindowList_first_1(void* this_ ) {
    // QMdiSubWindowList_first_1()
    auto rv =  ((QMdiSubWindowList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] T & last()
extern "C"
QMdiSubWindow ** C_QMdiSubWindowList_last_0(void* this_ ) {
    // QMdiSubWindowList_last_0()
    auto rv =  ((QMdiSubWindowList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & last()
extern "C"
QMdiSubWindow ** C_QMdiSubWindowList_last_1(void* this_ ) {
    // QMdiSubWindowList_last_1()
    auto rv =  ((QMdiSubWindowList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & constLast()
extern "C"
QMdiSubWindow ** C_QMdiSubWindowList_constLast_0(void* this_ ) {
    // QMdiSubWindowList_constLast_0()
    auto rv =  ((QMdiSubWindowList*)this_)->constLast();
    return new decltype(rv)(rv);
}

// [-2] void removeFirst()
extern "C"
void C_QMdiSubWindowList_removeFirst_0(void* this_ ) {
    // QMdiSubWindowList_removeFirst_0()
     ((QMdiSubWindowList*)this_)->removeFirst();
}

// [-2] void removeLast()
extern "C"
void C_QMdiSubWindowList_removeLast_0(void* this_ ) {
    // QMdiSubWindowList_removeLast_0()
     ((QMdiSubWindowList*)this_)->removeLast();
}

// [1] bool startsWith(const T &)
extern "C"
bool C_QMdiSubWindowList_startsWith_0(void* this_ , QMdiSubWindow * t) {
    // QMdiSubWindowList_startsWith_0()
    auto rv =  ((QMdiSubWindowList*)this_)->startsWith(t);
    return rv;
}

// [1] bool endsWith(const T &)
extern "C"
bool C_QMdiSubWindowList_endsWith_0(void* this_ , QMdiSubWindow * t) {
    // QMdiSubWindowList_endsWith_0()
    auto rv =  ((QMdiSubWindowList*)this_)->endsWith(t);
    return rv;
}

// [-3] QList<T> mid(int, int)
extern "C"
QMdiSubWindowList* C_QMdiSubWindowList_mid_0(void* this_ , int pos, int length) {
    // QMdiSubWindowList_mid_0()
    auto rv =  ((QMdiSubWindowList*)this_)->mid(pos, length);
    return (QMdiSubWindowList*)this_;
}

// [-3] T value(int)
extern "C"
QMdiSubWindow ** C_QMdiSubWindowList_value_0(void* this_ , int i) {
    // QMdiSubWindowList_value_0()
    auto rv =  ((QMdiSubWindowList*)this_)->value(i);
    return new decltype(rv)(rv);
}

// [-3] T value(int, const T &)
extern "C"
QMdiSubWindow ** C_QMdiSubWindowList_value_1(void* this_ , int i, QMdiSubWindow * defaultValue) {
    // QMdiSubWindowList_value_1()
    auto rv =  ((QMdiSubWindowList*)this_)->value(i, defaultValue);
    return new decltype(rv)(rv);
}

// [-2] void push_back(const T &)
extern "C"
void C_QMdiSubWindowList_push_back_0(void* this_ , QMdiSubWindow * t) {
    // QMdiSubWindowList_push_back_0()
     ((QMdiSubWindowList*)this_)->push_back(t);
}

// [-2] void push_front(const T &)
extern "C"
void C_QMdiSubWindowList_push_front_0(void* this_ , QMdiSubWindow * t) {
    // QMdiSubWindowList_push_front_0()
     ((QMdiSubWindowList*)this_)->push_front(t);
}

// [-3] T & front()
extern "C"
QMdiSubWindow ** C_QMdiSubWindowList_front_0(void* this_ ) {
    // QMdiSubWindowList_front_0()
    auto rv =  ((QMdiSubWindowList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] const T & front()
extern "C"
QMdiSubWindow ** C_QMdiSubWindowList_front_1(void* this_ ) {
    // QMdiSubWindowList_front_1()
    auto rv =  ((QMdiSubWindowList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] T & back()
extern "C"
QMdiSubWindow ** C_QMdiSubWindowList_back_0(void* this_ ) {
    // QMdiSubWindowList_back_0()
    auto rv =  ((QMdiSubWindowList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-3] const T & back()
extern "C"
QMdiSubWindow ** C_QMdiSubWindowList_back_1(void* this_ ) {
    // QMdiSubWindowList_back_1()
    auto rv =  ((QMdiSubWindowList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-2] void pop_front()
extern "C"
void C_QMdiSubWindowList_pop_front_0(void* this_ ) {
    // QMdiSubWindowList_pop_front_0()
     ((QMdiSubWindowList*)this_)->pop_front();
}

// [-2] void pop_back()
extern "C"
void C_QMdiSubWindowList_pop_back_0(void* this_ ) {
    // QMdiSubWindowList_pop_back_0()
     ((QMdiSubWindowList*)this_)->pop_back();
}

// [1] bool empty()
extern "C"
bool C_QMdiSubWindowList_empty_0(void* this_ ) {
    // QMdiSubWindowList_empty_0()
    auto rv =  ((QMdiSubWindowList*)this_)->empty();
    return rv;
}

// [-3] QList<T> & operator+=(const QList<T> &)
extern "C"
QMdiSubWindowList* C_QMdiSubWindowList_operator_add_equal_0(void* this_ , QMdiSubWindowList* l) {
    // QMdiSubWindowList_operator_add_equal_0()
    auto rv =  ((QMdiSubWindowList*)this_)->operator+=(*l);
    return (QMdiSubWindowList*)this_;
}

// [-3] QList<T> operator+(const QList<T> &)
extern "C"
QMdiSubWindowList* C_QMdiSubWindowList_operator_add_0(void* this_ , QMdiSubWindowList* l) {
    // QMdiSubWindowList_operator_add_0()
    auto rv =  ((QMdiSubWindowList*)this_)->operator+(*l);
    return (QMdiSubWindowList*)this_;
}

// [-3] QList<T> & operator+=(const T &)
extern "C"
QMdiSubWindowList* C_QMdiSubWindowList_operator_add_equal_1(void* this_ , QMdiSubWindow * t) {
    // QMdiSubWindowList_operator_add_equal_1()
    auto rv =  ((QMdiSubWindowList*)this_)->operator+=(t);
    return (QMdiSubWindowList*)this_;
}

// [-3] QList<T> & operator<<(const T &)
extern "C"
QMdiSubWindowList* C_QMdiSubWindowList_operator_left_shift_0(void* this_ , QMdiSubWindow * t) {
    // QMdiSubWindowList_operator_left_shift_0()
    auto rv =  ((QMdiSubWindowList*)this_)->operator<<(t);
    return (QMdiSubWindowList*)this_;
}

// [-3] QList<T> & operator<<(const QList<T> &)
extern "C"
QMdiSubWindowList* C_QMdiSubWindowList_operator_left_shift_1(void* this_ , QMdiSubWindowList* l) {
    // QMdiSubWindowList_operator_left_shift_1()
    auto rv =  ((QMdiSubWindowList*)this_)->operator<<(*l);
    return (QMdiSubWindowList*)this_;
}

// [-3] QVector<T> toVector()
extern "C"
void C_QMdiSubWindowList_toVector_0(void* this_ ) {
    // QMdiSubWindowList_toVector_0()
    auto rv =  ((QMdiSubWindowList*)this_)->toVector();
}

// [-3] std::list<T> toStdList()
extern "C"
void C_QMdiSubWindowList_toStdList_0(void* this_ ) {
    // QMdiSubWindowList_toStdList_0()
    auto rv =  ((QMdiSubWindowList*)this_)->toStdList();
}

//  body block end
