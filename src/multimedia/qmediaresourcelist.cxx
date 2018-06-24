
// /usr/include/qt/QtMultimedia/qmediaresource.h
#ifndef protected
#define protected public
#endif
#include <qmediaresource.h>
#include <QtMultimedia>
#include "callback_inherit.h"

#ifndef QMediaResourceList
#ifndef QMEDIARESOURCELIST_H
typedef QList<QMediaResource> QMediaResourceList;
#endif
#endif
//  header block end

//  body block begin
// [-3] QList<T> & operator=(const QList<T> &)
extern "C" Q_DECL_EXPORT
QMediaResourceList* C_QMediaResourceList_operator_equal_0(void* this_ , QMediaResourceList* l) {
    // QMediaResourceList_operator_equal_0()
    auto rv =  ((QMediaResourceList*)this_)->operator=(*l);
    return (QMediaResourceList*)this_;
}

// [-3] QList<T> & operator=(QList<T> &&)
extern "C" Q_DECL_EXPORT
QMediaResourceList* C_QMediaResourceList_operator_equal_1(void* this_ , QMediaResourceList* other) {
    // QMediaResourceList_operator_equal_1()
    auto rv =  ((QMediaResourceList*)this_)->operator=(*other);
    return (QMediaResourceList*)this_;
}

// [-2] void swap(QList<T> &)
extern "C" Q_DECL_EXPORT
void C_QMediaResourceList_swap_0(void* this_ , QMediaResourceList* other) {
    // QMediaResourceList_swap_0()
     ((QMediaResourceList*)this_)->swap(*other);
}

// [1] bool operator==(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QMediaResourceList_operator_equal_equal_0(void* this_ , QMediaResourceList* l) {
    // QMediaResourceList_operator_equal_equal_0()
    auto rv =  ((QMediaResourceList*)this_)->operator==(*l);
    return rv;
}

// [1] bool operator!=(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QMediaResourceList_operator_not_equal_0(void* this_ , QMediaResourceList* l) {
    // QMediaResourceList_operator_not_equal_0()
    auto rv =  ((QMediaResourceList*)this_)->operator!=(*l);
    return rv;
}

// [4] int size()
extern "C" Q_DECL_EXPORT
int C_QMediaResourceList_size_0(void* this_ ) {
    // QMediaResourceList_size_0()
    auto rv =  ((QMediaResourceList*)this_)->size();
    return rv;
}

// [-2] void detach()
extern "C" Q_DECL_EXPORT
void C_QMediaResourceList_detach_0(void* this_ ) {
    // QMediaResourceList_detach_0()
     ((QMediaResourceList*)this_)->detach();
}

// [-2] void detachShared()
extern "C" Q_DECL_EXPORT
void C_QMediaResourceList_detachShared_0(void* this_ ) {
    // QMediaResourceList_detachShared_0()
     ((QMediaResourceList*)this_)->detachShared();
}

// [1] bool isDetached()
extern "C" Q_DECL_EXPORT
bool C_QMediaResourceList_isDetached_0(void* this_ ) {
    // QMediaResourceList_isDetached_0()
    auto rv =  ((QMediaResourceList*)this_)->isDetached();
    return rv;
}

// [-2] void setSharable(bool)
extern "C" Q_DECL_EXPORT
void C_QMediaResourceList_setSharable_0(void* this_ , bool sharable) {
    // QMediaResourceList_setSharable_0()
     ((QMediaResourceList*)this_)->setSharable(sharable);
}

// [1] bool isSharedWith(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QMediaResourceList_isSharedWith_0(void* this_ , QMediaResourceList* other) {
    // QMediaResourceList_isSharedWith_0()
    auto rv =  ((QMediaResourceList*)this_)->isSharedWith(*other);
    return rv;
}

// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_QMediaResourceList_isEmpty_0(void* this_ ) {
    // QMediaResourceList_isEmpty_0()
    auto rv =  ((QMediaResourceList*)this_)->isEmpty();
    return rv;
}

// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_QMediaResourceList_clear_0(void* this_ ) {
    // QMediaResourceList_clear_0()
     ((QMediaResourceList*)this_)->clear();
}

// [-3] const T & at(int)
extern "C" Q_DECL_EXPORT
QMediaResource* C_QMediaResourceList_at_0(void* this_ , int i) {
    // QMediaResourceList_at_0()
    auto rv =  ((QMediaResourceList*)this_)->at(i);
    return new decltype(rv)(rv);
}

