
// /usr/include/qt/QtCore/qurl.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qurl.h>
#include <QtCore>
#include "callback_inherit.h"

#ifndef QUrlList
#ifndef QURLLIST_H
typedef QList<QUrl> QUrlList;
#endif
#endif
//  header block end

//  body block begin
// [-3] QList<T> & operator=(const QList<T> &)
extern "C" Q_DECL_EXPORT
QUrlList* C_QUrlList_operator_equal_0(void* this_ , QUrlList* l) {
    // QUrlList_operator_equal_0()
    auto rv =  ((QUrlList*)this_)->operator=(*l);
    return (QUrlList*)this_;
}

// [-3] QList<T> & operator=(QList<T> &&)
extern "C" Q_DECL_EXPORT
QUrlList* C_QUrlList_operator_equal_1(void* this_ , QUrlList* other) {
    // QUrlList_operator_equal_1()
    auto rv =  ((QUrlList*)this_)->operator=(*other);
    return (QUrlList*)this_;
}

// [-2] void swap(QList<T> &)
extern "C" Q_DECL_EXPORT
void C_QUrlList_swap_0(void* this_ , QUrlList* other) {
    // QUrlList_swap_0()
     ((QUrlList*)this_)->swap(*other);
}

// [1] bool operator==(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QUrlList_operator_equal_equal_0(void* this_ , QUrlList* l) {
    // QUrlList_operator_equal_equal_0()
    auto rv =  ((QUrlList*)this_)->operator==(*l);
    return rv;
}

// [1] bool operator!=(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QUrlList_operator_not_equal_0(void* this_ , QUrlList* l) {
    // QUrlList_operator_not_equal_0()
    auto rv =  ((QUrlList*)this_)->operator!=(*l);
    return rv;
}

// [4] int size()
extern "C" Q_DECL_EXPORT
int C_QUrlList_size_0(void* this_ ) {
    // QUrlList_size_0()
    auto rv =  ((QUrlList*)this_)->size();
    return rv;
}

// [-2] void detach()
extern "C" Q_DECL_EXPORT
void C_QUrlList_detach_0(void* this_ ) {
    // QUrlList_detach_0()
     ((QUrlList*)this_)->detach();
}

// [-2] void detachShared()
extern "C" Q_DECL_EXPORT
void C_QUrlList_detachShared_0(void* this_ ) {
    // QUrlList_detachShared_0()
     ((QUrlList*)this_)->detachShared();
}

// [1] bool isDetached()
extern "C" Q_DECL_EXPORT
bool C_QUrlList_isDetached_0(void* this_ ) {
    // QUrlList_isDetached_0()
    auto rv =  ((QUrlList*)this_)->isDetached();
    return rv;
}

// [-2] void setSharable(bool)
extern "C" Q_DECL_EXPORT
void C_QUrlList_setSharable_0(void* this_ , bool sharable) {
    // QUrlList_setSharable_0()
     ((QUrlList*)this_)->setSharable(sharable);
}

// [1] bool isSharedWith(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QUrlList_isSharedWith_0(void* this_ , QUrlList* other) {
    // QUrlList_isSharedWith_0()
    auto rv =  ((QUrlList*)this_)->isSharedWith(*other);
    return rv;
}

// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_QUrlList_isEmpty_0(void* this_ ) {
    // QUrlList_isEmpty_0()
    auto rv =  ((QUrlList*)this_)->isEmpty();
    return rv;
}

// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_QUrlList_clear_0(void* this_ ) {
    // QUrlList_clear_0()
     ((QUrlList*)this_)->clear();
}

// [-3] const T & at(int)
extern "C" Q_DECL_EXPORT
QUrl* C_QUrlList_at_0(void* this_ , int i) {
    // QUrlList_at_0()
    auto rv =  ((QUrlList*)this_)->at(i);
    return new decltype(rv)(rv);
}

