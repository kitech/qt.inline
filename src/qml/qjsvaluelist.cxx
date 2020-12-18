
// /usr/include/qt/QtQml/qjsvalue.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qjsvalue.h>
#include <QtQml>
#include "callback_inherit.h"

#ifndef QJSValueList
#ifndef QJSVALUELIST_H
typedef QList<QJSValue> QJSValueList;
#endif
#endif
//  header block end

//  body block begin
// [-3] QList<T> & operator=(const QList<T> &)
extern "C" Q_DECL_EXPORT
QJSValueList* C_QJSValueList_operator_equal_0(void* this_ , QJSValueList* l) {
    // QJSValueList_operator_equal_0()
    auto rv =  ((QJSValueList*)this_)->operator=(*l);
    return (QJSValueList*)this_;
}

// [-3] QList<T> & operator=(QList<T> &&)
extern "C" Q_DECL_EXPORT
QJSValueList* C_QJSValueList_operator_equal_1(void* this_ , QJSValueList* other) {
    // QJSValueList_operator_equal_1()
    auto rv =  ((QJSValueList*)this_)->operator=(*other);
    return (QJSValueList*)this_;
}

// [-2] void swap(QList<T> &)
extern "C" Q_DECL_EXPORT
void C_QJSValueList_swap_0(void* this_ , QJSValueList* other) {
    // QJSValueList_swap_0()
     ((QJSValueList*)this_)->swap(*other);
}

// [4] int size()
extern "C" Q_DECL_EXPORT
int C_QJSValueList_size_0(void* this_ ) {
    // QJSValueList_size_0()
    auto rv =  ((QJSValueList*)this_)->size();
    return rv;
}

// [-2] void detach()
extern "C" Q_DECL_EXPORT
void C_QJSValueList_detach_0(void* this_ ) {
    // QJSValueList_detach_0()
     ((QJSValueList*)this_)->detach();
}

// [-2] void detachShared()
extern "C" Q_DECL_EXPORT
void C_QJSValueList_detachShared_0(void* this_ ) {
    // QJSValueList_detachShared_0()
     ((QJSValueList*)this_)->detachShared();
}

// [1] bool isDetached()
extern "C" Q_DECL_EXPORT
bool C_QJSValueList_isDetached_0(void* this_ ) {
    // QJSValueList_isDetached_0()
    auto rv =  ((QJSValueList*)this_)->isDetached();
    return rv;
}

// [-2] void setSharable(bool)
extern "C" Q_DECL_EXPORT
void C_QJSValueList_setSharable_0(void* this_ , bool sharable) {
    // QJSValueList_setSharable_0()
     ((QJSValueList*)this_)->setSharable(sharable);
}

// [1] bool isSharedWith(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QJSValueList_isSharedWith_0(void* this_ , QJSValueList* other) {
    // QJSValueList_isSharedWith_0()
    auto rv =  ((QJSValueList*)this_)->isSharedWith(*other);
    return rv;
}

// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_QJSValueList_isEmpty_0(void* this_ ) {
    // QJSValueList_isEmpty_0()
    auto rv =  ((QJSValueList*)this_)->isEmpty();
    return rv;
}

// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_QJSValueList_clear_0(void* this_ ) {
    // QJSValueList_clear_0()
     ((QJSValueList*)this_)->clear();
}

// [-3] const T & at(int)
extern "C" Q_DECL_EXPORT
QJSValue* C_QJSValueList_at_0(void* this_ , int i) {
    // QJSValueList_at_0()
    auto rv =  ((QJSValueList*)this_)->at(i);
    return new decltype(rv)(rv);
}

