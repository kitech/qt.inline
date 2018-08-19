
// /usr/include/qt/QtCore/qabstractitemmodel.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qabstractitemmodel.h>
#include <QtCore>
#include "callback_inherit.h"

#ifndef QModelIndexList
#ifndef QMODELINDEXLIST_H
typedef QList<QModelIndex> QModelIndexList;
#endif
#endif
//  header block end

//  body block begin
// [-3] QList<T> & operator=(const QList<T> &)
extern "C" Q_DECL_EXPORT
QModelIndexList* C_QModelIndexList_operator_equal_0(void* this_ , QModelIndexList* l) {
    // QModelIndexList_operator_equal_0()
    auto rv =  ((QModelIndexList*)this_)->operator=(*l);
    return (QModelIndexList*)this_;
}

// [-3] QList<T> & operator=(QList<T> &&)
extern "C" Q_DECL_EXPORT
QModelIndexList* C_QModelIndexList_operator_equal_1(void* this_ , QModelIndexList* other) {
    // QModelIndexList_operator_equal_1()
    auto rv =  ((QModelIndexList*)this_)->operator=(*other);
    return (QModelIndexList*)this_;
}

// [-2] void swap(QList<T> &)
extern "C" Q_DECL_EXPORT
void C_QModelIndexList_swap_0(void* this_ , QModelIndexList* other) {
    // QModelIndexList_swap_0()
     ((QModelIndexList*)this_)->swap(*other);
}

// [1] bool operator==(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QModelIndexList_operator_equal_equal_0(void* this_ , QModelIndexList* l) {
    // QModelIndexList_operator_equal_equal_0()
    auto rv =  ((QModelIndexList*)this_)->operator==(*l);
    return rv;
}

// [1] bool operator!=(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QModelIndexList_operator_not_equal_0(void* this_ , QModelIndexList* l) {
    // QModelIndexList_operator_not_equal_0()
    auto rv =  ((QModelIndexList*)this_)->operator!=(*l);
    return rv;
}

// [4] int size()
extern "C" Q_DECL_EXPORT
int C_QModelIndexList_size_0(void* this_ ) {
    // QModelIndexList_size_0()
    auto rv =  ((QModelIndexList*)this_)->size();
    return rv;
}

// [-2] void detach()
extern "C" Q_DECL_EXPORT
void C_QModelIndexList_detach_0(void* this_ ) {
    // QModelIndexList_detach_0()
     ((QModelIndexList*)this_)->detach();
}

// [-2] void detachShared()
extern "C" Q_DECL_EXPORT
void C_QModelIndexList_detachShared_0(void* this_ ) {
    // QModelIndexList_detachShared_0()
     ((QModelIndexList*)this_)->detachShared();
}

// [1] bool isDetached()
extern "C" Q_DECL_EXPORT
bool C_QModelIndexList_isDetached_0(void* this_ ) {
    // QModelIndexList_isDetached_0()
    auto rv =  ((QModelIndexList*)this_)->isDetached();
    return rv;
}

// [-2] void setSharable(bool)
extern "C" Q_DECL_EXPORT
void C_QModelIndexList_setSharable_0(void* this_ , bool sharable) {
    // QModelIndexList_setSharable_0()
     ((QModelIndexList*)this_)->setSharable(sharable);
}

// [1] bool isSharedWith(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QModelIndexList_isSharedWith_0(void* this_ , QModelIndexList* other) {
    // QModelIndexList_isSharedWith_0()
    auto rv =  ((QModelIndexList*)this_)->isSharedWith(*other);
    return rv;
}

// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_QModelIndexList_isEmpty_0(void* this_ ) {
    // QModelIndexList_isEmpty_0()
    auto rv =  ((QModelIndexList*)this_)->isEmpty();
    return rv;
}

// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_QModelIndexList_clear_0(void* this_ ) {
    // QModelIndexList_clear_0()
     ((QModelIndexList*)this_)->clear();
}

// [-3] const T & at(int)
extern "C" Q_DECL_EXPORT
QModelIndex* C_QModelIndexList_at_0(void* this_ , int i) {
    // QModelIndexList_at_0()
    auto rv =  ((QModelIndexList*)this_)->at(i);
    return new decltype(rv)(rv);
}

