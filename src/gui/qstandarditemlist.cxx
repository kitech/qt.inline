
#ifndef QT_MINIMAL
#include <QtGui/qtguiglobal.h>
#if QT_CONFIG(standarditemmodel)
// /usr/include/qt/QtGui/qstandarditemmodel.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstandarditemmodel.h>
#include <QtGui>
#include "callback_inherit.h"

#ifndef QStandardItemList
#ifndef QSTANDARDITEMLIST_H
typedef QList<QStandardItem *> QStandardItemList;
#endif
#endif
//  header block end

//  footer block begin
#endif // #if QT_CONFIG(standarditemmodel)
#endif // #ifndef QT_MINIMAL
//  footer block end

//  body block begin
// [-3] QList<T> & operator=(const QList<T> &)
extern "C" Q_DECL_EXPORT
QStandardItemList* C_QStandardItemList_operator_equal_0(void* this_ , QStandardItemList* l) {
    // QStandardItemList_operator_equal_0()
    auto rv =  ((QStandardItemList*)this_)->operator=(*l);
    return (QStandardItemList*)this_;
}

// [-3] QList<T> & operator=(QList<T> &&)
extern "C" Q_DECL_EXPORT
QStandardItemList* C_QStandardItemList_operator_equal_1(void* this_ , QStandardItemList* other) {
    // QStandardItemList_operator_equal_1()
    auto rv =  ((QStandardItemList*)this_)->operator=(*other);
    return (QStandardItemList*)this_;
}

// [-2] void swap(QList<T> &)
extern "C" Q_DECL_EXPORT
void C_QStandardItemList_swap_0(void* this_ , QStandardItemList* other) {
    // QStandardItemList_swap_0()
     ((QStandardItemList*)this_)->swap(*other);
}

// [1] bool operator==(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QStandardItemList_operator_equal_equal_0(void* this_ , QStandardItemList* l) {
    // QStandardItemList_operator_equal_equal_0()
    auto rv =  ((QStandardItemList*)this_)->operator==(*l);
    return rv;
}

// [1] bool operator!=(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QStandardItemList_operator_not_equal_0(void* this_ , QStandardItemList* l) {
    // QStandardItemList_operator_not_equal_0()
    auto rv =  ((QStandardItemList*)this_)->operator!=(*l);
    return rv;
}

// [4] int size()
extern "C" Q_DECL_EXPORT
int C_QStandardItemList_size_0(void* this_ ) {
    // QStandardItemList_size_0()
    auto rv =  ((QStandardItemList*)this_)->size();
    return rv;
}

// [-2] void detach()
extern "C" Q_DECL_EXPORT
void C_QStandardItemList_detach_0(void* this_ ) {
    // QStandardItemList_detach_0()
     ((QStandardItemList*)this_)->detach();
}

// [-2] void detachShared()
extern "C" Q_DECL_EXPORT
void C_QStandardItemList_detachShared_0(void* this_ ) {
    // QStandardItemList_detachShared_0()
     ((QStandardItemList*)this_)->detachShared();
}

// [1] bool isDetached()
extern "C" Q_DECL_EXPORT
bool C_QStandardItemList_isDetached_0(void* this_ ) {
    // QStandardItemList_isDetached_0()
    auto rv =  ((QStandardItemList*)this_)->isDetached();
    return rv;
}

// [-2] void setSharable(bool)
extern "C" Q_DECL_EXPORT
void C_QStandardItemList_setSharable_0(void* this_ , bool sharable) {
    // QStandardItemList_setSharable_0()
     ((QStandardItemList*)this_)->setSharable(sharable);
}

// [1] bool isSharedWith(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QStandardItemList_isSharedWith_0(void* this_ , QStandardItemList* other) {
    // QStandardItemList_isSharedWith_0()
    auto rv =  ((QStandardItemList*)this_)->isSharedWith(*other);
    return rv;
}

// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_QStandardItemList_isEmpty_0(void* this_ ) {
    // QStandardItemList_isEmpty_0()
    auto rv =  ((QStandardItemList*)this_)->isEmpty();
    return rv;
}

// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_QStandardItemList_clear_0(void* this_ ) {
    // QStandardItemList_clear_0()
     ((QStandardItemList*)this_)->clear();
}

