
// /usr/include/qt/QtWidgets/qgraphicstransform.h
#ifndef protected
#define protected public
#endif
#include <qgraphicstransform.h>
#include <QtWidgets>
#include "callback_inherit.h"

#ifndef QGraphicsTransformList
typedef QList<QGraphicsTransform *> QGraphicsTransformList;
#endif
//  header block end

//  body block begin
// [-3] QList<T> & operator=(const QList<T> &)
extern "C"
QGraphicsTransformList* C_QGraphicsTransformList_operator_equal_0(void* this_ , QGraphicsTransformList* l) {
    // QGraphicsTransformList_operator_equal_0()
    auto rv =  ((QGraphicsTransformList*)this_)->operator=(*l);
    return (QGraphicsTransformList*)this_;
}

// [-3] QList<T> & operator=(QList<T> &&)
extern "C"
QGraphicsTransformList* C_QGraphicsTransformList_operator_equal_1(void* this_ , QGraphicsTransformList* other) {
    // QGraphicsTransformList_operator_equal_1()
    auto rv =  ((QGraphicsTransformList*)this_)->operator=(*other);
    return (QGraphicsTransformList*)this_;
}

// [-2] void swap(QList<T> &)
extern "C"
void C_QGraphicsTransformList_swap_0(void* this_ , QGraphicsTransformList* other) {
    // QGraphicsTransformList_swap_0()
     ((QGraphicsTransformList*)this_)->swap(*other);
}

// [1] bool operator==(const QList<T> &)
extern "C"
bool C_QGraphicsTransformList_operator_equal_equal_0(void* this_ , QGraphicsTransformList* l) {
    // QGraphicsTransformList_operator_equal_equal_0()
    auto rv =  ((QGraphicsTransformList*)this_)->operator==(*l);
    return rv;
}

// [1] bool operator!=(const QList<T> &)
extern "C"
bool C_QGraphicsTransformList_operator_not_equal_0(void* this_ , QGraphicsTransformList* l) {
    // QGraphicsTransformList_operator_not_equal_0()
    auto rv =  ((QGraphicsTransformList*)this_)->operator!=(*l);
    return rv;
}

// [4] int size()
extern "C"
int C_QGraphicsTransformList_size_0(void* this_ ) {
    // QGraphicsTransformList_size_0()
    auto rv =  ((QGraphicsTransformList*)this_)->size();
    return rv;
}

// [-2] void detach()
extern "C"
void C_QGraphicsTransformList_detach_0(void* this_ ) {
    // QGraphicsTransformList_detach_0()
     ((QGraphicsTransformList*)this_)->detach();
}

// [-2] void detachShared()
extern "C"
void C_QGraphicsTransformList_detachShared_0(void* this_ ) {
    // QGraphicsTransformList_detachShared_0()
     ((QGraphicsTransformList*)this_)->detachShared();
}

// [1] bool isDetached()
extern "C"
bool C_QGraphicsTransformList_isDetached_0(void* this_ ) {
    // QGraphicsTransformList_isDetached_0()
    auto rv =  ((QGraphicsTransformList*)this_)->isDetached();
    return rv;
}

// [-2] void setSharable(bool)
extern "C"
void C_QGraphicsTransformList_setSharable_0(void* this_ , bool sharable) {
    // QGraphicsTransformList_setSharable_0()
     ((QGraphicsTransformList*)this_)->setSharable(sharable);
}

// [1] bool isSharedWith(const QList<T> &)
extern "C"
bool C_QGraphicsTransformList_isSharedWith_0(void* this_ , QGraphicsTransformList* other) {
    // QGraphicsTransformList_isSharedWith_0()
    auto rv =  ((QGraphicsTransformList*)this_)->isSharedWith(*other);
    return rv;
}

// [1] bool isEmpty()
extern "C"
bool C_QGraphicsTransformList_isEmpty_0(void* this_ ) {
    // QGraphicsTransformList_isEmpty_0()
    auto rv =  ((QGraphicsTransformList*)this_)->isEmpty();
    return rv;
}

// [-2] void clear()
extern "C"
void C_QGraphicsTransformList_clear_0(void* this_ ) {
    // QGraphicsTransformList_clear_0()
     ((QGraphicsTransformList*)this_)->clear();
}

