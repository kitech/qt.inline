
// /usr/include/qt/QtWidgets/qdockwidget.h
#ifndef protected
#define protected public
#endif
#include <qdockwidget.h>
#include <QtWidgets>
#include "callback_inherit.h"

#ifndef QDockWidgetList
typedef QList<QDockWidget *> QDockWidgetList;
#endif
//  header block end

//  body block begin
// [-3] QList<T> & operator=(const QList<T> &)
extern "C"
QDockWidgetList* C_QDockWidgetList_operator_equal_0(void* this_ , QDockWidgetList* l) {
    // QDockWidgetList_operator_equal_0()
    auto rv =  ((QDockWidgetList*)this_)->operator=(*l);
    return (QDockWidgetList*)this_;
}

// [-3] QList<T> & operator=(QList<T> &&)
extern "C"
QDockWidgetList* C_QDockWidgetList_operator_equal_1(void* this_ , QDockWidgetList* other) {
    // QDockWidgetList_operator_equal_1()
    auto rv =  ((QDockWidgetList*)this_)->operator=(*other);
    return (QDockWidgetList*)this_;
}

// [-2] void swap(QList<T> &)
extern "C"
void C_QDockWidgetList_swap_0(void* this_ , QDockWidgetList* other) {
    // QDockWidgetList_swap_0()
     ((QDockWidgetList*)this_)->swap(*other);
}

// [1] bool operator==(const QList<T> &)
extern "C"
bool C_QDockWidgetList_operator_equal_equal_0(void* this_ , QDockWidgetList* l) {
    // QDockWidgetList_operator_equal_equal_0()
    auto rv =  ((QDockWidgetList*)this_)->operator==(*l);
    return rv;
}

// [1] bool operator!=(const QList<T> &)
extern "C"
bool C_QDockWidgetList_operator_not_equal_0(void* this_ , QDockWidgetList* l) {
    // QDockWidgetList_operator_not_equal_0()
    auto rv =  ((QDockWidgetList*)this_)->operator!=(*l);
    return rv;
}

// [4] int size()
extern "C"
int C_QDockWidgetList_size_0(void* this_ ) {
    // QDockWidgetList_size_0()
    auto rv =  ((QDockWidgetList*)this_)->size();
    return rv;
}

// [-2] void detach()
extern "C"
void C_QDockWidgetList_detach_0(void* this_ ) {
    // QDockWidgetList_detach_0()
     ((QDockWidgetList*)this_)->detach();
}

// [-2] void detachShared()
extern "C"
void C_QDockWidgetList_detachShared_0(void* this_ ) {
    // QDockWidgetList_detachShared_0()
     ((QDockWidgetList*)this_)->detachShared();
}

// [1] bool isDetached()
extern "C"
bool C_QDockWidgetList_isDetached_0(void* this_ ) {
    // QDockWidgetList_isDetached_0()
    auto rv =  ((QDockWidgetList*)this_)->isDetached();
    return rv;
}

// [-2] void setSharable(bool)
extern "C"
void C_QDockWidgetList_setSharable_0(void* this_ , bool sharable) {
    // QDockWidgetList_setSharable_0()
     ((QDockWidgetList*)this_)->setSharable(sharable);
}

// [1] bool isSharedWith(const QList<T> &)
extern "C"
bool C_QDockWidgetList_isSharedWith_0(void* this_ , QDockWidgetList* other) {
    // QDockWidgetList_isSharedWith_0()
    auto rv =  ((QDockWidgetList*)this_)->isSharedWith(*other);
    return rv;
}

// [1] bool isEmpty()
extern "C"
bool C_QDockWidgetList_isEmpty_0(void* this_ ) {
    // QDockWidgetList_isEmpty_0()
    auto rv =  ((QDockWidgetList*)this_)->isEmpty();
    return rv;
}

// [-2] void clear()
extern "C"
void C_QDockWidgetList_clear_0(void* this_ ) {
    // QDockWidgetList_clear_0()
     ((QDockWidgetList*)this_)->clear();
}