// [-3] const T & at(int)
extern "C" Q_DECL_EXPORT
QStandardItem ** C_QStandardItemList_at_0(void* this_ , int i) {
    // QStandardItemList_at_0()
    auto rv =  ((QStandardItemList*)this_)->at(i);
    return new decltype(rv)(rv);
}

// [-3] const T & operator[](int)
extern "C" Q_DECL_EXPORT
QStandardItem ** C_QStandardItemList_operator_get_index_0(void* this_ , int i) {
    // QStandardItemList_operator_get_index_0()
    auto rv =  ((QStandardItemList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-3] T & operator[](int)
extern "C" Q_DECL_EXPORT
QStandardItem ** C_QStandardItemList_operator_get_index_1(void* this_ , int i) {
    // QStandardItemList_operator_get_index_1()
    auto rv =  ((QStandardItemList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-2] void reserve(int)
extern "C" Q_DECL_EXPORT
void C_QStandardItemList_reserve_0(void* this_ , int size) {
    // QStandardItemList_reserve_0()
     ((QStandardItemList*)this_)->reserve(size);
}

// [-2] void append(const T &)
extern "C" Q_DECL_EXPORT
void C_QStandardItemList_append_0(void* this_ , QStandardItem * t) {
    // QStandardItemList_append_0()
     ((QStandardItemList*)this_)->append(t);
}

// [-2] void append(const QList<T> &)
extern "C" Q_DECL_EXPORT
void C_QStandardItemList_append_1(void* this_ , QStandardItemList* t) {
    // QStandardItemList_append_1()
     ((QStandardItemList*)this_)->append(*t);
}

// [-2] void prepend(const T &)
extern "C" Q_DECL_EXPORT
void C_QStandardItemList_prepend_0(void* this_ , QStandardItem * t) {
    // QStandardItemList_prepend_0()
     ((QStandardItemList*)this_)->prepend(t);
}

// [-2] void insert(int, const T &)
extern "C" Q_DECL_EXPORT
void C_QStandardItemList_insert_0(void* this_ , int i, QStandardItem * t) {
    // QStandardItemList_insert_0()
     ((QStandardItemList*)this_)->insert(i, t);
}

// [-2] void replace(int, const T &)
extern "C" Q_DECL_EXPORT
void C_QStandardItemList_replace_0(void* this_ , int i, QStandardItem * t) {
    // QStandardItemList_replace_0()
     ((QStandardItemList*)this_)->replace(i, t);
}

// [-2] void removeAt(int)
extern "C" Q_DECL_EXPORT
void C_QStandardItemList_removeAt_0(void* this_ , int i) {
    // QStandardItemList_removeAt_0()
     ((QStandardItemList*)this_)->removeAt(i);
}

// [4] int removeAll(const T &)
extern "C" Q_DECL_EXPORT
int C_QStandardItemList_removeAll_0(void* this_ , QStandardItem * t) {
    // QStandardItemList_removeAll_0()
    auto rv =  ((QStandardItemList*)this_)->removeAll(t);
    return rv;
}

// [1] bool removeOne(const T &)
extern "C" Q_DECL_EXPORT
bool C_QStandardItemList_removeOne_0(void* this_ , QStandardItem * t) {
    // QStandardItemList_removeOne_0()
    auto rv =  ((QStandardItemList*)this_)->removeOne(t);
    return rv;
}

// [-3] T takeAt(int)
extern "C" Q_DECL_EXPORT
QStandardItem ** C_QStandardItemList_takeAt_0(void* this_ , int i) {
    // QStandardItemList_takeAt_0()
    auto rv =  ((QStandardItemList*)this_)->takeAt(i);
    return new decltype(rv)(rv);
}

// [-3] T takeFirst()
extern "C" Q_DECL_EXPORT
QStandardItem ** C_QStandardItemList_takeFirst_0(void* this_ ) {
    // QStandardItemList_takeFirst_0()
    auto rv =  ((QStandardItemList*)this_)->takeFirst();
    return new decltype(rv)(rv);
}

// [-3] T takeLast()
extern "C" Q_DECL_EXPORT
QStandardItem ** C_QStandardItemList_takeLast_0(void* this_ ) {
    // QStandardItemList_takeLast_0()
    auto rv =  ((QStandardItemList*)this_)->takeLast();
    return new decltype(rv)(rv);
}

// [-2] void move(int, int)
extern "C" Q_DECL_EXPORT
void C_QStandardItemList_move_0(void* this_ , int from, int to) {
    // QStandardItemList_move_0()
     ((QStandardItemList*)this_)->move(from, to);
}

// [-2] void swapItemsAt(int, int)
extern "C" Q_DECL_EXPORT
void C_QStandardItemList_swapItemsAt_0(void* this_ , int i, int j) {
    // QStandardItemList_swapItemsAt_0()
     ((QStandardItemList*)this_)->swapItemsAt(i, j);
}

// [-2] void swap(int, int)
extern "C" Q_DECL_EXPORT
void C_QStandardItemList_swap_1(void* this_ , int i, int j) {
    // QStandardItemList_swap_1()
     ((QStandardItemList*)this_)->swap(i, j);
}

// [4] int indexOf(const T &, int)
extern "C" Q_DECL_EXPORT
int C_QStandardItemList_indexOf_0(void* this_ , QStandardItem * t, int from) {
    // QStandardItemList_indexOf_0()
    auto rv =  ((QStandardItemList*)this_)->indexOf(t, from);
    return rv;
}

// [4] int lastIndexOf(const T &, int)
extern "C" Q_DECL_EXPORT
int C_QStandardItemList_lastIndexOf_0(void* this_ , QStandardItem * t, int from) {
    // QStandardItemList_lastIndexOf_0()
    auto rv =  ((QStandardItemList*)this_)->lastIndexOf(t, from);
    return rv;
}

// [1] bool contains(const T &)
extern "C" Q_DECL_EXPORT
bool C_QStandardItemList_contains_0(void* this_ , QStandardItem * t) {
    // QStandardItemList_contains_0()
    auto rv =  ((QStandardItemList*)this_)->contains(t);
    return rv;
}

// [4] int count(const T &)
extern "C" Q_DECL_EXPORT
int C_QStandardItemList_count_0(void* this_ , QStandardItem * t) {
    // QStandardItemList_count_0()
    auto rv =  ((QStandardItemList*)this_)->count(t);
    return rv;
}

// [-3] QList::iterator begin()
extern "C" Q_DECL_EXPORT
QStandardItemList::iterator* C_QStandardItemList_begin_0(void* this_ ) {
    // QStandardItemList_begin_0()
    auto rv =  ((QStandardItemList*)this_)->begin();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator end()
extern "C" Q_DECL_EXPORT
QStandardItemList::iterator* C_QStandardItemList_end_0(void* this_ ) {
    // QStandardItemList_end_0()
    auto rv =  ((QStandardItemList*)this_)->end();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rbegin()
extern "C" Q_DECL_EXPORT
QStandardItemList::reverse_iterator* C_QStandardItemList_rbegin_0(void* this_ ) {
    // QStandardItemList_rbegin_0()
    auto rv =  ((QStandardItemList*)this_)->rbegin();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rend()
extern "C" Q_DECL_EXPORT
QStandardItemList::reverse_iterator* C_QStandardItemList_rend_0(void* this_ ) {
    // QStandardItemList_rend_0()
    auto rv =  ((QStandardItemList*)this_)->rend();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator insert(QList::iterator, const T &)
extern "C" Q_DECL_EXPORT
QStandardItemList::iterator* C_QStandardItemList_insert_1(void* this_ , QStandardItemList::iterator* before, QStandardItem * t) {
    // QStandardItemList_insert_1()
    auto rv =  ((QStandardItemList*)this_)->insert(*before, t);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator)
extern "C" Q_DECL_EXPORT
QStandardItemList::iterator* C_QStandardItemList_erase_0(void* this_ , QStandardItemList::iterator* pos) {
    // QStandardItemList_erase_0()
    auto rv =  ((QStandardItemList*)this_)->erase(*pos);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator, QList::iterator)
extern "C" Q_DECL_EXPORT
QStandardItemList::iterator* C_QStandardItemList_erase_1(void* this_ , QStandardItemList::iterator* first, QStandardItemList::iterator* last) {
    // QStandardItemList_erase_1()
    auto rv =  ((QStandardItemList*)this_)->erase(*first, *last);
    return new decltype(rv)(rv);
}

// [4] int count()
extern "C" Q_DECL_EXPORT
int C_QStandardItemList_count_1(void* this_ ) {
    // QStandardItemList_count_1()
    auto rv =  ((QStandardItemList*)this_)->count();
    return rv;
}

// [4] int length()
extern "C" Q_DECL_EXPORT
int C_QStandardItemList_length_0(void* this_ ) {
    // QStandardItemList_length_0()
    auto rv =  ((QStandardItemList*)this_)->length();
    return rv;
}

// [-3] T & first()
extern "C" Q_DECL_EXPORT
QStandardItem ** C_QStandardItemList_first_0(void* this_ ) {
    // QStandardItemList_first_0()
    auto rv =  ((QStandardItemList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] const T & constFirst()
extern "C" Q_DECL_EXPORT
QStandardItem ** C_QStandardItemList_constFirst_0(void* this_ ) {
    // QStandardItemList_constFirst_0()
    auto rv =  ((QStandardItemList*)this_)->constFirst();
    return new decltype(rv)(rv);
}

// [-3] const T & first()
extern "C" Q_DECL_EXPORT
QStandardItem ** C_QStandardItemList_first_1(void* this_ ) {
    // QStandardItemList_first_1()
    auto rv =  ((QStandardItemList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] T & last()
extern "C" Q_DECL_EXPORT
QStandardItem ** C_QStandardItemList_last_0(void* this_ ) {
    // QStandardItemList_last_0()
    auto rv =  ((QStandardItemList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & last()
extern "C" Q_DECL_EXPORT
QStandardItem ** C_QStandardItemList_last_1(void* this_ ) {
    // QStandardItemList_last_1()
    auto rv =  ((QStandardItemList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & constLast()
extern "C" Q_DECL_EXPORT
QStandardItem ** C_QStandardItemList_constLast_0(void* this_ ) {
    // QStandardItemList_constLast_0()
    auto rv =  ((QStandardItemList*)this_)->constLast();
    return new decltype(rv)(rv);
}

// [-2] void removeFirst()
extern "C" Q_DECL_EXPORT
void C_QStandardItemList_removeFirst_0(void* this_ ) {
    // QStandardItemList_removeFirst_0()
     ((QStandardItemList*)this_)->removeFirst();
}

// [-2] void removeLast()
extern "C" Q_DECL_EXPORT
void C_QStandardItemList_removeLast_0(void* this_ ) {
    // QStandardItemList_removeLast_0()
     ((QStandardItemList*)this_)->removeLast();
}

// [1] bool startsWith(const T &)
extern "C" Q_DECL_EXPORT
bool C_QStandardItemList_startsWith_0(void* this_ , QStandardItem * t) {
    // QStandardItemList_startsWith_0()
    auto rv =  ((QStandardItemList*)this_)->startsWith(t);
    return rv;
}

// [1] bool endsWith(const T &)
extern "C" Q_DECL_EXPORT
bool C_QStandardItemList_endsWith_0(void* this_ , QStandardItem * t) {
    // QStandardItemList_endsWith_0()
    auto rv =  ((QStandardItemList*)this_)->endsWith(t);
    return rv;
}

// [-3] QList<T> mid(int, int)
extern "C" Q_DECL_EXPORT
QStandardItemList* C_QStandardItemList_mid_0(void* this_ , int pos, int length) {
    // QStandardItemList_mid_0()
    auto rv =  ((QStandardItemList*)this_)->mid(pos, length);
    return (QStandardItemList*)this_;
}

// [-3] T value(int)
extern "C" Q_DECL_EXPORT
QStandardItem ** C_QStandardItemList_value_0(void* this_ , int i) {
    // QStandardItemList_value_0()
    auto rv =  ((QStandardItemList*)this_)->value(i);
    return new decltype(rv)(rv);
}

// [-3] T value(int, const T &)
extern "C" Q_DECL_EXPORT
QStandardItem ** C_QStandardItemList_value_1(void* this_ , int i, QStandardItem * defaultValue) {
    // QStandardItemList_value_1()
    auto rv =  ((QStandardItemList*)this_)->value(i, defaultValue);
    return new decltype(rv)(rv);
}

// [-2] void push_back(const T &)
extern "C" Q_DECL_EXPORT
void C_QStandardItemList_push_back_0(void* this_ , QStandardItem * t) {
    // QStandardItemList_push_back_0()
     ((QStandardItemList*)this_)->push_back(t);
}

// [-2] void push_front(const T &)
extern "C" Q_DECL_EXPORT
void C_QStandardItemList_push_front_0(void* this_ , QStandardItem * t) {
    // QStandardItemList_push_front_0()
     ((QStandardItemList*)this_)->push_front(t);
}

// [-3] T & front()
extern "C" Q_DECL_EXPORT
QStandardItem ** C_QStandardItemList_front_0(void* this_ ) {
    // QStandardItemList_front_0()
    auto rv =  ((QStandardItemList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] const T & front()
extern "C" Q_DECL_EXPORT
QStandardItem ** C_QStandardItemList_front_1(void* this_ ) {
    // QStandardItemList_front_1()
    auto rv =  ((QStandardItemList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] T & back()
extern "C" Q_DECL_EXPORT
QStandardItem ** C_QStandardItemList_back_0(void* this_ ) {
    // QStandardItemList_back_0()
    auto rv =  ((QStandardItemList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-3] const T & back()
extern "C" Q_DECL_EXPORT
QStandardItem ** C_QStandardItemList_back_1(void* this_ ) {
    // QStandardItemList_back_1()
    auto rv =  ((QStandardItemList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-2] void pop_front()
extern "C" Q_DECL_EXPORT
void C_QStandardItemList_pop_front_0(void* this_ ) {
    // QStandardItemList_pop_front_0()
     ((QStandardItemList*)this_)->pop_front();
}

// [-2] void pop_back()
extern "C" Q_DECL_EXPORT
void C_QStandardItemList_pop_back_0(void* this_ ) {
    // QStandardItemList_pop_back_0()
     ((QStandardItemList*)this_)->pop_back();
}

// [1] bool empty()
extern "C" Q_DECL_EXPORT
bool C_QStandardItemList_empty_0(void* this_ ) {
    // QStandardItemList_empty_0()
    auto rv =  ((QStandardItemList*)this_)->empty();
    return rv;
}

// [-3] QList<T> & operator+=(const QList<T> &)
extern "C" Q_DECL_EXPORT
QStandardItemList* C_QStandardItemList_operator_add_equal_0(void* this_ , QStandardItemList* l) {
    // QStandardItemList_operator_add_equal_0()
    auto rv =  ((QStandardItemList*)this_)->operator+=(*l);
    return (QStandardItemList*)this_;
}

// [-3] QList<T> operator+(const QList<T> &)
extern "C" Q_DECL_EXPORT
QStandardItemList* C_QStandardItemList_operator_add_0(void* this_ , QStandardItemList* l) {
    // QStandardItemList_operator_add_0()
    auto rv =  ((QStandardItemList*)this_)->operator+(*l);
    return (QStandardItemList*)this_;
}

// [-3] QList<T> & operator+=(const T &)
extern "C" Q_DECL_EXPORT
QStandardItemList* C_QStandardItemList_operator_add_equal_1(void* this_ , QStandardItem * t) {
    // QStandardItemList_operator_add_equal_1()
    auto rv =  ((QStandardItemList*)this_)->operator+=(t);
    return (QStandardItemList*)this_;
}

// [-3] QList<T> & operator<<(const T &)
extern "C" Q_DECL_EXPORT
QStandardItemList* C_QStandardItemList_operator_left_shift_0(void* this_ , QStandardItem * t) {
    // QStandardItemList_operator_left_shift_0()
    auto rv =  ((QStandardItemList*)this_)->operator<<(t);
    return (QStandardItemList*)this_;
}

// [-3] QList<T> & operator<<(const QList<T> &)
extern "C" Q_DECL_EXPORT
QStandardItemList* C_QStandardItemList_operator_left_shift_1(void* this_ , QStandardItemList* l) {
    // QStandardItemList_operator_left_shift_1()
    auto rv =  ((QStandardItemList*)this_)->operator<<(*l);
    return (QStandardItemList*)this_;
}

// [-3] QVector<T> toVector()
extern "C" Q_DECL_EXPORT
void C_QStandardItemList_toVector_0(void* this_ ) {
    // QStandardItemList_toVector_0()
    auto rv =  ((QStandardItemList*)this_)->toVector();
}

// [-3] std::list<T> toStdList()
extern "C" Q_DECL_EXPORT
void C_QStandardItemList_toStdList_0(void* this_ ) {
    // QStandardItemList_toStdList_0()
    auto rv =  ((QStandardItemList*)this_)->toStdList();
}

//  body block end
