
// /usr/include/qt/QtGui/qscreen.h
#ifndef protected
#define protected public
#endif
#include <qscreen.h>
#include <QtGui>
#include "callback_inherit.h"

#ifndef QScreenList
typedef QList<QScreen *> QScreenList;
#endif
//  header block end

//  body block begin
// [-3] QList<T> & operator=(const QList<T> &)
extern "C"
QScreenList* C_QScreenList_operator_equal_0(void* this_ , QScreenList* l) {
    // QScreenList_operator_equal_0()
    auto rv =  ((QScreenList*)this_)->operator=(*l);
    return (QScreenList*)this_;
}

// [-3] QList<T> & operator=(QList<T> &&)
extern "C"
QScreenList* C_QScreenList_operator_equal_1(void* this_ , QScreenList* other) {
    // QScreenList_operator_equal_1()
    auto rv =  ((QScreenList*)this_)->operator=(*other);
    return (QScreenList*)this_;
}

// [-2] void swap(QList<T> &)
extern "C"
void C_QScreenList_swap_0(void* this_ , QScreenList* other) {
    // QScreenList_swap_0()
     ((QScreenList*)this_)->swap(*other);
}

// [1] bool operator==(const QList<T> &)
extern "C"
bool C_QScreenList_operator_equal_equal_0(void* this_ , QScreenList* l) {
    // QScreenList_operator_equal_equal_0()
    auto rv =  ((QScreenList*)this_)->operator==(*l);
    return rv;
}

// [1] bool operator!=(const QList<T> &)
extern "C"
bool C_QScreenList_operator_not_equal_0(void* this_ , QScreenList* l) {
    // QScreenList_operator_not_equal_0()
    auto rv =  ((QScreenList*)this_)->operator!=(*l);
    return rv;
}

// [4] int size()
extern "C"
int C_QScreenList_size_0(void* this_ ) {
    // QScreenList_size_0()
    auto rv =  ((QScreenList*)this_)->size();
    return rv;
}

// [-2] void detach()
extern "C"
void C_QScreenList_detach_0(void* this_ ) {
    // QScreenList_detach_0()
     ((QScreenList*)this_)->detach();
}

// [-2] void detachShared()
extern "C"
void C_QScreenList_detachShared_0(void* this_ ) {
    // QScreenList_detachShared_0()
     ((QScreenList*)this_)->detachShared();
}

// [1] bool isDetached()
extern "C"
bool C_QScreenList_isDetached_0(void* this_ ) {
    // QScreenList_isDetached_0()
    auto rv =  ((QScreenList*)this_)->isDetached();
    return rv;
}

// [-2] void setSharable(bool)
extern "C"
void C_QScreenList_setSharable_0(void* this_ , bool sharable) {
    // QScreenList_setSharable_0()
     ((QScreenList*)this_)->setSharable(sharable);
}

// [1] bool isSharedWith(const QList<T> &)
extern "C"
bool C_QScreenList_isSharedWith_0(void* this_ , QScreenList* other) {
    // QScreenList_isSharedWith_0()
    auto rv =  ((QScreenList*)this_)->isSharedWith(*other);
    return rv;
}

// [1] bool isEmpty()
extern "C"
bool C_QScreenList_isEmpty_0(void* this_ ) {
    // QScreenList_isEmpty_0()
    auto rv =  ((QScreenList*)this_)->isEmpty();
    return rv;
}

// [-2] void clear()
extern "C"
void C_QScreenList_clear_0(void* this_ ) {
    // QScreenList_clear_0()
     ((QScreenList*)this_)->clear();
}

// [-3] const T & at(int)
extern "C"
QScreen ** C_QScreenList_at_0(void* this_ , int i) {
    // QScreenList_at_0()
    auto rv =  ((QScreenList*)this_)->at(i);
    return new decltype(rv)(rv);
}