// [-3] const T & at(int)
extern "C"
QDockWidget ** C_QDockWidgetList_at_0(void* this_ , int i) {
    // QDockWidgetList_at_0()
    auto rv =  ((QDockWidgetList*)this_)->at(i);
    return new decltype(rv)(rv);
}

// [-3] const T & operator[](int)
extern "C"
QDockWidget ** C_QDockWidgetList_operator_get_index_0(void* this_ , int i) {
    // QDockWidgetList_operator_get_index_0()
    auto rv =  ((QDockWidgetList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-3] T & operator[](int)
extern "C"
QDockWidget ** C_QDockWidgetList_operator_get_index_1(void* this_ , int i) {
    // QDockWidgetList_operator_get_index_1()
    auto rv =  ((QDockWidgetList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-2] void reserve(int)
extern "C"
void C_QDockWidgetList_reserve_0(void* this_ , int size) {
    // QDockWidgetList_reserve_0()
     ((QDockWidgetList*)this_)->reserve(size);
}

// [-2] void append(const T &)
extern "C"
void C_QDockWidgetList_append_0(void* this_ , QDockWidget * t) {
    // QDockWidgetList_append_0()
     ((QDockWidgetList*)this_)->append(t);
}

// [-2] void append(const QList<T> &)
extern "C"
void C_QDockWidgetList_append_1(void* this_ , QDockWidgetList* t) {
    // QDockWidgetList_append_1()
     ((QDockWidgetList*)this_)->append(*t);
}

// [-2] void prepend(const T &)
extern "C"
void C_QDockWidgetList_prepend_0(void* this_ , QDockWidget * t) {
    // QDockWidgetList_prepend_0()
     ((QDockWidgetList*)this_)->prepend(t);
}

// [-2] void insert(int, const T &)
extern "C"
void C_QDockWidgetList_insert_0(void* this_ , int i, QDockWidget * t) {
    // QDockWidgetList_insert_0()
     ((QDockWidgetList*)this_)->insert(i, t);
}

// [-2] void replace(int, const T &)
extern "C"
void C_QDockWidgetList_replace_0(void* this_ , int i, QDockWidget * t) {
    // QDockWidgetList_replace_0()
     ((QDockWidgetList*)this_)->replace(i, t);
}

// [-2] void removeAt(int)
extern "C"
void C_QDockWidgetList_removeAt_0(void* this_ , int i) {
    // QDockWidgetList_removeAt_0()
     ((QDockWidgetList*)this_)->removeAt(i);
}

// [4] int removeAll(const T &)
extern "C"
int C_QDockWidgetList_removeAll_0(void* this_ , QDockWidget * t) {
    // QDockWidgetList_removeAll_0()
    auto rv =  ((QDockWidgetList*)this_)->removeAll(t);
    return rv;
}

// [1] bool removeOne(const T &)
extern "C"
bool C_QDockWidgetList_removeOne_0(void* this_ , QDockWidget * t) {
    // QDockWidgetList_removeOne_0()
    auto rv =  ((QDockWidgetList*)this_)->removeOne(t);
    return rv;
}

// [-3] T takeAt(int)
extern "C"
QDockWidget ** C_QDockWidgetList_takeAt_0(void* this_ , int i) {
    // QDockWidgetList_takeAt_0()
    auto rv =  ((QDockWidgetList*)this_)->takeAt(i);
    return new decltype(rv)(rv);
}

// [-3] T takeFirst()
extern "C"
QDockWidget ** C_QDockWidgetList_takeFirst_0(void* this_ ) {
    // QDockWidgetList_takeFirst_0()
    auto rv =  ((QDockWidgetList*)this_)->takeFirst();
    return new decltype(rv)(rv);
}

// [-3] T takeLast()
extern "C"
QDockWidget ** C_QDockWidgetList_takeLast_0(void* this_ ) {
    // QDockWidgetList_takeLast_0()
    auto rv =  ((QDockWidgetList*)this_)->takeLast();
    return new decltype(rv)(rv);
}

// [-2] void move(int, int)
extern "C"
void C_QDockWidgetList_move_0(void* this_ , int from, int to) {
    // QDockWidgetList_move_0()
     ((QDockWidgetList*)this_)->move(from, to);
}

// [-2] void swap(int, int)
extern "C"
void C_QDockWidgetList_swap_1(void* this_ , int i, int j) {
    // QDockWidgetList_swap_1()
     ((QDockWidgetList*)this_)->swap(i, j);
}

// [4] int indexOf(const T &, int)
extern "C"
int C_QDockWidgetList_indexOf_0(void* this_ , QDockWidget * t, int from) {
    // QDockWidgetList_indexOf_0()
    auto rv =  ((QDockWidgetList*)this_)->indexOf(t, from);
    return rv;
}

// [4] int lastIndexOf(const T &, int)
extern "C"
int C_QDockWidgetList_lastIndexOf_0(void* this_ , QDockWidget * t, int from) {
    // QDockWidgetList_lastIndexOf_0()
    auto rv =  ((QDockWidgetList*)this_)->lastIndexOf(t, from);
    return rv;
}

// [1] bool contains(const T &)
extern "C"
bool C_QDockWidgetList_contains_0(void* this_ , QDockWidget * t) {
    // QDockWidgetList_contains_0()
    auto rv =  ((QDockWidgetList*)this_)->contains(t);
    return rv;
}

// [4] int count(const T &)
extern "C"
int C_QDockWidgetList_count_0(void* this_ , QDockWidget * t) {
    // QDockWidgetList_count_0()
    auto rv =  ((QDockWidgetList*)this_)->count(t);
    return rv;
}

// [-3] QList::iterator begin()
extern "C"
QDockWidgetList::iterator* C_QDockWidgetList_begin_0(void* this_ ) {
    // QDockWidgetList_begin_0()
    auto rv =  ((QDockWidgetList*)this_)->begin();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator end()
extern "C"
QDockWidgetList::iterator* C_QDockWidgetList_end_0(void* this_ ) {
    // QDockWidgetList_end_0()
    auto rv =  ((QDockWidgetList*)this_)->end();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rbegin()
extern "C"
QDockWidgetList::reverse_iterator* C_QDockWidgetList_rbegin_0(void* this_ ) {
    // QDockWidgetList_rbegin_0()
    auto rv =  ((QDockWidgetList*)this_)->rbegin();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rend()
extern "C"
QDockWidgetList::reverse_iterator* C_QDockWidgetList_rend_0(void* this_ ) {
    // QDockWidgetList_rend_0()
    auto rv =  ((QDockWidgetList*)this_)->rend();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator insert(QList::iterator, const T &)
extern "C"
QDockWidgetList::iterator* C_QDockWidgetList_insert_1(void* this_ , QDockWidgetList::iterator* before, QDockWidget * t) {
    // QDockWidgetList_insert_1()
    auto rv =  ((QDockWidgetList*)this_)->insert(*before, t);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator)
extern "C"
QDockWidgetList::iterator* C_QDockWidgetList_erase_0(void* this_ , QDockWidgetList::iterator* pos) {
    // QDockWidgetList_erase_0()
    auto rv =  ((QDockWidgetList*)this_)->erase(*pos);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator, QList::iterator)
extern "C"
QDockWidgetList::iterator* C_QDockWidgetList_erase_1(void* this_ , QDockWidgetList::iterator* first, QDockWidgetList::iterator* last) {
    // QDockWidgetList_erase_1()
    auto rv =  ((QDockWidgetList*)this_)->erase(*first, *last);
    return new decltype(rv)(rv);
}

// [4] int count()
extern "C"
int C_QDockWidgetList_count_1(void* this_ ) {
    // QDockWidgetList_count_1()
    auto rv =  ((QDockWidgetList*)this_)->count();
    return rv;
}

// [4] int length()
extern "C"
int C_QDockWidgetList_length_0(void* this_ ) {
    // QDockWidgetList_length_0()
    auto rv =  ((QDockWidgetList*)this_)->length();
    return rv;
}

// [-3] T & first()
extern "C"
QDockWidget ** C_QDockWidgetList_first_0(void* this_ ) {
    // QDockWidgetList_first_0()
    auto rv =  ((QDockWidgetList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] const T & constFirst()
extern "C"
QDockWidget ** C_QDockWidgetList_constFirst_0(void* this_ ) {
    // QDockWidgetList_constFirst_0()
    auto rv =  ((QDockWidgetList*)this_)->constFirst();
    return new decltype(rv)(rv);
}

// [-3] const T & first()
extern "C"
QDockWidget ** C_QDockWidgetList_first_1(void* this_ ) {
    // QDockWidgetList_first_1()
    auto rv =  ((QDockWidgetList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] T & last()
extern "C"
QDockWidget ** C_QDockWidgetList_last_0(void* this_ ) {
    // QDockWidgetList_last_0()
    auto rv =  ((QDockWidgetList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & last()
extern "C"
QDockWidget ** C_QDockWidgetList_last_1(void* this_ ) {
    // QDockWidgetList_last_1()
    auto rv =  ((QDockWidgetList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & constLast()
extern "C"
QDockWidget ** C_QDockWidgetList_constLast_0(void* this_ ) {
    // QDockWidgetList_constLast_0()
    auto rv =  ((QDockWidgetList*)this_)->constLast();
    return new decltype(rv)(rv);
}

// [-2] void removeFirst()
extern "C"
void C_QDockWidgetList_removeFirst_0(void* this_ ) {
    // QDockWidgetList_removeFirst_0()
     ((QDockWidgetList*)this_)->removeFirst();
}

// [-2] void removeLast()
extern "C"
void C_QDockWidgetList_removeLast_0(void* this_ ) {
    // QDockWidgetList_removeLast_0()
     ((QDockWidgetList*)this_)->removeLast();
}

// [1] bool startsWith(const T &)
extern "C"
bool C_QDockWidgetList_startsWith_0(void* this_ , QDockWidget * t) {
    // QDockWidgetList_startsWith_0()
    auto rv =  ((QDockWidgetList*)this_)->startsWith(t);
    return rv;
}

// [1] bool endsWith(const T &)
extern "C"
bool C_QDockWidgetList_endsWith_0(void* this_ , QDockWidget * t) {
    // QDockWidgetList_endsWith_0()
    auto rv =  ((QDockWidgetList*)this_)->endsWith(t);
    return rv;
}

// [-3] QList<T> mid(int, int)
extern "C"
QDockWidgetList* C_QDockWidgetList_mid_0(void* this_ , int pos, int length) {
    // QDockWidgetList_mid_0()
    auto rv =  ((QDockWidgetList*)this_)->mid(pos, length);
    return (QDockWidgetList*)this_;
}

// [-3] T value(int)
extern "C"
QDockWidget ** C_QDockWidgetList_value_0(void* this_ , int i) {
    // QDockWidgetList_value_0()
    auto rv =  ((QDockWidgetList*)this_)->value(i);
    return new decltype(rv)(rv);
}

// [-3] T value(int, const T &)
extern "C"
QDockWidget ** C_QDockWidgetList_value_1(void* this_ , int i, QDockWidget * defaultValue) {
    // QDockWidgetList_value_1()
    auto rv =  ((QDockWidgetList*)this_)->value(i, defaultValue);
    return new decltype(rv)(rv);
}

// [-2] void push_back(const T &)
extern "C"
void C_QDockWidgetList_push_back_0(void* this_ , QDockWidget * t) {
    // QDockWidgetList_push_back_0()
     ((QDockWidgetList*)this_)->push_back(t);
}

// [-2] void push_front(const T &)
extern "C"
void C_QDockWidgetList_push_front_0(void* this_ , QDockWidget * t) {
    // QDockWidgetList_push_front_0()
     ((QDockWidgetList*)this_)->push_front(t);
}

// [-3] T & front()
extern "C"
QDockWidget ** C_QDockWidgetList_front_0(void* this_ ) {
    // QDockWidgetList_front_0()
    auto rv =  ((QDockWidgetList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] const T & front()
extern "C"
QDockWidget ** C_QDockWidgetList_front_1(void* this_ ) {
    // QDockWidgetList_front_1()
    auto rv =  ((QDockWidgetList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] T & back()
extern "C"
QDockWidget ** C_QDockWidgetList_back_0(void* this_ ) {
    // QDockWidgetList_back_0()
    auto rv =  ((QDockWidgetList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-3] const T & back()
extern "C"
QDockWidget ** C_QDockWidgetList_back_1(void* this_ ) {
    // QDockWidgetList_back_1()
    auto rv =  ((QDockWidgetList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-2] void pop_front()
extern "C"
void C_QDockWidgetList_pop_front_0(void* this_ ) {
    // QDockWidgetList_pop_front_0()
     ((QDockWidgetList*)this_)->pop_front();
}

// [-2] void pop_back()
extern "C"
void C_QDockWidgetList_pop_back_0(void* this_ ) {
    // QDockWidgetList_pop_back_0()
     ((QDockWidgetList*)this_)->pop_back();
}

// [1] bool empty()
extern "C"
bool C_QDockWidgetList_empty_0(void* this_ ) {
    // QDockWidgetList_empty_0()
    auto rv =  ((QDockWidgetList*)this_)->empty();
    return rv;
}

// [-3] QList<T> & operator+=(const QList<T> &)
extern "C"
QDockWidgetList* C_QDockWidgetList_operator_add_equal_0(void* this_ , QDockWidgetList* l) {
    // QDockWidgetList_operator_add_equal_0()
    auto rv =  ((QDockWidgetList*)this_)->operator+=(*l);
    return (QDockWidgetList*)this_;
}

// [-3] QList<T> operator+(const QList<T> &)
extern "C"
QDockWidgetList* C_QDockWidgetList_operator_add_0(void* this_ , QDockWidgetList* l) {
    // QDockWidgetList_operator_add_0()
    auto rv =  ((QDockWidgetList*)this_)->operator+(*l);
    return (QDockWidgetList*)this_;
}

// [-3] QList<T> & operator+=(const T &)
extern "C"
QDockWidgetList* C_QDockWidgetList_operator_add_equal_1(void* this_ , QDockWidget * t) {
    // QDockWidgetList_operator_add_equal_1()
    auto rv =  ((QDockWidgetList*)this_)->operator+=(t);
    return (QDockWidgetList*)this_;
}

// [-3] QList<T> & operator<<(const T &)
extern "C"
QDockWidgetList* C_QDockWidgetList_operator_left_shift_0(void* this_ , QDockWidget * t) {
    // QDockWidgetList_operator_left_shift_0()
    auto rv =  ((QDockWidgetList*)this_)->operator<<(t);
    return (QDockWidgetList*)this_;
}

// [-3] QList<T> & operator<<(const QList<T> &)
extern "C"
QDockWidgetList* C_QDockWidgetList_operator_left_shift_1(void* this_ , QDockWidgetList* l) {
    // QDockWidgetList_operator_left_shift_1()
    auto rv =  ((QDockWidgetList*)this_)->operator<<(*l);
    return (QDockWidgetList*)this_;
}

// [-3] QVector<T> toVector()
extern "C"
void C_QDockWidgetList_toVector_0(void* this_ ) {
    // QDockWidgetList_toVector_0()
    auto rv =  ((QDockWidgetList*)this_)->toVector();
}

// [-3] std::list<T> toStdList()
extern "C"
void C_QDockWidgetList_toStdList_0(void* this_ ) {
    // QDockWidgetList_toStdList_0()
    auto rv =  ((QDockWidgetList*)this_)->toStdList();
}

//  body block end
