
// /usr/include/qt/QtQuick/qquickitem.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qquickitem.h>
#include <QtQuick>
#include "callback_inherit.h"

#ifndef QQuickItemList
#ifndef QQUICKITEMLIST_H
typedef QList<QQuickItem *> QQuickItemList;
#endif
#endif
//  header block end

//  body block begin
// [-3] QList<T> & operator=(const QList<T> &)
extern "C" Q_DECL_EXPORT
QQuickItemList* C_QQuickItemList_operator_equal_0(void* this_ , QQuickItemList* l) {
    // QQuickItemList_operator_equal_0()
    auto rv =  ((QQuickItemList*)this_)->operator=(*l);
    return (QQuickItemList*)this_;
}

// [-3] QList<T> & operator=(QList<T> &&)
extern "C" Q_DECL_EXPORT
QQuickItemList* C_QQuickItemList_operator_equal_1(void* this_ , QQuickItemList* other) {
    // QQuickItemList_operator_equal_1()
    auto rv =  ((QQuickItemList*)this_)->operator=(*other);
    return (QQuickItemList*)this_;
}

// [-2] void swap(QList<T> &)
extern "C" Q_DECL_EXPORT
void C_QQuickItemList_swap_0(void* this_ , QQuickItemList* other) {
    // QQuickItemList_swap_0()
     ((QQuickItemList*)this_)->swap(*other);
}

// [1] bool operator==(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QQuickItemList_operator_equal_equal_0(void* this_ , QQuickItemList* l) {
    // QQuickItemList_operator_equal_equal_0()
    auto rv =  ((QQuickItemList*)this_)->operator==(*l);
    return rv;
}

// [1] bool operator!=(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QQuickItemList_operator_not_equal_0(void* this_ , QQuickItemList* l) {
    // QQuickItemList_operator_not_equal_0()
    auto rv =  ((QQuickItemList*)this_)->operator!=(*l);
    return rv;
}

// [4] int size()
extern "C" Q_DECL_EXPORT
int C_QQuickItemList_size_0(void* this_ ) {
    // QQuickItemList_size_0()
    auto rv =  ((QQuickItemList*)this_)->size();
    return rv;
}

// [-2] void detach()
extern "C" Q_DECL_EXPORT
void C_QQuickItemList_detach_0(void* this_ ) {
    // QQuickItemList_detach_0()
     ((QQuickItemList*)this_)->detach();
}

// [-2] void detachShared()
extern "C" Q_DECL_EXPORT
void C_QQuickItemList_detachShared_0(void* this_ ) {
    // QQuickItemList_detachShared_0()
     ((QQuickItemList*)this_)->detachShared();
}

// [1] bool isDetached()
extern "C" Q_DECL_EXPORT
bool C_QQuickItemList_isDetached_0(void* this_ ) {
    // QQuickItemList_isDetached_0()
    auto rv =  ((QQuickItemList*)this_)->isDetached();
    return rv;
}

// [-2] void setSharable(bool)
extern "C" Q_DECL_EXPORT
void C_QQuickItemList_setSharable_0(void* this_ , bool sharable) {
    // QQuickItemList_setSharable_0()
     ((QQuickItemList*)this_)->setSharable(sharable);
}

// [1] bool isSharedWith(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QQuickItemList_isSharedWith_0(void* this_ , QQuickItemList* other) {
    // QQuickItemList_isSharedWith_0()
    auto rv =  ((QQuickItemList*)this_)->isSharedWith(*other);
    return rv;
}

// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_QQuickItemList_isEmpty_0(void* this_ ) {
    // QQuickItemList_isEmpty_0()
    auto rv =  ((QQuickItemList*)this_)->isEmpty();
    return rv;
}

// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_QQuickItemList_clear_0(void* this_ ) {
    // QQuickItemList_clear_0()
     ((QQuickItemList*)this_)->clear();
}

// [-3] const T & at(int)
extern "C" Q_DECL_EXPORT
QQuickItem ** C_QQuickItemList_at_0(void* this_ , int i) {
    // QQuickItemList_at_0()
    auto rv =  ((QQuickItemList*)this_)->at(i);
    return new decltype(rv)(rv);
}

