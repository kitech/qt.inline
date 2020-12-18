
// /usr/include/qt/QtCore/qsize.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsize.h>
#include <QtCore>
#include "callback_inherit.h"

#ifndef QSizeList
#ifndef QSIZELIST_H
typedef QList<QSize> QSizeList;
#endif
#endif
//  header block end

//  body block begin
// [-3] QList<T> & operator=(const QList<T> &)
extern "C" Q_DECL_EXPORT
QSizeList* C_QSizeList_operator_equal_0(void* this_ , QSizeList* l) {
    // QSizeList_operator_equal_0()
    auto rv =  ((QSizeList*)this_)->operator=(*l);
    return (QSizeList*)this_;
}

// [-3] QList<T> & operator=(QList<T> &&)
extern "C" Q_DECL_EXPORT
QSizeList* C_QSizeList_operator_equal_1(void* this_ , QSizeList* other) {
    // QSizeList_operator_equal_1()
    auto rv =  ((QSizeList*)this_)->operator=(*other);
    return (QSizeList*)this_;
}

// [-2] void swap(QList<T> &)
extern "C" Q_DECL_EXPORT
void C_QSizeList_swap_0(void* this_ , QSizeList* other) {
    // QSizeList_swap_0()
     ((QSizeList*)this_)->swap(*other);
}

// [1] bool operator==(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QSizeList_operator_equal_equal_0(void* this_ , QSizeList* l) {
    // QSizeList_operator_equal_equal_0()
    auto rv =  ((QSizeList*)this_)->operator==(*l);
    return rv;
}

// [1] bool operator!=(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QSizeList_operator_not_equal_0(void* this_ , QSizeList* l) {
    // QSizeList_operator_not_equal_0()
    auto rv =  ((QSizeList*)this_)->operator!=(*l);
    return rv;
}

// [4] int size()
extern "C" Q_DECL_EXPORT
int C_QSizeList_size_0(void* this_ ) {
    // QSizeList_size_0()
    auto rv =  ((QSizeList*)this_)->size();
    return rv;
}

// [-2] void detach()
extern "C" Q_DECL_EXPORT
void C_QSizeList_detach_0(void* this_ ) {
    // QSizeList_detach_0()
     ((QSizeList*)this_)->detach();
}

// [-2] void detachShared()
extern "C" Q_DECL_EXPORT
void C_QSizeList_detachShared_0(void* this_ ) {
    // QSizeList_detachShared_0()
     ((QSizeList*)this_)->detachShared();
}

// [1] bool isDetached()
extern "C" Q_DECL_EXPORT
bool C_QSizeList_isDetached_0(void* this_ ) {
    // QSizeList_isDetached_0()
    auto rv =  ((QSizeList*)this_)->isDetached();
    return rv;
}

// [-2] void setSharable(bool)
extern "C" Q_DECL_EXPORT
void C_QSizeList_setSharable_0(void* this_ , bool sharable) {
    // QSizeList_setSharable_0()
     ((QSizeList*)this_)->setSharable(sharable);
}

// [1] bool isSharedWith(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QSizeList_isSharedWith_0(void* this_ , QSizeList* other) {
    // QSizeList_isSharedWith_0()
    auto rv =  ((QSizeList*)this_)->isSharedWith(*other);
    return rv;
}

// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_QSizeList_isEmpty_0(void* this_ ) {
    // QSizeList_isEmpty_0()
    auto rv =  ((QSizeList*)this_)->isEmpty();
    return rv;
}

// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_QSizeList_clear_0(void* this_ ) {
    // QSizeList_clear_0()
     ((QSizeList*)this_)->clear();
}

// [-3] const T & at(int)
extern "C" Q_DECL_EXPORT
QSize* C_QSizeList_at_0(void* this_ , int i) {
    // QSizeList_at_0()
    auto rv =  ((QSizeList*)this_)->at(i);
    return new decltype(rv)(rv);
}

