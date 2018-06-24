
// /usr/include/qt/QtGui/qpolygon.h
#ifndef protected
#define protected public
#endif
#include <qpolygon.h>
#include <QtGui>
#include "callback_inherit.h"

#ifndef QPolygonFList
#ifndef QPOLYGONFLIST_H
typedef QList<QPolygonF> QPolygonFList;
#endif
#endif
//  header block end

//  body block begin
// [-3] QList<T> & operator=(const QList<T> &)
extern "C" Q_DECL_EXPORT
QPolygonFList* C_QPolygonFList_operator_equal_0(void* this_ , QPolygonFList* l) {
    // QPolygonFList_operator_equal_0()
    auto rv =  ((QPolygonFList*)this_)->operator=(*l);
    return (QPolygonFList*)this_;
}

// [-3] QList<T> & operator=(QList<T> &&)
extern "C" Q_DECL_EXPORT
QPolygonFList* C_QPolygonFList_operator_equal_1(void* this_ , QPolygonFList* other) {
    // QPolygonFList_operator_equal_1()
    auto rv =  ((QPolygonFList*)this_)->operator=(*other);
    return (QPolygonFList*)this_;
}

// [-2] void swap(QList<T> &)
extern "C" Q_DECL_EXPORT
void C_QPolygonFList_swap_0(void* this_ , QPolygonFList* other) {
    // QPolygonFList_swap_0()
     ((QPolygonFList*)this_)->swap(*other);
}

// [1] bool operator==(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QPolygonFList_operator_equal_equal_0(void* this_ , QPolygonFList* l) {
    // QPolygonFList_operator_equal_equal_0()
    auto rv =  ((QPolygonFList*)this_)->operator==(*l);
    return rv;
}

// [1] bool operator!=(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QPolygonFList_operator_not_equal_0(void* this_ , QPolygonFList* l) {
    // QPolygonFList_operator_not_equal_0()
    auto rv =  ((QPolygonFList*)this_)->operator!=(*l);
    return rv;
}

// [4] int size()
extern "C" Q_DECL_EXPORT
int C_QPolygonFList_size_0(void* this_ ) {
    // QPolygonFList_size_0()
    auto rv =  ((QPolygonFList*)this_)->size();
    return rv;
}

// [-2] void detach()
extern "C" Q_DECL_EXPORT
void C_QPolygonFList_detach_0(void* this_ ) {
    // QPolygonFList_detach_0()
     ((QPolygonFList*)this_)->detach();
}

// [-2] void detachShared()
extern "C" Q_DECL_EXPORT
void C_QPolygonFList_detachShared_0(void* this_ ) {
    // QPolygonFList_detachShared_0()
     ((QPolygonFList*)this_)->detachShared();
}

// [1] bool isDetached()
extern "C" Q_DECL_EXPORT
bool C_QPolygonFList_isDetached_0(void* this_ ) {
    // QPolygonFList_isDetached_0()
    auto rv =  ((QPolygonFList*)this_)->isDetached();
    return rv;
}

// [-2] void setSharable(bool)
extern "C" Q_DECL_EXPORT
void C_QPolygonFList_setSharable_0(void* this_ , bool sharable) {
    // QPolygonFList_setSharable_0()
     ((QPolygonFList*)this_)->setSharable(sharable);
}

// [1] bool isSharedWith(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QPolygonFList_isSharedWith_0(void* this_ , QPolygonFList* other) {
    // QPolygonFList_isSharedWith_0()
    auto rv =  ((QPolygonFList*)this_)->isSharedWith(*other);
    return rv;
}

// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_QPolygonFList_isEmpty_0(void* this_ ) {
    // QPolygonFList_isEmpty_0()
    auto rv =  ((QPolygonFList*)this_)->isEmpty();
    return rv;
}

// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_QPolygonFList_clear_0(void* this_ ) {
    // QPolygonFList_clear_0()
     ((QPolygonFList*)this_)->clear();
}

// [-3] const T & at(int)
extern "C" Q_DECL_EXPORT
QPolygonF* C_QPolygonFList_at_0(void* this_ , int i) {
    // QPolygonFList_at_0()
    auto rv =  ((QPolygonFList*)this_)->at(i);
    return new decltype(rv)(rv);
}

