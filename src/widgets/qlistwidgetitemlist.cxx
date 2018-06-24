
// /usr/include/qt/QtWidgets/qlistwidget.h
#ifndef protected
#define protected public
#endif
#include <qlistwidget.h>
#include <QtWidgets>
#include "callback_inherit.h"

#ifndef QListWidgetItemList
#ifndef QLISTWIDGETITEMLIST_H
typedef QList<QListWidgetItem *> QListWidgetItemList;
#endif
#endif
//  header block end

//  body block begin
// [-3] QList<T> & operator=(const QList<T> &)
extern "C" Q_DECL_EXPORT
QListWidgetItemList* C_QListWidgetItemList_operator_equal_0(void* this_ , QListWidgetItemList* l) {
    // QListWidgetItemList_operator_equal_0()
    auto rv =  ((QListWidgetItemList*)this_)->operator=(*l);
    return (QListWidgetItemList*)this_;
}

// [-3] QList<T> & operator=(QList<T> &&)
extern "C" Q_DECL_EXPORT
QListWidgetItemList* C_QListWidgetItemList_operator_equal_1(void* this_ , QListWidgetItemList* other) {
    // QListWidgetItemList_operator_equal_1()
    auto rv =  ((QListWidgetItemList*)this_)->operator=(*other);
    return (QListWidgetItemList*)this_;
}

// [-2] void swap(QList<T> &)
extern "C" Q_DECL_EXPORT
void C_QListWidgetItemList_swap_0(void* this_ , QListWidgetItemList* other) {
    // QListWidgetItemList_swap_0()
     ((QListWidgetItemList*)this_)->swap(*other);
}

// [1] bool operator==(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QListWidgetItemList_operator_equal_equal_0(void* this_ , QListWidgetItemList* l) {
    // QListWidgetItemList_operator_equal_equal_0()
    auto rv =  ((QListWidgetItemList*)this_)->operator==(*l);
    return rv;
}

// [1] bool operator!=(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QListWidgetItemList_operator_not_equal_0(void* this_ , QListWidgetItemList* l) {
    // QListWidgetItemList_operator_not_equal_0()
    auto rv =  ((QListWidgetItemList*)this_)->operator!=(*l);
    return rv;
}

// [4] int size()
extern "C" Q_DECL_EXPORT
int C_QListWidgetItemList_size_0(void* this_ ) {
    // QListWidgetItemList_size_0()
    auto rv =  ((QListWidgetItemList*)this_)->size();
    return rv;
}

// [-2] void detach()
extern "C" Q_DECL_EXPORT
void C_QListWidgetItemList_detach_0(void* this_ ) {
    // QListWidgetItemList_detach_0()
     ((QListWidgetItemList*)this_)->detach();
}

// [-2] void detachShared()
extern "C" Q_DECL_EXPORT
void C_QListWidgetItemList_detachShared_0(void* this_ ) {
    // QListWidgetItemList_detachShared_0()
     ((QListWidgetItemList*)this_)->detachShared();
}

// [1] bool isDetached()
extern "C" Q_DECL_EXPORT
bool C_QListWidgetItemList_isDetached_0(void* this_ ) {
    // QListWidgetItemList_isDetached_0()
    auto rv =  ((QListWidgetItemList*)this_)->isDetached();
    return rv;
}

// [-2] void setSharable(bool)
extern "C" Q_DECL_EXPORT
void C_QListWidgetItemList_setSharable_0(void* this_ , bool sharable) {
    // QListWidgetItemList_setSharable_0()
     ((QListWidgetItemList*)this_)->setSharable(sharable);
}

// [1] bool isSharedWith(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QListWidgetItemList_isSharedWith_0(void* this_ , QListWidgetItemList* other) {
    // QListWidgetItemList_isSharedWith_0()
    auto rv =  ((QListWidgetItemList*)this_)->isSharedWith(*other);
    return rv;
}

// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_QListWidgetItemList_isEmpty_0(void* this_ ) {
    // QListWidgetItemList_isEmpty_0()
    auto rv =  ((QListWidgetItemList*)this_)->isEmpty();
    return rv;
}

// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_QListWidgetItemList_clear_0(void* this_ ) {
    // QListWidgetItemList_clear_0()
     ((QListWidgetItemList*)this_)->clear();
}

// [-3] const T & at(int)
extern "C" Q_DECL_EXPORT
QListWidgetItem ** C_QListWidgetItemList_at_0(void* this_ , int i) {
    // QListWidgetItemList_at_0()
    auto rv =  ((QListWidgetItemList*)this_)->at(i);
    return new decltype(rv)(rv);
}

