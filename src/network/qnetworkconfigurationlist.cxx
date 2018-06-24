
// /usr/include/qt/QtNetwork/qnetworkconfiguration.h
#ifndef protected
#define protected public
#endif
#include <qnetworkconfiguration.h>
#include <QtNetwork>
#include "callback_inherit.h"

#ifndef QNetworkConfigurationList
#ifndef QNETWORKCONFIGURATIONLIST_H
typedef QList<QNetworkConfiguration> QNetworkConfigurationList;
#endif
#endif
//  header block end

//  body block begin
// [-3] QList<T> & operator=(const QList<T> &)
extern "C" Q_DECL_EXPORT
QNetworkConfigurationList* C_QNetworkConfigurationList_operator_equal_0(void* this_ , QNetworkConfigurationList* l) {
    // QNetworkConfigurationList_operator_equal_0()
    auto rv =  ((QNetworkConfigurationList*)this_)->operator=(*l);
    return (QNetworkConfigurationList*)this_;
}

// [-3] QList<T> & operator=(QList<T> &&)
extern "C" Q_DECL_EXPORT
QNetworkConfigurationList* C_QNetworkConfigurationList_operator_equal_1(void* this_ , QNetworkConfigurationList* other) {
    // QNetworkConfigurationList_operator_equal_1()
    auto rv =  ((QNetworkConfigurationList*)this_)->operator=(*other);
    return (QNetworkConfigurationList*)this_;
}

// [-2] void swap(QList<T> &)
extern "C" Q_DECL_EXPORT
void C_QNetworkConfigurationList_swap_0(void* this_ , QNetworkConfigurationList* other) {
    // QNetworkConfigurationList_swap_0()
     ((QNetworkConfigurationList*)this_)->swap(*other);
}

// [1] bool operator==(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QNetworkConfigurationList_operator_equal_equal_0(void* this_ , QNetworkConfigurationList* l) {
    // QNetworkConfigurationList_operator_equal_equal_0()
    auto rv =  ((QNetworkConfigurationList*)this_)->operator==(*l);
    return rv;
}

// [1] bool operator!=(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QNetworkConfigurationList_operator_not_equal_0(void* this_ , QNetworkConfigurationList* l) {
    // QNetworkConfigurationList_operator_not_equal_0()
    auto rv =  ((QNetworkConfigurationList*)this_)->operator!=(*l);
    return rv;
}

// [4] int size()
extern "C" Q_DECL_EXPORT
int C_QNetworkConfigurationList_size_0(void* this_ ) {
    // QNetworkConfigurationList_size_0()
    auto rv =  ((QNetworkConfigurationList*)this_)->size();
    return rv;
}

// [-2] void detach()
extern "C" Q_DECL_EXPORT
void C_QNetworkConfigurationList_detach_0(void* this_ ) {
    // QNetworkConfigurationList_detach_0()
     ((QNetworkConfigurationList*)this_)->detach();
}

// [-2] void detachShared()
extern "C" Q_DECL_EXPORT
void C_QNetworkConfigurationList_detachShared_0(void* this_ ) {
    // QNetworkConfigurationList_detachShared_0()
     ((QNetworkConfigurationList*)this_)->detachShared();
}

// [1] bool isDetached()
extern "C" Q_DECL_EXPORT
bool C_QNetworkConfigurationList_isDetached_0(void* this_ ) {
    // QNetworkConfigurationList_isDetached_0()
    auto rv =  ((QNetworkConfigurationList*)this_)->isDetached();
    return rv;
}

// [-2] void setSharable(bool)
extern "C" Q_DECL_EXPORT
void C_QNetworkConfigurationList_setSharable_0(void* this_ , bool sharable) {
    // QNetworkConfigurationList_setSharable_0()
     ((QNetworkConfigurationList*)this_)->setSharable(sharable);
}

// [1] bool isSharedWith(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QNetworkConfigurationList_isSharedWith_0(void* this_ , QNetworkConfigurationList* other) {
    // QNetworkConfigurationList_isSharedWith_0()
    auto rv =  ((QNetworkConfigurationList*)this_)->isSharedWith(*other);
    return rv;
}

// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_QNetworkConfigurationList_isEmpty_0(void* this_ ) {
    // QNetworkConfigurationList_isEmpty_0()
    auto rv =  ((QNetworkConfigurationList*)this_)->isEmpty();
    return rv;
}

// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_QNetworkConfigurationList_clear_0(void* this_ ) {
    // QNetworkConfigurationList_clear_0()
     ((QNetworkConfigurationList*)this_)->clear();
}

// [-3] const T & at(int)
extern "C" Q_DECL_EXPORT
QNetworkConfiguration* C_QNetworkConfigurationList_at_0(void* this_ , int i) {
    // QNetworkConfigurationList_at_0()
    auto rv =  ((QNetworkConfigurationList*)this_)->at(i);
    return new decltype(rv)(rv);
}

// [-3] const T & operator[](int)
extern "C" Q_DECL_EXPORT
QNetworkConfiguration* C_QNetworkConfigurationList_operator_get_index_0(void* this_ , int i) {
    // QNetworkConfigurationList_operator_get_index_0()
    auto rv =  ((QNetworkConfigurationList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-3] T & operator[](int)
extern "C" Q_DECL_EXPORT
QNetworkConfiguration* C_QNetworkConfigurationList_operator_get_index_1(void* this_ , int i) {
    // QNetworkConfigurationList_operator_get_index_1()
    auto rv =  ((QNetworkConfigurationList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-2] void reserve(int)
extern "C" Q_DECL_EXPORT
void C_QNetworkConfigurationList_reserve_0(void* this_ , int size) {
    // QNetworkConfigurationList_reserve_0()
     ((QNetworkConfigurationList*)this_)->reserve(size);
}

// [-2] void append(const T &)
extern "C" Q_DECL_EXPORT
void C_QNetworkConfigurationList_append_0(void* this_ , QNetworkConfiguration* t) {
    // QNetworkConfigurationList_append_0()
     ((QNetworkConfigurationList*)this_)->append(*t);
}

// [-2] void append(const QList<T> &)
extern "C" Q_DECL_EXPORT
void C_QNetworkConfigurationList_append_1(void* this_ , QNetworkConfigurationList* t) {
    // QNetworkConfigurationList_append_1()
     ((QNetworkConfigurationList*)this_)->append(*t);
}

// [-2] void prepend(const T &)
extern "C" Q_DECL_EXPORT
void C_QNetworkConfigurationList_prepend_0(void* this_ , QNetworkConfiguration* t) {
    // QNetworkConfigurationList_prepend_0()
     ((QNetworkConfigurationList*)this_)->prepend(*t);
}

// [-2] void insert(int, const T &)
extern "C" Q_DECL_EXPORT
void C_QNetworkConfigurationList_insert_0(void* this_ , int i, QNetworkConfiguration* t) {
    // QNetworkConfigurationList_insert_0()
     ((QNetworkConfigurationList*)this_)->insert(i, *t);
}

// [-2] void replace(int, const T &)
extern "C" Q_DECL_EXPORT
void C_QNetworkConfigurationList_replace_0(void* this_ , int i, QNetworkConfiguration* t) {
    // QNetworkConfigurationList_replace_0()
     ((QNetworkConfigurationList*)this_)->replace(i, *t);
}

// [-2] void removeAt(int)
extern "C" Q_DECL_EXPORT
void C_QNetworkConfigurationList_removeAt_0(void* this_ , int i) {
    // QNetworkConfigurationList_removeAt_0()
     ((QNetworkConfigurationList*)this_)->removeAt(i);
}

// [4] int removeAll(const T &)
extern "C" Q_DECL_EXPORT
int C_QNetworkConfigurationList_removeAll_0(void* this_ , QNetworkConfiguration* t) {
    // QNetworkConfigurationList_removeAll_0()
    auto rv =  ((QNetworkConfigurationList*)this_)->removeAll(*t);
    return rv;
}

// [1] bool removeOne(const T &)
extern "C" Q_DECL_EXPORT
bool C_QNetworkConfigurationList_removeOne_0(void* this_ , QNetworkConfiguration* t) {
    // QNetworkConfigurationList_removeOne_0()
    auto rv =  ((QNetworkConfigurationList*)this_)->removeOne(*t);
    return rv;
}

// [-3] T takeAt(int)
extern "C" Q_DECL_EXPORT
QNetworkConfiguration* C_QNetworkConfigurationList_takeAt_0(void* this_ , int i) {
    // QNetworkConfigurationList_takeAt_0()
    auto rv =  ((QNetworkConfigurationList*)this_)->takeAt(i);
    return new decltype(rv)(rv);
}

// [-3] T takeFirst()
extern "C" Q_DECL_EXPORT
QNetworkConfiguration* C_QNetworkConfigurationList_takeFirst_0(void* this_ ) {
    // QNetworkConfigurationList_takeFirst_0()
    auto rv =  ((QNetworkConfigurationList*)this_)->takeFirst();
    return new decltype(rv)(rv);
}

// [-3] T takeLast()
extern "C" Q_DECL_EXPORT
QNetworkConfiguration* C_QNetworkConfigurationList_takeLast_0(void* this_ ) {
    // QNetworkConfigurationList_takeLast_0()
    auto rv =  ((QNetworkConfigurationList*)this_)->takeLast();
    return new decltype(rv)(rv);
}

// [-2] void move(int, int)
extern "C" Q_DECL_EXPORT
void C_QNetworkConfigurationList_move_0(void* this_ , int from, int to) {
    // QNetworkConfigurationList_move_0()
     ((QNetworkConfigurationList*)this_)->move(from, to);
}

// [-2] void swap(int, int)
extern "C" Q_DECL_EXPORT
void C_QNetworkConfigurationList_swap_1(void* this_ , int i, int j) {
    // QNetworkConfigurationList_swap_1()
     ((QNetworkConfigurationList*)this_)->swap(i, j);
}

// [4] int indexOf(const T &, int)
extern "C" Q_DECL_EXPORT
int C_QNetworkConfigurationList_indexOf_0(void* this_ , QNetworkConfiguration* t, int from) {
    // QNetworkConfigurationList_indexOf_0()
    auto rv =  ((QNetworkConfigurationList*)this_)->indexOf(*t, from);
    return rv;
}

// [4] int lastIndexOf(const T &, int)
extern "C" Q_DECL_EXPORT
int C_QNetworkConfigurationList_lastIndexOf_0(void* this_ , QNetworkConfiguration* t, int from) {
    // QNetworkConfigurationList_lastIndexOf_0()
    auto rv =  ((QNetworkConfigurationList*)this_)->lastIndexOf(*t, from);
    return rv;
}

// [1] bool contains(const T &)
extern "C" Q_DECL_EXPORT
bool C_QNetworkConfigurationList_contains_0(void* this_ , QNetworkConfiguration* t) {
    // QNetworkConfigurationList_contains_0()
    auto rv =  ((QNetworkConfigurationList*)this_)->contains(*t);
    return rv;
}

// [4] int count(const T &)
extern "C" Q_DECL_EXPORT
int C_QNetworkConfigurationList_count_0(void* this_ , QNetworkConfiguration* t) {
    // QNetworkConfigurationList_count_0()
    auto rv =  ((QNetworkConfigurationList*)this_)->count(*t);
    return rv;
}

// [-3] QList::iterator begin()
extern "C" Q_DECL_EXPORT
QNetworkConfigurationList::iterator* C_QNetworkConfigurationList_begin_0(void* this_ ) {
    // QNetworkConfigurationList_begin_0()
    auto rv =  ((QNetworkConfigurationList*)this_)->begin();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator end()
extern "C" Q_DECL_EXPORT
QNetworkConfigurationList::iterator* C_QNetworkConfigurationList_end_0(void* this_ ) {
    // QNetworkConfigurationList_end_0()
    auto rv =  ((QNetworkConfigurationList*)this_)->end();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rbegin()
extern "C" Q_DECL_EXPORT
QNetworkConfigurationList::reverse_iterator* C_QNetworkConfigurationList_rbegin_0(void* this_ ) {
    // QNetworkConfigurationList_rbegin_0()
    auto rv =  ((QNetworkConfigurationList*)this_)->rbegin();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rend()
extern "C" Q_DECL_EXPORT
QNetworkConfigurationList::reverse_iterator* C_QNetworkConfigurationList_rend_0(void* this_ ) {
    // QNetworkConfigurationList_rend_0()
    auto rv =  ((QNetworkConfigurationList*)this_)->rend();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator insert(QList::iterator, const T &)
extern "C" Q_DECL_EXPORT
QNetworkConfigurationList::iterator* C_QNetworkConfigurationList_insert_1(void* this_ , QNetworkConfigurationList::iterator* before, QNetworkConfiguration* t) {
    // QNetworkConfigurationList_insert_1()
    auto rv =  ((QNetworkConfigurationList*)this_)->insert(*before, *t);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator)
extern "C" Q_DECL_EXPORT
QNetworkConfigurationList::iterator* C_QNetworkConfigurationList_erase_0(void* this_ , QNetworkConfigurationList::iterator* pos) {
    // QNetworkConfigurationList_erase_0()
    auto rv =  ((QNetworkConfigurationList*)this_)->erase(*pos);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator, QList::iterator)
extern "C" Q_DECL_EXPORT
QNetworkConfigurationList::iterator* C_QNetworkConfigurationList_erase_1(void* this_ , QNetworkConfigurationList::iterator* first, QNetworkConfigurationList::iterator* last) {
    // QNetworkConfigurationList_erase_1()
    auto rv =  ((QNetworkConfigurationList*)this_)->erase(*first, *last);
    return new decltype(rv)(rv);
}

// [4] int count()
extern "C" Q_DECL_EXPORT
int C_QNetworkConfigurationList_count_1(void* this_ ) {
    // QNetworkConfigurationList_count_1()
    auto rv =  ((QNetworkConfigurationList*)this_)->count();
    return rv;
}

// [4] int length()
extern "C" Q_DECL_EXPORT
int C_QNetworkConfigurationList_length_0(void* this_ ) {
    // QNetworkConfigurationList_length_0()
    auto rv =  ((QNetworkConfigurationList*)this_)->length();
    return rv;
}

// [-3] T & first()
extern "C" Q_DECL_EXPORT
QNetworkConfiguration* C_QNetworkConfigurationList_first_0(void* this_ ) {
    // QNetworkConfigurationList_first_0()
    auto rv =  ((QNetworkConfigurationList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] const T & constFirst()
extern "C" Q_DECL_EXPORT
QNetworkConfiguration* C_QNetworkConfigurationList_constFirst_0(void* this_ ) {
    // QNetworkConfigurationList_constFirst_0()
    auto rv =  ((QNetworkConfigurationList*)this_)->constFirst();
    return new decltype(rv)(rv);
}

// [-3] const T & first()
extern "C" Q_DECL_EXPORT
QNetworkConfiguration* C_QNetworkConfigurationList_first_1(void* this_ ) {
    // QNetworkConfigurationList_first_1()
    auto rv =  ((QNetworkConfigurationList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] T & last()
extern "C" Q_DECL_EXPORT
QNetworkConfiguration* C_QNetworkConfigurationList_last_0(void* this_ ) {
    // QNetworkConfigurationList_last_0()
    auto rv =  ((QNetworkConfigurationList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & last()
extern "C" Q_DECL_EXPORT
QNetworkConfiguration* C_QNetworkConfigurationList_last_1(void* this_ ) {
    // QNetworkConfigurationList_last_1()
    auto rv =  ((QNetworkConfigurationList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & constLast()
extern "C" Q_DECL_EXPORT
QNetworkConfiguration* C_QNetworkConfigurationList_constLast_0(void* this_ ) {
    // QNetworkConfigurationList_constLast_0()
    auto rv =  ((QNetworkConfigurationList*)this_)->constLast();
    return new decltype(rv)(rv);
}

// [-2] void removeFirst()
extern "C" Q_DECL_EXPORT
void C_QNetworkConfigurationList_removeFirst_0(void* this_ ) {
    // QNetworkConfigurationList_removeFirst_0()
     ((QNetworkConfigurationList*)this_)->removeFirst();
}

// [-2] void removeLast()
extern "C" Q_DECL_EXPORT
void C_QNetworkConfigurationList_removeLast_0(void* this_ ) {
    // QNetworkConfigurationList_removeLast_0()
     ((QNetworkConfigurationList*)this_)->removeLast();
}

// [1] bool startsWith(const T &)
extern "C" Q_DECL_EXPORT
bool C_QNetworkConfigurationList_startsWith_0(void* this_ , QNetworkConfiguration* t) {
    // QNetworkConfigurationList_startsWith_0()
    auto rv =  ((QNetworkConfigurationList*)this_)->startsWith(*t);
    return rv;
}

// [1] bool endsWith(const T &)
extern "C" Q_DECL_EXPORT
bool C_QNetworkConfigurationList_endsWith_0(void* this_ , QNetworkConfiguration* t) {
    // QNetworkConfigurationList_endsWith_0()
    auto rv =  ((QNetworkConfigurationList*)this_)->endsWith(*t);
    return rv;
}

// [-3] QList<T> mid(int, int)
extern "C" Q_DECL_EXPORT
QNetworkConfigurationList* C_QNetworkConfigurationList_mid_0(void* this_ , int pos, int length) {
    // QNetworkConfigurationList_mid_0()
    auto rv =  ((QNetworkConfigurationList*)this_)->mid(pos, length);
    return (QNetworkConfigurationList*)this_;
}

// [-3] T value(int)
extern "C" Q_DECL_EXPORT
QNetworkConfiguration* C_QNetworkConfigurationList_value_0(void* this_ , int i) {
    // QNetworkConfigurationList_value_0()
    auto rv =  ((QNetworkConfigurationList*)this_)->value(i);
    return new decltype(rv)(rv);
}

// [-3] T value(int, const T &)
extern "C" Q_DECL_EXPORT
QNetworkConfiguration* C_QNetworkConfigurationList_value_1(void* this_ , int i, QNetworkConfiguration* defaultValue) {
    // QNetworkConfigurationList_value_1()
    auto rv =  ((QNetworkConfigurationList*)this_)->value(i, *defaultValue);
    return new decltype(rv)(rv);
}

// [-2] void push_back(const T &)
extern "C" Q_DECL_EXPORT
void C_QNetworkConfigurationList_push_back_0(void* this_ , QNetworkConfiguration* t) {
    // QNetworkConfigurationList_push_back_0()
     ((QNetworkConfigurationList*)this_)->push_back(*t);
}

// [-2] void push_front(const T &)
extern "C" Q_DECL_EXPORT
void C_QNetworkConfigurationList_push_front_0(void* this_ , QNetworkConfiguration* t) {
    // QNetworkConfigurationList_push_front_0()
     ((QNetworkConfigurationList*)this_)->push_front(*t);
}

// [-3] T & front()
extern "C" Q_DECL_EXPORT
QNetworkConfiguration* C_QNetworkConfigurationList_front_0(void* this_ ) {
    // QNetworkConfigurationList_front_0()
    auto rv =  ((QNetworkConfigurationList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] const T & front()
extern "C" Q_DECL_EXPORT
QNetworkConfiguration* C_QNetworkConfigurationList_front_1(void* this_ ) {
    // QNetworkConfigurationList_front_1()
    auto rv =  ((QNetworkConfigurationList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] T & back()
extern "C" Q_DECL_EXPORT
QNetworkConfiguration* C_QNetworkConfigurationList_back_0(void* this_ ) {
    // QNetworkConfigurationList_back_0()
    auto rv =  ((QNetworkConfigurationList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-3] const T & back()
extern "C" Q_DECL_EXPORT
QNetworkConfiguration* C_QNetworkConfigurationList_back_1(void* this_ ) {
    // QNetworkConfigurationList_back_1()
    auto rv =  ((QNetworkConfigurationList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-2] void pop_front()
extern "C" Q_DECL_EXPORT
void C_QNetworkConfigurationList_pop_front_0(void* this_ ) {
    // QNetworkConfigurationList_pop_front_0()
     ((QNetworkConfigurationList*)this_)->pop_front();
}

// [-2] void pop_back()
extern "C" Q_DECL_EXPORT
void C_QNetworkConfigurationList_pop_back_0(void* this_ ) {
    // QNetworkConfigurationList_pop_back_0()
     ((QNetworkConfigurationList*)this_)->pop_back();
}

// [1] bool empty()
extern "C" Q_DECL_EXPORT
bool C_QNetworkConfigurationList_empty_0(void* this_ ) {
    // QNetworkConfigurationList_empty_0()
    auto rv =  ((QNetworkConfigurationList*)this_)->empty();
    return rv;
}

// [-3] QList<T> & operator+=(const QList<T> &)
extern "C" Q_DECL_EXPORT
QNetworkConfigurationList* C_QNetworkConfigurationList_operator_add_equal_0(void* this_ , QNetworkConfigurationList* l) {
    // QNetworkConfigurationList_operator_add_equal_0()
    auto rv =  ((QNetworkConfigurationList*)this_)->operator+=(*l);
    return (QNetworkConfigurationList*)this_;
}

// [-3] QList<T> operator+(const QList<T> &)
extern "C" Q_DECL_EXPORT
QNetworkConfigurationList* C_QNetworkConfigurationList_operator_add_0(void* this_ , QNetworkConfigurationList* l) {
    // QNetworkConfigurationList_operator_add_0()
    auto rv =  ((QNetworkConfigurationList*)this_)->operator+(*l);
    return (QNetworkConfigurationList*)this_;
}

// [-3] QList<T> & operator+=(const T &)
extern "C" Q_DECL_EXPORT
QNetworkConfigurationList* C_QNetworkConfigurationList_operator_add_equal_1(void* this_ , QNetworkConfiguration* t) {
    // QNetworkConfigurationList_operator_add_equal_1()
    auto rv =  ((QNetworkConfigurationList*)this_)->operator+=(*t);
    return (QNetworkConfigurationList*)this_;
}

// [-3] QList<T> & operator<<(const T &)
extern "C" Q_DECL_EXPORT
QNetworkConfigurationList* C_QNetworkConfigurationList_operator_left_shift_0(void* this_ , QNetworkConfiguration* t) {
    // QNetworkConfigurationList_operator_left_shift_0()
    auto rv =  ((QNetworkConfigurationList*)this_)->operator<<(*t);
    return (QNetworkConfigurationList*)this_;
}

// [-3] QList<T> & operator<<(const QList<T> &)
extern "C" Q_DECL_EXPORT
QNetworkConfigurationList* C_QNetworkConfigurationList_operator_left_shift_1(void* this_ , QNetworkConfigurationList* l) {
    // QNetworkConfigurationList_operator_left_shift_1()
    auto rv =  ((QNetworkConfigurationList*)this_)->operator<<(*l);
    return (QNetworkConfigurationList*)this_;
}

// [-3] QVector<T> toVector()
extern "C" Q_DECL_EXPORT
void C_QNetworkConfigurationList_toVector_0(void* this_ ) {
    // QNetworkConfigurationList_toVector_0()
    auto rv =  ((QNetworkConfigurationList*)this_)->toVector();
}

// [-3] std::list<T> toStdList()
extern "C" Q_DECL_EXPORT
void C_QNetworkConfigurationList_toStdList_0(void* this_ ) {
    // QNetworkConfigurationList_toStdList_0()
    auto rv =  ((QNetworkConfigurationList*)this_)->toStdList();
}

//  body block end