// [-3] const T & operator[](int)
extern "C" Q_DECL_EXPORT
QSize* C_QSizeList_operator_get_index_0(void* this_ , int i) {
    // QSizeList_operator_get_index_0()
    auto rv =  ((QSizeList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-3] T & operator[](int)
extern "C" Q_DECL_EXPORT
QSize* C_QSizeList_operator_get_index_1(void* this_ , int i) {
    // QSizeList_operator_get_index_1()
    auto rv =  ((QSizeList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-2] void reserve(int)
extern "C" Q_DECL_EXPORT
void C_QSizeList_reserve_0(void* this_ , int size) {
    // QSizeList_reserve_0()
     ((QSizeList*)this_)->reserve(size);
}

// [-2] void append(const T &)
extern "C" Q_DECL_EXPORT
void C_QSizeList_append_0(void* this_ , QSize* t) {
    // QSizeList_append_0()
     ((QSizeList*)this_)->append(*t);
}

// [-2] void append(const QList<T> &)
extern "C" Q_DECL_EXPORT
void C_QSizeList_append_1(void* this_ , QSizeList* t) {
    // QSizeList_append_1()
     ((QSizeList*)this_)->append(*t);
}

// [-2] void prepend(const T &)
extern "C" Q_DECL_EXPORT
void C_QSizeList_prepend_0(void* this_ , QSize* t) {
    // QSizeList_prepend_0()
     ((QSizeList*)this_)->prepend(*t);
}

// [-2] void insert(int, const T &)
extern "C" Q_DECL_EXPORT
void C_QSizeList_insert_0(void* this_ , int i, QSize* t) {
    // QSizeList_insert_0()
     ((QSizeList*)this_)->insert(i, *t);
}

// [-2] void replace(int, const T &)
extern "C" Q_DECL_EXPORT
void C_QSizeList_replace_0(void* this_ , int i, QSize* t) {
    // QSizeList_replace_0()
     ((QSizeList*)this_)->replace(i, *t);
}

// [-2] void removeAt(int)
extern "C" Q_DECL_EXPORT
void C_QSizeList_removeAt_0(void* this_ , int i) {
    // QSizeList_removeAt_0()
     ((QSizeList*)this_)->removeAt(i);
}

// [4] int removeAll(const T &)
extern "C" Q_DECL_EXPORT
int C_QSizeList_removeAll_0(void* this_ , QSize* t) {
    // QSizeList_removeAll_0()
    auto rv =  ((QSizeList*)this_)->removeAll(*t);
    return rv;
}

// [1] bool removeOne(const T &)
extern "C" Q_DECL_EXPORT
bool C_QSizeList_removeOne_0(void* this_ , QSize* t) {
    // QSizeList_removeOne_0()
    auto rv =  ((QSizeList*)this_)->removeOne(*t);
    return rv;
}

// [-3] T takeAt(int)
extern "C" Q_DECL_EXPORT
QSize* C_QSizeList_takeAt_0(void* this_ , int i) {
    // QSizeList_takeAt_0()
    auto rv =  ((QSizeList*)this_)->takeAt(i);
    return new decltype(rv)(rv);
}

// [-3] T takeFirst()
extern "C" Q_DECL_EXPORT
QSize* C_QSizeList_takeFirst_0(void* this_ ) {
    // QSizeList_takeFirst_0()
    auto rv =  ((QSizeList*)this_)->takeFirst();
    return new decltype(rv)(rv);
}

// [-3] T takeLast()
extern "C" Q_DECL_EXPORT
QSize* C_QSizeList_takeLast_0(void* this_ ) {
    // QSizeList_takeLast_0()
    auto rv =  ((QSizeList*)this_)->takeLast();
    return new decltype(rv)(rv);
}

// [-2] void move(int, int)
extern "C" Q_DECL_EXPORT
void C_QSizeList_move_0(void* this_ , int from, int to) {
    // QSizeList_move_0()
     ((QSizeList*)this_)->move(from, to);
}

// [-2] void swapItemsAt(int, int)
extern "C" Q_DECL_EXPORT
void C_QSizeList_swapItemsAt_0(void* this_ , int i, int j) {
    // QSizeList_swapItemsAt_0()
     ((QSizeList*)this_)->swapItemsAt(i, j);
}

// [-2] void swap(int, int)
extern "C" Q_DECL_EXPORT
void C_QSizeList_swap_1(void* this_ , int i, int j) {
    // QSizeList_swap_1()
     ((QSizeList*)this_)->swap(i, j);
}

// [4] int indexOf(const T &, int)
extern "C" Q_DECL_EXPORT
int C_QSizeList_indexOf_0(void* this_ , QSize* t, int from) {
    // QSizeList_indexOf_0()
    auto rv =  ((QSizeList*)this_)->indexOf(*t, from);
    return rv;
}

// [4] int lastIndexOf(const T &, int)
extern "C" Q_DECL_EXPORT
int C_QSizeList_lastIndexOf_0(void* this_ , QSize* t, int from) {
    // QSizeList_lastIndexOf_0()
    auto rv =  ((QSizeList*)this_)->lastIndexOf(*t, from);
    return rv;
}

// [1] bool contains(const T &)
extern "C" Q_DECL_EXPORT
bool C_QSizeList_contains_0(void* this_ , QSize* t) {
    // QSizeList_contains_0()
    auto rv =  ((QSizeList*)this_)->contains(*t);
    return rv;
}

// [4] int count(const T &)
extern "C" Q_DECL_EXPORT
int C_QSizeList_count_0(void* this_ , QSize* t) {
    // QSizeList_count_0()
    auto rv =  ((QSizeList*)this_)->count(*t);
    return rv;
}

// [-3] QList::iterator begin()
extern "C" Q_DECL_EXPORT
QSizeList::iterator* C_QSizeList_begin_0(void* this_ ) {
    // QSizeList_begin_0()
    auto rv =  ((QSizeList*)this_)->begin();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator end()
extern "C" Q_DECL_EXPORT
QSizeList::iterator* C_QSizeList_end_0(void* this_ ) {
    // QSizeList_end_0()
    auto rv =  ((QSizeList*)this_)->end();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rbegin()
extern "C" Q_DECL_EXPORT
QSizeList::reverse_iterator* C_QSizeList_rbegin_0(void* this_ ) {
    // QSizeList_rbegin_0()
    auto rv =  ((QSizeList*)this_)->rbegin();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rend()
extern "C" Q_DECL_EXPORT
QSizeList::reverse_iterator* C_QSizeList_rend_0(void* this_ ) {
    // QSizeList_rend_0()
    auto rv =  ((QSizeList*)this_)->rend();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator insert(QList::iterator, const T &)
extern "C" Q_DECL_EXPORT
QSizeList::iterator* C_QSizeList_insert_1(void* this_ , QSizeList::iterator* before, QSize* t) {
    // QSizeList_insert_1()
    auto rv =  ((QSizeList*)this_)->insert(*before, *t);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator)
extern "C" Q_DECL_EXPORT
QSizeList::iterator* C_QSizeList_erase_0(void* this_ , QSizeList::iterator* pos) {
    // QSizeList_erase_0()
    auto rv =  ((QSizeList*)this_)->erase(*pos);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator, QList::iterator)
extern "C" Q_DECL_EXPORT
QSizeList::iterator* C_QSizeList_erase_1(void* this_ , QSizeList::iterator* first, QSizeList::iterator* last) {
    // QSizeList_erase_1()
    auto rv =  ((QSizeList*)this_)->erase(*first, *last);
    return new decltype(rv)(rv);
}

// [4] int count()
extern "C" Q_DECL_EXPORT
int C_QSizeList_count_1(void* this_ ) {
    // QSizeList_count_1()
    auto rv =  ((QSizeList*)this_)->count();
    return rv;
}

// [4] int length()
extern "C" Q_DECL_EXPORT
int C_QSizeList_length_0(void* this_ ) {
    // QSizeList_length_0()
    auto rv =  ((QSizeList*)this_)->length();
    return rv;
}

// [-3] T & first()
extern "C" Q_DECL_EXPORT
QSize* C_QSizeList_first_0(void* this_ ) {
    // QSizeList_first_0()
    auto rv =  ((QSizeList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] const T & constFirst()
extern "C" Q_DECL_EXPORT
QSize* C_QSizeList_constFirst_0(void* this_ ) {
    // QSizeList_constFirst_0()
    auto rv =  ((QSizeList*)this_)->constFirst();
    return new decltype(rv)(rv);
}

// [-3] const T & first()
extern "C" Q_DECL_EXPORT
QSize* C_QSizeList_first_1(void* this_ ) {
    // QSizeList_first_1()
    auto rv =  ((QSizeList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] T & last()
extern "C" Q_DECL_EXPORT
QSize* C_QSizeList_last_0(void* this_ ) {
    // QSizeList_last_0()
    auto rv =  ((QSizeList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & last()
extern "C" Q_DECL_EXPORT
QSize* C_QSizeList_last_1(void* this_ ) {
    // QSizeList_last_1()
    auto rv =  ((QSizeList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & constLast()
extern "C" Q_DECL_EXPORT
QSize* C_QSizeList_constLast_0(void* this_ ) {
    // QSizeList_constLast_0()
    auto rv =  ((QSizeList*)this_)->constLast();
    return new decltype(rv)(rv);
}

// [-2] void removeFirst()
extern "C" Q_DECL_EXPORT
void C_QSizeList_removeFirst_0(void* this_ ) {
    // QSizeList_removeFirst_0()
     ((QSizeList*)this_)->removeFirst();
}

// [-2] void removeLast()
extern "C" Q_DECL_EXPORT
void C_QSizeList_removeLast_0(void* this_ ) {
    // QSizeList_removeLast_0()
     ((QSizeList*)this_)->removeLast();
}

// [1] bool startsWith(const T &)
extern "C" Q_DECL_EXPORT
bool C_QSizeList_startsWith_0(void* this_ , QSize* t) {
    // QSizeList_startsWith_0()
    auto rv =  ((QSizeList*)this_)->startsWith(*t);
    return rv;
}

// [1] bool endsWith(const T &)
extern "C" Q_DECL_EXPORT
bool C_QSizeList_endsWith_0(void* this_ , QSize* t) {
    // QSizeList_endsWith_0()
    auto rv =  ((QSizeList*)this_)->endsWith(*t);
    return rv;
}

// [-3] QList<T> mid(int, int)
extern "C" Q_DECL_EXPORT
QSizeList* C_QSizeList_mid_0(void* this_ , int pos, int length) {
    // QSizeList_mid_0()
    auto rv =  ((QSizeList*)this_)->mid(pos, length);
    return (QSizeList*)this_;
}

// [-3] T value(int)
extern "C" Q_DECL_EXPORT
QSize* C_QSizeList_value_0(void* this_ , int i) {
    // QSizeList_value_0()
    auto rv =  ((QSizeList*)this_)->value(i);
    return new decltype(rv)(rv);
}

// [-3] T value(int, const T &)
extern "C" Q_DECL_EXPORT
QSize* C_QSizeList_value_1(void* this_ , int i, QSize* defaultValue) {
    // QSizeList_value_1()
    auto rv =  ((QSizeList*)this_)->value(i, *defaultValue);
    return new decltype(rv)(rv);
}

// [-2] void push_back(const T &)
extern "C" Q_DECL_EXPORT
void C_QSizeList_push_back_0(void* this_ , QSize* t) {
    // QSizeList_push_back_0()
     ((QSizeList*)this_)->push_back(*t);
}

// [-2] void push_front(const T &)
extern "C" Q_DECL_EXPORT
void C_QSizeList_push_front_0(void* this_ , QSize* t) {
    // QSizeList_push_front_0()
     ((QSizeList*)this_)->push_front(*t);
}

// [-3] T & front()
extern "C" Q_DECL_EXPORT
QSize* C_QSizeList_front_0(void* this_ ) {
    // QSizeList_front_0()
    auto rv =  ((QSizeList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] const T & front()
extern "C" Q_DECL_EXPORT
QSize* C_QSizeList_front_1(void* this_ ) {
    // QSizeList_front_1()
    auto rv =  ((QSizeList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] T & back()
extern "C" Q_DECL_EXPORT
QSize* C_QSizeList_back_0(void* this_ ) {
    // QSizeList_back_0()
    auto rv =  ((QSizeList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-3] const T & back()
extern "C" Q_DECL_EXPORT
QSize* C_QSizeList_back_1(void* this_ ) {
    // QSizeList_back_1()
    auto rv =  ((QSizeList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-2] void pop_front()
extern "C" Q_DECL_EXPORT
void C_QSizeList_pop_front_0(void* this_ ) {
    // QSizeList_pop_front_0()
     ((QSizeList*)this_)->pop_front();
}

// [-2] void pop_back()
extern "C" Q_DECL_EXPORT
void C_QSizeList_pop_back_0(void* this_ ) {
    // QSizeList_pop_back_0()
     ((QSizeList*)this_)->pop_back();
}

// [1] bool empty()
extern "C" Q_DECL_EXPORT
bool C_QSizeList_empty_0(void* this_ ) {
    // QSizeList_empty_0()
    auto rv =  ((QSizeList*)this_)->empty();
    return rv;
}

// [-3] QList<T> & operator+=(const QList<T> &)
extern "C" Q_DECL_EXPORT
QSizeList* C_QSizeList_operator_add_equal_0(void* this_ , QSizeList* l) {
    // QSizeList_operator_add_equal_0()
    auto rv =  ((QSizeList*)this_)->operator+=(*l);
    return (QSizeList*)this_;
}

// [-3] QList<T> operator+(const QList<T> &)
extern "C" Q_DECL_EXPORT
QSizeList* C_QSizeList_operator_add_0(void* this_ , QSizeList* l) {
    // QSizeList_operator_add_0()
    auto rv =  ((QSizeList*)this_)->operator+(*l);
    return (QSizeList*)this_;
}

// [-3] QList<T> & operator+=(const T &)
extern "C" Q_DECL_EXPORT
QSizeList* C_QSizeList_operator_add_equal_1(void* this_ , QSize* t) {
    // QSizeList_operator_add_equal_1()
    auto rv =  ((QSizeList*)this_)->operator+=(*t);
    return (QSizeList*)this_;
}

// [-3] QList<T> & operator<<(const T &)
extern "C" Q_DECL_EXPORT
QSizeList* C_QSizeList_operator_left_shift_0(void* this_ , QSize* t) {
    // QSizeList_operator_left_shift_0()
    auto rv =  ((QSizeList*)this_)->operator<<(*t);
    return (QSizeList*)this_;
}

// [-3] QList<T> & operator<<(const QList<T> &)
extern "C" Q_DECL_EXPORT
QSizeList* C_QSizeList_operator_left_shift_1(void* this_ , QSizeList* l) {
    // QSizeList_operator_left_shift_1()
    auto rv =  ((QSizeList*)this_)->operator<<(*l);
    return (QSizeList*)this_;
}

// [-3] QVector<T> toVector()
extern "C" Q_DECL_EXPORT
void C_QSizeList_toVector_0(void* this_ ) {
    // QSizeList_toVector_0()
    auto rv =  ((QSizeList*)this_)->toVector();
}

// [-3] std::list<T> toStdList()
extern "C" Q_DECL_EXPORT
void C_QSizeList_toStdList_0(void* this_ ) {
    // QSizeList_toStdList_0()
    auto rv =  ((QSizeList*)this_)->toStdList();
}

//  body block end