// [-3] const T & operator[](int)
extern "C" Q_DECL_EXPORT
QPolygonF* C_QPolygonFList_operator_get_index_0(void* this_ , int i) {
    // QPolygonFList_operator_get_index_0()
    auto rv =  ((QPolygonFList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-3] T & operator[](int)
extern "C" Q_DECL_EXPORT
QPolygonF* C_QPolygonFList_operator_get_index_1(void* this_ , int i) {
    // QPolygonFList_operator_get_index_1()
    auto rv =  ((QPolygonFList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-2] void reserve(int)
extern "C" Q_DECL_EXPORT
void C_QPolygonFList_reserve_0(void* this_ , int size) {
    // QPolygonFList_reserve_0()
     ((QPolygonFList*)this_)->reserve(size);
}

// [-2] void append(const T &)
extern "C" Q_DECL_EXPORT
void C_QPolygonFList_append_0(void* this_ , QPolygonF* t) {
    // QPolygonFList_append_0()
     ((QPolygonFList*)this_)->append(*t);
}

// [-2] void append(const QList<T> &)
extern "C" Q_DECL_EXPORT
void C_QPolygonFList_append_1(void* this_ , QPolygonFList* t) {
    // QPolygonFList_append_1()
     ((QPolygonFList*)this_)->append(*t);
}

// [-2] void prepend(const T &)
extern "C" Q_DECL_EXPORT
void C_QPolygonFList_prepend_0(void* this_ , QPolygonF* t) {
    // QPolygonFList_prepend_0()
     ((QPolygonFList*)this_)->prepend(*t);
}

// [-2] void insert(int, const T &)
extern "C" Q_DECL_EXPORT
void C_QPolygonFList_insert_0(void* this_ , int i, QPolygonF* t) {
    // QPolygonFList_insert_0()
     ((QPolygonFList*)this_)->insert(i, *t);
}

// [-2] void replace(int, const T &)
extern "C" Q_DECL_EXPORT
void C_QPolygonFList_replace_0(void* this_ , int i, QPolygonF* t) {
    // QPolygonFList_replace_0()
     ((QPolygonFList*)this_)->replace(i, *t);
}

// [-2] void removeAt(int)
extern "C" Q_DECL_EXPORT
void C_QPolygonFList_removeAt_0(void* this_ , int i) {
    // QPolygonFList_removeAt_0()
     ((QPolygonFList*)this_)->removeAt(i);
}

// [4] int removeAll(const T &)
extern "C" Q_DECL_EXPORT
int C_QPolygonFList_removeAll_0(void* this_ , QPolygonF* t) {
    // QPolygonFList_removeAll_0()
    auto rv =  ((QPolygonFList*)this_)->removeAll(*t);
    return rv;
}

// [1] bool removeOne(const T &)
extern "C" Q_DECL_EXPORT
bool C_QPolygonFList_removeOne_0(void* this_ , QPolygonF* t) {
    // QPolygonFList_removeOne_0()
    auto rv =  ((QPolygonFList*)this_)->removeOne(*t);
    return rv;
}

// [-3] T takeAt(int)
extern "C" Q_DECL_EXPORT
QPolygonF* C_QPolygonFList_takeAt_0(void* this_ , int i) {
    // QPolygonFList_takeAt_0()
    auto rv =  ((QPolygonFList*)this_)->takeAt(i);
    return new decltype(rv)(rv);
}

// [-3] T takeFirst()
extern "C" Q_DECL_EXPORT
QPolygonF* C_QPolygonFList_takeFirst_0(void* this_ ) {
    // QPolygonFList_takeFirst_0()
    auto rv =  ((QPolygonFList*)this_)->takeFirst();
    return new decltype(rv)(rv);
}

// [-3] T takeLast()
extern "C" Q_DECL_EXPORT
QPolygonF* C_QPolygonFList_takeLast_0(void* this_ ) {
    // QPolygonFList_takeLast_0()
    auto rv =  ((QPolygonFList*)this_)->takeLast();
    return new decltype(rv)(rv);
}

// [-2] void move(int, int)
extern "C" Q_DECL_EXPORT
void C_QPolygonFList_move_0(void* this_ , int from, int to) {
    // QPolygonFList_move_0()
     ((QPolygonFList*)this_)->move(from, to);
}

// [-2] void swap(int, int)
extern "C" Q_DECL_EXPORT
void C_QPolygonFList_swap_1(void* this_ , int i, int j) {
    // QPolygonFList_swap_1()
     ((QPolygonFList*)this_)->swap(i, j);
}

// [4] int indexOf(const T &, int)
extern "C" Q_DECL_EXPORT
int C_QPolygonFList_indexOf_0(void* this_ , QPolygonF* t, int from) {
    // QPolygonFList_indexOf_0()
    auto rv =  ((QPolygonFList*)this_)->indexOf(*t, from);
    return rv;
}

// [4] int lastIndexOf(const T &, int)
extern "C" Q_DECL_EXPORT
int C_QPolygonFList_lastIndexOf_0(void* this_ , QPolygonF* t, int from) {
    // QPolygonFList_lastIndexOf_0()
    auto rv =  ((QPolygonFList*)this_)->lastIndexOf(*t, from);
    return rv;
}

// [1] bool contains(const T &)
extern "C" Q_DECL_EXPORT
bool C_QPolygonFList_contains_0(void* this_ , QPolygonF* t) {
    // QPolygonFList_contains_0()
    auto rv =  ((QPolygonFList*)this_)->contains(*t);
    return rv;
}

// [4] int count(const T &)
extern "C" Q_DECL_EXPORT
int C_QPolygonFList_count_0(void* this_ , QPolygonF* t) {
    // QPolygonFList_count_0()
    auto rv =  ((QPolygonFList*)this_)->count(*t);
    return rv;
}

// [-3] QList::iterator begin()
extern "C" Q_DECL_EXPORT
QPolygonFList::iterator* C_QPolygonFList_begin_0(void* this_ ) {
    // QPolygonFList_begin_0()
    auto rv =  ((QPolygonFList*)this_)->begin();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator end()
extern "C" Q_DECL_EXPORT
QPolygonFList::iterator* C_QPolygonFList_end_0(void* this_ ) {
    // QPolygonFList_end_0()
    auto rv =  ((QPolygonFList*)this_)->end();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rbegin()
extern "C" Q_DECL_EXPORT
QPolygonFList::reverse_iterator* C_QPolygonFList_rbegin_0(void* this_ ) {
    // QPolygonFList_rbegin_0()
    auto rv =  ((QPolygonFList*)this_)->rbegin();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rend()
extern "C" Q_DECL_EXPORT
QPolygonFList::reverse_iterator* C_QPolygonFList_rend_0(void* this_ ) {
    // QPolygonFList_rend_0()
    auto rv =  ((QPolygonFList*)this_)->rend();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator insert(QList::iterator, const T &)
extern "C" Q_DECL_EXPORT
QPolygonFList::iterator* C_QPolygonFList_insert_1(void* this_ , QPolygonFList::iterator* before, QPolygonF* t) {
    // QPolygonFList_insert_1()
    auto rv =  ((QPolygonFList*)this_)->insert(*before, *t);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator)
extern "C" Q_DECL_EXPORT
QPolygonFList::iterator* C_QPolygonFList_erase_0(void* this_ , QPolygonFList::iterator* pos) {
    // QPolygonFList_erase_0()
    auto rv =  ((QPolygonFList*)this_)->erase(*pos);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator, QList::iterator)
extern "C" Q_DECL_EXPORT
QPolygonFList::iterator* C_QPolygonFList_erase_1(void* this_ , QPolygonFList::iterator* first, QPolygonFList::iterator* last) {
    // QPolygonFList_erase_1()
    auto rv =  ((QPolygonFList*)this_)->erase(*first, *last);
    return new decltype(rv)(rv);
}

// [4] int count()
extern "C" Q_DECL_EXPORT
int C_QPolygonFList_count_1(void* this_ ) {
    // QPolygonFList_count_1()
    auto rv =  ((QPolygonFList*)this_)->count();
    return rv;
}

// [4] int length()
extern "C" Q_DECL_EXPORT
int C_QPolygonFList_length_0(void* this_ ) {
    // QPolygonFList_length_0()
    auto rv =  ((QPolygonFList*)this_)->length();
    return rv;
}

// [-3] T & first()
extern "C" Q_DECL_EXPORT
QPolygonF* C_QPolygonFList_first_0(void* this_ ) {
    // QPolygonFList_first_0()
    auto rv =  ((QPolygonFList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] const T & constFirst()
extern "C" Q_DECL_EXPORT
QPolygonF* C_QPolygonFList_constFirst_0(void* this_ ) {
    // QPolygonFList_constFirst_0()
    auto rv =  ((QPolygonFList*)this_)->constFirst();
    return new decltype(rv)(rv);
}

// [-3] const T & first()
extern "C" Q_DECL_EXPORT
QPolygonF* C_QPolygonFList_first_1(void* this_ ) {
    // QPolygonFList_first_1()
    auto rv =  ((QPolygonFList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] T & last()
extern "C" Q_DECL_EXPORT
QPolygonF* C_QPolygonFList_last_0(void* this_ ) {
    // QPolygonFList_last_0()
    auto rv =  ((QPolygonFList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & last()
extern "C" Q_DECL_EXPORT
QPolygonF* C_QPolygonFList_last_1(void* this_ ) {
    // QPolygonFList_last_1()
    auto rv =  ((QPolygonFList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & constLast()
extern "C" Q_DECL_EXPORT
QPolygonF* C_QPolygonFList_constLast_0(void* this_ ) {
    // QPolygonFList_constLast_0()
    auto rv =  ((QPolygonFList*)this_)->constLast();
    return new decltype(rv)(rv);
}

// [-2] void removeFirst()
extern "C" Q_DECL_EXPORT
void C_QPolygonFList_removeFirst_0(void* this_ ) {
    // QPolygonFList_removeFirst_0()
     ((QPolygonFList*)this_)->removeFirst();
}

// [-2] void removeLast()
extern "C" Q_DECL_EXPORT
void C_QPolygonFList_removeLast_0(void* this_ ) {
    // QPolygonFList_removeLast_0()
     ((QPolygonFList*)this_)->removeLast();
}

// [1] bool startsWith(const T &)
extern "C" Q_DECL_EXPORT
bool C_QPolygonFList_startsWith_0(void* this_ , QPolygonF* t) {
    // QPolygonFList_startsWith_0()
    auto rv =  ((QPolygonFList*)this_)->startsWith(*t);
    return rv;
}

// [1] bool endsWith(const T &)
extern "C" Q_DECL_EXPORT
bool C_QPolygonFList_endsWith_0(void* this_ , QPolygonF* t) {
    // QPolygonFList_endsWith_0()
    auto rv =  ((QPolygonFList*)this_)->endsWith(*t);
    return rv;
}

// [-3] QList<T> mid(int, int)
extern "C" Q_DECL_EXPORT
QPolygonFList* C_QPolygonFList_mid_0(void* this_ , int pos, int length) {
    // QPolygonFList_mid_0()
    auto rv =  ((QPolygonFList*)this_)->mid(pos, length);
    return (QPolygonFList*)this_;
}

// [-3] T value(int)
extern "C" Q_DECL_EXPORT
QPolygonF* C_QPolygonFList_value_0(void* this_ , int i) {
    // QPolygonFList_value_0()
    auto rv =  ((QPolygonFList*)this_)->value(i);
    return new decltype(rv)(rv);
}

// [-3] T value(int, const T &)
extern "C" Q_DECL_EXPORT
QPolygonF* C_QPolygonFList_value_1(void* this_ , int i, QPolygonF* defaultValue) {
    // QPolygonFList_value_1()
    auto rv =  ((QPolygonFList*)this_)->value(i, *defaultValue);
    return new decltype(rv)(rv);
}

// [-2] void push_back(const T &)
extern "C" Q_DECL_EXPORT
void C_QPolygonFList_push_back_0(void* this_ , QPolygonF* t) {
    // QPolygonFList_push_back_0()
     ((QPolygonFList*)this_)->push_back(*t);
}

// [-2] void push_front(const T &)
extern "C" Q_DECL_EXPORT
void C_QPolygonFList_push_front_0(void* this_ , QPolygonF* t) {
    // QPolygonFList_push_front_0()
     ((QPolygonFList*)this_)->push_front(*t);
}

// [-3] T & front()
extern "C" Q_DECL_EXPORT
QPolygonF* C_QPolygonFList_front_0(void* this_ ) {
    // QPolygonFList_front_0()
    auto rv =  ((QPolygonFList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] const T & front()
extern "C" Q_DECL_EXPORT
QPolygonF* C_QPolygonFList_front_1(void* this_ ) {
    // QPolygonFList_front_1()
    auto rv =  ((QPolygonFList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] T & back()
extern "C" Q_DECL_EXPORT
QPolygonF* C_QPolygonFList_back_0(void* this_ ) {
    // QPolygonFList_back_0()
    auto rv =  ((QPolygonFList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-3] const T & back()
extern "C" Q_DECL_EXPORT
QPolygonF* C_QPolygonFList_back_1(void* this_ ) {
    // QPolygonFList_back_1()
    auto rv =  ((QPolygonFList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-2] void pop_front()
extern "C" Q_DECL_EXPORT
void C_QPolygonFList_pop_front_0(void* this_ ) {
    // QPolygonFList_pop_front_0()
     ((QPolygonFList*)this_)->pop_front();
}

// [-2] void pop_back()
extern "C" Q_DECL_EXPORT
void C_QPolygonFList_pop_back_0(void* this_ ) {
    // QPolygonFList_pop_back_0()
     ((QPolygonFList*)this_)->pop_back();
}

// [1] bool empty()
extern "C" Q_DECL_EXPORT
bool C_QPolygonFList_empty_0(void* this_ ) {
    // QPolygonFList_empty_0()
    auto rv =  ((QPolygonFList*)this_)->empty();
    return rv;
}

// [-3] QList<T> & operator+=(const QList<T> &)
extern "C" Q_DECL_EXPORT
QPolygonFList* C_QPolygonFList_operator_add_equal_0(void* this_ , QPolygonFList* l) {
    // QPolygonFList_operator_add_equal_0()
    auto rv =  ((QPolygonFList*)this_)->operator+=(*l);
    return (QPolygonFList*)this_;
}

// [-3] QList<T> operator+(const QList<T> &)
extern "C" Q_DECL_EXPORT
QPolygonFList* C_QPolygonFList_operator_add_0(void* this_ , QPolygonFList* l) {
    // QPolygonFList_operator_add_0()
    auto rv =  ((QPolygonFList*)this_)->operator+(*l);
    return (QPolygonFList*)this_;
}

// [-3] QList<T> & operator+=(const T &)
extern "C" Q_DECL_EXPORT
QPolygonFList* C_QPolygonFList_operator_add_equal_1(void* this_ , QPolygonF* t) {
    // QPolygonFList_operator_add_equal_1()
    auto rv =  ((QPolygonFList*)this_)->operator+=(*t);
    return (QPolygonFList*)this_;
}

// [-3] QList<T> & operator<<(const T &)
extern "C" Q_DECL_EXPORT
QPolygonFList* C_QPolygonFList_operator_left_shift_0(void* this_ , QPolygonF* t) {
    // QPolygonFList_operator_left_shift_0()
    auto rv =  ((QPolygonFList*)this_)->operator<<(*t);
    return (QPolygonFList*)this_;
}

// [-3] QList<T> & operator<<(const QList<T> &)
extern "C" Q_DECL_EXPORT
QPolygonFList* C_QPolygonFList_operator_left_shift_1(void* this_ , QPolygonFList* l) {
    // QPolygonFList_operator_left_shift_1()
    auto rv =  ((QPolygonFList*)this_)->operator<<(*l);
    return (QPolygonFList*)this_;
}

// [-3] QVector<T> toVector()
extern "C" Q_DECL_EXPORT
void C_QPolygonFList_toVector_0(void* this_ ) {
    // QPolygonFList_toVector_0()
    auto rv =  ((QPolygonFList*)this_)->toVector();
}

// [-3] std::list<T> toStdList()
extern "C" Q_DECL_EXPORT
void C_QPolygonFList_toStdList_0(void* this_ ) {
    // QPolygonFList_toStdList_0()
    auto rv =  ((QPolygonFList*)this_)->toStdList();
}

//  body block end
