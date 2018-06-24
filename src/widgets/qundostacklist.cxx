
// /usr/include/qt/QtWidgets/qundostack.h
#ifndef protected
#define protected public
#endif
#include <qundostack.h>
#include <QtWidgets>
#include "callback_inherit.h"

#ifndef QUndoStackList
#ifndef QUNDOSTACKLIST_H
typedef QList<QUndoStack *> QUndoStackList;
#endif
#endif
//  header block end

//  body block begin
// [-3] QList<T> & operator=(const QList<T> &)
extern "C" Q_DECL_EXPORT
QUndoStackList* C_QUndoStackList_operator_equal_0(void* this_ , QUndoStackList* l) {
    // QUndoStackList_operator_equal_0()
    auto rv =  ((QUndoStackList*)this_)->operator=(*l);
    return (QUndoStackList*)this_;
}

// [-3] QList<T> & operator=(QList<T> &&)
extern "C" Q_DECL_EXPORT
QUndoStackList* C_QUndoStackList_operator_equal_1(void* this_ , QUndoStackList* other) {
    // QUndoStackList_operator_equal_1()
    auto rv =  ((QUndoStackList*)this_)->operator=(*other);
    return (QUndoStackList*)this_;
}

// [-2] void swap(QList<T> &)
extern "C" Q_DECL_EXPORT
void C_QUndoStackList_swap_0(void* this_ , QUndoStackList* other) {
    // QUndoStackList_swap_0()
     ((QUndoStackList*)this_)->swap(*other);
}

// [1] bool operator==(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QUndoStackList_operator_equal_equal_0(void* this_ , QUndoStackList* l) {
    // QUndoStackList_operator_equal_equal_0()
    auto rv =  ((QUndoStackList*)this_)->operator==(*l);
    return rv;
}

// [1] bool operator!=(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QUndoStackList_operator_not_equal_0(void* this_ , QUndoStackList* l) {
    // QUndoStackList_operator_not_equal_0()
    auto rv =  ((QUndoStackList*)this_)->operator!=(*l);
    return rv;
}

// [4] int size()
extern "C" Q_DECL_EXPORT
int C_QUndoStackList_size_0(void* this_ ) {
    // QUndoStackList_size_0()
    auto rv =  ((QUndoStackList*)this_)->size();
    return rv;
}

// [-2] void detach()
extern "C" Q_DECL_EXPORT
void C_QUndoStackList_detach_0(void* this_ ) {
    // QUndoStackList_detach_0()
     ((QUndoStackList*)this_)->detach();
}

// [-2] void detachShared()
extern "C" Q_DECL_EXPORT
void C_QUndoStackList_detachShared_0(void* this_ ) {
    // QUndoStackList_detachShared_0()
     ((QUndoStackList*)this_)->detachShared();
}

// [1] bool isDetached()
extern "C" Q_DECL_EXPORT
bool C_QUndoStackList_isDetached_0(void* this_ ) {
    // QUndoStackList_isDetached_0()
    auto rv =  ((QUndoStackList*)this_)->isDetached();
    return rv;
}

// [-2] void setSharable(bool)
extern "C" Q_DECL_EXPORT
void C_QUndoStackList_setSharable_0(void* this_ , bool sharable) {
    // QUndoStackList_setSharable_0()
     ((QUndoStackList*)this_)->setSharable(sharable);
}

// [1] bool isSharedWith(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QUndoStackList_isSharedWith_0(void* this_ , QUndoStackList* other) {
    // QUndoStackList_isSharedWith_0()
    auto rv =  ((QUndoStackList*)this_)->isSharedWith(*other);
    return rv;
}

// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_QUndoStackList_isEmpty_0(void* this_ ) {
    // QUndoStackList_isEmpty_0()
    auto rv =  ((QUndoStackList*)this_)->isEmpty();
    return rv;
}

// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_QUndoStackList_clear_0(void* this_ ) {
    // QUndoStackList_clear_0()
     ((QUndoStackList*)this_)->clear();
}

// [-3] const T & at(int)
extern "C" Q_DECL_EXPORT
QUndoStack ** C_QUndoStackList_at_0(void* this_ , int i) {
    // QUndoStackList_at_0()
    auto rv =  ((QUndoStackList*)this_)->at(i);
    return new decltype(rv)(rv);
}