// [-3] const T & operator[](int)
extern "C" Q_DECL_EXPORT
QUrl* C_QUrlList_operator_get_index_0(void* this_ , int i) {
    // QUrlList_operator_get_index_0()
    auto rv =  ((QUrlList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-3] T & operator[](int)
extern "C" Q_DECL_EXPORT
QUrl* C_QUrlList_operator_get_index_1(void* this_ , int i) {
    // QUrlList_operator_get_index_1()
    auto rv =  ((QUrlList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-2] void reserve(int)
extern "C" Q_DECL_EXPORT
void C_QUrlList_reserve_0(void* this_ , int size) {
    // QUrlList_reserve_0()
     ((QUrlList*)this_)->reserve(size);
}

// [-2] void append(const T &)
extern "C" Q_DECL_EXPORT
void C_QUrlList_append_0(void* this_ , QUrl* t) {
    // QUrlList_append_0()
     ((QUrlList*)this_)->append(*t);
}

// [-2] void append(const QList<T> &)
extern "C" Q_DECL_EXPORT
void C_QUrlList_append_1(void* this_ , QUrlList* t) {
    // QUrlList_append_1()
     ((QUrlList*)this_)->append(*t);
}

// [-2] void prepend(const T &)
extern "C" Q_DECL_EXPORT
void C_QUrlList_prepend_0(void* this_ , QUrl* t) {
    // QUrlList_prepend_0()
     ((QUrlList*)this_)->prepend(*t);
}

// [-2] void insert(int, const T &)
extern "C" Q_DECL_EXPORT
void C_QUrlList_insert_0(void* this_ , int i, QUrl* t) {
    // QUrlList_insert_0()
     ((QUrlList*)this_)->insert(i, *t);
}

// [-2] void replace(int, const T &)
extern "C" Q_DECL_EXPORT
void C_QUrlList_replace_0(void* this_ , int i, QUrl* t) {
    // QUrlList_replace_0()
     ((QUrlList*)this_)->replace(i, *t);
}

// [-2] void removeAt(int)
extern "C" Q_DECL_EXPORT
void C_QUrlList_removeAt_0(void* this_ , int i) {
    // QUrlList_removeAt_0()
     ((QUrlList*)this_)->removeAt(i);
}

// [4] int removeAll(const T &)
extern "C" Q_DECL_EXPORT
int C_QUrlList_removeAll_0(void* this_ , QUrl* t) {
    // QUrlList_removeAll_0()
    auto rv =  ((QUrlList*)this_)->removeAll(*t);
    return rv;
}

// [1] bool removeOne(const T &)
extern "C" Q_DECL_EXPORT
bool C_QUrlList_removeOne_0(void* this_ , QUrl* t) {
    // QUrlList_removeOne_0()
    auto rv =  ((QUrlList*)this_)->removeOne(*t);
    return rv;
}

// [-3] T takeAt(int)
extern "C" Q_DECL_EXPORT
QUrl* C_QUrlList_takeAt_0(void* this_ , int i) {
    // QUrlList_takeAt_0()
    auto rv =  ((QUrlList*)this_)->takeAt(i);
    return new decltype(rv)(rv);
}

// [-3] T takeFirst()
extern "C" Q_DECL_EXPORT
QUrl* C_QUrlList_takeFirst_0(void* this_ ) {
    // QUrlList_takeFirst_0()
    auto rv =  ((QUrlList*)this_)->takeFirst();
    return new decltype(rv)(rv);
}

// [-3] T takeLast()
extern "C" Q_DECL_EXPORT
QUrl* C_QUrlList_takeLast_0(void* this_ ) {
    // QUrlList_takeLast_0()
    auto rv =  ((QUrlList*)this_)->takeLast();
    return new decltype(rv)(rv);
}

// [-2] void move(int, int)
extern "C" Q_DECL_EXPORT
void C_QUrlList_move_0(void* this_ , int from, int to) {
    // QUrlList_move_0()
     ((QUrlList*)this_)->move(from, to);
}

// [-2] void swap(int, int)
extern "C" Q_DECL_EXPORT
void C_QUrlList_swap_1(void* this_ , int i, int j) {
    // QUrlList_swap_1()
     ((QUrlList*)this_)->swap(i, j);
}

// [4] int indexOf(const T &, int)
extern "C" Q_DECL_EXPORT
int C_QUrlList_indexOf_0(void* this_ , QUrl* t, int from) {
    // QUrlList_indexOf_0()
    auto rv =  ((QUrlList*)this_)->indexOf(*t, from);
    return rv;
}

// [4] int lastIndexOf(const T &, int)
extern "C" Q_DECL_EXPORT
int C_QUrlList_lastIndexOf_0(void* this_ , QUrl* t, int from) {
    // QUrlList_lastIndexOf_0()
    auto rv =  ((QUrlList*)this_)->lastIndexOf(*t, from);
    return rv;
}

// [1] bool contains(const T &)
extern "C" Q_DECL_EXPORT
bool C_QUrlList_contains_0(void* this_ , QUrl* t) {
    // QUrlList_contains_0()
    auto rv =  ((QUrlList*)this_)->contains(*t);
    return rv;
}

// [4] int count(const T &)
extern "C" Q_DECL_EXPORT
int C_QUrlList_count_0(void* this_ , QUrl* t) {
    // QUrlList_count_0()
    auto rv =  ((QUrlList*)this_)->count(*t);
    return rv;
}

// [-3] QList::iterator begin()
extern "C" Q_DECL_EXPORT
QUrlList::iterator* C_QUrlList_begin_0(void* this_ ) {
    // QUrlList_begin_0()
    auto rv =  ((QUrlList*)this_)->begin();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator end()
extern "C" Q_DECL_EXPORT
QUrlList::iterator* C_QUrlList_end_0(void* this_ ) {
    // QUrlList_end_0()
    auto rv =  ((QUrlList*)this_)->end();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rbegin()
extern "C" Q_DECL_EXPORT
QUrlList::reverse_iterator* C_QUrlList_rbegin_0(void* this_ ) {
    // QUrlList_rbegin_0()
    auto rv =  ((QUrlList*)this_)->rbegin();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rend()
extern "C" Q_DECL_EXPORT
QUrlList::reverse_iterator* C_QUrlList_rend_0(void* this_ ) {
    // QUrlList_rend_0()
    auto rv =  ((QUrlList*)this_)->rend();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator insert(QList::iterator, const T &)
extern "C" Q_DECL_EXPORT
QUrlList::iterator* C_QUrlList_insert_1(void* this_ , QUrlList::iterator* before, QUrl* t) {
    // QUrlList_insert_1()
    auto rv =  ((QUrlList*)this_)->insert(*before, *t);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator)
extern "C" Q_DECL_EXPORT
QUrlList::iterator* C_QUrlList_erase_0(void* this_ , QUrlList::iterator* pos) {
    // QUrlList_erase_0()
    auto rv =  ((QUrlList*)this_)->erase(*pos);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator, QList::iterator)
extern "C" Q_DECL_EXPORT
QUrlList::iterator* C_QUrlList_erase_1(void* this_ , QUrlList::iterator* first, QUrlList::iterator* last) {
    // QUrlList_erase_1()
    auto rv =  ((QUrlList*)this_)->erase(*first, *last);
    return new decltype(rv)(rv);
}

// [4] int count()
extern "C" Q_DECL_EXPORT
int C_QUrlList_count_1(void* this_ ) {
    // QUrlList_count_1()
    auto rv =  ((QUrlList*)this_)->count();
    return rv;
}

// [4] int length()
extern "C" Q_DECL_EXPORT
int C_QUrlList_length_0(void* this_ ) {
    // QUrlList_length_0()
    auto rv =  ((QUrlList*)this_)->length();
    return rv;
}

// [-3] T & first()
extern "C" Q_DECL_EXPORT
QUrl* C_QUrlList_first_0(void* this_ ) {
    // QUrlList_first_0()
    auto rv =  ((QUrlList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] const T & constFirst()
extern "C" Q_DECL_EXPORT
QUrl* C_QUrlList_constFirst_0(void* this_ ) {
    // QUrlList_constFirst_0()
    auto rv =  ((QUrlList*)this_)->constFirst();
    return new decltype(rv)(rv);
}

// [-3] const T & first()
extern "C" Q_DECL_EXPORT
QUrl* C_QUrlList_first_1(void* this_ ) {
    // QUrlList_first_1()
    auto rv =  ((QUrlList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] T & last()
extern "C" Q_DECL_EXPORT
QUrl* C_QUrlList_last_0(void* this_ ) {
    // QUrlList_last_0()
    auto rv =  ((QUrlList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & last()
extern "C" Q_DECL_EXPORT
QUrl* C_QUrlList_last_1(void* this_ ) {
    // QUrlList_last_1()
    auto rv =  ((QUrlList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & constLast()
extern "C" Q_DECL_EXPORT
QUrl* C_QUrlList_constLast_0(void* this_ ) {
    // QUrlList_constLast_0()
    auto rv =  ((QUrlList*)this_)->constLast();
    return new decltype(rv)(rv);
}

// [-2] void removeFirst()
extern "C" Q_DECL_EXPORT
void C_QUrlList_removeFirst_0(void* this_ ) {
    // QUrlList_removeFirst_0()
     ((QUrlList*)this_)->removeFirst();
}

// [-2] void removeLast()
extern "C" Q_DECL_EXPORT
void C_QUrlList_removeLast_0(void* this_ ) {
    // QUrlList_removeLast_0()
     ((QUrlList*)this_)->removeLast();
}

// [1] bool startsWith(const T &)
extern "C" Q_DECL_EXPORT
bool C_QUrlList_startsWith_0(void* this_ , QUrl* t) {
    // QUrlList_startsWith_0()
    auto rv =  ((QUrlList*)this_)->startsWith(*t);
    return rv;
}

// [1] bool endsWith(const T &)
extern "C" Q_DECL_EXPORT
bool C_QUrlList_endsWith_0(void* this_ , QUrl* t) {
    // QUrlList_endsWith_0()
    auto rv =  ((QUrlList*)this_)->endsWith(*t);
    return rv;
}

// [-3] QList<T> mid(int, int)
extern "C" Q_DECL_EXPORT
QUrlList* C_QUrlList_mid_0(void* this_ , int pos, int length) {
    // QUrlList_mid_0()
    auto rv =  ((QUrlList*)this_)->mid(pos, length);
    return (QUrlList*)this_;
}

// [-3] T value(int)
extern "C" Q_DECL_EXPORT
QUrl* C_QUrlList_value_0(void* this_ , int i) {
    // QUrlList_value_0()
    auto rv =  ((QUrlList*)this_)->value(i);
    return new decltype(rv)(rv);
}

// [-3] T value(int, const T &)
extern "C" Q_DECL_EXPORT
QUrl* C_QUrlList_value_1(void* this_ , int i, QUrl* defaultValue) {
    // QUrlList_value_1()
    auto rv =  ((QUrlList*)this_)->value(i, *defaultValue);
    return new decltype(rv)(rv);
}

// [-2] void push_back(const T &)
extern "C" Q_DECL_EXPORT
void C_QUrlList_push_back_0(void* this_ , QUrl* t) {
    // QUrlList_push_back_0()
     ((QUrlList*)this_)->push_back(*t);
}

// [-2] void push_front(const T &)
extern "C" Q_DECL_EXPORT
void C_QUrlList_push_front_0(void* this_ , QUrl* t) {
    // QUrlList_push_front_0()
     ((QUrlList*)this_)->push_front(*t);
}

// [-3] T & front()
extern "C" Q_DECL_EXPORT
QUrl* C_QUrlList_front_0(void* this_ ) {
    // QUrlList_front_0()
    auto rv =  ((QUrlList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] const T & front()
extern "C" Q_DECL_EXPORT
QUrl* C_QUrlList_front_1(void* this_ ) {
    // QUrlList_front_1()
    auto rv =  ((QUrlList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] T & back()
extern "C" Q_DECL_EXPORT
QUrl* C_QUrlList_back_0(void* this_ ) {
    // QUrlList_back_0()
    auto rv =  ((QUrlList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-3] const T & back()
extern "C" Q_DECL_EXPORT
QUrl* C_QUrlList_back_1(void* this_ ) {
    // QUrlList_back_1()
    auto rv =  ((QUrlList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-2] void pop_front()
extern "C" Q_DECL_EXPORT
void C_QUrlList_pop_front_0(void* this_ ) {
    // QUrlList_pop_front_0()
     ((QUrlList*)this_)->pop_front();
}

// [-2] void pop_back()
extern "C" Q_DECL_EXPORT
void C_QUrlList_pop_back_0(void* this_ ) {
    // QUrlList_pop_back_0()
     ((QUrlList*)this_)->pop_back();
}

// [1] bool empty()
extern "C" Q_DECL_EXPORT
bool C_QUrlList_empty_0(void* this_ ) {
    // QUrlList_empty_0()
    auto rv =  ((QUrlList*)this_)->empty();
    return rv;
}

// [-3] QList<T> & operator+=(const QList<T> &)
extern "C" Q_DECL_EXPORT
QUrlList* C_QUrlList_operator_add_equal_0(void* this_ , QUrlList* l) {
    // QUrlList_operator_add_equal_0()
    auto rv =  ((QUrlList*)this_)->operator+=(*l);
    return (QUrlList*)this_;
}

// [-3] QList<T> operator+(const QList<T> &)
extern "C" Q_DECL_EXPORT
QUrlList* C_QUrlList_operator_add_0(void* this_ , QUrlList* l) {
    // QUrlList_operator_add_0()
    auto rv =  ((QUrlList*)this_)->operator+(*l);
    return (QUrlList*)this_;
}

// [-3] QList<T> & operator+=(const T &)
extern "C" Q_DECL_EXPORT
QUrlList* C_QUrlList_operator_add_equal_1(void* this_ , QUrl* t) {
    // QUrlList_operator_add_equal_1()
    auto rv =  ((QUrlList*)this_)->operator+=(*t);
    return (QUrlList*)this_;
}

// [-3] QList<T> & operator<<(const T &)
extern "C" Q_DECL_EXPORT
QUrlList* C_QUrlList_operator_left_shift_0(void* this_ , QUrl* t) {
    // QUrlList_operator_left_shift_0()
    auto rv =  ((QUrlList*)this_)->operator<<(*t);
    return (QUrlList*)this_;
}

// [-3] QList<T> & operator<<(const QList<T> &)
extern "C" Q_DECL_EXPORT
QUrlList* C_QUrlList_operator_left_shift_1(void* this_ , QUrlList* l) {
    // QUrlList_operator_left_shift_1()
    auto rv =  ((QUrlList*)this_)->operator<<(*l);
    return (QUrlList*)this_;
}

// [-3] QVector<T> toVector()
extern "C" Q_DECL_EXPORT
void C_QUrlList_toVector_0(void* this_ ) {
    // QUrlList_toVector_0()
    auto rv =  ((QUrlList*)this_)->toVector();
}

// [-3] std::list<T> toStdList()
extern "C" Q_DECL_EXPORT
void C_QUrlList_toStdList_0(void* this_ ) {
    // QUrlList_toStdList_0()
    auto rv =  ((QUrlList*)this_)->toStdList();
}

//  body block end