// [-3] const T & operator[](int)
extern "C" Q_DECL_EXPORT
QQuickItem ** C_QQuickItemList_operator_get_index_0(void* this_ , int i) {
    // QQuickItemList_operator_get_index_0()
    auto rv =  ((QQuickItemList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-3] T & operator[](int)
extern "C" Q_DECL_EXPORT
QQuickItem ** C_QQuickItemList_operator_get_index_1(void* this_ , int i) {
    // QQuickItemList_operator_get_index_1()
    auto rv =  ((QQuickItemList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-2] void reserve(int)
extern "C" Q_DECL_EXPORT
void C_QQuickItemList_reserve_0(void* this_ , int size) {
    // QQuickItemList_reserve_0()
     ((QQuickItemList*)this_)->reserve(size);
}

// [-2] void append(const T &)
extern "C" Q_DECL_EXPORT
void C_QQuickItemList_append_0(void* this_ , QQuickItem * t) {
    // QQuickItemList_append_0()
     ((QQuickItemList*)this_)->append(t);
}

// [-2] void append(const QList<T> &)
extern "C" Q_DECL_EXPORT
void C_QQuickItemList_append_1(void* this_ , QQuickItemList* t) {
    // QQuickItemList_append_1()
     ((QQuickItemList*)this_)->append(*t);
}

// [-2] void prepend(const T &)
extern "C" Q_DECL_EXPORT
void C_QQuickItemList_prepend_0(void* this_ , QQuickItem * t) {
    // QQuickItemList_prepend_0()
     ((QQuickItemList*)this_)->prepend(t);
}

// [-2] void insert(int, const T &)
extern "C" Q_DECL_EXPORT
void C_QQuickItemList_insert_0(void* this_ , int i, QQuickItem * t) {
    // QQuickItemList_insert_0()
     ((QQuickItemList*)this_)->insert(i, t);
}

// [-2] void replace(int, const T &)
extern "C" Q_DECL_EXPORT
void C_QQuickItemList_replace_0(void* this_ , int i, QQuickItem * t) {
    // QQuickItemList_replace_0()
     ((QQuickItemList*)this_)->replace(i, t);
}

// [-2] void removeAt(int)
extern "C" Q_DECL_EXPORT
void C_QQuickItemList_removeAt_0(void* this_ , int i) {
    // QQuickItemList_removeAt_0()
     ((QQuickItemList*)this_)->removeAt(i);
}

// [4] int removeAll(const T &)
extern "C" Q_DECL_EXPORT
int C_QQuickItemList_removeAll_0(void* this_ , QQuickItem * t) {
    // QQuickItemList_removeAll_0()
    auto rv =  ((QQuickItemList*)this_)->removeAll(t);
    return rv;
}

// [1] bool removeOne(const T &)
extern "C" Q_DECL_EXPORT
bool C_QQuickItemList_removeOne_0(void* this_ , QQuickItem * t) {
    // QQuickItemList_removeOne_0()
    auto rv =  ((QQuickItemList*)this_)->removeOne(t);
    return rv;
}

// [-3] T takeAt(int)
extern "C" Q_DECL_EXPORT
QQuickItem ** C_QQuickItemList_takeAt_0(void* this_ , int i) {
    // QQuickItemList_takeAt_0()
    auto rv =  ((QQuickItemList*)this_)->takeAt(i);
    return new decltype(rv)(rv);
}

// [-3] T takeFirst()
extern "C" Q_DECL_EXPORT
QQuickItem ** C_QQuickItemList_takeFirst_0(void* this_ ) {
    // QQuickItemList_takeFirst_0()
    auto rv =  ((QQuickItemList*)this_)->takeFirst();
    return new decltype(rv)(rv);
}

// [-3] T takeLast()
extern "C" Q_DECL_EXPORT
QQuickItem ** C_QQuickItemList_takeLast_0(void* this_ ) {
    // QQuickItemList_takeLast_0()
    auto rv =  ((QQuickItemList*)this_)->takeLast();
    return new decltype(rv)(rv);
}

// [-2] void move(int, int)
extern "C" Q_DECL_EXPORT
void C_QQuickItemList_move_0(void* this_ , int from, int to) {
    // QQuickItemList_move_0()
     ((QQuickItemList*)this_)->move(from, to);
}

// [-2] void swap(int, int)
extern "C" Q_DECL_EXPORT
void C_QQuickItemList_swap_1(void* this_ , int i, int j) {
    // QQuickItemList_swap_1()
     ((QQuickItemList*)this_)->swap(i, j);
}

// [4] int indexOf(const T &, int)
extern "C" Q_DECL_EXPORT
int C_QQuickItemList_indexOf_0(void* this_ , QQuickItem * t, int from) {
    // QQuickItemList_indexOf_0()
    auto rv =  ((QQuickItemList*)this_)->indexOf(t, from);
    return rv;
}

// [4] int lastIndexOf(const T &, int)
extern "C" Q_DECL_EXPORT
int C_QQuickItemList_lastIndexOf_0(void* this_ , QQuickItem * t, int from) {
    // QQuickItemList_lastIndexOf_0()
    auto rv =  ((QQuickItemList*)this_)->lastIndexOf(t, from);
    return rv;
}

// [1] bool contains(const T &)
extern "C" Q_DECL_EXPORT
bool C_QQuickItemList_contains_0(void* this_ , QQuickItem * t) {
    // QQuickItemList_contains_0()
    auto rv =  ((QQuickItemList*)this_)->contains(t);
    return rv;
}

// [4] int count(const T &)
extern "C" Q_DECL_EXPORT
int C_QQuickItemList_count_0(void* this_ , QQuickItem * t) {
    // QQuickItemList_count_0()
    auto rv =  ((QQuickItemList*)this_)->count(t);
    return rv;
}

// [-3] QList::iterator begin()
extern "C" Q_DECL_EXPORT
QQuickItemList::iterator* C_QQuickItemList_begin_0(void* this_ ) {
    // QQuickItemList_begin_0()
    auto rv =  ((QQuickItemList*)this_)->begin();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator end()
extern "C" Q_DECL_EXPORT
QQuickItemList::iterator* C_QQuickItemList_end_0(void* this_ ) {
    // QQuickItemList_end_0()
    auto rv =  ((QQuickItemList*)this_)->end();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rbegin()
extern "C" Q_DECL_EXPORT
QQuickItemList::reverse_iterator* C_QQuickItemList_rbegin_0(void* this_ ) {
    // QQuickItemList_rbegin_0()
    auto rv =  ((QQuickItemList*)this_)->rbegin();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rend()
extern "C" Q_DECL_EXPORT
QQuickItemList::reverse_iterator* C_QQuickItemList_rend_0(void* this_ ) {
    // QQuickItemList_rend_0()
    auto rv =  ((QQuickItemList*)this_)->rend();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator insert(QList::iterator, const T &)
extern "C" Q_DECL_EXPORT
QQuickItemList::iterator* C_QQuickItemList_insert_1(void* this_ , QQuickItemList::iterator* before, QQuickItem * t) {
    // QQuickItemList_insert_1()
    auto rv =  ((QQuickItemList*)this_)->insert(*before, t);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator)
extern "C" Q_DECL_EXPORT
QQuickItemList::iterator* C_QQuickItemList_erase_0(void* this_ , QQuickItemList::iterator* pos) {
    // QQuickItemList_erase_0()
    auto rv =  ((QQuickItemList*)this_)->erase(*pos);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator, QList::iterator)
extern "C" Q_DECL_EXPORT
QQuickItemList::iterator* C_QQuickItemList_erase_1(void* this_ , QQuickItemList::iterator* first, QQuickItemList::iterator* last) {
    // QQuickItemList_erase_1()
    auto rv =  ((QQuickItemList*)this_)->erase(*first, *last);
    return new decltype(rv)(rv);
}

// [4] int count()
extern "C" Q_DECL_EXPORT
int C_QQuickItemList_count_1(void* this_ ) {
    // QQuickItemList_count_1()
    auto rv =  ((QQuickItemList*)this_)->count();
    return rv;
}

// [4] int length()
extern "C" Q_DECL_EXPORT
int C_QQuickItemList_length_0(void* this_ ) {
    // QQuickItemList_length_0()
    auto rv =  ((QQuickItemList*)this_)->length();
    return rv;
}

// [-3] T & first()
extern "C" Q_DECL_EXPORT
QQuickItem ** C_QQuickItemList_first_0(void* this_ ) {
    // QQuickItemList_first_0()
    auto rv =  ((QQuickItemList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] const T & constFirst()
extern "C" Q_DECL_EXPORT
QQuickItem ** C_QQuickItemList_constFirst_0(void* this_ ) {
    // QQuickItemList_constFirst_0()
    auto rv =  ((QQuickItemList*)this_)->constFirst();
    return new decltype(rv)(rv);
}

// [-3] const T & first()
extern "C" Q_DECL_EXPORT
QQuickItem ** C_QQuickItemList_first_1(void* this_ ) {
    // QQuickItemList_first_1()
    auto rv =  ((QQuickItemList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] T & last()
extern "C" Q_DECL_EXPORT
QQuickItem ** C_QQuickItemList_last_0(void* this_ ) {
    // QQuickItemList_last_0()
    auto rv =  ((QQuickItemList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & last()
extern "C" Q_DECL_EXPORT
QQuickItem ** C_QQuickItemList_last_1(void* this_ ) {
    // QQuickItemList_last_1()
    auto rv =  ((QQuickItemList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & constLast()
extern "C" Q_DECL_EXPORT
QQuickItem ** C_QQuickItemList_constLast_0(void* this_ ) {
    // QQuickItemList_constLast_0()
    auto rv =  ((QQuickItemList*)this_)->constLast();
    return new decltype(rv)(rv);
}

// [-2] void removeFirst()
extern "C" Q_DECL_EXPORT
void C_QQuickItemList_removeFirst_0(void* this_ ) {
    // QQuickItemList_removeFirst_0()
     ((QQuickItemList*)this_)->removeFirst();
}

// [-2] void removeLast()
extern "C" Q_DECL_EXPORT
void C_QQuickItemList_removeLast_0(void* this_ ) {
    // QQuickItemList_removeLast_0()
     ((QQuickItemList*)this_)->removeLast();
}

// [1] bool startsWith(const T &)
extern "C" Q_DECL_EXPORT
bool C_QQuickItemList_startsWith_0(void* this_ , QQuickItem * t) {
    // QQuickItemList_startsWith_0()
    auto rv =  ((QQuickItemList*)this_)->startsWith(t);
    return rv;
}

// [1] bool endsWith(const T &)
extern "C" Q_DECL_EXPORT
bool C_QQuickItemList_endsWith_0(void* this_ , QQuickItem * t) {
    // QQuickItemList_endsWith_0()
    auto rv =  ((QQuickItemList*)this_)->endsWith(t);
    return rv;
}

// [-3] QList<T> mid(int, int)
extern "C" Q_DECL_EXPORT
QQuickItemList* C_QQuickItemList_mid_0(void* this_ , int pos, int length) {
    // QQuickItemList_mid_0()
    auto rv =  ((QQuickItemList*)this_)->mid(pos, length);
    return (QQuickItemList*)this_;
}

// [-3] T value(int)
extern "C" Q_DECL_EXPORT
QQuickItem ** C_QQuickItemList_value_0(void* this_ , int i) {
    // QQuickItemList_value_0()
    auto rv =  ((QQuickItemList*)this_)->value(i);
    return new decltype(rv)(rv);
}

// [-3] T value(int, const T &)
extern "C" Q_DECL_EXPORT
QQuickItem ** C_QQuickItemList_value_1(void* this_ , int i, QQuickItem * defaultValue) {
    // QQuickItemList_value_1()
    auto rv =  ((QQuickItemList*)this_)->value(i, defaultValue);
    return new decltype(rv)(rv);
}

// [-2] void push_back(const T &)
extern "C" Q_DECL_EXPORT
void C_QQuickItemList_push_back_0(void* this_ , QQuickItem * t) {
    // QQuickItemList_push_back_0()
     ((QQuickItemList*)this_)->push_back(t);
}

// [-2] void push_front(const T &)
extern "C" Q_DECL_EXPORT
void C_QQuickItemList_push_front_0(void* this_ , QQuickItem * t) {
    // QQuickItemList_push_front_0()
     ((QQuickItemList*)this_)->push_front(t);
}

// [-3] T & front()
extern "C" Q_DECL_EXPORT
QQuickItem ** C_QQuickItemList_front_0(void* this_ ) {
    // QQuickItemList_front_0()
    auto rv =  ((QQuickItemList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] const T & front()
extern "C" Q_DECL_EXPORT
QQuickItem ** C_QQuickItemList_front_1(void* this_ ) {
    // QQuickItemList_front_1()
    auto rv =  ((QQuickItemList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] T & back()
extern "C" Q_DECL_EXPORT
QQuickItem ** C_QQuickItemList_back_0(void* this_ ) {
    // QQuickItemList_back_0()
    auto rv =  ((QQuickItemList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-3] const T & back()
extern "C" Q_DECL_EXPORT
QQuickItem ** C_QQuickItemList_back_1(void* this_ ) {
    // QQuickItemList_back_1()
    auto rv =  ((QQuickItemList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-2] void pop_front()
extern "C" Q_DECL_EXPORT
void C_QQuickItemList_pop_front_0(void* this_ ) {
    // QQuickItemList_pop_front_0()
     ((QQuickItemList*)this_)->pop_front();
}

// [-2] void pop_back()
extern "C" Q_DECL_EXPORT
void C_QQuickItemList_pop_back_0(void* this_ ) {
    // QQuickItemList_pop_back_0()
     ((QQuickItemList*)this_)->pop_back();
}

// [1] bool empty()
extern "C" Q_DECL_EXPORT
bool C_QQuickItemList_empty_0(void* this_ ) {
    // QQuickItemList_empty_0()
    auto rv =  ((QQuickItemList*)this_)->empty();
    return rv;
}

// [-3] QList<T> & operator+=(const QList<T> &)
extern "C" Q_DECL_EXPORT
QQuickItemList* C_QQuickItemList_operator_add_equal_0(void* this_ , QQuickItemList* l) {
    // QQuickItemList_operator_add_equal_0()
    auto rv =  ((QQuickItemList*)this_)->operator+=(*l);
    return (QQuickItemList*)this_;
}

// [-3] QList<T> operator+(const QList<T> &)
extern "C" Q_DECL_EXPORT
QQuickItemList* C_QQuickItemList_operator_add_0(void* this_ , QQuickItemList* l) {
    // QQuickItemList_operator_add_0()
    auto rv =  ((QQuickItemList*)this_)->operator+(*l);
    return (QQuickItemList*)this_;
}

// [-3] QList<T> & operator+=(const T &)
extern "C" Q_DECL_EXPORT
QQuickItemList* C_QQuickItemList_operator_add_equal_1(void* this_ , QQuickItem * t) {
    // QQuickItemList_operator_add_equal_1()
    auto rv =  ((QQuickItemList*)this_)->operator+=(t);
    return (QQuickItemList*)this_;
}

// [-3] QList<T> & operator<<(const T &)
extern "C" Q_DECL_EXPORT
QQuickItemList* C_QQuickItemList_operator_left_shift_0(void* this_ , QQuickItem * t) {
    // QQuickItemList_operator_left_shift_0()
    auto rv =  ((QQuickItemList*)this_)->operator<<(t);
    return (QQuickItemList*)this_;
}

// [-3] QList<T> & operator<<(const QList<T> &)
extern "C" Q_DECL_EXPORT
QQuickItemList* C_QQuickItemList_operator_left_shift_1(void* this_ , QQuickItemList* l) {
    // QQuickItemList_operator_left_shift_1()
    auto rv =  ((QQuickItemList*)this_)->operator<<(*l);
    return (QQuickItemList*)this_;
}

// [-3] QVector<T> toVector()
extern "C" Q_DECL_EXPORT
void C_QQuickItemList_toVector_0(void* this_ ) {
    // QQuickItemList_toVector_0()
    auto rv =  ((QQuickItemList*)this_)->toVector();
}

// [-3] std::list<T> toStdList()
extern "C" Q_DECL_EXPORT
void C_QQuickItemList_toStdList_0(void* this_ ) {
    // QQuickItemList_toStdList_0()
    auto rv =  ((QQuickItemList*)this_)->toStdList();
}

//  body block end