// [-3] const T & operator[](int)
extern "C" Q_DECL_EXPORT
QModelIndex* C_QModelIndexList_operator_get_index_0(void* this_ , int i) {
    // QModelIndexList_operator_get_index_0()
    auto rv =  ((QModelIndexList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-3] T & operator[](int)
extern "C" Q_DECL_EXPORT
QModelIndex* C_QModelIndexList_operator_get_index_1(void* this_ , int i) {
    // QModelIndexList_operator_get_index_1()
    auto rv =  ((QModelIndexList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-2] void reserve(int)
extern "C" Q_DECL_EXPORT
void C_QModelIndexList_reserve_0(void* this_ , int size) {
    // QModelIndexList_reserve_0()
     ((QModelIndexList*)this_)->reserve(size);
}

// [-2] void append(const T &)
extern "C" Q_DECL_EXPORT
void C_QModelIndexList_append_0(void* this_ , QModelIndex* t) {
    // QModelIndexList_append_0()
     ((QModelIndexList*)this_)->append(*t);
}

// [-2] void append(const QList<T> &)
extern "C" Q_DECL_EXPORT
void C_QModelIndexList_append_1(void* this_ , QModelIndexList* t) {
    // QModelIndexList_append_1()
     ((QModelIndexList*)this_)->append(*t);
}

// [-2] void prepend(const T &)
extern "C" Q_DECL_EXPORT
void C_QModelIndexList_prepend_0(void* this_ , QModelIndex* t) {
    // QModelIndexList_prepend_0()
     ((QModelIndexList*)this_)->prepend(*t);
}

// [-2] void insert(int, const T &)
extern "C" Q_DECL_EXPORT
void C_QModelIndexList_insert_0(void* this_ , int i, QModelIndex* t) {
    // QModelIndexList_insert_0()
     ((QModelIndexList*)this_)->insert(i, *t);
}

// [-2] void replace(int, const T &)
extern "C" Q_DECL_EXPORT
void C_QModelIndexList_replace_0(void* this_ , int i, QModelIndex* t) {
    // QModelIndexList_replace_0()
     ((QModelIndexList*)this_)->replace(i, *t);
}

// [-2] void removeAt(int)
extern "C" Q_DECL_EXPORT
void C_QModelIndexList_removeAt_0(void* this_ , int i) {
    // QModelIndexList_removeAt_0()
     ((QModelIndexList*)this_)->removeAt(i);
}

// [4] int removeAll(const T &)
extern "C" Q_DECL_EXPORT
int C_QModelIndexList_removeAll_0(void* this_ , QModelIndex* t) {
    // QModelIndexList_removeAll_0()
    auto rv =  ((QModelIndexList*)this_)->removeAll(*t);
    return rv;
}

// [1] bool removeOne(const T &)
extern "C" Q_DECL_EXPORT
bool C_QModelIndexList_removeOne_0(void* this_ , QModelIndex* t) {
    // QModelIndexList_removeOne_0()
    auto rv =  ((QModelIndexList*)this_)->removeOne(*t);
    return rv;
}

// [-3] T takeAt(int)
extern "C" Q_DECL_EXPORT
QModelIndex* C_QModelIndexList_takeAt_0(void* this_ , int i) {
    // QModelIndexList_takeAt_0()
    auto rv =  ((QModelIndexList*)this_)->takeAt(i);
    return new decltype(rv)(rv);
}

// [-3] T takeFirst()
extern "C" Q_DECL_EXPORT
QModelIndex* C_QModelIndexList_takeFirst_0(void* this_ ) {
    // QModelIndexList_takeFirst_0()
    auto rv =  ((QModelIndexList*)this_)->takeFirst();
    return new decltype(rv)(rv);
}

// [-3] T takeLast()
extern "C" Q_DECL_EXPORT
QModelIndex* C_QModelIndexList_takeLast_0(void* this_ ) {
    // QModelIndexList_takeLast_0()
    auto rv =  ((QModelIndexList*)this_)->takeLast();
    return new decltype(rv)(rv);
}

// [-2] void move(int, int)
extern "C" Q_DECL_EXPORT
void C_QModelIndexList_move_0(void* this_ , int from, int to) {
    // QModelIndexList_move_0()
     ((QModelIndexList*)this_)->move(from, to);
}

// [-2] void swap(int, int)
extern "C" Q_DECL_EXPORT
void C_QModelIndexList_swap_1(void* this_ , int i, int j) {
    // QModelIndexList_swap_1()
     ((QModelIndexList*)this_)->swap(i, j);
}

// [4] int indexOf(const T &, int)
extern "C" Q_DECL_EXPORT
int C_QModelIndexList_indexOf_0(void* this_ , QModelIndex* t, int from) {
    // QModelIndexList_indexOf_0()
    auto rv =  ((QModelIndexList*)this_)->indexOf(*t, from);
    return rv;
}

// [4] int lastIndexOf(const T &, int)
extern "C" Q_DECL_EXPORT
int C_QModelIndexList_lastIndexOf_0(void* this_ , QModelIndex* t, int from) {
    // QModelIndexList_lastIndexOf_0()
    auto rv =  ((QModelIndexList*)this_)->lastIndexOf(*t, from);
    return rv;
}

// [1] bool contains(const T &)
extern "C" Q_DECL_EXPORT
bool C_QModelIndexList_contains_0(void* this_ , QModelIndex* t) {
    // QModelIndexList_contains_0()
    auto rv =  ((QModelIndexList*)this_)->contains(*t);
    return rv;
}

// [4] int count(const T &)
extern "C" Q_DECL_EXPORT
int C_QModelIndexList_count_0(void* this_ , QModelIndex* t) {
    // QModelIndexList_count_0()
    auto rv =  ((QModelIndexList*)this_)->count(*t);
    return rv;
}

// [-3] QList::iterator begin()
extern "C" Q_DECL_EXPORT
QModelIndexList::iterator* C_QModelIndexList_begin_0(void* this_ ) {
    // QModelIndexList_begin_0()
    auto rv =  ((QModelIndexList*)this_)->begin();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator end()
extern "C" Q_DECL_EXPORT
QModelIndexList::iterator* C_QModelIndexList_end_0(void* this_ ) {
    // QModelIndexList_end_0()
    auto rv =  ((QModelIndexList*)this_)->end();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rbegin()
extern "C" Q_DECL_EXPORT
QModelIndexList::reverse_iterator* C_QModelIndexList_rbegin_0(void* this_ ) {
    // QModelIndexList_rbegin_0()
    auto rv =  ((QModelIndexList*)this_)->rbegin();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rend()
extern "C" Q_DECL_EXPORT
QModelIndexList::reverse_iterator* C_QModelIndexList_rend_0(void* this_ ) {
    // QModelIndexList_rend_0()
    auto rv =  ((QModelIndexList*)this_)->rend();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator insert(QList::iterator, const T &)
extern "C" Q_DECL_EXPORT
QModelIndexList::iterator* C_QModelIndexList_insert_1(void* this_ , QModelIndexList::iterator* before, QModelIndex* t) {
    // QModelIndexList_insert_1()
    auto rv =  ((QModelIndexList*)this_)->insert(*before, *t);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator)
extern "C" Q_DECL_EXPORT
QModelIndexList::iterator* C_QModelIndexList_erase_0(void* this_ , QModelIndexList::iterator* pos) {
    // QModelIndexList_erase_0()
    auto rv =  ((QModelIndexList*)this_)->erase(*pos);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator, QList::iterator)
extern "C" Q_DECL_EXPORT
QModelIndexList::iterator* C_QModelIndexList_erase_1(void* this_ , QModelIndexList::iterator* first, QModelIndexList::iterator* last) {
    // QModelIndexList_erase_1()
    auto rv =  ((QModelIndexList*)this_)->erase(*first, *last);
    return new decltype(rv)(rv);
}

// [4] int count()
extern "C" Q_DECL_EXPORT
int C_QModelIndexList_count_1(void* this_ ) {
    // QModelIndexList_count_1()
    auto rv =  ((QModelIndexList*)this_)->count();
    return rv;
}

// [4] int length()
extern "C" Q_DECL_EXPORT
int C_QModelIndexList_length_0(void* this_ ) {
    // QModelIndexList_length_0()
    auto rv =  ((QModelIndexList*)this_)->length();
    return rv;
}

// [-3] T & first()
extern "C" Q_DECL_EXPORT
QModelIndex* C_QModelIndexList_first_0(void* this_ ) {
    // QModelIndexList_first_0()
    auto rv =  ((QModelIndexList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] const T & constFirst()
extern "C" Q_DECL_EXPORT
QModelIndex* C_QModelIndexList_constFirst_0(void* this_ ) {
    // QModelIndexList_constFirst_0()
    auto rv =  ((QModelIndexList*)this_)->constFirst();
    return new decltype(rv)(rv);
}

// [-3] const T & first()
extern "C" Q_DECL_EXPORT
QModelIndex* C_QModelIndexList_first_1(void* this_ ) {
    // QModelIndexList_first_1()
    auto rv =  ((QModelIndexList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] T & last()
extern "C" Q_DECL_EXPORT
QModelIndex* C_QModelIndexList_last_0(void* this_ ) {
    // QModelIndexList_last_0()
    auto rv =  ((QModelIndexList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & last()
extern "C" Q_DECL_EXPORT
QModelIndex* C_QModelIndexList_last_1(void* this_ ) {
    // QModelIndexList_last_1()
    auto rv =  ((QModelIndexList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & constLast()
extern "C" Q_DECL_EXPORT
QModelIndex* C_QModelIndexList_constLast_0(void* this_ ) {
    // QModelIndexList_constLast_0()
    auto rv =  ((QModelIndexList*)this_)->constLast();
    return new decltype(rv)(rv);
}

// [-2] void removeFirst()
extern "C" Q_DECL_EXPORT
void C_QModelIndexList_removeFirst_0(void* this_ ) {
    // QModelIndexList_removeFirst_0()
     ((QModelIndexList*)this_)->removeFirst();
}

// [-2] void removeLast()
extern "C" Q_DECL_EXPORT
void C_QModelIndexList_removeLast_0(void* this_ ) {
    // QModelIndexList_removeLast_0()
     ((QModelIndexList*)this_)->removeLast();
}

// [1] bool startsWith(const T &)
extern "C" Q_DECL_EXPORT
bool C_QModelIndexList_startsWith_0(void* this_ , QModelIndex* t) {
    // QModelIndexList_startsWith_0()
    auto rv =  ((QModelIndexList*)this_)->startsWith(*t);
    return rv;
}

// [1] bool endsWith(const T &)
extern "C" Q_DECL_EXPORT
bool C_QModelIndexList_endsWith_0(void* this_ , QModelIndex* t) {
    // QModelIndexList_endsWith_0()
    auto rv =  ((QModelIndexList*)this_)->endsWith(*t);
    return rv;
}

// [-3] QList<T> mid(int, int)
extern "C" Q_DECL_EXPORT
QModelIndexList* C_QModelIndexList_mid_0(void* this_ , int pos, int length) {
    // QModelIndexList_mid_0()
    auto rv =  ((QModelIndexList*)this_)->mid(pos, length);
    return (QModelIndexList*)this_;
}

// [-3] T value(int)
extern "C" Q_DECL_EXPORT
QModelIndex* C_QModelIndexList_value_0(void* this_ , int i) {
    // QModelIndexList_value_0()
    auto rv =  ((QModelIndexList*)this_)->value(i);
    return new decltype(rv)(rv);
}

// [-3] T value(int, const T &)
extern "C" Q_DECL_EXPORT
QModelIndex* C_QModelIndexList_value_1(void* this_ , int i, QModelIndex* defaultValue) {
    // QModelIndexList_value_1()
    auto rv =  ((QModelIndexList*)this_)->value(i, *defaultValue);
    return new decltype(rv)(rv);
}

// [-2] void push_back(const T &)
extern "C" Q_DECL_EXPORT
void C_QModelIndexList_push_back_0(void* this_ , QModelIndex* t) {
    // QModelIndexList_push_back_0()
     ((QModelIndexList*)this_)->push_back(*t);
}

// [-2] void push_front(const T &)
extern "C" Q_DECL_EXPORT
void C_QModelIndexList_push_front_0(void* this_ , QModelIndex* t) {
    // QModelIndexList_push_front_0()
     ((QModelIndexList*)this_)->push_front(*t);
}

// [-3] T & front()
extern "C" Q_DECL_EXPORT
QModelIndex* C_QModelIndexList_front_0(void* this_ ) {
    // QModelIndexList_front_0()
    auto rv =  ((QModelIndexList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] const T & front()
extern "C" Q_DECL_EXPORT
QModelIndex* C_QModelIndexList_front_1(void* this_ ) {
    // QModelIndexList_front_1()
    auto rv =  ((QModelIndexList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] T & back()
extern "C" Q_DECL_EXPORT
QModelIndex* C_QModelIndexList_back_0(void* this_ ) {
    // QModelIndexList_back_0()
    auto rv =  ((QModelIndexList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-3] const T & back()
extern "C" Q_DECL_EXPORT
QModelIndex* C_QModelIndexList_back_1(void* this_ ) {
    // QModelIndexList_back_1()
    auto rv =  ((QModelIndexList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-2] void pop_front()
extern "C" Q_DECL_EXPORT
void C_QModelIndexList_pop_front_0(void* this_ ) {
    // QModelIndexList_pop_front_0()
     ((QModelIndexList*)this_)->pop_front();
}

// [-2] void pop_back()
extern "C" Q_DECL_EXPORT
void C_QModelIndexList_pop_back_0(void* this_ ) {
    // QModelIndexList_pop_back_0()
     ((QModelIndexList*)this_)->pop_back();
}

// [1] bool empty()
extern "C" Q_DECL_EXPORT
bool C_QModelIndexList_empty_0(void* this_ ) {
    // QModelIndexList_empty_0()
    auto rv =  ((QModelIndexList*)this_)->empty();
    return rv;
}

// [-3] QList<T> & operator+=(const QList<T> &)
extern "C" Q_DECL_EXPORT
QModelIndexList* C_QModelIndexList_operator_add_equal_0(void* this_ , QModelIndexList* l) {
    // QModelIndexList_operator_add_equal_0()
    auto rv =  ((QModelIndexList*)this_)->operator+=(*l);
    return (QModelIndexList*)this_;
}

// [-3] QList<T> operator+(const QList<T> &)
extern "C" Q_DECL_EXPORT
QModelIndexList* C_QModelIndexList_operator_add_0(void* this_ , QModelIndexList* l) {
    // QModelIndexList_operator_add_0()
    auto rv =  ((QModelIndexList*)this_)->operator+(*l);
    return (QModelIndexList*)this_;
}

// [-3] QList<T> & operator+=(const T &)
extern "C" Q_DECL_EXPORT
QModelIndexList* C_QModelIndexList_operator_add_equal_1(void* this_ , QModelIndex* t) {
    // QModelIndexList_operator_add_equal_1()
    auto rv =  ((QModelIndexList*)this_)->operator+=(*t);
    return (QModelIndexList*)this_;
}

// [-3] QList<T> & operator<<(const T &)
extern "C" Q_DECL_EXPORT
QModelIndexList* C_QModelIndexList_operator_left_shift_0(void* this_ , QModelIndex* t) {
    // QModelIndexList_operator_left_shift_0()
    auto rv =  ((QModelIndexList*)this_)->operator<<(*t);
    return (QModelIndexList*)this_;
}

// [-3] QList<T> & operator<<(const QList<T> &)
extern "C" Q_DECL_EXPORT
QModelIndexList* C_QModelIndexList_operator_left_shift_1(void* this_ , QModelIndexList* l) {
    // QModelIndexList_operator_left_shift_1()
    auto rv =  ((QModelIndexList*)this_)->operator<<(*l);
    return (QModelIndexList*)this_;
}

// [-3] QVector<T> toVector()
extern "C" Q_DECL_EXPORT
void C_QModelIndexList_toVector_0(void* this_ ) {
    // QModelIndexList_toVector_0()
    auto rv =  ((QModelIndexList*)this_)->toVector();
}

// [-3] std::list<T> toStdList()
extern "C" Q_DECL_EXPORT
void C_QModelIndexList_toStdList_0(void* this_ ) {
    // QModelIndexList_toStdList_0()
    auto rv =  ((QModelIndexList*)this_)->toStdList();
}

//  body block end
