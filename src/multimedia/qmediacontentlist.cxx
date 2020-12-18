
// /usr/include/qt/QtMultimedia/qmediacontent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediacontent.h>
#include <QtMultimedia>
#include "callback_inherit.h"

#ifndef QMediaContentList
#ifndef QMEDIACONTENTLIST_H
typedef QList<QMediaContent> QMediaContentList;
#endif
#endif
//  header block end

//  body block begin
// [-3] QList<T> & operator=(const QList<T> &)
extern "C" Q_DECL_EXPORT
QMediaContentList* C_QMediaContentList_operator_equal_0(void* this_ , QMediaContentList* l) {
    // QMediaContentList_operator_equal_0()
    auto rv =  ((QMediaContentList*)this_)->operator=(*l);
    return (QMediaContentList*)this_;
}

// [-3] QList<T> & operator=(QList<T> &&)
extern "C" Q_DECL_EXPORT
QMediaContentList* C_QMediaContentList_operator_equal_1(void* this_ , QMediaContentList* other) {
    // QMediaContentList_operator_equal_1()
    auto rv =  ((QMediaContentList*)this_)->operator=(*other);
    return (QMediaContentList*)this_;
}

// [-2] void swap(QList<T> &)
extern "C" Q_DECL_EXPORT
void C_QMediaContentList_swap_0(void* this_ , QMediaContentList* other) {
    // QMediaContentList_swap_0()
     ((QMediaContentList*)this_)->swap(*other);
}

// [1] bool operator==(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QMediaContentList_operator_equal_equal_0(void* this_ , QMediaContentList* l) {
    // QMediaContentList_operator_equal_equal_0()
    auto rv =  ((QMediaContentList*)this_)->operator==(*l);
    return rv;
}

// [1] bool operator!=(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QMediaContentList_operator_not_equal_0(void* this_ , QMediaContentList* l) {
    // QMediaContentList_operator_not_equal_0()
    auto rv =  ((QMediaContentList*)this_)->operator!=(*l);
    return rv;
}

// [4] int size()
extern "C" Q_DECL_EXPORT
int C_QMediaContentList_size_0(void* this_ ) {
    // QMediaContentList_size_0()
    auto rv =  ((QMediaContentList*)this_)->size();
    return rv;
}

// [-2] void detach()
extern "C" Q_DECL_EXPORT
void C_QMediaContentList_detach_0(void* this_ ) {
    // QMediaContentList_detach_0()
     ((QMediaContentList*)this_)->detach();
}

// [-2] void detachShared()
extern "C" Q_DECL_EXPORT
void C_QMediaContentList_detachShared_0(void* this_ ) {
    // QMediaContentList_detachShared_0()
     ((QMediaContentList*)this_)->detachShared();
}

// [1] bool isDetached()
extern "C" Q_DECL_EXPORT
bool C_QMediaContentList_isDetached_0(void* this_ ) {
    // QMediaContentList_isDetached_0()
    auto rv =  ((QMediaContentList*)this_)->isDetached();
    return rv;
}

// [-2] void setSharable(bool)
extern "C" Q_DECL_EXPORT
void C_QMediaContentList_setSharable_0(void* this_ , bool sharable) {
    // QMediaContentList_setSharable_0()
     ((QMediaContentList*)this_)->setSharable(sharable);
}

// [1] bool isSharedWith(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QMediaContentList_isSharedWith_0(void* this_ , QMediaContentList* other) {
    // QMediaContentList_isSharedWith_0()
    auto rv =  ((QMediaContentList*)this_)->isSharedWith(*other);
    return rv;
}

// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_QMediaContentList_isEmpty_0(void* this_ ) {
    // QMediaContentList_isEmpty_0()
    auto rv =  ((QMediaContentList*)this_)->isEmpty();
    return rv;
}

// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_QMediaContentList_clear_0(void* this_ ) {
    // QMediaContentList_clear_0()
     ((QMediaContentList*)this_)->clear();
}

// [-3] const T & at(int)
extern "C" Q_DECL_EXPORT
QMediaContent* C_QMediaContentList_at_0(void* this_ , int i) {
    // QMediaContentList_at_0()
    auto rv =  ((QMediaContentList*)this_)->at(i);
    return new decltype(rv)(rv);
}

