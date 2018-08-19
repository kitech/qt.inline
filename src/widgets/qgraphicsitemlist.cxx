
// /usr/include/qt/QtWidgets/qgraphicsitem.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgraphicsitem.h>
#include <QtWidgets>
#include "callback_inherit.h"

#ifndef QGraphicsItemList
#ifndef QGRAPHICSITEMLIST_H
typedef QList<QGraphicsItem *> QGraphicsItemList;
#endif
#endif
//  header block end

//  body block begin
// [-3] QList<T> & operator=(const QList<T> &)
extern "C" Q_DECL_EXPORT
QGraphicsItemList* C_QGraphicsItemList_operator_equal_0(void* this_ , QGraphicsItemList* l) {
    // QGraphicsItemList_operator_equal_0()
    auto rv =  ((QGraphicsItemList*)this_)->operator=(*l);
    return (QGraphicsItemList*)this_;
}

// [-3] QList<T> & operator=(QList<T> &&)
extern "C" Q_DECL_EXPORT
QGraphicsItemList* C_QGraphicsItemList_operator_equal_1(void* this_ , QGraphicsItemList* other) {
    // QGraphicsItemList_operator_equal_1()
    auto rv =  ((QGraphicsItemList*)this_)->operator=(*other);
    return (QGraphicsItemList*)this_;
}

// [-2] void swap(QList<T> &)
extern "C" Q_DECL_EXPORT
void C_QGraphicsItemList_swap_0(void* this_ , QGraphicsItemList* other) {
    // QGraphicsItemList_swap_0()
     ((QGraphicsItemList*)this_)->swap(*other);
}

// [1] bool operator==(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QGraphicsItemList_operator_equal_equal_0(void* this_ , QGraphicsItemList* l) {
    // QGraphicsItemList_operator_equal_equal_0()
    auto rv =  ((QGraphicsItemList*)this_)->operator==(*l);
    return rv;
}

// [1] bool operator!=(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QGraphicsItemList_operator_not_equal_0(void* this_ , QGraphicsItemList* l) {
    // QGraphicsItemList_operator_not_equal_0()
    auto rv =  ((QGraphicsItemList*)this_)->operator!=(*l);
    return rv;
}

// [4] int size()
extern "C" Q_DECL_EXPORT
int C_QGraphicsItemList_size_0(void* this_ ) {
    // QGraphicsItemList_size_0()
    auto rv =  ((QGraphicsItemList*)this_)->size();
    return rv;
}

// [-2] void detach()
extern "C" Q_DECL_EXPORT
void C_QGraphicsItemList_detach_0(void* this_ ) {
    // QGraphicsItemList_detach_0()
     ((QGraphicsItemList*)this_)->detach();
}

// [-2] void detachShared()
extern "C" Q_DECL_EXPORT
void C_QGraphicsItemList_detachShared_0(void* this_ ) {
    // QGraphicsItemList_detachShared_0()
     ((QGraphicsItemList*)this_)->detachShared();
}

// [1] bool isDetached()
extern "C" Q_DECL_EXPORT
bool C_QGraphicsItemList_isDetached_0(void* this_ ) {
    // QGraphicsItemList_isDetached_0()
    auto rv =  ((QGraphicsItemList*)this_)->isDetached();
    return rv;
}

// [-2] void setSharable(bool)
extern "C" Q_DECL_EXPORT
void C_QGraphicsItemList_setSharable_0(void* this_ , bool sharable) {
    // QGraphicsItemList_setSharable_0()
     ((QGraphicsItemList*)this_)->setSharable(sharable);
}

// [1] bool isSharedWith(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QGraphicsItemList_isSharedWith_0(void* this_ , QGraphicsItemList* other) {
    // QGraphicsItemList_isSharedWith_0()
    auto rv =  ((QGraphicsItemList*)this_)->isSharedWith(*other);
    return rv;
}

// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_QGraphicsItemList_isEmpty_0(void* this_ ) {
    // QGraphicsItemList_isEmpty_0()
    auto rv =  ((QGraphicsItemList*)this_)->isEmpty();
    return rv;
}

// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_QGraphicsItemList_clear_0(void* this_ ) {
    // QGraphicsItemList_clear_0()
     ((QGraphicsItemList*)this_)->clear();
}

// [-3] const T & at(int)
extern "C" Q_DECL_EXPORT
QGraphicsItem ** C_QGraphicsItemList_at_0(void* this_ , int i) {
    // QGraphicsItemList_at_0()
    auto rv =  ((QGraphicsItemList*)this_)->at(i);
    return new decltype(rv)(rv);
}