// [-3] const T & operator[](int)
extern "C" Q_DECL_EXPORT
QMediaResource* C_QMediaResourceList_operator_get_index_0(void* this_ , int i) {
    // QMediaResourceList_operator_get_index_0()
    auto rv =  ((QMediaResourceList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-3] T & operator[](int)
extern "C" Q_DECL_EXPORT
QMediaResource* C_QMediaResourceList_operator_get_index_1(void* this_ , int i) {
    // QMediaResourceList_operator_get_index_1()
    auto rv =  ((QMediaResourceList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-2] void reserve(int)
extern "C" Q_DECL_EXPORT
void C_QMediaResourceList_reserve_0(void* this_ , int size) {
    // QMediaResourceList_reserve_0()
     ((QMediaResourceList*)this_)->reserve(size);
}

// [-2] void append(const T &)
extern "C" Q_DECL_EXPORT
void C_QMediaResourceList_append_0(void* this_ , QMediaResource* t) {
    // QMediaResourceList_append_0()
     ((QMediaResourceList*)this_)->append(*t);
}

// [-2] void append(const QList<T> &)
extern "C" Q_DECL_EXPORT
void C_QMediaResourceList_append_1(void* this_ , QMediaResourceList* t) {
    // QMediaResourceList_append_1()
     ((QMediaResourceList*)this_)->append(*t);
}

// [-2] void prepend(const T &)
extern "C" Q_DECL_EXPORT
void C_QMediaResourceList_prepend_0(void* this_ , QMediaResource* t) {
    // QMediaResourceList_prepend_0()
     ((QMediaResourceList*)this_)->prepend(*t);
}

// [-2] void insert(int, const T &)
extern "C" Q_DECL_EXPORT
void C_QMediaResourceList_insert_0(void* this_ , int i, QMediaResource* t) {
    // QMediaResourceList_insert_0()
     ((QMediaResourceList*)this_)->insert(i, *t);
}

// [-2] void replace(int, const T &)
extern "C" Q_DECL_EXPORT
void C_QMediaResourceList_replace_0(void* this_ , int i, QMediaResource* t) {
    // QMediaResourceList_replace_0()
     ((QMediaResourceList*)this_)->replace(i, *t);
}

// [-2] void removeAt(int)
extern "C" Q_DECL_EXPORT
void C_QMediaResourceList_removeAt_0(void* this_ , int i) {
    // QMediaResourceList_removeAt_0()
     ((QMediaResourceList*)this_)->removeAt(i);
}

// [4] int removeAll(const T &)
extern "C" Q_DECL_EXPORT
int C_QMediaResourceList_removeAll_0(void* this_ , QMediaResource* t) {
    // QMediaResourceList_removeAll_0()
    auto rv =  ((QMediaResourceList*)this_)->removeAll(*t);
    return rv;
}

// [1] bool removeOne(const T &)
extern "C" Q_DECL_EXPORT
bool C_QMediaResourceList_removeOne_0(void* this_ , QMediaResource* t) {
    // QMediaResourceList_removeOne_0()
    auto rv =  ((QMediaResourceList*)this_)->removeOne(*t);
    return rv;
}

// [-3] T takeAt(int)
extern "C" Q_DECL_EXPORT
QMediaResource* C_QMediaResourceList_takeAt_0(void* this_ , int i) {
    // QMediaResourceList_takeAt_0()
    auto rv =  ((QMediaResourceList*)this_)->takeAt(i);
    return new decltype(rv)(rv);
}

// [-3] T takeFirst()
extern "C" Q_DECL_EXPORT
QMediaResource* C_QMediaResourceList_takeFirst_0(void* this_ ) {
    // QMediaResourceList_takeFirst_0()
    auto rv =  ((QMediaResourceList*)this_)->takeFirst();
    return new decltype(rv)(rv);
}

// [-3] T takeLast()
extern "C" Q_DECL_EXPORT
QMediaResource* C_QMediaResourceList_takeLast_0(void* this_ ) {
    // QMediaResourceList_takeLast_0()
    auto rv =  ((QMediaResourceList*)this_)->takeLast();
    return new decltype(rv)(rv);
}

// [-2] void move(int, int)
extern "C" Q_DECL_EXPORT
void C_QMediaResourceList_move_0(void* this_ , int from, int to) {
    // QMediaResourceList_move_0()
     ((QMediaResourceList*)this_)->move(from, to);
}

// [-2] void swap(int, int)
extern "C" Q_DECL_EXPORT
void C_QMediaResourceList_swap_1(void* this_ , int i, int j) {
    // QMediaResourceList_swap_1()
     ((QMediaResourceList*)this_)->swap(i, j);
}

// [4] int indexOf(const T &, int)
extern "C" Q_DECL_EXPORT
int C_QMediaResourceList_indexOf_0(void* this_ , QMediaResource* t, int from) {
    // QMediaResourceList_indexOf_0()
    auto rv =  ((QMediaResourceList*)this_)->indexOf(*t, from);
    return rv;
}

// [4] int lastIndexOf(const T &, int)
extern "C" Q_DECL_EXPORT
int C_QMediaResourceList_lastIndexOf_0(void* this_ , QMediaResource* t, int from) {
    // QMediaResourceList_lastIndexOf_0()
    auto rv =  ((QMediaResourceList*)this_)->lastIndexOf(*t, from);
    return rv;
}

// [1] bool contains(const T &)
extern "C" Q_DECL_EXPORT
bool C_QMediaResourceList_contains_0(void* this_ , QMediaResource* t) {
    // QMediaResourceList_contains_0()
    auto rv =  ((QMediaResourceList*)this_)->contains(*t);
    return rv;
}

// [4] int count(const T &)
extern "C" Q_DECL_EXPORT
int C_QMediaResourceList_count_0(void* this_ , QMediaResource* t) {
    // QMediaResourceList_count_0()
    auto rv =  ((QMediaResourceList*)this_)->count(*t);
    return rv;
}

// [-3] QList::iterator begin()
extern "C" Q_DECL_EXPORT
QMediaResourceList::iterator* C_QMediaResourceList_begin_0(void* this_ ) {
    // QMediaResourceList_begin_0()
    auto rv =  ((QMediaResourceList*)this_)->begin();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator end()
extern "C" Q_DECL_EXPORT
QMediaResourceList::iterator* C_QMediaResourceList_end_0(void* this_ ) {
    // QMediaResourceList_end_0()
    auto rv =  ((QMediaResourceList*)this_)->end();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rbegin()
extern "C" Q_DECL_EXPORT
QMediaResourceList::reverse_iterator* C_QMediaResourceList_rbegin_0(void* this_ ) {
    // QMediaResourceList_rbegin_0()
    auto rv =  ((QMediaResourceList*)this_)->rbegin();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rend()
extern "C" Q_DECL_EXPORT
QMediaResourceList::reverse_iterator* C_QMediaResourceList_rend_0(void* this_ ) {
    // QMediaResourceList_rend_0()
    auto rv =  ((QMediaResourceList*)this_)->rend();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator insert(QList::iterator, const T &)
extern "C" Q_DECL_EXPORT
QMediaResourceList::iterator* C_QMediaResourceList_insert_1(void* this_ , QMediaResourceList::iterator* before, QMediaResource* t) {
    // QMediaResourceList_insert_1()
    auto rv =  ((QMediaResourceList*)this_)->insert(*before, *t);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator)
extern "C" Q_DECL_EXPORT
QMediaResourceList::iterator* C_QMediaResourceList_erase_0(void* this_ , QMediaResourceList::iterator* pos) {
    // QMediaResourceList_erase_0()
    auto rv =  ((QMediaResourceList*)this_)->erase(*pos);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator, QList::iterator)
extern "C" Q_DECL_EXPORT
QMediaResourceList::iterator* C_QMediaResourceList_erase_1(void* this_ , QMediaResourceList::iterator* first, QMediaResourceList::iterator* last) {
    // QMediaResourceList_erase_1()
    auto rv =  ((QMediaResourceList*)this_)->erase(*first, *last);
    return new decltype(rv)(rv);
}

// [4] int count()
extern "C" Q_DECL_EXPORT
int C_QMediaResourceList_count_1(void* this_ ) {
    // QMediaResourceList_count_1()
    auto rv =  ((QMediaResourceList*)this_)->count();
    return rv;
}

// [4] int length()
extern "C" Q_DECL_EXPORT
int C_QMediaResourceList_length_0(void* this_ ) {
    // QMediaResourceList_length_0()
    auto rv =  ((QMediaResourceList*)this_)->length();
    return rv;
}

// [-3] T & first()
extern "C" Q_DECL_EXPORT
QMediaResource* C_QMediaResourceList_first_0(void* this_ ) {
    // QMediaResourceList_first_0()
    auto rv =  ((QMediaResourceList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] const T & constFirst()
extern "C" Q_DECL_EXPORT
QMediaResource* C_QMediaResourceList_constFirst_0(void* this_ ) {
    // QMediaResourceList_constFirst_0()
    auto rv =  ((QMediaResourceList*)this_)->constFirst();
    return new decltype(rv)(rv);
}

// [-3] const T & first()
extern "C" Q_DECL_EXPORT
QMediaResource* C_QMediaResourceList_first_1(void* this_ ) {
    // QMediaResourceList_first_1()
    auto rv =  ((QMediaResourceList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] T & last()
extern "C" Q_DECL_EXPORT
QMediaResource* C_QMediaResourceList_last_0(void* this_ ) {
    // QMediaResourceList_last_0()
    auto rv =  ((QMediaResourceList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & last()
extern "C" Q_DECL_EXPORT
QMediaResource* C_QMediaResourceList_last_1(void* this_ ) {
    // QMediaResourceList_last_1()
    auto rv =  ((QMediaResourceList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & constLast()
extern "C" Q_DECL_EXPORT
QMediaResource* C_QMediaResourceList_constLast_0(void* this_ ) {
    // QMediaResourceList_constLast_0()
    auto rv =  ((QMediaResourceList*)this_)->constLast();
    return new decltype(rv)(rv);
}

// [-2] void removeFirst()
extern "C" Q_DECL_EXPORT
void C_QMediaResourceList_removeFirst_0(void* this_ ) {
    // QMediaResourceList_removeFirst_0()
     ((QMediaResourceList*)this_)->removeFirst();
}

// [-2] void removeLast()
extern "C" Q_DECL_EXPORT
void C_QMediaResourceList_removeLast_0(void* this_ ) {
    // QMediaResourceList_removeLast_0()
     ((QMediaResourceList*)this_)->removeLast();
}

// [1] bool startsWith(const T &)
extern "C" Q_DECL_EXPORT
bool C_QMediaResourceList_startsWith_0(void* this_ , QMediaResource* t) {
    // QMediaResourceList_startsWith_0()
    auto rv =  ((QMediaResourceList*)this_)->startsWith(*t);
    return rv;
}

// [1] bool endsWith(const T &)
extern "C" Q_DECL_EXPORT
bool C_QMediaResourceList_endsWith_0(void* this_ , QMediaResource* t) {
    // QMediaResourceList_endsWith_0()
    auto rv =  ((QMediaResourceList*)this_)->endsWith(*t);
    return rv;
}

// [-3] QList<T> mid(int, int)
extern "C" Q_DECL_EXPORT
QMediaResourceList* C_QMediaResourceList_mid_0(void* this_ , int pos, int length) {
    // QMediaResourceList_mid_0()
    auto rv =  ((QMediaResourceList*)this_)->mid(pos, length);
    return (QMediaResourceList*)this_;
}

// [-3] T value(int)
extern "C" Q_DECL_EXPORT
QMediaResource* C_QMediaResourceList_value_0(void* this_ , int i) {
    // QMediaResourceList_value_0()
    auto rv =  ((QMediaResourceList*)this_)->value(i);
    return new decltype(rv)(rv);
}

// [-3] T value(int, const T &)
extern "C" Q_DECL_EXPORT
QMediaResource* C_QMediaResourceList_value_1(void* this_ , int i, QMediaResource* defaultValue) {
    // QMediaResourceList_value_1()
    auto rv =  ((QMediaResourceList*)this_)->value(i, *defaultValue);
    return new decltype(rv)(rv);
}

// [-2] void push_back(const T &)
extern "C" Q_DECL_EXPORT
void C_QMediaResourceList_push_back_0(void* this_ , QMediaResource* t) {
    // QMediaResourceList_push_back_0()
     ((QMediaResourceList*)this_)->push_back(*t);
}

// [-2] void push_front(const T &)
extern "C" Q_DECL_EXPORT
void C_QMediaResourceList_push_front_0(void* this_ , QMediaResource* t) {
    // QMediaResourceList_push_front_0()
     ((QMediaResourceList*)this_)->push_front(*t);
}

// [-3] T & front()
extern "C" Q_DECL_EXPORT
QMediaResource* C_QMediaResourceList_front_0(void* this_ ) {
    // QMediaResourceList_front_0()
    auto rv =  ((QMediaResourceList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] const T & front()
extern "C" Q_DECL_EXPORT
QMediaResource* C_QMediaResourceList_front_1(void* this_ ) {
    // QMediaResourceList_front_1()
    auto rv =  ((QMediaResourceList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] T & back()
extern "C" Q_DECL_EXPORT
QMediaResource* C_QMediaResourceList_back_0(void* this_ ) {
    // QMediaResourceList_back_0()
    auto rv =  ((QMediaResourceList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-3] const T & back()
extern "C" Q_DECL_EXPORT
QMediaResource* C_QMediaResourceList_back_1(void* this_ ) {
    // QMediaResourceList_back_1()
    auto rv =  ((QMediaResourceList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-2] void pop_front()
extern "C" Q_DECL_EXPORT
void C_QMediaResourceList_pop_front_0(void* this_ ) {
    // QMediaResourceList_pop_front_0()
     ((QMediaResourceList*)this_)->pop_front();
}

// [-2] void pop_back()
extern "C" Q_DECL_EXPORT
void C_QMediaResourceList_pop_back_0(void* this_ ) {
    // QMediaResourceList_pop_back_0()
     ((QMediaResourceList*)this_)->pop_back();
}

// [1] bool empty()
extern "C" Q_DECL_EXPORT
bool C_QMediaResourceList_empty_0(void* this_ ) {
    // QMediaResourceList_empty_0()
    auto rv =  ((QMediaResourceList*)this_)->empty();
    return rv;
}

// [-3] QList<T> & operator+=(const QList<T> &)
extern "C" Q_DECL_EXPORT
QMediaResourceList* C_QMediaResourceList_operator_add_equal_0(void* this_ , QMediaResourceList* l) {
    // QMediaResourceList_operator_add_equal_0()
    auto rv =  ((QMediaResourceList*)this_)->operator+=(*l);
    return (QMediaResourceList*)this_;
}

// [-3] QList<T> operator+(const QList<T> &)
extern "C" Q_DECL_EXPORT
QMediaResourceList* C_QMediaResourceList_operator_add_0(void* this_ , QMediaResourceList* l) {
    // QMediaResourceList_operator_add_0()
    auto rv =  ((QMediaResourceList*)this_)->operator+(*l);
    return (QMediaResourceList*)this_;
}

// [-3] QList<T> & operator+=(const T &)
extern "C" Q_DECL_EXPORT
QMediaResourceList* C_QMediaResourceList_operator_add_equal_1(void* this_ , QMediaResource* t) {
    // QMediaResourceList_operator_add_equal_1()
    auto rv =  ((QMediaResourceList*)this_)->operator+=(*t);
    return (QMediaResourceList*)this_;
}

// [-3] QList<T> & operator<<(const T &)
extern "C" Q_DECL_EXPORT
QMediaResourceList* C_QMediaResourceList_operator_left_shift_0(void* this_ , QMediaResource* t) {
    // QMediaResourceList_operator_left_shift_0()
    auto rv =  ((QMediaResourceList*)this_)->operator<<(*t);
    return (QMediaResourceList*)this_;
}

// [-3] QList<T> & operator<<(const QList<T> &)
extern "C" Q_DECL_EXPORT
QMediaResourceList* C_QMediaResourceList_operator_left_shift_1(void* this_ , QMediaResourceList* l) {
    // QMediaResourceList_operator_left_shift_1()
    auto rv =  ((QMediaResourceList*)this_)->operator<<(*l);
    return (QMediaResourceList*)this_;
}

// [-3] QVector<T> toVector()
extern "C" Q_DECL_EXPORT
void C_QMediaResourceList_toVector_0(void* this_ ) {
    // QMediaResourceList_toVector_0()
    auto rv =  ((QMediaResourceList*)this_)->toVector();
}

// [-3] std::list<T> toStdList()
extern "C" Q_DECL_EXPORT
void C_QMediaResourceList_toStdList_0(void* this_ ) {
    // QMediaResourceList_toStdList_0()
    auto rv =  ((QMediaResourceList*)this_)->toStdList();
}

//  body block end