// [-3] const T & operator[](int)
extern "C" Q_DECL_EXPORT
QListWidgetItem ** C_QListWidgetItemList_operator_get_index_0(void* this_ , int i) {
    // QListWidgetItemList_operator_get_index_0()
    auto rv =  ((QListWidgetItemList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-3] T & operator[](int)
extern "C" Q_DECL_EXPORT
QListWidgetItem ** C_QListWidgetItemList_operator_get_index_1(void* this_ , int i) {
    // QListWidgetItemList_operator_get_index_1()
    auto rv =  ((QListWidgetItemList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-2] void reserve(int)
extern "C" Q_DECL_EXPORT
void C_QListWidgetItemList_reserve_0(void* this_ , int size) {
    // QListWidgetItemList_reserve_0()
     ((QListWidgetItemList*)this_)->reserve(size);
}

// [-2] void append(const T &)
extern "C" Q_DECL_EXPORT
void C_QListWidgetItemList_append_0(void* this_ , QListWidgetItem * t) {
    // QListWidgetItemList_append_0()
     ((QListWidgetItemList*)this_)->append(t);
}

// [-2] void append(const QList<T> &)
extern "C" Q_DECL_EXPORT
void C_QListWidgetItemList_append_1(void* this_ , QListWidgetItemList* t) {
    // QListWidgetItemList_append_1()
     ((QListWidgetItemList*)this_)->append(*t);
}

// [-2] void prepend(const T &)
extern "C" Q_DECL_EXPORT
void C_QListWidgetItemList_prepend_0(void* this_ , QListWidgetItem * t) {
    // QListWidgetItemList_prepend_0()
     ((QListWidgetItemList*)this_)->prepend(t);
}

// [-2] void insert(int, const T &)
extern "C" Q_DECL_EXPORT
void C_QListWidgetItemList_insert_0(void* this_ , int i, QListWidgetItem * t) {
    // QListWidgetItemList_insert_0()
     ((QListWidgetItemList*)this_)->insert(i, t);
}

// [-2] void replace(int, const T &)
extern "C" Q_DECL_EXPORT
void C_QListWidgetItemList_replace_0(void* this_ , int i, QListWidgetItem * t) {
    // QListWidgetItemList_replace_0()
     ((QListWidgetItemList*)this_)->replace(i, t);
}

// [-2] void removeAt(int)
extern "C" Q_DECL_EXPORT
void C_QListWidgetItemList_removeAt_0(void* this_ , int i) {
    // QListWidgetItemList_removeAt_0()
     ((QListWidgetItemList*)this_)->removeAt(i);
}

// [4] int removeAll(const T &)
extern "C" Q_DECL_EXPORT
int C_QListWidgetItemList_removeAll_0(void* this_ , QListWidgetItem * t) {
    // QListWidgetItemList_removeAll_0()
    auto rv =  ((QListWidgetItemList*)this_)->removeAll(t);
    return rv;
}

// [1] bool removeOne(const T &)
extern "C" Q_DECL_EXPORT
bool C_QListWidgetItemList_removeOne_0(void* this_ , QListWidgetItem * t) {
    // QListWidgetItemList_removeOne_0()
    auto rv =  ((QListWidgetItemList*)this_)->removeOne(t);
    return rv;
}

// [-3] T takeAt(int)
extern "C" Q_DECL_EXPORT
QListWidgetItem ** C_QListWidgetItemList_takeAt_0(void* this_ , int i) {
    // QListWidgetItemList_takeAt_0()
    auto rv =  ((QListWidgetItemList*)this_)->takeAt(i);
    return new decltype(rv)(rv);
}

// [-3] T takeFirst()
extern "C" Q_DECL_EXPORT
QListWidgetItem ** C_QListWidgetItemList_takeFirst_0(void* this_ ) {
    // QListWidgetItemList_takeFirst_0()
    auto rv =  ((QListWidgetItemList*)this_)->takeFirst();
    return new decltype(rv)(rv);
}

// [-3] T takeLast()
extern "C" Q_DECL_EXPORT
QListWidgetItem ** C_QListWidgetItemList_takeLast_0(void* this_ ) {
    // QListWidgetItemList_takeLast_0()
    auto rv =  ((QListWidgetItemList*)this_)->takeLast();
    return new decltype(rv)(rv);
}

// [-2] void move(int, int)
extern "C" Q_DECL_EXPORT
void C_QListWidgetItemList_move_0(void* this_ , int from, int to) {
    // QListWidgetItemList_move_0()
     ((QListWidgetItemList*)this_)->move(from, to);
}

// [-2] void swap(int, int)
extern "C" Q_DECL_EXPORT
void C_QListWidgetItemList_swap_1(void* this_ , int i, int j) {
    // QListWidgetItemList_swap_1()
     ((QListWidgetItemList*)this_)->swap(i, j);
}

// [4] int indexOf(const T &, int)
extern "C" Q_DECL_EXPORT
int C_QListWidgetItemList_indexOf_0(void* this_ , QListWidgetItem * t, int from) {
    // QListWidgetItemList_indexOf_0()
    auto rv =  ((QListWidgetItemList*)this_)->indexOf(t, from);
    return rv;
}

// [4] int lastIndexOf(const T &, int)
extern "C" Q_DECL_EXPORT
int C_QListWidgetItemList_lastIndexOf_0(void* this_ , QListWidgetItem * t, int from) {
    // QListWidgetItemList_lastIndexOf_0()
    auto rv =  ((QListWidgetItemList*)this_)->lastIndexOf(t, from);
    return rv;
}

// [1] bool contains(const T &)
extern "C" Q_DECL_EXPORT
bool C_QListWidgetItemList_contains_0(void* this_ , QListWidgetItem * t) {
    // QListWidgetItemList_contains_0()
    auto rv =  ((QListWidgetItemList*)this_)->contains(t);
    return rv;
}

// [4] int count(const T &)
extern "C" Q_DECL_EXPORT
int C_QListWidgetItemList_count_0(void* this_ , QListWidgetItem * t) {
    // QListWidgetItemList_count_0()
    auto rv =  ((QListWidgetItemList*)this_)->count(t);
    return rv;
}

// [-3] QList::iterator begin()
extern "C" Q_DECL_EXPORT
QListWidgetItemList::iterator* C_QListWidgetItemList_begin_0(void* this_ ) {
    // QListWidgetItemList_begin_0()
    auto rv =  ((QListWidgetItemList*)this_)->begin();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator end()
extern "C" Q_DECL_EXPORT
QListWidgetItemList::iterator* C_QListWidgetItemList_end_0(void* this_ ) {
    // QListWidgetItemList_end_0()
    auto rv =  ((QListWidgetItemList*)this_)->end();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rbegin()
extern "C" Q_DECL_EXPORT
QListWidgetItemList::reverse_iterator* C_QListWidgetItemList_rbegin_0(void* this_ ) {
    // QListWidgetItemList_rbegin_0()
    auto rv =  ((QListWidgetItemList*)this_)->rbegin();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rend()
extern "C" Q_DECL_EXPORT
QListWidgetItemList::reverse_iterator* C_QListWidgetItemList_rend_0(void* this_ ) {
    // QListWidgetItemList_rend_0()
    auto rv =  ((QListWidgetItemList*)this_)->rend();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator insert(QList::iterator, const T &)
extern "C" Q_DECL_EXPORT
QListWidgetItemList::iterator* C_QListWidgetItemList_insert_1(void* this_ , QListWidgetItemList::iterator* before, QListWidgetItem * t) {
    // QListWidgetItemList_insert_1()
    auto rv =  ((QListWidgetItemList*)this_)->insert(*before, t);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator)
extern "C" Q_DECL_EXPORT
QListWidgetItemList::iterator* C_QListWidgetItemList_erase_0(void* this_ , QListWidgetItemList::iterator* pos) {
    // QListWidgetItemList_erase_0()
    auto rv =  ((QListWidgetItemList*)this_)->erase(*pos);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator, QList::iterator)
extern "C" Q_DECL_EXPORT
QListWidgetItemList::iterator* C_QListWidgetItemList_erase_1(void* this_ , QListWidgetItemList::iterator* first, QListWidgetItemList::iterator* last) {
    // QListWidgetItemList_erase_1()
    auto rv =  ((QListWidgetItemList*)this_)->erase(*first, *last);
    return new decltype(rv)(rv);
}

// [4] int count()
extern "C" Q_DECL_EXPORT
int C_QListWidgetItemList_count_1(void* this_ ) {
    // QListWidgetItemList_count_1()
    auto rv =  ((QListWidgetItemList*)this_)->count();
    return rv;
}

// [4] int length()
extern "C" Q_DECL_EXPORT
int C_QListWidgetItemList_length_0(void* this_ ) {
    // QListWidgetItemList_length_0()
    auto rv =  ((QListWidgetItemList*)this_)->length();
    return rv;
}

// [-3] T & first()
extern "C" Q_DECL_EXPORT
QListWidgetItem ** C_QListWidgetItemList_first_0(void* this_ ) {
    // QListWidgetItemList_first_0()
    auto rv =  ((QListWidgetItemList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] const T & constFirst()
extern "C" Q_DECL_EXPORT
QListWidgetItem ** C_QListWidgetItemList_constFirst_0(void* this_ ) {
    // QListWidgetItemList_constFirst_0()
    auto rv =  ((QListWidgetItemList*)this_)->constFirst();
    return new decltype(rv)(rv);
}

// [-3] const T & first()
extern "C" Q_DECL_EXPORT
QListWidgetItem ** C_QListWidgetItemList_first_1(void* this_ ) {
    // QListWidgetItemList_first_1()
    auto rv =  ((QListWidgetItemList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] T & last()
extern "C" Q_DECL_EXPORT
QListWidgetItem ** C_QListWidgetItemList_last_0(void* this_ ) {
    // QListWidgetItemList_last_0()
    auto rv =  ((QListWidgetItemList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & last()
extern "C" Q_DECL_EXPORT
QListWidgetItem ** C_QListWidgetItemList_last_1(void* this_ ) {
    // QListWidgetItemList_last_1()
    auto rv =  ((QListWidgetItemList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & constLast()
extern "C" Q_DECL_EXPORT
QListWidgetItem ** C_QListWidgetItemList_constLast_0(void* this_ ) {
    // QListWidgetItemList_constLast_0()
    auto rv =  ((QListWidgetItemList*)this_)->constLast();
    return new decltype(rv)(rv);
}

// [-2] void removeFirst()
extern "C" Q_DECL_EXPORT
void C_QListWidgetItemList_removeFirst_0(void* this_ ) {
    // QListWidgetItemList_removeFirst_0()
     ((QListWidgetItemList*)this_)->removeFirst();
}

// [-2] void removeLast()
extern "C" Q_DECL_EXPORT
void C_QListWidgetItemList_removeLast_0(void* this_ ) {
    // QListWidgetItemList_removeLast_0()
     ((QListWidgetItemList*)this_)->removeLast();
}

// [1] bool startsWith(const T &)
extern "C" Q_DECL_EXPORT
bool C_QListWidgetItemList_startsWith_0(void* this_ , QListWidgetItem * t) {
    // QListWidgetItemList_startsWith_0()
    auto rv =  ((QListWidgetItemList*)this_)->startsWith(t);
    return rv;
}

// [1] bool endsWith(const T &)
extern "C" Q_DECL_EXPORT
bool C_QListWidgetItemList_endsWith_0(void* this_ , QListWidgetItem * t) {
    // QListWidgetItemList_endsWith_0()
    auto rv =  ((QListWidgetItemList*)this_)->endsWith(t);
    return rv;
}

// [-3] QList<T> mid(int, int)
extern "C" Q_DECL_EXPORT
QListWidgetItemList* C_QListWidgetItemList_mid_0(void* this_ , int pos, int length) {
    // QListWidgetItemList_mid_0()
    auto rv =  ((QListWidgetItemList*)this_)->mid(pos, length);
    return (QListWidgetItemList*)this_;
}

// [-3] T value(int)
extern "C" Q_DECL_EXPORT
QListWidgetItem ** C_QListWidgetItemList_value_0(void* this_ , int i) {
    // QListWidgetItemList_value_0()
    auto rv =  ((QListWidgetItemList*)this_)->value(i);
    return new decltype(rv)(rv);
}

// [-3] T value(int, const T &)
extern "C" Q_DECL_EXPORT
QListWidgetItem ** C_QListWidgetItemList_value_1(void* this_ , int i, QListWidgetItem * defaultValue) {
    // QListWidgetItemList_value_1()
    auto rv =  ((QListWidgetItemList*)this_)->value(i, defaultValue);
    return new decltype(rv)(rv);
}

// [-2] void push_back(const T &)
extern "C" Q_DECL_EXPORT
void C_QListWidgetItemList_push_back_0(void* this_ , QListWidgetItem * t) {
    // QListWidgetItemList_push_back_0()
     ((QListWidgetItemList*)this_)->push_back(t);
}

// [-2] void push_front(const T &)
extern "C" Q_DECL_EXPORT
void C_QListWidgetItemList_push_front_0(void* this_ , QListWidgetItem * t) {
    // QListWidgetItemList_push_front_0()
     ((QListWidgetItemList*)this_)->push_front(t);
}

// [-3] T & front()
extern "C" Q_DECL_EXPORT
QListWidgetItem ** C_QListWidgetItemList_front_0(void* this_ ) {
    // QListWidgetItemList_front_0()
    auto rv =  ((QListWidgetItemList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] const T & front()
extern "C" Q_DECL_EXPORT
QListWidgetItem ** C_QListWidgetItemList_front_1(void* this_ ) {
    // QListWidgetItemList_front_1()
    auto rv =  ((QListWidgetItemList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] T & back()
extern "C" Q_DECL_EXPORT
QListWidgetItem ** C_QListWidgetItemList_back_0(void* this_ ) {
    // QListWidgetItemList_back_0()
    auto rv =  ((QListWidgetItemList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-3] const T & back()
extern "C" Q_DECL_EXPORT
QListWidgetItem ** C_QListWidgetItemList_back_1(void* this_ ) {
    // QListWidgetItemList_back_1()
    auto rv =  ((QListWidgetItemList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-2] void pop_front()
extern "C" Q_DECL_EXPORT
void C_QListWidgetItemList_pop_front_0(void* this_ ) {
    // QListWidgetItemList_pop_front_0()
     ((QListWidgetItemList*)this_)->pop_front();
}

// [-2] void pop_back()
extern "C" Q_DECL_EXPORT
void C_QListWidgetItemList_pop_back_0(void* this_ ) {
    // QListWidgetItemList_pop_back_0()
     ((QListWidgetItemList*)this_)->pop_back();
}

// [1] bool empty()
extern "C" Q_DECL_EXPORT
bool C_QListWidgetItemList_empty_0(void* this_ ) {
    // QListWidgetItemList_empty_0()
    auto rv =  ((QListWidgetItemList*)this_)->empty();
    return rv;
}

// [-3] QList<T> & operator+=(const QList<T> &)
extern "C" Q_DECL_EXPORT
QListWidgetItemList* C_QListWidgetItemList_operator_add_equal_0(void* this_ , QListWidgetItemList* l) {
    // QListWidgetItemList_operator_add_equal_0()
    auto rv =  ((QListWidgetItemList*)this_)->operator+=(*l);
    return (QListWidgetItemList*)this_;
}

// [-3] QList<T> operator+(const QList<T> &)
extern "C" Q_DECL_EXPORT
QListWidgetItemList* C_QListWidgetItemList_operator_add_0(void* this_ , QListWidgetItemList* l) {
    // QListWidgetItemList_operator_add_0()
    auto rv =  ((QListWidgetItemList*)this_)->operator+(*l);
    return (QListWidgetItemList*)this_;
}

// [-3] QList<T> & operator+=(const T &)
extern "C" Q_DECL_EXPORT
QListWidgetItemList* C_QListWidgetItemList_operator_add_equal_1(void* this_ , QListWidgetItem * t) {
    // QListWidgetItemList_operator_add_equal_1()
    auto rv =  ((QListWidgetItemList*)this_)->operator+=(t);
    return (QListWidgetItemList*)this_;
}

// [-3] QList<T> & operator<<(const T &)
extern "C" Q_DECL_EXPORT
QListWidgetItemList* C_QListWidgetItemList_operator_left_shift_0(void* this_ , QListWidgetItem * t) {
    // QListWidgetItemList_operator_left_shift_0()
    auto rv =  ((QListWidgetItemList*)this_)->operator<<(t);
    return (QListWidgetItemList*)this_;
}

// [-3] QList<T> & operator<<(const QList<T> &)
extern "C" Q_DECL_EXPORT
QListWidgetItemList* C_QListWidgetItemList_operator_left_shift_1(void* this_ , QListWidgetItemList* l) {
    // QListWidgetItemList_operator_left_shift_1()
    auto rv =  ((QListWidgetItemList*)this_)->operator<<(*l);
    return (QListWidgetItemList*)this_;
}

// [-3] QVector<T> toVector()
extern "C" Q_DECL_EXPORT
void C_QListWidgetItemList_toVector_0(void* this_ ) {
    // QListWidgetItemList_toVector_0()
    auto rv =  ((QListWidgetItemList*)this_)->toVector();
}

// [-3] std::list<T> toStdList()
extern "C" Q_DECL_EXPORT
void C_QListWidgetItemList_toStdList_0(void* this_ ) {
    // QListWidgetItemList_toStdList_0()
    auto rv =  ((QListWidgetItemList*)this_)->toStdList();
}

//  body block end