// [-3] const T & operator[](int)
extern "C" Q_DECL_EXPORT
QMediaContent* C_QMediaContentList_operator_get_index_0(void* this_ , int i) {
    // QMediaContentList_operator_get_index_0()
    auto rv =  ((QMediaContentList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-3] T & operator[](int)
extern "C" Q_DECL_EXPORT
QMediaContent* C_QMediaContentList_operator_get_index_1(void* this_ , int i) {
    // QMediaContentList_operator_get_index_1()
    auto rv =  ((QMediaContentList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-2] void reserve(int)
extern "C" Q_DECL_EXPORT
void C_QMediaContentList_reserve_0(void* this_ , int size) {
    // QMediaContentList_reserve_0()
     ((QMediaContentList*)this_)->reserve(size);
}

// [-2] void append(const T &)
extern "C" Q_DECL_EXPORT
void C_QMediaContentList_append_0(void* this_ , QMediaContent* t) {
    // QMediaContentList_append_0()
     ((QMediaContentList*)this_)->append(*t);
}

// [-2] void append(const QList<T> &)
extern "C" Q_DECL_EXPORT
void C_QMediaContentList_append_1(void* this_ , QMediaContentList* t) {
    // QMediaContentList_append_1()
     ((QMediaContentList*)this_)->append(*t);
}

// [-2] void prepend(const T &)
extern "C" Q_DECL_EXPORT
void C_QMediaContentList_prepend_0(void* this_ , QMediaContent* t) {
    // QMediaContentList_prepend_0()
     ((QMediaContentList*)this_)->prepend(*t);
}

// [-2] void insert(int, const T &)
extern "C" Q_DECL_EXPORT
void C_QMediaContentList_insert_0(void* this_ , int i, QMediaContent* t) {
    // QMediaContentList_insert_0()
     ((QMediaContentList*)this_)->insert(i, *t);
}

// [-2] void replace(int, const T &)
extern "C" Q_DECL_EXPORT
void C_QMediaContentList_replace_0(void* this_ , int i, QMediaContent* t) {
    // QMediaContentList_replace_0()
     ((QMediaContentList*)this_)->replace(i, *t);
}

// [-2] void removeAt(int)
extern "C" Q_DECL_EXPORT
void C_QMediaContentList_removeAt_0(void* this_ , int i) {
    // QMediaContentList_removeAt_0()
     ((QMediaContentList*)this_)->removeAt(i);
}

// [4] int removeAll(const T &)
extern "C" Q_DECL_EXPORT
int C_QMediaContentList_removeAll_0(void* this_ , QMediaContent* t) {
    // QMediaContentList_removeAll_0()
    auto rv =  ((QMediaContentList*)this_)->removeAll(*t);
    return rv;
}

// [1] bool removeOne(const T &)
extern "C" Q_DECL_EXPORT
bool C_QMediaContentList_removeOne_0(void* this_ , QMediaContent* t) {
    // QMediaContentList_removeOne_0()
    auto rv =  ((QMediaContentList*)this_)->removeOne(*t);
    return rv;
}

// [-3] T takeAt(int)
extern "C" Q_DECL_EXPORT
QMediaContent* C_QMediaContentList_takeAt_0(void* this_ , int i) {
    // QMediaContentList_takeAt_0()
    auto rv =  ((QMediaContentList*)this_)->takeAt(i);
    return new decltype(rv)(rv);
}

// [-3] T takeFirst()
extern "C" Q_DECL_EXPORT
QMediaContent* C_QMediaContentList_takeFirst_0(void* this_ ) {
    // QMediaContentList_takeFirst_0()
    auto rv =  ((QMediaContentList*)this_)->takeFirst();
    return new decltype(rv)(rv);
}

// [-3] T takeLast()
extern "C" Q_DECL_EXPORT
QMediaContent* C_QMediaContentList_takeLast_0(void* this_ ) {
    // QMediaContentList_takeLast_0()
    auto rv =  ((QMediaContentList*)this_)->takeLast();
    return new decltype(rv)(rv);
}

// [-2] void move(int, int)
extern "C" Q_DECL_EXPORT
void C_QMediaContentList_move_0(void* this_ , int from, int to) {
    // QMediaContentList_move_0()
     ((QMediaContentList*)this_)->move(from, to);
}

// [-2] void swapItemsAt(int, int)
extern "C" Q_DECL_EXPORT
void C_QMediaContentList_swapItemsAt_0(void* this_ , int i, int j) {
    // QMediaContentList_swapItemsAt_0()
     ((QMediaContentList*)this_)->swapItemsAt(i, j);
}

// [-2] void swap(int, int)
extern "C" Q_DECL_EXPORT
void C_QMediaContentList_swap_1(void* this_ , int i, int j) {
    // QMediaContentList_swap_1()
     ((QMediaContentList*)this_)->swap(i, j);
}

// [4] int indexOf(const T &, int)
extern "C" Q_DECL_EXPORT
int C_QMediaContentList_indexOf_0(void* this_ , QMediaContent* t, int from) {
    // QMediaContentList_indexOf_0()
    auto rv =  ((QMediaContentList*)this_)->indexOf(*t, from);
    return rv;
}

// [4] int lastIndexOf(const T &, int)
extern "C" Q_DECL_EXPORT
int C_QMediaContentList_lastIndexOf_0(void* this_ , QMediaContent* t, int from) {
    // QMediaContentList_lastIndexOf_0()
    auto rv =  ((QMediaContentList*)this_)->lastIndexOf(*t, from);
    return rv;
}

// [1] bool contains(const T &)
extern "C" Q_DECL_EXPORT
bool C_QMediaContentList_contains_0(void* this_ , QMediaContent* t) {
    // QMediaContentList_contains_0()
    auto rv =  ((QMediaContentList*)this_)->contains(*t);
    return rv;
}

// [4] int count(const T &)
extern "C" Q_DECL_EXPORT
int C_QMediaContentList_count_0(void* this_ , QMediaContent* t) {
    // QMediaContentList_count_0()
    auto rv =  ((QMediaContentList*)this_)->count(*t);
    return rv;
}

// [-3] QList::iterator begin()
extern "C" Q_DECL_EXPORT
QMediaContentList::iterator* C_QMediaContentList_begin_0(void* this_ ) {
    // QMediaContentList_begin_0()
    auto rv =  ((QMediaContentList*)this_)->begin();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator end()
extern "C" Q_DECL_EXPORT
QMediaContentList::iterator* C_QMediaContentList_end_0(void* this_ ) {
    // QMediaContentList_end_0()
    auto rv =  ((QMediaContentList*)this_)->end();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rbegin()
extern "C" Q_DECL_EXPORT
QMediaContentList::reverse_iterator* C_QMediaContentList_rbegin_0(void* this_ ) {
    // QMediaContentList_rbegin_0()
    auto rv =  ((QMediaContentList*)this_)->rbegin();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rend()
extern "C" Q_DECL_EXPORT
QMediaContentList::reverse_iterator* C_QMediaContentList_rend_0(void* this_ ) {
    // QMediaContentList_rend_0()
    auto rv =  ((QMediaContentList*)this_)->rend();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator insert(QList::iterator, const T &)
extern "C" Q_DECL_EXPORT
QMediaContentList::iterator* C_QMediaContentList_insert_1(void* this_ , QMediaContentList::iterator* before, QMediaContent* t) {
    // QMediaContentList_insert_1()
    auto rv =  ((QMediaContentList*)this_)->insert(*before, *t);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator)
extern "C" Q_DECL_EXPORT
QMediaContentList::iterator* C_QMediaContentList_erase_0(void* this_ , QMediaContentList::iterator* pos) {
    // QMediaContentList_erase_0()
    auto rv =  ((QMediaContentList*)this_)->erase(*pos);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator, QList::iterator)
extern "C" Q_DECL_EXPORT
QMediaContentList::iterator* C_QMediaContentList_erase_1(void* this_ , QMediaContentList::iterator* first, QMediaContentList::iterator* last) {
    // QMediaContentList_erase_1()
    auto rv =  ((QMediaContentList*)this_)->erase(*first, *last);
    return new decltype(rv)(rv);
}

// [4] int count()
extern "C" Q_DECL_EXPORT
int C_QMediaContentList_count_1(void* this_ ) {
    // QMediaContentList_count_1()
    auto rv =  ((QMediaContentList*)this_)->count();
    return rv;
}

// [4] int length()
extern "C" Q_DECL_EXPORT
int C_QMediaContentList_length_0(void* this_ ) {
    // QMediaContentList_length_0()
    auto rv =  ((QMediaContentList*)this_)->length();
    return rv;
}

// [-3] T & first()
extern "C" Q_DECL_EXPORT
QMediaContent* C_QMediaContentList_first_0(void* this_ ) {
    // QMediaContentList_first_0()
    auto rv =  ((QMediaContentList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] const T & constFirst()
extern "C" Q_DECL_EXPORT
QMediaContent* C_QMediaContentList_constFirst_0(void* this_ ) {
    // QMediaContentList_constFirst_0()
    auto rv =  ((QMediaContentList*)this_)->constFirst();
    return new decltype(rv)(rv);
}

// [-3] const T & first()
extern "C" Q_DECL_EXPORT
QMediaContent* C_QMediaContentList_first_1(void* this_ ) {
    // QMediaContentList_first_1()
    auto rv =  ((QMediaContentList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] T & last()
extern "C" Q_DECL_EXPORT
QMediaContent* C_QMediaContentList_last_0(void* this_ ) {
    // QMediaContentList_last_0()
    auto rv =  ((QMediaContentList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & last()
extern "C" Q_DECL_EXPORT
QMediaContent* C_QMediaContentList_last_1(void* this_ ) {
    // QMediaContentList_last_1()
    auto rv =  ((QMediaContentList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & constLast()
extern "C" Q_DECL_EXPORT
QMediaContent* C_QMediaContentList_constLast_0(void* this_ ) {
    // QMediaContentList_constLast_0()
    auto rv =  ((QMediaContentList*)this_)->constLast();
    return new decltype(rv)(rv);
}

// [-2] void removeFirst()
extern "C" Q_DECL_EXPORT
void C_QMediaContentList_removeFirst_0(void* this_ ) {
    // QMediaContentList_removeFirst_0()
     ((QMediaContentList*)this_)->removeFirst();
}

// [-2] void removeLast()
extern "C" Q_DECL_EXPORT
void C_QMediaContentList_removeLast_0(void* this_ ) {
    // QMediaContentList_removeLast_0()
     ((QMediaContentList*)this_)->removeLast();
}

// [1] bool startsWith(const T &)
extern "C" Q_DECL_EXPORT
bool C_QMediaContentList_startsWith_0(void* this_ , QMediaContent* t) {
    // QMediaContentList_startsWith_0()
    auto rv =  ((QMediaContentList*)this_)->startsWith(*t);
    return rv;
}

// [1] bool endsWith(const T &)
extern "C" Q_DECL_EXPORT
bool C_QMediaContentList_endsWith_0(void* this_ , QMediaContent* t) {
    // QMediaContentList_endsWith_0()
    auto rv =  ((QMediaContentList*)this_)->endsWith(*t);
    return rv;
}

// [-3] QList<T> mid(int, int)
extern "C" Q_DECL_EXPORT
QMediaContentList* C_QMediaContentList_mid_0(void* this_ , int pos, int length) {
    // QMediaContentList_mid_0()
    auto rv =  ((QMediaContentList*)this_)->mid(pos, length);
    return (QMediaContentList*)this_;
}

// [-3] T value(int)
extern "C" Q_DECL_EXPORT
QMediaContent* C_QMediaContentList_value_0(void* this_ , int i) {
    // QMediaContentList_value_0()
    auto rv =  ((QMediaContentList*)this_)->value(i);
    return new decltype(rv)(rv);
}

// [-3] T value(int, const T &)
extern "C" Q_DECL_EXPORT
QMediaContent* C_QMediaContentList_value_1(void* this_ , int i, QMediaContent* defaultValue) {
    // QMediaContentList_value_1()
    auto rv =  ((QMediaContentList*)this_)->value(i, *defaultValue);
    return new decltype(rv)(rv);
}

// [-2] void push_back(const T &)
extern "C" Q_DECL_EXPORT
void C_QMediaContentList_push_back_0(void* this_ , QMediaContent* t) {
    // QMediaContentList_push_back_0()
     ((QMediaContentList*)this_)->push_back(*t);
}

// [-2] void push_front(const T &)
extern "C" Q_DECL_EXPORT
void C_QMediaContentList_push_front_0(void* this_ , QMediaContent* t) {
    // QMediaContentList_push_front_0()
     ((QMediaContentList*)this_)->push_front(*t);
}

// [-3] T & front()
extern "C" Q_DECL_EXPORT
QMediaContent* C_QMediaContentList_front_0(void* this_ ) {
    // QMediaContentList_front_0()
    auto rv =  ((QMediaContentList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] const T & front()
extern "C" Q_DECL_EXPORT
QMediaContent* C_QMediaContentList_front_1(void* this_ ) {
    // QMediaContentList_front_1()
    auto rv =  ((QMediaContentList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] T & back()
extern "C" Q_DECL_EXPORT
QMediaContent* C_QMediaContentList_back_0(void* this_ ) {
    // QMediaContentList_back_0()
    auto rv =  ((QMediaContentList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-3] const T & back()
extern "C" Q_DECL_EXPORT
QMediaContent* C_QMediaContentList_back_1(void* this_ ) {
    // QMediaContentList_back_1()
    auto rv =  ((QMediaContentList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-2] void pop_front()
extern "C" Q_DECL_EXPORT
void C_QMediaContentList_pop_front_0(void* this_ ) {
    // QMediaContentList_pop_front_0()
     ((QMediaContentList*)this_)->pop_front();
}

// [-2] void pop_back()
extern "C" Q_DECL_EXPORT
void C_QMediaContentList_pop_back_0(void* this_ ) {
    // QMediaContentList_pop_back_0()
     ((QMediaContentList*)this_)->pop_back();
}

// [1] bool empty()
extern "C" Q_DECL_EXPORT
bool C_QMediaContentList_empty_0(void* this_ ) {
    // QMediaContentList_empty_0()
    auto rv =  ((QMediaContentList*)this_)->empty();
    return rv;
}

// [-3] QList<T> & operator+=(const QList<T> &)
extern "C" Q_DECL_EXPORT
QMediaContentList* C_QMediaContentList_operator_add_equal_0(void* this_ , QMediaContentList* l) {
    // QMediaContentList_operator_add_equal_0()
    auto rv =  ((QMediaContentList*)this_)->operator+=(*l);
    return (QMediaContentList*)this_;
}

// [-3] QList<T> operator+(const QList<T> &)
extern "C" Q_DECL_EXPORT
QMediaContentList* C_QMediaContentList_operator_add_0(void* this_ , QMediaContentList* l) {
    // QMediaContentList_operator_add_0()
    auto rv =  ((QMediaContentList*)this_)->operator+(*l);
    return (QMediaContentList*)this_;
}

// [-3] QList<T> & operator+=(const T &)
extern "C" Q_DECL_EXPORT
QMediaContentList* C_QMediaContentList_operator_add_equal_1(void* this_ , QMediaContent* t) {
    // QMediaContentList_operator_add_equal_1()
    auto rv =  ((QMediaContentList*)this_)->operator+=(*t);
    return (QMediaContentList*)this_;
}

// [-3] QList<T> & operator<<(const T &)
extern "C" Q_DECL_EXPORT
QMediaContentList* C_QMediaContentList_operator_left_shift_0(void* this_ , QMediaContent* t) {
    // QMediaContentList_operator_left_shift_0()
    auto rv =  ((QMediaContentList*)this_)->operator<<(*t);
    return (QMediaContentList*)this_;
}

// [-3] QList<T> & operator<<(const QList<T> &)
extern "C" Q_DECL_EXPORT
QMediaContentList* C_QMediaContentList_operator_left_shift_1(void* this_ , QMediaContentList* l) {
    // QMediaContentList_operator_left_shift_1()
    auto rv =  ((QMediaContentList*)this_)->operator<<(*l);
    return (QMediaContentList*)this_;
}

// [-3] QVector<T> toVector()
extern "C" Q_DECL_EXPORT
void C_QMediaContentList_toVector_0(void* this_ ) {
    // QMediaContentList_toVector_0()
    auto rv =  ((QMediaContentList*)this_)->toVector();
}

// [-3] std::list<T> toStdList()
extern "C" Q_DECL_EXPORT
void C_QMediaContentList_toStdList_0(void* this_ ) {
    // QMediaContentList_toStdList_0()
    auto rv =  ((QMediaContentList*)this_)->toStdList();
}

//  body block end
