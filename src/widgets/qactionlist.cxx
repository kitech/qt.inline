
// /usr/include/qt/QtWidgets/qaction.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaction.h>
#include <QtWidgets>
#include "callback_inherit.h"

#ifndef QActionList
#ifndef QACTIONLIST_H
typedef QList<QAction *> QActionList;
#endif
#endif
//  header block end

//  body block begin
// [-3] QList<T> & operator=(const QList<T> &)
extern "C" Q_DECL_EXPORT
QActionList* C_QActionList_operator_equal_0(void* this_ , QActionList* l) {
    // QActionList_operator_equal_0()
    auto rv =  ((QActionList*)this_)->operator=(*l);
    return (QActionList*)this_;
}

// [-3] QList<T> & operator=(QList<T> &&)
extern "C" Q_DECL_EXPORT
QActionList* C_QActionList_operator_equal_1(void* this_ , QActionList* other) {
    // QActionList_operator_equal_1()
    auto rv =  ((QActionList*)this_)->operator=(*other);
    return (QActionList*)this_;
}

// [-2] void swap(QList<T> &)
extern "C" Q_DECL_EXPORT
void C_QActionList_swap_0(void* this_ , QActionList* other) {
    // QActionList_swap_0()
     ((QActionList*)this_)->swap(*other);
}

// [1] bool operator==(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QActionList_operator_equal_equal_0(void* this_ , QActionList* l) {
    // QActionList_operator_equal_equal_0()
    auto rv =  ((QActionList*)this_)->operator==(*l);
    return rv;
}

// [1] bool operator!=(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QActionList_operator_not_equal_0(void* this_ , QActionList* l) {
    // QActionList_operator_not_equal_0()
    auto rv =  ((QActionList*)this_)->operator!=(*l);
    return rv;
}

// [4] int size()
extern "C" Q_DECL_EXPORT
int C_QActionList_size_0(void* this_ ) {
    // QActionList_size_0()
    auto rv =  ((QActionList*)this_)->size();
    return rv;
}

// [-2] void detach()
extern "C" Q_DECL_EXPORT
void C_QActionList_detach_0(void* this_ ) {
    // QActionList_detach_0()
     ((QActionList*)this_)->detach();
}

// [-2] void detachShared()
extern "C" Q_DECL_EXPORT
void C_QActionList_detachShared_0(void* this_ ) {
    // QActionList_detachShared_0()
     ((QActionList*)this_)->detachShared();
}

// [1] bool isDetached()
extern "C" Q_DECL_EXPORT
bool C_QActionList_isDetached_0(void* this_ ) {
    // QActionList_isDetached_0()
    auto rv =  ((QActionList*)this_)->isDetached();
    return rv;
}

// [-2] void setSharable(bool)
extern "C" Q_DECL_EXPORT
void C_QActionList_setSharable_0(void* this_ , bool sharable) {
    // QActionList_setSharable_0()
     ((QActionList*)this_)->setSharable(sharable);
}

// [1] bool isSharedWith(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QActionList_isSharedWith_0(void* this_ , QActionList* other) {
    // QActionList_isSharedWith_0()
    auto rv =  ((QActionList*)this_)->isSharedWith(*other);
    return rv;
}

// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_QActionList_isEmpty_0(void* this_ ) {
    // QActionList_isEmpty_0()
    auto rv =  ((QActionList*)this_)->isEmpty();
    return rv;
}

// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_QActionList_clear_0(void* this_ ) {
    // QActionList_clear_0()
     ((QActionList*)this_)->clear();
}

// [-3] const T & at(int)
extern "C" Q_DECL_EXPORT
QAction ** C_QActionList_at_0(void* this_ , int i) {
    // QActionList_at_0()
    auto rv =  ((QActionList*)this_)->at(i);
    return new decltype(rv)(rv);
}

