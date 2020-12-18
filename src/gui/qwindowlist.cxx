
// /usr/include/qt/QtGui/qwindow.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwindow.h>
#include <QtGui>
#include "callback_inherit.h"

#ifndef QWindowList
#ifndef QWINDOWLIST_H
typedef QList<QWindow *> QWindowList;
#endif
#endif
//  header block end

//  body block begin
// [-3] QList<T> & operator=(const QList<T> &)
extern "C" Q_DECL_EXPORT
QWindowList* C_QWindowList_operator_equal_0(void* this_ , QWindowList* l) {
    // QWindowList_operator_equal_0()
    auto rv =  ((QWindowList*)this_)->operator=(*l);
    return (QWindowList*)this_;
}

// [-3] QList<T> & operator=(QList<T> &&)
extern "C" Q_DECL_EXPORT
QWindowList* C_QWindowList_operator_equal_1(void* this_ , QWindowList* other) {
    // QWindowList_operator_equal_1()
    auto rv =  ((QWindowList*)this_)->operator=(*other);
    return (QWindowList*)this_;
}

// [-2] void swap(QList<T> &)
extern "C" Q_DECL_EXPORT
void C_QWindowList_swap_0(void* this_ , QWindowList* other) {
    // QWindowList_swap_0()
     ((QWindowList*)this_)->swap(*other);
}

// [1] bool operator==(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QWindowList_operator_equal_equal_0(void* this_ , QWindowList* l) {
    // QWindowList_operator_equal_equal_0()
    auto rv =  ((QWindowList*)this_)->operator==(*l);
    return rv;
}

// [1] bool operator!=(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QWindowList_operator_not_equal_0(void* this_ , QWindowList* l) {
    // QWindowList_operator_not_equal_0()
    auto rv =  ((QWindowList*)this_)->operator!=(*l);
    return rv;
}

// [4] int size()
extern "C" Q_DECL_EXPORT
int C_QWindowList_size_0(void* this_ ) {
    // QWindowList_size_0()
    auto rv =  ((QWindowList*)this_)->size();
    return rv;
}

// [-2] void detach()
extern "C" Q_DECL_EXPORT
void C_QWindowList_detach_0(void* this_ ) {
    // QWindowList_detach_0()
     ((QWindowList*)this_)->detach();
}

// [-2] void detachShared()
extern "C" Q_DECL_EXPORT
void C_QWindowList_detachShared_0(void* this_ ) {
    // QWindowList_detachShared_0()
     ((QWindowList*)this_)->detachShared();
}

// [1] bool isDetached()
extern "C" Q_DECL_EXPORT
bool C_QWindowList_isDetached_0(void* this_ ) {
    // QWindowList_isDetached_0()
    auto rv =  ((QWindowList*)this_)->isDetached();
    return rv;
}

// [-2] void setSharable(bool)
extern "C" Q_DECL_EXPORT
void C_QWindowList_setSharable_0(void* this_ , bool sharable) {
    // QWindowList_setSharable_0()
     ((QWindowList*)this_)->setSharable(sharable);
}

// [1] bool isSharedWith(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QWindowList_isSharedWith_0(void* this_ , QWindowList* other) {
    // QWindowList_isSharedWith_0()
    auto rv =  ((QWindowList*)this_)->isSharedWith(*other);
    return rv;
}

// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_QWindowList_isEmpty_0(void* this_ ) {
    // QWindowList_isEmpty_0()
    auto rv =  ((QWindowList*)this_)->isEmpty();
    return rv;
}

// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_QWindowList_clear_0(void* this_ ) {
    // QWindowList_clear_0()
     ((QWindowList*)this_)->clear();
}

// [-3] const T & at(int)
extern "C" Q_DECL_EXPORT
QWindow ** C_QWindowList_at_0(void* this_ , int i) {
    // QWindowList_at_0()
    auto rv =  ((QWindowList*)this_)->at(i);
    return new decltype(rv)(rv);
}