// [-3] const T & operator[](int)
extern "C" Q_DECL_EXPORT
QJSValue* C_QJSValueList_operator_get_index_0(void* this_ , int i) {
    // QJSValueList_operator_get_index_0()
    auto rv =  ((QJSValueList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-3] T & operator[](int)
extern "C" Q_DECL_EXPORT
QJSValue* C_QJSValueList_operator_get_index_1(void* this_ , int i) {
    // QJSValueList_operator_get_index_1()
    auto rv =  ((QJSValueList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-2] void reserve(int)
extern "C" Q_DECL_EXPORT
void C_QJSValueList_reserve_0(void* this_ , int size) {
    // QJSValueList_reserve_0()
     ((QJSValueList*)this_)->reserve(size);
}

// [-2] void append(const T &)
extern "C" Q_DECL_EXPORT
void C_QJSValueList_append_0(void* this_ , QJSValue* t) {
    // QJSValueList_append_0()
     ((QJSValueList*)this_)->append(*t);
}

// [-2] void append(const QList<T> &)
extern "C" Q_DECL_EXPORT
void C_QJSValueList_append_1(void* this_ , QJSValueList* t) {
    // QJSValueList_append_1()
     ((QJSValueList*)this_)->append(*t);
}

// [-2] void prepend(const T &)
extern "C" Q_DECL_EXPORT
void C_QJSValueList_prepend_0(void* this_ , QJSValue* t) {
    // QJSValueList_prepend_0()
     ((QJSValueList*)this_)->prepend(*t);
}

// [-2] void insert(int, const T &)
extern "C" Q_DECL_EXPORT
void C_QJSValueList_insert_0(void* this_ , int i, QJSValue* t) {
    // QJSValueList_insert_0()
     ((QJSValueList*)this_)->insert(i, *t);
}

// [-2] void replace(int, const T &)
extern "C" Q_DECL_EXPORT
void C_QJSValueList_replace_0(void* this_ , int i, QJSValue* t) {
    // QJSValueList_replace_0()
     ((QJSValueList*)this_)->replace(i, *t);
}

// [-2] void removeAt(int)
extern "C" Q_DECL_EXPORT
void C_QJSValueList_removeAt_0(void* this_ , int i) {
    // QJSValueList_removeAt_0()
     ((QJSValueList*)this_)->removeAt(i);
}

// [-3] T takeAt(int)
extern "C" Q_DECL_EXPORT
QJSValue* C_QJSValueList_takeAt_0(void* this_ , int i) {
    // QJSValueList_takeAt_0()
    auto rv =  ((QJSValueList*)this_)->takeAt(i);
    return new decltype(rv)(rv);
}

// [-3] T takeFirst()
extern "C" Q_DECL_EXPORT
QJSValue* C_QJSValueList_takeFirst_0(void* this_ ) {
    // QJSValueList_takeFirst_0()
    auto rv =  ((QJSValueList*)this_)->takeFirst();
    return new decltype(rv)(rv);
}

// [-3] T takeLast()
extern "C" Q_DECL_EXPORT
QJSValue* C_QJSValueList_takeLast_0(void* this_ ) {
    // QJSValueList_takeLast_0()
    auto rv =  ((QJSValueList*)this_)->takeLast();
    return new decltype(rv)(rv);
}

// [-2] void move(int, int)
extern "C" Q_DECL_EXPORT
void C_QJSValueList_move_0(void* this_ , int from, int to) {
    // QJSValueList_move_0()
     ((QJSValueList*)this_)->move(from, to);
}

// [-2] void swapItemsAt(int, int)
extern "C" Q_DECL_EXPORT
void C_QJSValueList_swapItemsAt_0(void* this_ , int i, int j) {
    // QJSValueList_swapItemsAt_0()
     ((QJSValueList*)this_)->swapItemsAt(i, j);
}

// [-2] void swap(int, int)
extern "C" Q_DECL_EXPORT
void C_QJSValueList_swap_1(void* this_ , int i, int j) {
    // QJSValueList_swap_1()
     ((QJSValueList*)this_)->swap(i, j);
}

// [-3] QList::iterator begin()
extern "C" Q_DECL_EXPORT
QJSValueList::iterator* C_QJSValueList_begin_0(void* this_ ) {
    // QJSValueList_begin_0()
    auto rv =  ((QJSValueList*)this_)->begin();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator end()
extern "C" Q_DECL_EXPORT
QJSValueList::iterator* C_QJSValueList_end_0(void* this_ ) {
    // QJSValueList_end_0()
    auto rv =  ((QJSValueList*)this_)->end();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rbegin()
extern "C" Q_DECL_EXPORT
QJSValueList::reverse_iterator* C_QJSValueList_rbegin_0(void* this_ ) {
    // QJSValueList_rbegin_0()
    auto rv =  ((QJSValueList*)this_)->rbegin();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rend()
extern "C" Q_DECL_EXPORT
QJSValueList::reverse_iterator* C_QJSValueList_rend_0(void* this_ ) {
    // QJSValueList_rend_0()
    auto rv =  ((QJSValueList*)this_)->rend();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator insert(QList::iterator, const T &)
extern "C" Q_DECL_EXPORT
QJSValueList::iterator* C_QJSValueList_insert_1(void* this_ , QJSValueList::iterator* before, QJSValue* t) {
    // QJSValueList_insert_1()
    auto rv =  ((QJSValueList*)this_)->insert(*before, *t);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator)
extern "C" Q_DECL_EXPORT
QJSValueList::iterator* C_QJSValueList_erase_0(void* this_ , QJSValueList::iterator* pos) {
    // QJSValueList_erase_0()
    auto rv =  ((QJSValueList*)this_)->erase(*pos);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator, QList::iterator)
extern "C" Q_DECL_EXPORT
QJSValueList::iterator* C_QJSValueList_erase_1(void* this_ , QJSValueList::iterator* first, QJSValueList::iterator* last) {
    // QJSValueList_erase_1()
    auto rv =  ((QJSValueList*)this_)->erase(*first, *last);
    return new decltype(rv)(rv);
}

// [4] int length()
extern "C" Q_DECL_EXPORT
int C_QJSValueList_length_0(void* this_ ) {
    // QJSValueList_length_0()
    auto rv =  ((QJSValueList*)this_)->length();
    return rv;
}

// [-3] T & first()
extern "C" Q_DECL_EXPORT
QJSValue* C_QJSValueList_first_0(void* this_ ) {
    // QJSValueList_first_0()
    auto rv =  ((QJSValueList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] const T & constFirst()
extern "C" Q_DECL_EXPORT
QJSValue* C_QJSValueList_constFirst_0(void* this_ ) {
    // QJSValueList_constFirst_0()
    auto rv =  ((QJSValueList*)this_)->constFirst();
    return new decltype(rv)(rv);
}

// [-3] const T & first()
extern "C" Q_DECL_EXPORT
QJSValue* C_QJSValueList_first_1(void* this_ ) {
    // QJSValueList_first_1()
    auto rv =  ((QJSValueList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] T & last()
extern "C" Q_DECL_EXPORT
QJSValue* C_QJSValueList_last_0(void* this_ ) {
    // QJSValueList_last_0()
    auto rv =  ((QJSValueList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & last()
extern "C" Q_DECL_EXPORT
QJSValue* C_QJSValueList_last_1(void* this_ ) {
    // QJSValueList_last_1()
    auto rv =  ((QJSValueList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & constLast()
extern "C" Q_DECL_EXPORT
QJSValue* C_QJSValueList_constLast_0(void* this_ ) {
    // QJSValueList_constLast_0()
    auto rv =  ((QJSValueList*)this_)->constLast();
    return new decltype(rv)(rv);
}

// [-2] void removeFirst()
extern "C" Q_DECL_EXPORT
void C_QJSValueList_removeFirst_0(void* this_ ) {
    // QJSValueList_removeFirst_0()
     ((QJSValueList*)this_)->removeFirst();
}

// [-2] void removeLast()
extern "C" Q_DECL_EXPORT
void C_QJSValueList_removeLast_0(void* this_ ) {
    // QJSValueList_removeLast_0()
     ((QJSValueList*)this_)->removeLast();
}

// [-3] QList<T> mid(int, int)
extern "C" Q_DECL_EXPORT
QJSValueList* C_QJSValueList_mid_0(void* this_ , int pos, int length) {
    // QJSValueList_mid_0()
    auto rv =  ((QJSValueList*)this_)->mid(pos, length);
    return (QJSValueList*)this_;
}

// [-3] T value(int)
extern "C" Q_DECL_EXPORT
QJSValue* C_QJSValueList_value_0(void* this_ , int i) {
    // QJSValueList_value_0()
    auto rv =  ((QJSValueList*)this_)->value(i);
    return new decltype(rv)(rv);
}

// [-3] T value(int, const T &)
extern "C" Q_DECL_EXPORT
QJSValue* C_QJSValueList_value_1(void* this_ , int i, QJSValue* defaultValue) {
    // QJSValueList_value_1()
    auto rv =  ((QJSValueList*)this_)->value(i, *defaultValue);
    return new decltype(rv)(rv);
}

// [-2] void push_back(const T &)
extern "C" Q_DECL_EXPORT
void C_QJSValueList_push_back_0(void* this_ , QJSValue* t) {
    // QJSValueList_push_back_0()
     ((QJSValueList*)this_)->push_back(*t);
}

// [-2] void push_front(const T &)
extern "C" Q_DECL_EXPORT
void C_QJSValueList_push_front_0(void* this_ , QJSValue* t) {
    // QJSValueList_push_front_0()
     ((QJSValueList*)this_)->push_front(*t);
}

// [-3] T & front()
extern "C" Q_DECL_EXPORT
QJSValue* C_QJSValueList_front_0(void* this_ ) {
    // QJSValueList_front_0()
    auto rv =  ((QJSValueList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] const T & front()
extern "C" Q_DECL_EXPORT
QJSValue* C_QJSValueList_front_1(void* this_ ) {
    // QJSValueList_front_1()
    auto rv =  ((QJSValueList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] T & back()
extern "C" Q_DECL_EXPORT
QJSValue* C_QJSValueList_back_0(void* this_ ) {
    // QJSValueList_back_0()
    auto rv =  ((QJSValueList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-3] const T & back()
extern "C" Q_DECL_EXPORT
QJSValue* C_QJSValueList_back_1(void* this_ ) {
    // QJSValueList_back_1()
    auto rv =  ((QJSValueList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-2] void pop_front()
extern "C" Q_DECL_EXPORT
void C_QJSValueList_pop_front_0(void* this_ ) {
    // QJSValueList_pop_front_0()
     ((QJSValueList*)this_)->pop_front();
}

// [-2] void pop_back()
extern "C" Q_DECL_EXPORT
void C_QJSValueList_pop_back_0(void* this_ ) {
    // QJSValueList_pop_back_0()
     ((QJSValueList*)this_)->pop_back();
}

// [1] bool empty()
extern "C" Q_DECL_EXPORT
bool C_QJSValueList_empty_0(void* this_ ) {
    // QJSValueList_empty_0()
    auto rv =  ((QJSValueList*)this_)->empty();
    return rv;
}

// [-3] QList<T> & operator+=(const QList<T> &)
extern "C" Q_DECL_EXPORT
QJSValueList* C_QJSValueList_operator_add_equal_0(void* this_ , QJSValueList* l) {
    // QJSValueList_operator_add_equal_0()
    auto rv =  ((QJSValueList*)this_)->operator+=(*l);
    return (QJSValueList*)this_;
}

// [-3] QList<T> operator+(const QList<T> &)
extern "C" Q_DECL_EXPORT
QJSValueList* C_QJSValueList_operator_add_0(void* this_ , QJSValueList* l) {
    // QJSValueList_operator_add_0()
    auto rv =  ((QJSValueList*)this_)->operator+(*l);
    return (QJSValueList*)this_;
}

// [-3] QList<T> & operator+=(const T &)
extern "C" Q_DECL_EXPORT
QJSValueList* C_QJSValueList_operator_add_equal_1(void* this_ , QJSValue* t) {
    // QJSValueList_operator_add_equal_1()
    auto rv =  ((QJSValueList*)this_)->operator+=(*t);
    return (QJSValueList*)this_;
}

// [-3] QList<T> & operator<<(const T &)
extern "C" Q_DECL_EXPORT
QJSValueList* C_QJSValueList_operator_left_shift_0(void* this_ , QJSValue* t) {
    // QJSValueList_operator_left_shift_0()
    auto rv =  ((QJSValueList*)this_)->operator<<(*t);
    return (QJSValueList*)this_;
}

// [-3] QList<T> & operator<<(const QList<T> &)
extern "C" Q_DECL_EXPORT
QJSValueList* C_QJSValueList_operator_left_shift_1(void* this_ , QJSValueList* l) {
    // QJSValueList_operator_left_shift_1()
    auto rv =  ((QJSValueList*)this_)->operator<<(*l);
    return (QJSValueList*)this_;
}

// [-3] QVector<T> toVector()
extern "C" Q_DECL_EXPORT
void C_QJSValueList_toVector_0(void* this_ ) {
    // QJSValueList_toVector_0()
    auto rv =  ((QJSValueList*)this_)->toVector();
}

// [-3] std::list<T> toStdList()
extern "C" Q_DECL_EXPORT
void C_QJSValueList_toStdList_0(void* this_ ) {
    // QJSValueList_toStdList_0()
    auto rv =  ((QJSValueList*)this_)->toStdList();
}

//  body block end