// [-3] const T & operator[](int)
extern "C" Q_DECL_EXPORT
QAction ** C_QActionList_operator_get_index_0(void* this_ , int i) {
    // QActionList_operator_get_index_0()
    auto rv =  ((QActionList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-3] T & operator[](int)
extern "C" Q_DECL_EXPORT
QAction ** C_QActionList_operator_get_index_1(void* this_ , int i) {
    // QActionList_operator_get_index_1()
    auto rv =  ((QActionList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-2] void reserve(int)
extern "C" Q_DECL_EXPORT
void C_QActionList_reserve_0(void* this_ , int size) {
    // QActionList_reserve_0()
     ((QActionList*)this_)->reserve(size);
}

// [-2] void append(const T &)
extern "C" Q_DECL_EXPORT
void C_QActionList_append_0(void* this_ , QAction * t) {
    // QActionList_append_0()
     ((QActionList*)this_)->append(t);
}

// [-2] void append(const QList<T> &)
extern "C" Q_DECL_EXPORT
void C_QActionList_append_1(void* this_ , QActionList* t) {
    // QActionList_append_1()
     ((QActionList*)this_)->append(*t);
}

// [-2] void prepend(const T &)
extern "C" Q_DECL_EXPORT
void C_QActionList_prepend_0(void* this_ , QAction * t) {
    // QActionList_prepend_0()
     ((QActionList*)this_)->prepend(t);
}

// [-2] void insert(int, const T &)
extern "C" Q_DECL_EXPORT
void C_QActionList_insert_0(void* this_ , int i, QAction * t) {
    // QActionList_insert_0()
     ((QActionList*)this_)->insert(i, t);
}

// [-2] void replace(int, const T &)
extern "C" Q_DECL_EXPORT
void C_QActionList_replace_0(void* this_ , int i, QAction * t) {
    // QActionList_replace_0()
     ((QActionList*)this_)->replace(i, t);
}

// [-2] void removeAt(int)
extern "C" Q_DECL_EXPORT
void C_QActionList_removeAt_0(void* this_ , int i) {
    // QActionList_removeAt_0()
     ((QActionList*)this_)->removeAt(i);
}

// [4] int removeAll(const T &)
extern "C" Q_DECL_EXPORT
int C_QActionList_removeAll_0(void* this_ , QAction * t) {
    // QActionList_removeAll_0()
    auto rv =  ((QActionList*)this_)->removeAll(t);
    return rv;
}

// [1] bool removeOne(const T &)
extern "C" Q_DECL_EXPORT
bool C_QActionList_removeOne_0(void* this_ , QAction * t) {
    // QActionList_removeOne_0()
    auto rv =  ((QActionList*)this_)->removeOne(t);
    return rv;
}

// [-3] T takeAt(int)
extern "C" Q_DECL_EXPORT
QAction ** C_QActionList_takeAt_0(void* this_ , int i) {
    // QActionList_takeAt_0()
    auto rv =  ((QActionList*)this_)->takeAt(i);
    return new decltype(rv)(rv);
}

// [-3] T takeFirst()
extern "C" Q_DECL_EXPORT
QAction ** C_QActionList_takeFirst_0(void* this_ ) {
    // QActionList_takeFirst_0()
    auto rv =  ((QActionList*)this_)->takeFirst();
    return new decltype(rv)(rv);
}

// [-3] T takeLast()
extern "C" Q_DECL_EXPORT
QAction ** C_QActionList_takeLast_0(void* this_ ) {
    // QActionList_takeLast_0()
    auto rv =  ((QActionList*)this_)->takeLast();
    return new decltype(rv)(rv);
}

// [-2] void move(int, int)
extern "C" Q_DECL_EXPORT
void C_QActionList_move_0(void* this_ , int from, int to) {
    // QActionList_move_0()
     ((QActionList*)this_)->move(from, to);
}

// [-2] void swap(int, int)
extern "C" Q_DECL_EXPORT
void C_QActionList_swap_1(void* this_ , int i, int j) {
    // QActionList_swap_1()
     ((QActionList*)this_)->swap(i, j);
}

// [4] int indexOf(const T &, int)
extern "C" Q_DECL_EXPORT
int C_QActionList_indexOf_0(void* this_ , QAction * t, int from) {
    // QActionList_indexOf_0()
    auto rv =  ((QActionList*)this_)->indexOf(t, from);
    return rv;
}

// [4] int lastIndexOf(const T &, int)
extern "C" Q_DECL_EXPORT
int C_QActionList_lastIndexOf_0(void* this_ , QAction * t, int from) {
    // QActionList_lastIndexOf_0()
    auto rv =  ((QActionList*)this_)->lastIndexOf(t, from);
    return rv;
}

// [1] bool contains(const T &)
extern "C" Q_DECL_EXPORT
bool C_QActionList_contains_0(void* this_ , QAction * t) {
    // QActionList_contains_0()
    auto rv =  ((QActionList*)this_)->contains(t);
    return rv;
}

// [4] int count(const T &)
extern "C" Q_DECL_EXPORT
int C_QActionList_count_0(void* this_ , QAction * t) {
    // QActionList_count_0()
    auto rv =  ((QActionList*)this_)->count(t);
    return rv;
}

// [-3] QList::iterator begin()
extern "C" Q_DECL_EXPORT
QActionList::iterator* C_QActionList_begin_0(void* this_ ) {
    // QActionList_begin_0()
    auto rv =  ((QActionList*)this_)->begin();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator end()
extern "C" Q_DECL_EXPORT
QActionList::iterator* C_QActionList_end_0(void* this_ ) {
    // QActionList_end_0()
    auto rv =  ((QActionList*)this_)->end();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rbegin()
extern "C" Q_DECL_EXPORT
QActionList::reverse_iterator* C_QActionList_rbegin_0(void* this_ ) {
    // QActionList_rbegin_0()
    auto rv =  ((QActionList*)this_)->rbegin();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rend()
extern "C" Q_DECL_EXPORT
QActionList::reverse_iterator* C_QActionList_rend_0(void* this_ ) {
    // QActionList_rend_0()
    auto rv =  ((QActionList*)this_)->rend();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator insert(QList::iterator, const T &)
extern "C" Q_DECL_EXPORT
QActionList::iterator* C_QActionList_insert_1(void* this_ , QActionList::iterator* before, QAction * t) {
    // QActionList_insert_1()
    auto rv =  ((QActionList*)this_)->insert(*before, t);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator)
extern "C" Q_DECL_EXPORT
QActionList::iterator* C_QActionList_erase_0(void* this_ , QActionList::iterator* pos) {
    // QActionList_erase_0()
    auto rv =  ((QActionList*)this_)->erase(*pos);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator, QList::iterator)
extern "C" Q_DECL_EXPORT
QActionList::iterator* C_QActionList_erase_1(void* this_ , QActionList::iterator* first, QActionList::iterator* last) {
    // QActionList_erase_1()
    auto rv =  ((QActionList*)this_)->erase(*first, *last);
    return new decltype(rv)(rv);
}

// [4] int count()
extern "C" Q_DECL_EXPORT
int C_QActionList_count_1(void* this_ ) {
    // QActionList_count_1()
    auto rv =  ((QActionList*)this_)->count();
    return rv;
}

// [4] int length()
extern "C" Q_DECL_EXPORT
int C_QActionList_length_0(void* this_ ) {
    // QActionList_length_0()
    auto rv =  ((QActionList*)this_)->length();
    return rv;
}

// [-3] T & first()
extern "C" Q_DECL_EXPORT
QAction ** C_QActionList_first_0(void* this_ ) {
    // QActionList_first_0()
    auto rv =  ((QActionList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] const T & constFirst()
extern "C" Q_DECL_EXPORT
QAction ** C_QActionList_constFirst_0(void* this_ ) {
    // QActionList_constFirst_0()
    auto rv =  ((QActionList*)this_)->constFirst();
    return new decltype(rv)(rv);
}

// [-3] const T & first()
extern "C" Q_DECL_EXPORT
QAction ** C_QActionList_first_1(void* this_ ) {
    // QActionList_first_1()
    auto rv =  ((QActionList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] T & last()
extern "C" Q_DECL_EXPORT
QAction ** C_QActionList_last_0(void* this_ ) {
    // QActionList_last_0()
    auto rv =  ((QActionList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & last()
extern "C" Q_DECL_EXPORT
QAction ** C_QActionList_last_1(void* this_ ) {
    // QActionList_last_1()
    auto rv =  ((QActionList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & constLast()
extern "C" Q_DECL_EXPORT
QAction ** C_QActionList_constLast_0(void* this_ ) {
    // QActionList_constLast_0()
    auto rv =  ((QActionList*)this_)->constLast();
    return new decltype(rv)(rv);
}

// [-2] void removeFirst()
extern "C" Q_DECL_EXPORT
void C_QActionList_removeFirst_0(void* this_ ) {
    // QActionList_removeFirst_0()
     ((QActionList*)this_)->removeFirst();
}

// [-2] void removeLast()
extern "C" Q_DECL_EXPORT
void C_QActionList_removeLast_0(void* this_ ) {
    // QActionList_removeLast_0()
     ((QActionList*)this_)->removeLast();
}

// [1] bool startsWith(const T &)
extern "C" Q_DECL_EXPORT
bool C_QActionList_startsWith_0(void* this_ , QAction * t) {
    // QActionList_startsWith_0()
    auto rv =  ((QActionList*)this_)->startsWith(t);
    return rv;
}

// [1] bool endsWith(const T &)
extern "C" Q_DECL_EXPORT
bool C_QActionList_endsWith_0(void* this_ , QAction * t) {
    // QActionList_endsWith_0()
    auto rv =  ((QActionList*)this_)->endsWith(t);
    return rv;
}

// [-3] QList<T> mid(int, int)
extern "C" Q_DECL_EXPORT
QActionList* C_QActionList_mid_0(void* this_ , int pos, int length) {
    // QActionList_mid_0()
    auto rv =  ((QActionList*)this_)->mid(pos, length);
    return (QActionList*)this_;
}

// [-3] T value(int)
extern "C" Q_DECL_EXPORT
QAction ** C_QActionList_value_0(void* this_ , int i) {
    // QActionList_value_0()
    auto rv =  ((QActionList*)this_)->value(i);
    return new decltype(rv)(rv);
}

// [-3] T value(int, const T &)
extern "C" Q_DECL_EXPORT
QAction ** C_QActionList_value_1(void* this_ , int i, QAction * defaultValue) {
    // QActionList_value_1()
    auto rv =  ((QActionList*)this_)->value(i, defaultValue);
    return new decltype(rv)(rv);
}

// [-2] void push_back(const T &)
extern "C" Q_DECL_EXPORT
void C_QActionList_push_back_0(void* this_ , QAction * t) {
    // QActionList_push_back_0()
     ((QActionList*)this_)->push_back(t);
}

// [-2] void push_front(const T &)
extern "C" Q_DECL_EXPORT
void C_QActionList_push_front_0(void* this_ , QAction * t) {
    // QActionList_push_front_0()
     ((QActionList*)this_)->push_front(t);
}

// [-3] T & front()
extern "C" Q_DECL_EXPORT
QAction ** C_QActionList_front_0(void* this_ ) {
    // QActionList_front_0()
    auto rv =  ((QActionList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] const T & front()
extern "C" Q_DECL_EXPORT
QAction ** C_QActionList_front_1(void* this_ ) {
    // QActionList_front_1()
    auto rv =  ((QActionList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] T & back()
extern "C" Q_DECL_EXPORT
QAction ** C_QActionList_back_0(void* this_ ) {
    // QActionList_back_0()
    auto rv =  ((QActionList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-3] const T & back()
extern "C" Q_DECL_EXPORT
QAction ** C_QActionList_back_1(void* this_ ) {
    // QActionList_back_1()
    auto rv =  ((QActionList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-2] void pop_front()
extern "C" Q_DECL_EXPORT
void C_QActionList_pop_front_0(void* this_ ) {
    // QActionList_pop_front_0()
     ((QActionList*)this_)->pop_front();
}

// [-2] void pop_back()
extern "C" Q_DECL_EXPORT
void C_QActionList_pop_back_0(void* this_ ) {
    // QActionList_pop_back_0()
     ((QActionList*)this_)->pop_back();
}

// [1] bool empty()
extern "C" Q_DECL_EXPORT
bool C_QActionList_empty_0(void* this_ ) {
    // QActionList_empty_0()
    auto rv =  ((QActionList*)this_)->empty();
    return rv;
}

// [-3] QList<T> & operator+=(const QList<T> &)
extern "C" Q_DECL_EXPORT
QActionList* C_QActionList_operator_add_equal_0(void* this_ , QActionList* l) {
    // QActionList_operator_add_equal_0()
    auto rv =  ((QActionList*)this_)->operator+=(*l);
    return (QActionList*)this_;
}

// [-3] QList<T> operator+(const QList<T> &)
extern "C" Q_DECL_EXPORT
QActionList* C_QActionList_operator_add_0(void* this_ , QActionList* l) {
    // QActionList_operator_add_0()
    auto rv =  ((QActionList*)this_)->operator+(*l);
    return (QActionList*)this_;
}

// [-3] QList<T> & operator+=(const T &)
extern "C" Q_DECL_EXPORT
QActionList* C_QActionList_operator_add_equal_1(void* this_ , QAction * t) {
    // QActionList_operator_add_equal_1()
    auto rv =  ((QActionList*)this_)->operator+=(t);
    return (QActionList*)this_;
}

// [-3] QList<T> & operator<<(const T &)
extern "C" Q_DECL_EXPORT
QActionList* C_QActionList_operator_left_shift_0(void* this_ , QAction * t) {
    // QActionList_operator_left_shift_0()
    auto rv =  ((QActionList*)this_)->operator<<(t);
    return (QActionList*)this_;
}

// [-3] QList<T> & operator<<(const QList<T> &)
extern "C" Q_DECL_EXPORT
QActionList* C_QActionList_operator_left_shift_1(void* this_ , QActionList* l) {
    // QActionList_operator_left_shift_1()
    auto rv =  ((QActionList*)this_)->operator<<(*l);
    return (QActionList*)this_;
}

// [-3] QVector<T> toVector()
extern "C" Q_DECL_EXPORT
void C_QActionList_toVector_0(void* this_ ) {
    // QActionList_toVector_0()
    auto rv =  ((QActionList*)this_)->toVector();
}

// [-3] std::list<T> toStdList()
extern "C" Q_DECL_EXPORT
void C_QActionList_toStdList_0(void* this_ ) {
    // QActionList_toStdList_0()
    auto rv =  ((QActionList*)this_)->toStdList();
}

//  body block end