// [-3] const T & operator[](int)
extern "C" Q_DECL_EXPORT
QUndoStack ** C_QUndoStackList_operator_get_index_0(void* this_ , int i) {
    // QUndoStackList_operator_get_index_0()
    auto rv =  ((QUndoStackList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-3] T & operator[](int)
extern "C" Q_DECL_EXPORT
QUndoStack ** C_QUndoStackList_operator_get_index_1(void* this_ , int i) {
    // QUndoStackList_operator_get_index_1()
    auto rv =  ((QUndoStackList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-2] void reserve(int)
extern "C" Q_DECL_EXPORT
void C_QUndoStackList_reserve_0(void* this_ , int size) {
    // QUndoStackList_reserve_0()
     ((QUndoStackList*)this_)->reserve(size);
}

// [-2] void append(const T &)
extern "C" Q_DECL_EXPORT
void C_QUndoStackList_append_0(void* this_ , QUndoStack * t) {
    // QUndoStackList_append_0()
     ((QUndoStackList*)this_)->append(t);
}

// [-2] void append(const QList<T> &)
extern "C" Q_DECL_EXPORT
void C_QUndoStackList_append_1(void* this_ , QUndoStackList* t) {
    // QUndoStackList_append_1()
     ((QUndoStackList*)this_)->append(*t);
}

// [-2] void prepend(const T &)
extern "C" Q_DECL_EXPORT
void C_QUndoStackList_prepend_0(void* this_ , QUndoStack * t) {
    // QUndoStackList_prepend_0()
     ((QUndoStackList*)this_)->prepend(t);
}

// [-2] void insert(int, const T &)
extern "C" Q_DECL_EXPORT
void C_QUndoStackList_insert_0(void* this_ , int i, QUndoStack * t) {
    // QUndoStackList_insert_0()
     ((QUndoStackList*)this_)->insert(i, t);
}

// [-2] void replace(int, const T &)
extern "C" Q_DECL_EXPORT
void C_QUndoStackList_replace_0(void* this_ , int i, QUndoStack * t) {
    // QUndoStackList_replace_0()
     ((QUndoStackList*)this_)->replace(i, t);
}

// [-2] void removeAt(int)
extern "C" Q_DECL_EXPORT
void C_QUndoStackList_removeAt_0(void* this_ , int i) {
    // QUndoStackList_removeAt_0()
     ((QUndoStackList*)this_)->removeAt(i);
}

// [4] int removeAll(const T &)
extern "C" Q_DECL_EXPORT
int C_QUndoStackList_removeAll_0(void* this_ , QUndoStack * t) {
    // QUndoStackList_removeAll_0()
    auto rv =  ((QUndoStackList*)this_)->removeAll(t);
    return rv;
}

// [1] bool removeOne(const T &)
extern "C" Q_DECL_EXPORT
bool C_QUndoStackList_removeOne_0(void* this_ , QUndoStack * t) {
    // QUndoStackList_removeOne_0()
    auto rv =  ((QUndoStackList*)this_)->removeOne(t);
    return rv;
}

// [-3] T takeAt(int)
extern "C" Q_DECL_EXPORT
QUndoStack ** C_QUndoStackList_takeAt_0(void* this_ , int i) {
    // QUndoStackList_takeAt_0()
    auto rv =  ((QUndoStackList*)this_)->takeAt(i);
    return new decltype(rv)(rv);
}

// [-3] T takeFirst()
extern "C" Q_DECL_EXPORT
QUndoStack ** C_QUndoStackList_takeFirst_0(void* this_ ) {
    // QUndoStackList_takeFirst_0()
    auto rv =  ((QUndoStackList*)this_)->takeFirst();
    return new decltype(rv)(rv);
}

// [-3] T takeLast()
extern "C" Q_DECL_EXPORT
QUndoStack ** C_QUndoStackList_takeLast_0(void* this_ ) {
    // QUndoStackList_takeLast_0()
    auto rv =  ((QUndoStackList*)this_)->takeLast();
    return new decltype(rv)(rv);
}

// [-2] void move(int, int)
extern "C" Q_DECL_EXPORT
void C_QUndoStackList_move_0(void* this_ , int from, int to) {
    // QUndoStackList_move_0()
     ((QUndoStackList*)this_)->move(from, to);
}

// [-2] void swap(int, int)
extern "C" Q_DECL_EXPORT
void C_QUndoStackList_swap_1(void* this_ , int i, int j) {
    // QUndoStackList_swap_1()
     ((QUndoStackList*)this_)->swap(i, j);
}

// [4] int indexOf(const T &, int)
extern "C" Q_DECL_EXPORT
int C_QUndoStackList_indexOf_0(void* this_ , QUndoStack * t, int from) {
    // QUndoStackList_indexOf_0()
    auto rv =  ((QUndoStackList*)this_)->indexOf(t, from);
    return rv;
}

// [4] int lastIndexOf(const T &, int)
extern "C" Q_DECL_EXPORT
int C_QUndoStackList_lastIndexOf_0(void* this_ , QUndoStack * t, int from) {
    // QUndoStackList_lastIndexOf_0()
    auto rv =  ((QUndoStackList*)this_)->lastIndexOf(t, from);
    return rv;
}

// [1] bool contains(const T &)
extern "C" Q_DECL_EXPORT
bool C_QUndoStackList_contains_0(void* this_ , QUndoStack * t) {
    // QUndoStackList_contains_0()
    auto rv =  ((QUndoStackList*)this_)->contains(t);
    return rv;
}

// [4] int count(const T &)
extern "C" Q_DECL_EXPORT
int C_QUndoStackList_count_0(void* this_ , QUndoStack * t) {
    // QUndoStackList_count_0()
    auto rv =  ((QUndoStackList*)this_)->count(t);
    return rv;
}

// [-3] QList::iterator begin()
extern "C" Q_DECL_EXPORT
QUndoStackList::iterator* C_QUndoStackList_begin_0(void* this_ ) {
    // QUndoStackList_begin_0()
    auto rv =  ((QUndoStackList*)this_)->begin();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator end()
extern "C" Q_DECL_EXPORT
QUndoStackList::iterator* C_QUndoStackList_end_0(void* this_ ) {
    // QUndoStackList_end_0()
    auto rv =  ((QUndoStackList*)this_)->end();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rbegin()
extern "C" Q_DECL_EXPORT
QUndoStackList::reverse_iterator* C_QUndoStackList_rbegin_0(void* this_ ) {
    // QUndoStackList_rbegin_0()
    auto rv =  ((QUndoStackList*)this_)->rbegin();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rend()
extern "C" Q_DECL_EXPORT
QUndoStackList::reverse_iterator* C_QUndoStackList_rend_0(void* this_ ) {
    // QUndoStackList_rend_0()
    auto rv =  ((QUndoStackList*)this_)->rend();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator insert(QList::iterator, const T &)
extern "C" Q_DECL_EXPORT
QUndoStackList::iterator* C_QUndoStackList_insert_1(void* this_ , QUndoStackList::iterator* before, QUndoStack * t) {
    // QUndoStackList_insert_1()
    auto rv =  ((QUndoStackList*)this_)->insert(*before, t);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator)
extern "C" Q_DECL_EXPORT
QUndoStackList::iterator* C_QUndoStackList_erase_0(void* this_ , QUndoStackList::iterator* pos) {
    // QUndoStackList_erase_0()
    auto rv =  ((QUndoStackList*)this_)->erase(*pos);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator, QList::iterator)
extern "C" Q_DECL_EXPORT
QUndoStackList::iterator* C_QUndoStackList_erase_1(void* this_ , QUndoStackList::iterator* first, QUndoStackList::iterator* last) {
    // QUndoStackList_erase_1()
    auto rv =  ((QUndoStackList*)this_)->erase(*first, *last);
    return new decltype(rv)(rv);
}

// [4] int count()
extern "C" Q_DECL_EXPORT
int C_QUndoStackList_count_1(void* this_ ) {
    // QUndoStackList_count_1()
    auto rv =  ((QUndoStackList*)this_)->count();
    return rv;
}

// [4] int length()
extern "C" Q_DECL_EXPORT
int C_QUndoStackList_length_0(void* this_ ) {
    // QUndoStackList_length_0()
    auto rv =  ((QUndoStackList*)this_)->length();
    return rv;
}

// [-3] T & first()
extern "C" Q_DECL_EXPORT
QUndoStack ** C_QUndoStackList_first_0(void* this_ ) {
    // QUndoStackList_first_0()
    auto rv =  ((QUndoStackList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] const T & constFirst()
extern "C" Q_DECL_EXPORT
QUndoStack ** C_QUndoStackList_constFirst_0(void* this_ ) {
    // QUndoStackList_constFirst_0()
    auto rv =  ((QUndoStackList*)this_)->constFirst();
    return new decltype(rv)(rv);
}

// [-3] const T & first()
extern "C" Q_DECL_EXPORT
QUndoStack ** C_QUndoStackList_first_1(void* this_ ) {
    // QUndoStackList_first_1()
    auto rv =  ((QUndoStackList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] T & last()
extern "C" Q_DECL_EXPORT
QUndoStack ** C_QUndoStackList_last_0(void* this_ ) {
    // QUndoStackList_last_0()
    auto rv =  ((QUndoStackList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & last()
extern "C" Q_DECL_EXPORT
QUndoStack ** C_QUndoStackList_last_1(void* this_ ) {
    // QUndoStackList_last_1()
    auto rv =  ((QUndoStackList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & constLast()
extern "C" Q_DECL_EXPORT
QUndoStack ** C_QUndoStackList_constLast_0(void* this_ ) {
    // QUndoStackList_constLast_0()
    auto rv =  ((QUndoStackList*)this_)->constLast();
    return new decltype(rv)(rv);
}

// [-2] void removeFirst()
extern "C" Q_DECL_EXPORT
void C_QUndoStackList_removeFirst_0(void* this_ ) {
    // QUndoStackList_removeFirst_0()
     ((QUndoStackList*)this_)->removeFirst();
}

// [-2] void removeLast()
extern "C" Q_DECL_EXPORT
void C_QUndoStackList_removeLast_0(void* this_ ) {
    // QUndoStackList_removeLast_0()
     ((QUndoStackList*)this_)->removeLast();
}

// [1] bool startsWith(const T &)
extern "C" Q_DECL_EXPORT
bool C_QUndoStackList_startsWith_0(void* this_ , QUndoStack * t) {
    // QUndoStackList_startsWith_0()
    auto rv =  ((QUndoStackList*)this_)->startsWith(t);
    return rv;
}

// [1] bool endsWith(const T &)
extern "C" Q_DECL_EXPORT
bool C_QUndoStackList_endsWith_0(void* this_ , QUndoStack * t) {
    // QUndoStackList_endsWith_0()
    auto rv =  ((QUndoStackList*)this_)->endsWith(t);
    return rv;
}

// [-3] QList<T> mid(int, int)
extern "C" Q_DECL_EXPORT
QUndoStackList* C_QUndoStackList_mid_0(void* this_ , int pos, int length) {
    // QUndoStackList_mid_0()
    auto rv =  ((QUndoStackList*)this_)->mid(pos, length);
    return (QUndoStackList*)this_;
}

// [-3] T value(int)
extern "C" Q_DECL_EXPORT
QUndoStack ** C_QUndoStackList_value_0(void* this_ , int i) {
    // QUndoStackList_value_0()
    auto rv =  ((QUndoStackList*)this_)->value(i);
    return new decltype(rv)(rv);
}

// [-3] T value(int, const T &)
extern "C" Q_DECL_EXPORT
QUndoStack ** C_QUndoStackList_value_1(void* this_ , int i, QUndoStack * defaultValue) {
    // QUndoStackList_value_1()
    auto rv =  ((QUndoStackList*)this_)->value(i, defaultValue);
    return new decltype(rv)(rv);
}

// [-2] void push_back(const T &)
extern "C" Q_DECL_EXPORT
void C_QUndoStackList_push_back_0(void* this_ , QUndoStack * t) {
    // QUndoStackList_push_back_0()
     ((QUndoStackList*)this_)->push_back(t);
}

// [-2] void push_front(const T &)
extern "C" Q_DECL_EXPORT
void C_QUndoStackList_push_front_0(void* this_ , QUndoStack * t) {
    // QUndoStackList_push_front_0()
     ((QUndoStackList*)this_)->push_front(t);
}

// [-3] T & front()
extern "C" Q_DECL_EXPORT
QUndoStack ** C_QUndoStackList_front_0(void* this_ ) {
    // QUndoStackList_front_0()
    auto rv =  ((QUndoStackList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] const T & front()
extern "C" Q_DECL_EXPORT
QUndoStack ** C_QUndoStackList_front_1(void* this_ ) {
    // QUndoStackList_front_1()
    auto rv =  ((QUndoStackList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] T & back()
extern "C" Q_DECL_EXPORT
QUndoStack ** C_QUndoStackList_back_0(void* this_ ) {
    // QUndoStackList_back_0()
    auto rv =  ((QUndoStackList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-3] const T & back()
extern "C" Q_DECL_EXPORT
QUndoStack ** C_QUndoStackList_back_1(void* this_ ) {
    // QUndoStackList_back_1()
    auto rv =  ((QUndoStackList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-2] void pop_front()
extern "C" Q_DECL_EXPORT
void C_QUndoStackList_pop_front_0(void* this_ ) {
    // QUndoStackList_pop_front_0()
     ((QUndoStackList*)this_)->pop_front();
}

// [-2] void pop_back()
extern "C" Q_DECL_EXPORT
void C_QUndoStackList_pop_back_0(void* this_ ) {
    // QUndoStackList_pop_back_0()
     ((QUndoStackList*)this_)->pop_back();
}

// [1] bool empty()
extern "C" Q_DECL_EXPORT
bool C_QUndoStackList_empty_0(void* this_ ) {
    // QUndoStackList_empty_0()
    auto rv =  ((QUndoStackList*)this_)->empty();
    return rv;
}

// [-3] QList<T> & operator+=(const QList<T> &)
extern "C" Q_DECL_EXPORT
QUndoStackList* C_QUndoStackList_operator_add_equal_0(void* this_ , QUndoStackList* l) {
    // QUndoStackList_operator_add_equal_0()
    auto rv =  ((QUndoStackList*)this_)->operator+=(*l);
    return (QUndoStackList*)this_;
}

// [-3] QList<T> operator+(const QList<T> &)
extern "C" Q_DECL_EXPORT
QUndoStackList* C_QUndoStackList_operator_add_0(void* this_ , QUndoStackList* l) {
    // QUndoStackList_operator_add_0()
    auto rv =  ((QUndoStackList*)this_)->operator+(*l);
    return (QUndoStackList*)this_;
}

// [-3] QList<T> & operator+=(const T &)
extern "C" Q_DECL_EXPORT
QUndoStackList* C_QUndoStackList_operator_add_equal_1(void* this_ , QUndoStack * t) {
    // QUndoStackList_operator_add_equal_1()
    auto rv =  ((QUndoStackList*)this_)->operator+=(t);
    return (QUndoStackList*)this_;
}

// [-3] QList<T> & operator<<(const T &)
extern "C" Q_DECL_EXPORT
QUndoStackList* C_QUndoStackList_operator_left_shift_0(void* this_ , QUndoStack * t) {
    // QUndoStackList_operator_left_shift_0()
    auto rv =  ((QUndoStackList*)this_)->operator<<(t);
    return (QUndoStackList*)this_;
}

// [-3] QList<T> & operator<<(const QList<T> &)
extern "C" Q_DECL_EXPORT
QUndoStackList* C_QUndoStackList_operator_left_shift_1(void* this_ , QUndoStackList* l) {
    // QUndoStackList_operator_left_shift_1()
    auto rv =  ((QUndoStackList*)this_)->operator<<(*l);
    return (QUndoStackList*)this_;
}

// [-3] QVector<T> toVector()
extern "C" Q_DECL_EXPORT
void C_QUndoStackList_toVector_0(void* this_ ) {
    // QUndoStackList_toVector_0()
    auto rv =  ((QUndoStackList*)this_)->toVector();
}

// [-3] std::list<T> toStdList()
extern "C" Q_DECL_EXPORT
void C_QUndoStackList_toStdList_0(void* this_ ) {
    // QUndoStackList_toStdList_0()
    auto rv =  ((QUndoStackList*)this_)->toStdList();
}

//  body block end