// [-3] const T & operator[](int)
extern "C" Q_DECL_EXPORT
QGraphicsItem ** C_QGraphicsItemList_operator_get_index_0(void* this_ , int i) {
    // QGraphicsItemList_operator_get_index_0()
    auto rv =  ((QGraphicsItemList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-3] T & operator[](int)
extern "C" Q_DECL_EXPORT
QGraphicsItem ** C_QGraphicsItemList_operator_get_index_1(void* this_ , int i) {
    // QGraphicsItemList_operator_get_index_1()
    auto rv =  ((QGraphicsItemList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-2] void reserve(int)
extern "C" Q_DECL_EXPORT
void C_QGraphicsItemList_reserve_0(void* this_ , int size) {
    // QGraphicsItemList_reserve_0()
     ((QGraphicsItemList*)this_)->reserve(size);
}

// [-2] void append(const T &)
extern "C" Q_DECL_EXPORT
void C_QGraphicsItemList_append_0(void* this_ , QGraphicsItem * t) {
    // QGraphicsItemList_append_0()
     ((QGraphicsItemList*)this_)->append(t);
}

// [-2] void append(const QList<T> &)
extern "C" Q_DECL_EXPORT
void C_QGraphicsItemList_append_1(void* this_ , QGraphicsItemList* t) {
    // QGraphicsItemList_append_1()
     ((QGraphicsItemList*)this_)->append(*t);
}

// [-2] void prepend(const T &)
extern "C" Q_DECL_EXPORT
void C_QGraphicsItemList_prepend_0(void* this_ , QGraphicsItem * t) {
    // QGraphicsItemList_prepend_0()
     ((QGraphicsItemList*)this_)->prepend(t);
}

// [-2] void insert(int, const T &)
extern "C" Q_DECL_EXPORT
void C_QGraphicsItemList_insert_0(void* this_ , int i, QGraphicsItem * t) {
    // QGraphicsItemList_insert_0()
     ((QGraphicsItemList*)this_)->insert(i, t);
}

// [-2] void replace(int, const T &)
extern "C" Q_DECL_EXPORT
void C_QGraphicsItemList_replace_0(void* this_ , int i, QGraphicsItem * t) {
    // QGraphicsItemList_replace_0()
     ((QGraphicsItemList*)this_)->replace(i, t);
}

// [-2] void removeAt(int)
extern "C" Q_DECL_EXPORT
void C_QGraphicsItemList_removeAt_0(void* this_ , int i) {
    // QGraphicsItemList_removeAt_0()
     ((QGraphicsItemList*)this_)->removeAt(i);
}

// [4] int removeAll(const T &)
extern "C" Q_DECL_EXPORT
int C_QGraphicsItemList_removeAll_0(void* this_ , QGraphicsItem * t) {
    // QGraphicsItemList_removeAll_0()
    auto rv =  ((QGraphicsItemList*)this_)->removeAll(t);
    return rv;
}

// [1] bool removeOne(const T &)
extern "C" Q_DECL_EXPORT
bool C_QGraphicsItemList_removeOne_0(void* this_ , QGraphicsItem * t) {
    // QGraphicsItemList_removeOne_0()
    auto rv =  ((QGraphicsItemList*)this_)->removeOne(t);
    return rv;
}

// [-3] T takeAt(int)
extern "C" Q_DECL_EXPORT
QGraphicsItem ** C_QGraphicsItemList_takeAt_0(void* this_ , int i) {
    // QGraphicsItemList_takeAt_0()
    auto rv =  ((QGraphicsItemList*)this_)->takeAt(i);
    return new decltype(rv)(rv);
}

// [-3] T takeFirst()
extern "C" Q_DECL_EXPORT
QGraphicsItem ** C_QGraphicsItemList_takeFirst_0(void* this_ ) {
    // QGraphicsItemList_takeFirst_0()
    auto rv =  ((QGraphicsItemList*)this_)->takeFirst();
    return new decltype(rv)(rv);
}

// [-3] T takeLast()
extern "C" Q_DECL_EXPORT
QGraphicsItem ** C_QGraphicsItemList_takeLast_0(void* this_ ) {
    // QGraphicsItemList_takeLast_0()
    auto rv =  ((QGraphicsItemList*)this_)->takeLast();
    return new decltype(rv)(rv);
}

// [-2] void move(int, int)
extern "C" Q_DECL_EXPORT
void C_QGraphicsItemList_move_0(void* this_ , int from, int to) {
    // QGraphicsItemList_move_0()
     ((QGraphicsItemList*)this_)->move(from, to);
}

// [-2] void swap(int, int)
extern "C" Q_DECL_EXPORT
void C_QGraphicsItemList_swap_1(void* this_ , int i, int j) {
    // QGraphicsItemList_swap_1()
     ((QGraphicsItemList*)this_)->swap(i, j);
}

// [4] int indexOf(const T &, int)
extern "C" Q_DECL_EXPORT
int C_QGraphicsItemList_indexOf_0(void* this_ , QGraphicsItem * t, int from) {
    // QGraphicsItemList_indexOf_0()
    auto rv =  ((QGraphicsItemList*)this_)->indexOf(t, from);
    return rv;
}

// [4] int lastIndexOf(const T &, int)
extern "C" Q_DECL_EXPORT
int C_QGraphicsItemList_lastIndexOf_0(void* this_ , QGraphicsItem * t, int from) {
    // QGraphicsItemList_lastIndexOf_0()
    auto rv =  ((QGraphicsItemList*)this_)->lastIndexOf(t, from);
    return rv;
}

// [1] bool contains(const T &)
extern "C" Q_DECL_EXPORT
bool C_QGraphicsItemList_contains_0(void* this_ , QGraphicsItem * t) {
    // QGraphicsItemList_contains_0()
    auto rv =  ((QGraphicsItemList*)this_)->contains(t);
    return rv;
}

// [4] int count(const T &)
extern "C" Q_DECL_EXPORT
int C_QGraphicsItemList_count_0(void* this_ , QGraphicsItem * t) {
    // QGraphicsItemList_count_0()
    auto rv =  ((QGraphicsItemList*)this_)->count(t);
    return rv;
}

// [-3] QList::iterator begin()
extern "C" Q_DECL_EXPORT
QGraphicsItemList::iterator* C_QGraphicsItemList_begin_0(void* this_ ) {
    // QGraphicsItemList_begin_0()
    auto rv =  ((QGraphicsItemList*)this_)->begin();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator end()
extern "C" Q_DECL_EXPORT
QGraphicsItemList::iterator* C_QGraphicsItemList_end_0(void* this_ ) {
    // QGraphicsItemList_end_0()
    auto rv =  ((QGraphicsItemList*)this_)->end();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rbegin()
extern "C" Q_DECL_EXPORT
QGraphicsItemList::reverse_iterator* C_QGraphicsItemList_rbegin_0(void* this_ ) {
    // QGraphicsItemList_rbegin_0()
    auto rv =  ((QGraphicsItemList*)this_)->rbegin();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rend()
extern "C" Q_DECL_EXPORT
QGraphicsItemList::reverse_iterator* C_QGraphicsItemList_rend_0(void* this_ ) {
    // QGraphicsItemList_rend_0()
    auto rv =  ((QGraphicsItemList*)this_)->rend();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator insert(QList::iterator, const T &)
extern "C" Q_DECL_EXPORT
QGraphicsItemList::iterator* C_QGraphicsItemList_insert_1(void* this_ , QGraphicsItemList::iterator* before, QGraphicsItem * t) {
    // QGraphicsItemList_insert_1()
    auto rv =  ((QGraphicsItemList*)this_)->insert(*before, t);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator)
extern "C" Q_DECL_EXPORT
QGraphicsItemList::iterator* C_QGraphicsItemList_erase_0(void* this_ , QGraphicsItemList::iterator* pos) {
    // QGraphicsItemList_erase_0()
    auto rv =  ((QGraphicsItemList*)this_)->erase(*pos);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator, QList::iterator)
extern "C" Q_DECL_EXPORT
QGraphicsItemList::iterator* C_QGraphicsItemList_erase_1(void* this_ , QGraphicsItemList::iterator* first, QGraphicsItemList::iterator* last) {
    // QGraphicsItemList_erase_1()
    auto rv =  ((QGraphicsItemList*)this_)->erase(*first, *last);
    return new decltype(rv)(rv);
}

// [4] int count()
extern "C" Q_DECL_EXPORT
int C_QGraphicsItemList_count_1(void* this_ ) {
    // QGraphicsItemList_count_1()
    auto rv =  ((QGraphicsItemList*)this_)->count();
    return rv;
}

// [4] int length()
extern "C" Q_DECL_EXPORT
int C_QGraphicsItemList_length_0(void* this_ ) {
    // QGraphicsItemList_length_0()
    auto rv =  ((QGraphicsItemList*)this_)->length();
    return rv;
}

// [-3] T & first()
extern "C" Q_DECL_EXPORT
QGraphicsItem ** C_QGraphicsItemList_first_0(void* this_ ) {
    // QGraphicsItemList_first_0()
    auto rv =  ((QGraphicsItemList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] const T & constFirst()
extern "C" Q_DECL_EXPORT
QGraphicsItem ** C_QGraphicsItemList_constFirst_0(void* this_ ) {
    // QGraphicsItemList_constFirst_0()
    auto rv =  ((QGraphicsItemList*)this_)->constFirst();
    return new decltype(rv)(rv);
}

// [-3] const T & first()
extern "C" Q_DECL_EXPORT
QGraphicsItem ** C_QGraphicsItemList_first_1(void* this_ ) {
    // QGraphicsItemList_first_1()
    auto rv =  ((QGraphicsItemList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] T & last()
extern "C" Q_DECL_EXPORT
QGraphicsItem ** C_QGraphicsItemList_last_0(void* this_ ) {
    // QGraphicsItemList_last_0()
    auto rv =  ((QGraphicsItemList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & last()
extern "C" Q_DECL_EXPORT
QGraphicsItem ** C_QGraphicsItemList_last_1(void* this_ ) {
    // QGraphicsItemList_last_1()
    auto rv =  ((QGraphicsItemList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & constLast()
extern "C" Q_DECL_EXPORT
QGraphicsItem ** C_QGraphicsItemList_constLast_0(void* this_ ) {
    // QGraphicsItemList_constLast_0()
    auto rv =  ((QGraphicsItemList*)this_)->constLast();
    return new decltype(rv)(rv);
}

// [-2] void removeFirst()
extern "C" Q_DECL_EXPORT
void C_QGraphicsItemList_removeFirst_0(void* this_ ) {
    // QGraphicsItemList_removeFirst_0()
     ((QGraphicsItemList*)this_)->removeFirst();
}

// [-2] void removeLast()
extern "C" Q_DECL_EXPORT
void C_QGraphicsItemList_removeLast_0(void* this_ ) {
    // QGraphicsItemList_removeLast_0()
     ((QGraphicsItemList*)this_)->removeLast();
}

// [1] bool startsWith(const T &)
extern "C" Q_DECL_EXPORT
bool C_QGraphicsItemList_startsWith_0(void* this_ , QGraphicsItem * t) {
    // QGraphicsItemList_startsWith_0()
    auto rv =  ((QGraphicsItemList*)this_)->startsWith(t);
    return rv;
}

// [1] bool endsWith(const T &)
extern "C" Q_DECL_EXPORT
bool C_QGraphicsItemList_endsWith_0(void* this_ , QGraphicsItem * t) {
    // QGraphicsItemList_endsWith_0()
    auto rv =  ((QGraphicsItemList*)this_)->endsWith(t);
    return rv;
}

// [-3] QList<T> mid(int, int)
extern "C" Q_DECL_EXPORT
QGraphicsItemList* C_QGraphicsItemList_mid_0(void* this_ , int pos, int length) {
    // QGraphicsItemList_mid_0()
    auto rv =  ((QGraphicsItemList*)this_)->mid(pos, length);
    return (QGraphicsItemList*)this_;
}

// [-3] T value(int)
extern "C" Q_DECL_EXPORT
QGraphicsItem ** C_QGraphicsItemList_value_0(void* this_ , int i) {
    // QGraphicsItemList_value_0()
    auto rv =  ((QGraphicsItemList*)this_)->value(i);
    return new decltype(rv)(rv);
}

// [-3] T value(int, const T &)
extern "C" Q_DECL_EXPORT
QGraphicsItem ** C_QGraphicsItemList_value_1(void* this_ , int i, QGraphicsItem * defaultValue) {
    // QGraphicsItemList_value_1()
    auto rv =  ((QGraphicsItemList*)this_)->value(i, defaultValue);
    return new decltype(rv)(rv);
}

// [-2] void push_back(const T &)
extern "C" Q_DECL_EXPORT
void C_QGraphicsItemList_push_back_0(void* this_ , QGraphicsItem * t) {
    // QGraphicsItemList_push_back_0()
     ((QGraphicsItemList*)this_)->push_back(t);
}

// [-2] void push_front(const T &)
extern "C" Q_DECL_EXPORT
void C_QGraphicsItemList_push_front_0(void* this_ , QGraphicsItem * t) {
    // QGraphicsItemList_push_front_0()
     ((QGraphicsItemList*)this_)->push_front(t);
}

// [-3] T & front()
extern "C" Q_DECL_EXPORT
QGraphicsItem ** C_QGraphicsItemList_front_0(void* this_ ) {
    // QGraphicsItemList_front_0()
    auto rv =  ((QGraphicsItemList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] const T & front()
extern "C" Q_DECL_EXPORT
QGraphicsItem ** C_QGraphicsItemList_front_1(void* this_ ) {
    // QGraphicsItemList_front_1()
    auto rv =  ((QGraphicsItemList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] T & back()
extern "C" Q_DECL_EXPORT
QGraphicsItem ** C_QGraphicsItemList_back_0(void* this_ ) {
    // QGraphicsItemList_back_0()
    auto rv =  ((QGraphicsItemList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-3] const T & back()
extern "C" Q_DECL_EXPORT
QGraphicsItem ** C_QGraphicsItemList_back_1(void* this_ ) {
    // QGraphicsItemList_back_1()
    auto rv =  ((QGraphicsItemList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-2] void pop_front()
extern "C" Q_DECL_EXPORT
void C_QGraphicsItemList_pop_front_0(void* this_ ) {
    // QGraphicsItemList_pop_front_0()
     ((QGraphicsItemList*)this_)->pop_front();
}

// [-2] void pop_back()
extern "C" Q_DECL_EXPORT
void C_QGraphicsItemList_pop_back_0(void* this_ ) {
    // QGraphicsItemList_pop_back_0()
     ((QGraphicsItemList*)this_)->pop_back();
}

// [1] bool empty()
extern "C" Q_DECL_EXPORT
bool C_QGraphicsItemList_empty_0(void* this_ ) {
    // QGraphicsItemList_empty_0()
    auto rv =  ((QGraphicsItemList*)this_)->empty();
    return rv;
}

// [-3] QList<T> & operator+=(const QList<T> &)
extern "C" Q_DECL_EXPORT
QGraphicsItemList* C_QGraphicsItemList_operator_add_equal_0(void* this_ , QGraphicsItemList* l) {
    // QGraphicsItemList_operator_add_equal_0()
    auto rv =  ((QGraphicsItemList*)this_)->operator+=(*l);
    return (QGraphicsItemList*)this_;
}

// [-3] QList<T> operator+(const QList<T> &)
extern "C" Q_DECL_EXPORT
QGraphicsItemList* C_QGraphicsItemList_operator_add_0(void* this_ , QGraphicsItemList* l) {
    // QGraphicsItemList_operator_add_0()
    auto rv =  ((QGraphicsItemList*)this_)->operator+(*l);
    return (QGraphicsItemList*)this_;
}

// [-3] QList<T> & operator+=(const T &)
extern "C" Q_DECL_EXPORT
QGraphicsItemList* C_QGraphicsItemList_operator_add_equal_1(void* this_ , QGraphicsItem * t) {
    // QGraphicsItemList_operator_add_equal_1()
    auto rv =  ((QGraphicsItemList*)this_)->operator+=(t);
    return (QGraphicsItemList*)this_;
}

// [-3] QList<T> & operator<<(const T &)
extern "C" Q_DECL_EXPORT
QGraphicsItemList* C_QGraphicsItemList_operator_left_shift_0(void* this_ , QGraphicsItem * t) {
    // QGraphicsItemList_operator_left_shift_0()
    auto rv =  ((QGraphicsItemList*)this_)->operator<<(t);
    return (QGraphicsItemList*)this_;
}

// [-3] QList<T> & operator<<(const QList<T> &)
extern "C" Q_DECL_EXPORT
QGraphicsItemList* C_QGraphicsItemList_operator_left_shift_1(void* this_ , QGraphicsItemList* l) {
    // QGraphicsItemList_operator_left_shift_1()
    auto rv =  ((QGraphicsItemList*)this_)->operator<<(*l);
    return (QGraphicsItemList*)this_;
}

// [-3] QVector<T> toVector()
extern "C" Q_DECL_EXPORT
void C_QGraphicsItemList_toVector_0(void* this_ ) {
    // QGraphicsItemList_toVector_0()
    auto rv =  ((QGraphicsItemList*)this_)->toVector();
}

// [-3] std::list<T> toStdList()
extern "C" Q_DECL_EXPORT
void C_QGraphicsItemList_toStdList_0(void* this_ ) {
    // QGraphicsItemList_toStdList_0()
    auto rv =  ((QGraphicsItemList*)this_)->toStdList();
}

//  body block end