// [-3] const T & operator[](int)
extern "C"
QScreen ** C_QScreenList_operator_get_index_0(void* this_ , int i) {
    // QScreenList_operator_get_index_0()
    auto rv =  ((QScreenList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-3] T & operator[](int)
extern "C"
QScreen ** C_QScreenList_operator_get_index_1(void* this_ , int i) {
    // QScreenList_operator_get_index_1()
    auto rv =  ((QScreenList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-2] void reserve(int)
extern "C"
void C_QScreenList_reserve_0(void* this_ , int size) {
    // QScreenList_reserve_0()
     ((QScreenList*)this_)->reserve(size);
}

// [-2] void append(const T &)
extern "C"
void C_QScreenList_append_0(void* this_ , QScreen * t) {
    // QScreenList_append_0()
     ((QScreenList*)this_)->append(t);
}

// [-2] void append(const QList<T> &)
extern "C"
void C_QScreenList_append_1(void* this_ , QScreenList* t) {
    // QScreenList_append_1()
     ((QScreenList*)this_)->append(*t);
}

// [-2] void prepend(const T &)
extern "C"
void C_QScreenList_prepend_0(void* this_ , QScreen * t) {
    // QScreenList_prepend_0()
     ((QScreenList*)this_)->prepend(t);
}

// [-2] void insert(int, const T &)
extern "C"
void C_QScreenList_insert_0(void* this_ , int i, QScreen * t) {
    // QScreenList_insert_0()
     ((QScreenList*)this_)->insert(i, t);
}

// [-2] void replace(int, const T &)
extern "C"
void C_QScreenList_replace_0(void* this_ , int i, QScreen * t) {
    // QScreenList_replace_0()
     ((QScreenList*)this_)->replace(i, t);
}

// [-2] void removeAt(int)
extern "C"
void C_QScreenList_removeAt_0(void* this_ , int i) {
    // QScreenList_removeAt_0()
     ((QScreenList*)this_)->removeAt(i);
}

// [4] int removeAll(const T &)
extern "C"
int C_QScreenList_removeAll_0(void* this_ , QScreen * t) {
    // QScreenList_removeAll_0()
    auto rv =  ((QScreenList*)this_)->removeAll(t);
    return rv;
}

// [1] bool removeOne(const T &)
extern "C"
bool C_QScreenList_removeOne_0(void* this_ , QScreen * t) {
    // QScreenList_removeOne_0()
    auto rv =  ((QScreenList*)this_)->removeOne(t);
    return rv;
}

// [-3] T takeAt(int)
extern "C"
QScreen ** C_QScreenList_takeAt_0(void* this_ , int i) {
    // QScreenList_takeAt_0()
    auto rv =  ((QScreenList*)this_)->takeAt(i);
    return new decltype(rv)(rv);
}

// [-3] T takeFirst()
extern "C"
QScreen ** C_QScreenList_takeFirst_0(void* this_ ) {
    // QScreenList_takeFirst_0()
    auto rv =  ((QScreenList*)this_)->takeFirst();
    return new decltype(rv)(rv);
}

// [-3] T takeLast()
extern "C"
QScreen ** C_QScreenList_takeLast_0(void* this_ ) {
    // QScreenList_takeLast_0()
    auto rv =  ((QScreenList*)this_)->takeLast();
    return new decltype(rv)(rv);
}

// [-2] void move(int, int)
extern "C"
void C_QScreenList_move_0(void* this_ , int from, int to) {
    // QScreenList_move_0()
     ((QScreenList*)this_)->move(from, to);
}

// [-2] void swap(int, int)
extern "C"
void C_QScreenList_swap_1(void* this_ , int i, int j) {
    // QScreenList_swap_1()
     ((QScreenList*)this_)->swap(i, j);
}

// [4] int indexOf(const T &, int)
extern "C"
int C_QScreenList_indexOf_0(void* this_ , QScreen * t, int from) {
    // QScreenList_indexOf_0()
    auto rv =  ((QScreenList*)this_)->indexOf(t, from);
    return rv;
}

// [4] int lastIndexOf(const T &, int)
extern "C"
int C_QScreenList_lastIndexOf_0(void* this_ , QScreen * t, int from) {
    // QScreenList_lastIndexOf_0()
    auto rv =  ((QScreenList*)this_)->lastIndexOf(t, from);
    return rv;
}

// [1] bool contains(const T &)
extern "C"
bool C_QScreenList_contains_0(void* this_ , QScreen * t) {
    // QScreenList_contains_0()
    auto rv =  ((QScreenList*)this_)->contains(t);
    return rv;
}

// [4] int count(const T &)
extern "C"
int C_QScreenList_count_0(void* this_ , QScreen * t) {
    // QScreenList_count_0()
    auto rv =  ((QScreenList*)this_)->count(t);
    return rv;
}

// [-3] QList::iterator begin()
extern "C"
QScreenList::iterator* C_QScreenList_begin_0(void* this_ ) {
    // QScreenList_begin_0()
    auto rv =  ((QScreenList*)this_)->begin();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator end()
extern "C"
QScreenList::iterator* C_QScreenList_end_0(void* this_ ) {
    // QScreenList_end_0()
    auto rv =  ((QScreenList*)this_)->end();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rbegin()
extern "C"
QScreenList::reverse_iterator* C_QScreenList_rbegin_0(void* this_ ) {
    // QScreenList_rbegin_0()
    auto rv =  ((QScreenList*)this_)->rbegin();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rend()
extern "C"
QScreenList::reverse_iterator* C_QScreenList_rend_0(void* this_ ) {
    // QScreenList_rend_0()
    auto rv =  ((QScreenList*)this_)->rend();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator insert(QList::iterator, const T &)
extern "C"
QScreenList::iterator* C_QScreenList_insert_1(void* this_ , QScreenList::iterator* before, QScreen * t) {
    // QScreenList_insert_1()
    auto rv =  ((QScreenList*)this_)->insert(*before, t);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator)
extern "C"
QScreenList::iterator* C_QScreenList_erase_0(void* this_ , QScreenList::iterator* pos) {
    // QScreenList_erase_0()
    auto rv =  ((QScreenList*)this_)->erase(*pos);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator, QList::iterator)
extern "C"
QScreenList::iterator* C_QScreenList_erase_1(void* this_ , QScreenList::iterator* first, QScreenList::iterator* last) {
    // QScreenList_erase_1()
    auto rv =  ((QScreenList*)this_)->erase(*first, *last);
    return new decltype(rv)(rv);
}

// [4] int count()
extern "C"
int C_QScreenList_count_1(void* this_ ) {
    // QScreenList_count_1()
    auto rv =  ((QScreenList*)this_)->count();
    return rv;
}

// [4] int length()
extern "C"
int C_QScreenList_length_0(void* this_ ) {
    // QScreenList_length_0()
    auto rv =  ((QScreenList*)this_)->length();
    return rv;
}

// [-3] T & first()
extern "C"
QScreen ** C_QScreenList_first_0(void* this_ ) {
    // QScreenList_first_0()
    auto rv =  ((QScreenList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] const T & constFirst()
extern "C"
QScreen ** C_QScreenList_constFirst_0(void* this_ ) {
    // QScreenList_constFirst_0()
    auto rv =  ((QScreenList*)this_)->constFirst();
    return new decltype(rv)(rv);
}

// [-3] const T & first()
extern "C"
QScreen ** C_QScreenList_first_1(void* this_ ) {
    // QScreenList_first_1()
    auto rv =  ((QScreenList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] T & last()
extern "C"
QScreen ** C_QScreenList_last_0(void* this_ ) {
    // QScreenList_last_0()
    auto rv =  ((QScreenList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & last()
extern "C"
QScreen ** C_QScreenList_last_1(void* this_ ) {
    // QScreenList_last_1()
    auto rv =  ((QScreenList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & constLast()
extern "C"
QScreen ** C_QScreenList_constLast_0(void* this_ ) {
    // QScreenList_constLast_0()
    auto rv =  ((QScreenList*)this_)->constLast();
    return new decltype(rv)(rv);
}

// [-2] void removeFirst()
extern "C"
void C_QScreenList_removeFirst_0(void* this_ ) {
    // QScreenList_removeFirst_0()
     ((QScreenList*)this_)->removeFirst();
}

// [-2] void removeLast()
extern "C"
void C_QScreenList_removeLast_0(void* this_ ) {
    // QScreenList_removeLast_0()
     ((QScreenList*)this_)->removeLast();
}

// [1] bool startsWith(const T &)
extern "C"
bool C_QScreenList_startsWith_0(void* this_ , QScreen * t) {
    // QScreenList_startsWith_0()
    auto rv =  ((QScreenList*)this_)->startsWith(t);
    return rv;
}

// [1] bool endsWith(const T &)
extern "C"
bool C_QScreenList_endsWith_0(void* this_ , QScreen * t) {
    // QScreenList_endsWith_0()
    auto rv =  ((QScreenList*)this_)->endsWith(t);
    return rv;
}

// [-3] QList<T> mid(int, int)
extern "C"
QScreenList* C_QScreenList_mid_0(void* this_ , int pos, int length) {
    // QScreenList_mid_0()
    auto rv =  ((QScreenList*)this_)->mid(pos, length);
    return (QScreenList*)this_;
}

// [-3] T value(int)
extern "C"
QScreen ** C_QScreenList_value_0(void* this_ , int i) {
    // QScreenList_value_0()
    auto rv =  ((QScreenList*)this_)->value(i);
    return new decltype(rv)(rv);
}

// [-3] T value(int, const T &)
extern "C"
QScreen ** C_QScreenList_value_1(void* this_ , int i, QScreen * defaultValue) {
    // QScreenList_value_1()
    auto rv =  ((QScreenList*)this_)->value(i, defaultValue);
    return new decltype(rv)(rv);
}

// [-2] void push_back(const T &)
extern "C"
void C_QScreenList_push_back_0(void* this_ , QScreen * t) {
    // QScreenList_push_back_0()
     ((QScreenList*)this_)->push_back(t);
}

// [-2] void push_front(const T &)
extern "C"
void C_QScreenList_push_front_0(void* this_ , QScreen * t) {
    // QScreenList_push_front_0()
     ((QScreenList*)this_)->push_front(t);
}

// [-3] T & front()
extern "C"
QScreen ** C_QScreenList_front_0(void* this_ ) {
    // QScreenList_front_0()
    auto rv =  ((QScreenList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] const T & front()
extern "C"
QScreen ** C_QScreenList_front_1(void* this_ ) {
    // QScreenList_front_1()
    auto rv =  ((QScreenList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] T & back()
extern "C"
QScreen ** C_QScreenList_back_0(void* this_ ) {
    // QScreenList_back_0()
    auto rv =  ((QScreenList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-3] const T & back()
extern "C"
QScreen ** C_QScreenList_back_1(void* this_ ) {
    // QScreenList_back_1()
    auto rv =  ((QScreenList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-2] void pop_front()
extern "C"
void C_QScreenList_pop_front_0(void* this_ ) {
    // QScreenList_pop_front_0()
     ((QScreenList*)this_)->pop_front();
}

// [-2] void pop_back()
extern "C"
void C_QScreenList_pop_back_0(void* this_ ) {
    // QScreenList_pop_back_0()
     ((QScreenList*)this_)->pop_back();
}

// [1] bool empty()
extern "C"
bool C_QScreenList_empty_0(void* this_ ) {
    // QScreenList_empty_0()
    auto rv =  ((QScreenList*)this_)->empty();
    return rv;
}

// [-3] QList<T> & operator+=(const QList<T> &)
extern "C"
QScreenList* C_QScreenList_operator_add_equal_0(void* this_ , QScreenList* l) {
    // QScreenList_operator_add_equal_0()
    auto rv =  ((QScreenList*)this_)->operator+=(*l);
    return (QScreenList*)this_;
}

// [-3] QList<T> operator+(const QList<T> &)
extern "C"
QScreenList* C_QScreenList_operator_add_0(void* this_ , QScreenList* l) {
    // QScreenList_operator_add_0()
    auto rv =  ((QScreenList*)this_)->operator+(*l);
    return (QScreenList*)this_;
}

// [-3] QList<T> & operator+=(const T &)
extern "C"
QScreenList* C_QScreenList_operator_add_equal_1(void* this_ , QScreen * t) {
    // QScreenList_operator_add_equal_1()
    auto rv =  ((QScreenList*)this_)->operator+=(t);
    return (QScreenList*)this_;
}

// [-3] QList<T> & operator<<(const T &)
extern "C"
QScreenList* C_QScreenList_operator_left_shift_0(void* this_ , QScreen * t) {
    // QScreenList_operator_left_shift_0()
    auto rv =  ((QScreenList*)this_)->operator<<(t);
    return (QScreenList*)this_;
}

// [-3] QList<T> & operator<<(const QList<T> &)
extern "C"
QScreenList* C_QScreenList_operator_left_shift_1(void* this_ , QScreenList* l) {
    // QScreenList_operator_left_shift_1()
    auto rv =  ((QScreenList*)this_)->operator<<(*l);
    return (QScreenList*)this_;
}

// [-3] QVector<T> toVector()
extern "C"
void C_QScreenList_toVector_0(void* this_ ) {
    // QScreenList_toVector_0()
    auto rv =  ((QScreenList*)this_)->toVector();
}

// [-3] std::list<T> toStdList()
extern "C"
void C_QScreenList_toStdList_0(void* this_ ) {
    // QScreenList_toStdList_0()
    auto rv =  ((QScreenList*)this_)->toStdList();
}

//  body block end