// [-3] const T & operator[](int)
extern "C" Q_DECL_EXPORT
QWindow ** C_QWindowList_operator_get_index_0(void* this_ , int i) {
    // QWindowList_operator_get_index_0()
    auto rv =  ((QWindowList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-3] T & operator[](int)
extern "C" Q_DECL_EXPORT
QWindow ** C_QWindowList_operator_get_index_1(void* this_ , int i) {
    // QWindowList_operator_get_index_1()
    auto rv =  ((QWindowList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-2] void reserve(int)
extern "C" Q_DECL_EXPORT
void C_QWindowList_reserve_0(void* this_ , int size) {
    // QWindowList_reserve_0()
     ((QWindowList*)this_)->reserve(size);
}

// [-2] void append(const T &)
extern "C" Q_DECL_EXPORT
void C_QWindowList_append_0(void* this_ , QWindow * t) {
    // QWindowList_append_0()
     ((QWindowList*)this_)->append(t);
}

// [-2] void append(const QList<T> &)
extern "C" Q_DECL_EXPORT
void C_QWindowList_append_1(void* this_ , QWindowList* t) {
    // QWindowList_append_1()
     ((QWindowList*)this_)->append(*t);
}

// [-2] void prepend(const T &)
extern "C" Q_DECL_EXPORT
void C_QWindowList_prepend_0(void* this_ , QWindow * t) {
    // QWindowList_prepend_0()
     ((QWindowList*)this_)->prepend(t);
}

// [-2] void insert(int, const T &)
extern "C" Q_DECL_EXPORT
void C_QWindowList_insert_0(void* this_ , int i, QWindow * t) {
    // QWindowList_insert_0()
     ((QWindowList*)this_)->insert(i, t);
}

// [-2] void replace(int, const T &)
extern "C" Q_DECL_EXPORT
void C_QWindowList_replace_0(void* this_ , int i, QWindow * t) {
    // QWindowList_replace_0()
     ((QWindowList*)this_)->replace(i, t);
}

// [-2] void removeAt(int)
extern "C" Q_DECL_EXPORT
void C_QWindowList_removeAt_0(void* this_ , int i) {
    // QWindowList_removeAt_0()
     ((QWindowList*)this_)->removeAt(i);
}

// [4] int removeAll(const T &)
extern "C" Q_DECL_EXPORT
int C_QWindowList_removeAll_0(void* this_ , QWindow * t) {
    // QWindowList_removeAll_0()
    auto rv =  ((QWindowList*)this_)->removeAll(t);
    return rv;
}

// [1] bool removeOne(const T &)
extern "C" Q_DECL_EXPORT
bool C_QWindowList_removeOne_0(void* this_ , QWindow * t) {
    // QWindowList_removeOne_0()
    auto rv =  ((QWindowList*)this_)->removeOne(t);
    return rv;
}

// [-3] T takeAt(int)
extern "C" Q_DECL_EXPORT
QWindow ** C_QWindowList_takeAt_0(void* this_ , int i) {
    // QWindowList_takeAt_0()
    auto rv =  ((QWindowList*)this_)->takeAt(i);
    return new decltype(rv)(rv);
}

// [-3] T takeFirst()
extern "C" Q_DECL_EXPORT
QWindow ** C_QWindowList_takeFirst_0(void* this_ ) {
    // QWindowList_takeFirst_0()
    auto rv =  ((QWindowList*)this_)->takeFirst();
    return new decltype(rv)(rv);
}

// [-3] T takeLast()
extern "C" Q_DECL_EXPORT
QWindow ** C_QWindowList_takeLast_0(void* this_ ) {
    // QWindowList_takeLast_0()
    auto rv =  ((QWindowList*)this_)->takeLast();
    return new decltype(rv)(rv);
}

// [-2] void move(int, int)
extern "C" Q_DECL_EXPORT
void C_QWindowList_move_0(void* this_ , int from, int to) {
    // QWindowList_move_0()
     ((QWindowList*)this_)->move(from, to);
}

// [-2] void swapItemsAt(int, int)
extern "C" Q_DECL_EXPORT
void C_QWindowList_swapItemsAt_0(void* this_ , int i, int j) {
    // QWindowList_swapItemsAt_0()
     ((QWindowList*)this_)->swapItemsAt(i, j);
}

// [-2] void swap(int, int)
extern "C" Q_DECL_EXPORT
void C_QWindowList_swap_1(void* this_ , int i, int j) {
    // QWindowList_swap_1()
     ((QWindowList*)this_)->swap(i, j);
}

// [4] int indexOf(const T &, int)
extern "C" Q_DECL_EXPORT
int C_QWindowList_indexOf_0(void* this_ , QWindow * t, int from) {
    // QWindowList_indexOf_0()
    auto rv =  ((QWindowList*)this_)->indexOf(t, from);
    return rv;
}

// [4] int lastIndexOf(const T &, int)
extern "C" Q_DECL_EXPORT
int C_QWindowList_lastIndexOf_0(void* this_ , QWindow * t, int from) {
    // QWindowList_lastIndexOf_0()
    auto rv =  ((QWindowList*)this_)->lastIndexOf(t, from);
    return rv;
}

// [1] bool contains(const T &)
extern "C" Q_DECL_EXPORT
bool C_QWindowList_contains_0(void* this_ , QWindow * t) {
    // QWindowList_contains_0()
    auto rv =  ((QWindowList*)this_)->contains(t);
    return rv;
}

// [4] int count(const T &)
extern "C" Q_DECL_EXPORT
int C_QWindowList_count_0(void* this_ , QWindow * t) {
    // QWindowList_count_0()
    auto rv =  ((QWindowList*)this_)->count(t);
    return rv;
}

// [-3] QList::iterator begin()
extern "C" Q_DECL_EXPORT
QWindowList::iterator* C_QWindowList_begin_0(void* this_ ) {
    // QWindowList_begin_0()
    auto rv =  ((QWindowList*)this_)->begin();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator end()
extern "C" Q_DECL_EXPORT
QWindowList::iterator* C_QWindowList_end_0(void* this_ ) {
    // QWindowList_end_0()
    auto rv =  ((QWindowList*)this_)->end();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rbegin()
extern "C" Q_DECL_EXPORT
QWindowList::reverse_iterator* C_QWindowList_rbegin_0(void* this_ ) {
    // QWindowList_rbegin_0()
    auto rv =  ((QWindowList*)this_)->rbegin();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rend()
extern "C" Q_DECL_EXPORT
QWindowList::reverse_iterator* C_QWindowList_rend_0(void* this_ ) {
    // QWindowList_rend_0()
    auto rv =  ((QWindowList*)this_)->rend();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator insert(QList::iterator, const T &)
extern "C" Q_DECL_EXPORT
QWindowList::iterator* C_QWindowList_insert_1(void* this_ , QWindowList::iterator* before, QWindow * t) {
    // QWindowList_insert_1()
    auto rv =  ((QWindowList*)this_)->insert(*before, t);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator)
extern "C" Q_DECL_EXPORT
QWindowList::iterator* C_QWindowList_erase_0(void* this_ , QWindowList::iterator* pos) {
    // QWindowList_erase_0()
    auto rv =  ((QWindowList*)this_)->erase(*pos);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator, QList::iterator)
extern "C" Q_DECL_EXPORT
QWindowList::iterator* C_QWindowList_erase_1(void* this_ , QWindowList::iterator* first, QWindowList::iterator* last) {
    // QWindowList_erase_1()
    auto rv =  ((QWindowList*)this_)->erase(*first, *last);
    return new decltype(rv)(rv);
}

// [4] int count()
extern "C" Q_DECL_EXPORT
int C_QWindowList_count_1(void* this_ ) {
    // QWindowList_count_1()
    auto rv =  ((QWindowList*)this_)->count();
    return rv;
}

// [4] int length()
extern "C" Q_DECL_EXPORT
int C_QWindowList_length_0(void* this_ ) {
    // QWindowList_length_0()
    auto rv =  ((QWindowList*)this_)->length();
    return rv;
}

// [-3] T & first()
extern "C" Q_DECL_EXPORT
QWindow ** C_QWindowList_first_0(void* this_ ) {
    // QWindowList_first_0()
    auto rv =  ((QWindowList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] const T & constFirst()
extern "C" Q_DECL_EXPORT
QWindow ** C_QWindowList_constFirst_0(void* this_ ) {
    // QWindowList_constFirst_0()
    auto rv =  ((QWindowList*)this_)->constFirst();
    return new decltype(rv)(rv);
}

// [-3] const T & first()
extern "C" Q_DECL_EXPORT
QWindow ** C_QWindowList_first_1(void* this_ ) {
    // QWindowList_first_1()
    auto rv =  ((QWindowList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] T & last()
extern "C" Q_DECL_EXPORT
QWindow ** C_QWindowList_last_0(void* this_ ) {
    // QWindowList_last_0()
    auto rv =  ((QWindowList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & last()
extern "C" Q_DECL_EXPORT
QWindow ** C_QWindowList_last_1(void* this_ ) {
    // QWindowList_last_1()
    auto rv =  ((QWindowList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & constLast()
extern "C" Q_DECL_EXPORT
QWindow ** C_QWindowList_constLast_0(void* this_ ) {
    // QWindowList_constLast_0()
    auto rv =  ((QWindowList*)this_)->constLast();
    return new decltype(rv)(rv);
}

// [-2] void removeFirst()
extern "C" Q_DECL_EXPORT
void C_QWindowList_removeFirst_0(void* this_ ) {
    // QWindowList_removeFirst_0()
     ((QWindowList*)this_)->removeFirst();
}

// [-2] void removeLast()
extern "C" Q_DECL_EXPORT
void C_QWindowList_removeLast_0(void* this_ ) {
    // QWindowList_removeLast_0()
     ((QWindowList*)this_)->removeLast();
}

// [1] bool startsWith(const T &)
extern "C" Q_DECL_EXPORT
bool C_QWindowList_startsWith_0(void* this_ , QWindow * t) {
    // QWindowList_startsWith_0()
    auto rv =  ((QWindowList*)this_)->startsWith(t);
    return rv;
}

// [1] bool endsWith(const T &)
extern "C" Q_DECL_EXPORT
bool C_QWindowList_endsWith_0(void* this_ , QWindow * t) {
    // QWindowList_endsWith_0()
    auto rv =  ((QWindowList*)this_)->endsWith(t);
    return rv;
}

// [-3] QList<T> mid(int, int)
extern "C" Q_DECL_EXPORT
QWindowList* C_QWindowList_mid_0(void* this_ , int pos, int length) {
    // QWindowList_mid_0()
    auto rv =  ((QWindowList*)this_)->mid(pos, length);
    return (QWindowList*)this_;
}

// [-3] T value(int)
extern "C" Q_DECL_EXPORT
QWindow ** C_QWindowList_value_0(void* this_ , int i) {
    // QWindowList_value_0()
    auto rv =  ((QWindowList*)this_)->value(i);
    return new decltype(rv)(rv);
}

// [-3] T value(int, const T &)
extern "C" Q_DECL_EXPORT
QWindow ** C_QWindowList_value_1(void* this_ , int i, QWindow * defaultValue) {
    // QWindowList_value_1()
    auto rv =  ((QWindowList*)this_)->value(i, defaultValue);
    return new decltype(rv)(rv);
}

// [-2] void push_back(const T &)
extern "C" Q_DECL_EXPORT
void C_QWindowList_push_back_0(void* this_ , QWindow * t) {
    // QWindowList_push_back_0()
     ((QWindowList*)this_)->push_back(t);
}

// [-2] void push_front(const T &)
extern "C" Q_DECL_EXPORT
void C_QWindowList_push_front_0(void* this_ , QWindow * t) {
    // QWindowList_push_front_0()
     ((QWindowList*)this_)->push_front(t);
}

// [-3] T & front()
extern "C" Q_DECL_EXPORT
QWindow ** C_QWindowList_front_0(void* this_ ) {
    // QWindowList_front_0()
    auto rv =  ((QWindowList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] const T & front()
extern "C" Q_DECL_EXPORT
QWindow ** C_QWindowList_front_1(void* this_ ) {
    // QWindowList_front_1()
    auto rv =  ((QWindowList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] T & back()
extern "C" Q_DECL_EXPORT
QWindow ** C_QWindowList_back_0(void* this_ ) {
    // QWindowList_back_0()
    auto rv =  ((QWindowList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-3] const T & back()
extern "C" Q_DECL_EXPORT
QWindow ** C_QWindowList_back_1(void* this_ ) {
    // QWindowList_back_1()
    auto rv =  ((QWindowList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-2] void pop_front()
extern "C" Q_DECL_EXPORT
void C_QWindowList_pop_front_0(void* this_ ) {
    // QWindowList_pop_front_0()
     ((QWindowList*)this_)->pop_front();
}

// [-2] void pop_back()
extern "C" Q_DECL_EXPORT
void C_QWindowList_pop_back_0(void* this_ ) {
    // QWindowList_pop_back_0()
     ((QWindowList*)this_)->pop_back();
}

// [1] bool empty()
extern "C" Q_DECL_EXPORT
bool C_QWindowList_empty_0(void* this_ ) {
    // QWindowList_empty_0()
    auto rv =  ((QWindowList*)this_)->empty();
    return rv;
}

// [-3] QList<T> & operator+=(const QList<T> &)
extern "C" Q_DECL_EXPORT
QWindowList* C_QWindowList_operator_add_equal_0(void* this_ , QWindowList* l) {
    // QWindowList_operator_add_equal_0()
    auto rv =  ((QWindowList*)this_)->operator+=(*l);
    return (QWindowList*)this_;
}

// [-3] QList<T> operator+(const QList<T> &)
extern "C" Q_DECL_EXPORT
QWindowList* C_QWindowList_operator_add_0(void* this_ , QWindowList* l) {
    // QWindowList_operator_add_0()
    auto rv =  ((QWindowList*)this_)->operator+(*l);
    return (QWindowList*)this_;
}

// [-3] QList<T> & operator+=(const T &)
extern "C" Q_DECL_EXPORT
QWindowList* C_QWindowList_operator_add_equal_1(void* this_ , QWindow * t) {
    // QWindowList_operator_add_equal_1()
    auto rv =  ((QWindowList*)this_)->operator+=(t);
    return (QWindowList*)this_;
}

// [-3] QList<T> & operator<<(const T &)
extern "C" Q_DECL_EXPORT
QWindowList* C_QWindowList_operator_left_shift_0(void* this_ , QWindow * t) {
    // QWindowList_operator_left_shift_0()
    auto rv =  ((QWindowList*)this_)->operator<<(t);
    return (QWindowList*)this_;
}

// [-3] QList<T> & operator<<(const QList<T> &)
extern "C" Q_DECL_EXPORT
QWindowList* C_QWindowList_operator_left_shift_1(void* this_ , QWindowList* l) {
    // QWindowList_operator_left_shift_1()
    auto rv =  ((QWindowList*)this_)->operator<<(*l);
    return (QWindowList*)this_;
}

// [-3] QVector<T> toVector()
extern "C" Q_DECL_EXPORT
void C_QWindowList_toVector_0(void* this_ ) {
    // QWindowList_toVector_0()
    auto rv =  ((QWindowList*)this_)->toVector();
}

// [-3] std::list<T> toStdList()
extern "C" Q_DECL_EXPORT
void C_QWindowList_toStdList_0(void* this_ ) {
    // QWindowList_toStdList_0()
    auto rv =  ((QWindowList*)this_)->toStdList();
}

//  body block end