// [-3] const T & at(int)
extern "C"
QGraphicsTransform ** C_QGraphicsTransformList_at_0(void* this_ , int i) {
    // QGraphicsTransformList_at_0()
    auto rv =  ((QGraphicsTransformList*)this_)->at(i);
    return new decltype(rv)(rv);
}

// [-3] const T & operator[](int)
extern "C"
QGraphicsTransform ** C_QGraphicsTransformList_operator_get_index_0(void* this_ , int i) {
    // QGraphicsTransformList_operator_get_index_0()
    auto rv =  ((QGraphicsTransformList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-3] T & operator[](int)
extern "C"
QGraphicsTransform ** C_QGraphicsTransformList_operator_get_index_1(void* this_ , int i) {
    // QGraphicsTransformList_operator_get_index_1()
    auto rv =  ((QGraphicsTransformList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-2] void reserve(int)
extern "C"
void C_QGraphicsTransformList_reserve_0(void* this_ , int size) {
    // QGraphicsTransformList_reserve_0()
     ((QGraphicsTransformList*)this_)->reserve(size);
}

// [-2] void append(const T &)
extern "C"
void C_QGraphicsTransformList_append_0(void* this_ , QGraphicsTransform * t) {
    // QGraphicsTransformList_append_0()
     ((QGraphicsTransformList*)this_)->append(t);
}

// [-2] void append(const QList<T> &)
extern "C"
void C_QGraphicsTransformList_append_1(void* this_ , QGraphicsTransformList* t) {
    // QGraphicsTransformList_append_1()
     ((QGraphicsTransformList*)this_)->append(*t);
}

// [-2] void prepend(const T &)
extern "C"
void C_QGraphicsTransformList_prepend_0(void* this_ , QGraphicsTransform * t) {
    // QGraphicsTransformList_prepend_0()
     ((QGraphicsTransformList*)this_)->prepend(t);
}

// [-2] void insert(int, const T &)
extern "C"
void C_QGraphicsTransformList_insert_0(void* this_ , int i, QGraphicsTransform * t) {
    // QGraphicsTransformList_insert_0()
     ((QGraphicsTransformList*)this_)->insert(i, t);
}

// [-2] void replace(int, const T &)
extern "C"
void C_QGraphicsTransformList_replace_0(void* this_ , int i, QGraphicsTransform * t) {
    // QGraphicsTransformList_replace_0()
     ((QGraphicsTransformList*)this_)->replace(i, t);
}

// [-2] void removeAt(int)
extern "C"
void C_QGraphicsTransformList_removeAt_0(void* this_ , int i) {
    // QGraphicsTransformList_removeAt_0()
     ((QGraphicsTransformList*)this_)->removeAt(i);
}

// [4] int removeAll(const T &)
extern "C"
int C_QGraphicsTransformList_removeAll_0(void* this_ , QGraphicsTransform * t) {
    // QGraphicsTransformList_removeAll_0()
    auto rv =  ((QGraphicsTransformList*)this_)->removeAll(t);
    return rv;
}

// [1] bool removeOne(const T &)
extern "C"
bool C_QGraphicsTransformList_removeOne_0(void* this_ , QGraphicsTransform * t) {
    // QGraphicsTransformList_removeOne_0()
    auto rv =  ((QGraphicsTransformList*)this_)->removeOne(t);
    return rv;
}

// [-3] T takeAt(int)
extern "C"
QGraphicsTransform ** C_QGraphicsTransformList_takeAt_0(void* this_ , int i) {
    // QGraphicsTransformList_takeAt_0()
    auto rv =  ((QGraphicsTransformList*)this_)->takeAt(i);
    return new decltype(rv)(rv);
}

// [-3] T takeFirst()
extern "C"
QGraphicsTransform ** C_QGraphicsTransformList_takeFirst_0(void* this_ ) {
    // QGraphicsTransformList_takeFirst_0()
    auto rv =  ((QGraphicsTransformList*)this_)->takeFirst();
    return new decltype(rv)(rv);
}

// [-3] T takeLast()
extern "C"
QGraphicsTransform ** C_QGraphicsTransformList_takeLast_0(void* this_ ) {
    // QGraphicsTransformList_takeLast_0()
    auto rv =  ((QGraphicsTransformList*)this_)->takeLast();
    return new decltype(rv)(rv);
}

// [-2] void move(int, int)
extern "C"
void C_QGraphicsTransformList_move_0(void* this_ , int from, int to) {
    // QGraphicsTransformList_move_0()
     ((QGraphicsTransformList*)this_)->move(from, to);
}

// [-2] void swap(int, int)
extern "C"
void C_QGraphicsTransformList_swap_1(void* this_ , int i, int j) {
    // QGraphicsTransformList_swap_1()
     ((QGraphicsTransformList*)this_)->swap(i, j);
}

// [4] int indexOf(const T &, int)
extern "C"
int C_QGraphicsTransformList_indexOf_0(void* this_ , QGraphicsTransform * t, int from) {
    // QGraphicsTransformList_indexOf_0()
    auto rv =  ((QGraphicsTransformList*)this_)->indexOf(t, from);
    return rv;
}

// [4] int lastIndexOf(const T &, int)
extern "C"
int C_QGraphicsTransformList_lastIndexOf_0(void* this_ , QGraphicsTransform * t, int from) {
    // QGraphicsTransformList_lastIndexOf_0()
    auto rv =  ((QGraphicsTransformList*)this_)->lastIndexOf(t, from);
    return rv;
}

// [1] bool contains(const T &)
extern "C"
bool C_QGraphicsTransformList_contains_0(void* this_ , QGraphicsTransform * t) {
    // QGraphicsTransformList_contains_0()
    auto rv =  ((QGraphicsTransformList*)this_)->contains(t);
    return rv;
}

// [4] int count(const T &)
extern "C"
int C_QGraphicsTransformList_count_0(void* this_ , QGraphicsTransform * t) {
    // QGraphicsTransformList_count_0()
    auto rv =  ((QGraphicsTransformList*)this_)->count(t);
    return rv;
}

// [-3] QList::iterator begin()
extern "C"
QGraphicsTransformList::iterator* C_QGraphicsTransformList_begin_0(void* this_ ) {
    // QGraphicsTransformList_begin_0()
    auto rv =  ((QGraphicsTransformList*)this_)->begin();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator end()
extern "C"
QGraphicsTransformList::iterator* C_QGraphicsTransformList_end_0(void* this_ ) {
    // QGraphicsTransformList_end_0()
    auto rv =  ((QGraphicsTransformList*)this_)->end();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rbegin()
extern "C"
QGraphicsTransformList::reverse_iterator* C_QGraphicsTransformList_rbegin_0(void* this_ ) {
    // QGraphicsTransformList_rbegin_0()
    auto rv =  ((QGraphicsTransformList*)this_)->rbegin();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rend()
extern "C"
QGraphicsTransformList::reverse_iterator* C_QGraphicsTransformList_rend_0(void* this_ ) {
    // QGraphicsTransformList_rend_0()
    auto rv =  ((QGraphicsTransformList*)this_)->rend();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator insert(QList::iterator, const T &)
extern "C"
QGraphicsTransformList::iterator* C_QGraphicsTransformList_insert_1(void* this_ , QGraphicsTransformList::iterator* before, QGraphicsTransform * t) {
    // QGraphicsTransformList_insert_1()
    auto rv =  ((QGraphicsTransformList*)this_)->insert(*before, t);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator)
extern "C"
QGraphicsTransformList::iterator* C_QGraphicsTransformList_erase_0(void* this_ , QGraphicsTransformList::iterator* pos) {
    // QGraphicsTransformList_erase_0()
    auto rv =  ((QGraphicsTransformList*)this_)->erase(*pos);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator, QList::iterator)
extern "C"
QGraphicsTransformList::iterator* C_QGraphicsTransformList_erase_1(void* this_ , QGraphicsTransformList::iterator* first, QGraphicsTransformList::iterator* last) {
    // QGraphicsTransformList_erase_1()
    auto rv =  ((QGraphicsTransformList*)this_)->erase(*first, *last);
    return new decltype(rv)(rv);
}

// [4] int count()
extern "C"
int C_QGraphicsTransformList_count_1(void* this_ ) {
    // QGraphicsTransformList_count_1()
    auto rv =  ((QGraphicsTransformList*)this_)->count();
    return rv;
}

// [4] int length()
extern "C"
int C_QGraphicsTransformList_length_0(void* this_ ) {
    // QGraphicsTransformList_length_0()
    auto rv =  ((QGraphicsTransformList*)this_)->length();
    return rv;
}

// [-3] T & first()
extern "C"
QGraphicsTransform ** C_QGraphicsTransformList_first_0(void* this_ ) {
    // QGraphicsTransformList_first_0()
    auto rv =  ((QGraphicsTransformList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] const T & constFirst()
extern "C"
QGraphicsTransform ** C_QGraphicsTransformList_constFirst_0(void* this_ ) {
    // QGraphicsTransformList_constFirst_0()
    auto rv =  ((QGraphicsTransformList*)this_)->constFirst();
    return new decltype(rv)(rv);
}

// [-3] const T & first()
extern "C"
QGraphicsTransform ** C_QGraphicsTransformList_first_1(void* this_ ) {
    // QGraphicsTransformList_first_1()
    auto rv =  ((QGraphicsTransformList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] T & last()
extern "C"
QGraphicsTransform ** C_QGraphicsTransformList_last_0(void* this_ ) {
    // QGraphicsTransformList_last_0()
    auto rv =  ((QGraphicsTransformList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & last()
extern "C"
QGraphicsTransform ** C_QGraphicsTransformList_last_1(void* this_ ) {
    // QGraphicsTransformList_last_1()
    auto rv =  ((QGraphicsTransformList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & constLast()
extern "C"
QGraphicsTransform ** C_QGraphicsTransformList_constLast_0(void* this_ ) {
    // QGraphicsTransformList_constLast_0()
    auto rv =  ((QGraphicsTransformList*)this_)->constLast();
    return new decltype(rv)(rv);
}

// [-2] void removeFirst()
extern "C"
void C_QGraphicsTransformList_removeFirst_0(void* this_ ) {
    // QGraphicsTransformList_removeFirst_0()
     ((QGraphicsTransformList*)this_)->removeFirst();
}

// [-2] void removeLast()
extern "C"
void C_QGraphicsTransformList_removeLast_0(void* this_ ) {
    // QGraphicsTransformList_removeLast_0()
     ((QGraphicsTransformList*)this_)->removeLast();
}

// [1] bool startsWith(const T &)
extern "C"
bool C_QGraphicsTransformList_startsWith_0(void* this_ , QGraphicsTransform * t) {
    // QGraphicsTransformList_startsWith_0()
    auto rv =  ((QGraphicsTransformList*)this_)->startsWith(t);
    return rv;
}

// [1] bool endsWith(const T &)
extern "C"
bool C_QGraphicsTransformList_endsWith_0(void* this_ , QGraphicsTransform * t) {
    // QGraphicsTransformList_endsWith_0()
    auto rv =  ((QGraphicsTransformList*)this_)->endsWith(t);
    return rv;
}

// [-3] QList<T> mid(int, int)
extern "C"
QGraphicsTransformList* C_QGraphicsTransformList_mid_0(void* this_ , int pos, int length) {
    // QGraphicsTransformList_mid_0()
    auto rv =  ((QGraphicsTransformList*)this_)->mid(pos, length);
    return (QGraphicsTransformList*)this_;
}

// [-3] T value(int)
extern "C"
QGraphicsTransform ** C_QGraphicsTransformList_value_0(void* this_ , int i) {
    // QGraphicsTransformList_value_0()
    auto rv =  ((QGraphicsTransformList*)this_)->value(i);
    return new decltype(rv)(rv);
}

// [-3] T value(int, const T &)
extern "C"
QGraphicsTransform ** C_QGraphicsTransformList_value_1(void* this_ , int i, QGraphicsTransform * defaultValue) {
    // QGraphicsTransformList_value_1()
    auto rv =  ((QGraphicsTransformList*)this_)->value(i, defaultValue);
    return new decltype(rv)(rv);
}

// [-2] void push_back(const T &)
extern "C"
void C_QGraphicsTransformList_push_back_0(void* this_ , QGraphicsTransform * t) {
    // QGraphicsTransformList_push_back_0()
     ((QGraphicsTransformList*)this_)->push_back(t);
}

// [-2] void push_front(const T &)
extern "C"
void C_QGraphicsTransformList_push_front_0(void* this_ , QGraphicsTransform * t) {
    // QGraphicsTransformList_push_front_0()
     ((QGraphicsTransformList*)this_)->push_front(t);
}

// [-3] T & front()
extern "C"
QGraphicsTransform ** C_QGraphicsTransformList_front_0(void* this_ ) {
    // QGraphicsTransformList_front_0()
    auto rv =  ((QGraphicsTransformList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] const T & front()
extern "C"
QGraphicsTransform ** C_QGraphicsTransformList_front_1(void* this_ ) {
    // QGraphicsTransformList_front_1()
    auto rv =  ((QGraphicsTransformList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] T & back()
extern "C"
QGraphicsTransform ** C_QGraphicsTransformList_back_0(void* this_ ) {
    // QGraphicsTransformList_back_0()
    auto rv =  ((QGraphicsTransformList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-3] const T & back()
extern "C"
QGraphicsTransform ** C_QGraphicsTransformList_back_1(void* this_ ) {
    // QGraphicsTransformList_back_1()
    auto rv =  ((QGraphicsTransformList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-2] void pop_front()
extern "C"
void C_QGraphicsTransformList_pop_front_0(void* this_ ) {
    // QGraphicsTransformList_pop_front_0()
     ((QGraphicsTransformList*)this_)->pop_front();
}

// [-2] void pop_back()
extern "C"
void C_QGraphicsTransformList_pop_back_0(void* this_ ) {
    // QGraphicsTransformList_pop_back_0()
     ((QGraphicsTransformList*)this_)->pop_back();
}

// [1] bool empty()
extern "C"
bool C_QGraphicsTransformList_empty_0(void* this_ ) {
    // QGraphicsTransformList_empty_0()
    auto rv =  ((QGraphicsTransformList*)this_)->empty();
    return rv;
}

// [-3] QList<T> & operator+=(const QList<T> &)
extern "C"
QGraphicsTransformList* C_QGraphicsTransformList_operator_add_equal_0(void* this_ , QGraphicsTransformList* l) {
    // QGraphicsTransformList_operator_add_equal_0()
    auto rv =  ((QGraphicsTransformList*)this_)->operator+=(*l);
    return (QGraphicsTransformList*)this_;
}

// [-3] QList<T> operator+(const QList<T> &)
extern "C"
QGraphicsTransformList* C_QGraphicsTransformList_operator_add_0(void* this_ , QGraphicsTransformList* l) {
    // QGraphicsTransformList_operator_add_0()
    auto rv =  ((QGraphicsTransformList*)this_)->operator+(*l);
    return (QGraphicsTransformList*)this_;
}

// [-3] QList<T> & operator+=(const T &)
extern "C"
QGraphicsTransformList* C_QGraphicsTransformList_operator_add_equal_1(void* this_ , QGraphicsTransform * t) {
    // QGraphicsTransformList_operator_add_equal_1()
    auto rv =  ((QGraphicsTransformList*)this_)->operator+=(t);
    return (QGraphicsTransformList*)this_;
}

// [-3] QList<T> & operator<<(const T &)
extern "C"
QGraphicsTransformList* C_QGraphicsTransformList_operator_left_shift_0(void* this_ , QGraphicsTransform * t) {
    // QGraphicsTransformList_operator_left_shift_0()
    auto rv =  ((QGraphicsTransformList*)this_)->operator<<(t);
    return (QGraphicsTransformList*)this_;
}

// [-3] QList<T> & operator<<(const QList<T> &)
extern "C"
QGraphicsTransformList* C_QGraphicsTransformList_operator_left_shift_1(void* this_ , QGraphicsTransformList* l) {
    // QGraphicsTransformList_operator_left_shift_1()
    auto rv =  ((QGraphicsTransformList*)this_)->operator<<(*l);
    return (QGraphicsTransformList*)this_;
}

// [-3] QVector<T> toVector()
extern "C"
void C_QGraphicsTransformList_toVector_0(void* this_ ) {
    // QGraphicsTransformList_toVector_0()
    auto rv =  ((QGraphicsTransformList*)this_)->toVector();
}

// [-3] std::list<T> toStdList()
extern "C"
void C_QGraphicsTransformList_toStdList_0(void* this_ ) {
    // QGraphicsTransformList_toStdList_0()
    auto rv =  ((QGraphicsTransformList*)this_)->toStdList();
}

//  body block end
