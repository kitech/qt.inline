
// /usr/include/qt/QtGui/qtextobject.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextobject.h>
#include <QtGui>
#include "callback_inherit.h"

#ifndef QTextBlockList
#ifndef QTEXTBLOCKLIST_H
typedef QList<QTextBlock> QTextBlockList;
#endif
#endif
//  header block end

//  body block begin
// [-3] QList<T> & operator=(const QList<T> &)
extern "C" Q_DECL_EXPORT
QTextBlockList* C_QTextBlockList_operator_equal_0(void* this_ , QTextBlockList* l) {
    // QTextBlockList_operator_equal_0()
    auto rv =  ((QTextBlockList*)this_)->operator=(*l);
    return (QTextBlockList*)this_;
}

// [-3] QList<T> & operator=(QList<T> &&)
extern "C" Q_DECL_EXPORT
QTextBlockList* C_QTextBlockList_operator_equal_1(void* this_ , QTextBlockList* other) {
    // QTextBlockList_operator_equal_1()
    auto rv =  ((QTextBlockList*)this_)->operator=(*other);
    return (QTextBlockList*)this_;
}

// [-2] void swap(QList<T> &)
extern "C" Q_DECL_EXPORT
void C_QTextBlockList_swap_0(void* this_ , QTextBlockList* other) {
    // QTextBlockList_swap_0()
     ((QTextBlockList*)this_)->swap(*other);
}

// [1] bool operator==(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QTextBlockList_operator_equal_equal_0(void* this_ , QTextBlockList* l) {
    // QTextBlockList_operator_equal_equal_0()
    auto rv =  ((QTextBlockList*)this_)->operator==(*l);
    return rv;
}

// [1] bool operator!=(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QTextBlockList_operator_not_equal_0(void* this_ , QTextBlockList* l) {
    // QTextBlockList_operator_not_equal_0()
    auto rv =  ((QTextBlockList*)this_)->operator!=(*l);
    return rv;
}

// [4] int size()
extern "C" Q_DECL_EXPORT
int C_QTextBlockList_size_0(void* this_ ) {
    // QTextBlockList_size_0()
    auto rv =  ((QTextBlockList*)this_)->size();
    return rv;
}

// [-2] void detach()
extern "C" Q_DECL_EXPORT
void C_QTextBlockList_detach_0(void* this_ ) {
    // QTextBlockList_detach_0()
     ((QTextBlockList*)this_)->detach();
}

// [-2] void detachShared()
extern "C" Q_DECL_EXPORT
void C_QTextBlockList_detachShared_0(void* this_ ) {
    // QTextBlockList_detachShared_0()
     ((QTextBlockList*)this_)->detachShared();
}

// [1] bool isDetached()
extern "C" Q_DECL_EXPORT
bool C_QTextBlockList_isDetached_0(void* this_ ) {
    // QTextBlockList_isDetached_0()
    auto rv =  ((QTextBlockList*)this_)->isDetached();
    return rv;
}

// [-2] void setSharable(bool)
extern "C" Q_DECL_EXPORT
void C_QTextBlockList_setSharable_0(void* this_ , bool sharable) {
    // QTextBlockList_setSharable_0()
     ((QTextBlockList*)this_)->setSharable(sharable);
}

// [1] bool isSharedWith(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QTextBlockList_isSharedWith_0(void* this_ , QTextBlockList* other) {
    // QTextBlockList_isSharedWith_0()
    auto rv =  ((QTextBlockList*)this_)->isSharedWith(*other);
    return rv;
}

// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_QTextBlockList_isEmpty_0(void* this_ ) {
    // QTextBlockList_isEmpty_0()
    auto rv =  ((QTextBlockList*)this_)->isEmpty();
    return rv;
}

// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_QTextBlockList_clear_0(void* this_ ) {
    // QTextBlockList_clear_0()
     ((QTextBlockList*)this_)->clear();
}

// [-3] const T & at(int)
extern "C" Q_DECL_EXPORT
QTextBlock* C_QTextBlockList_at_0(void* this_ , int i) {
    // QTextBlockList_at_0()
    auto rv =  ((QTextBlockList*)this_)->at(i);
    return new decltype(rv)(rv);
}

// [-3] const T & operator[](int)
extern "C" Q_DECL_EXPORT
QTextBlock* C_QTextBlockList_operator_get_index_0(void* this_ , int i) {
    // QTextBlockList_operator_get_index_0()
    auto rv =  ((QTextBlockList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-3] T & operator[](int)
extern "C" Q_DECL_EXPORT
QTextBlock* C_QTextBlockList_operator_get_index_1(void* this_ , int i) {
    // QTextBlockList_operator_get_index_1()
    auto rv =  ((QTextBlockList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-2] void reserve(int)
extern "C" Q_DECL_EXPORT
void C_QTextBlockList_reserve_0(void* this_ , int size) {
    // QTextBlockList_reserve_0()
     ((QTextBlockList*)this_)->reserve(size);
}

// [-2] void append(const T &)
extern "C" Q_DECL_EXPORT
void C_QTextBlockList_append_0(void* this_ , QTextBlock* t) {
    // QTextBlockList_append_0()
     ((QTextBlockList*)this_)->append(*t);
}

// [-2] void append(const QList<T> &)
extern "C" Q_DECL_EXPORT
void C_QTextBlockList_append_1(void* this_ , QTextBlockList* t) {
    // QTextBlockList_append_1()
     ((QTextBlockList*)this_)->append(*t);
}

// [-2] void prepend(const T &)
extern "C" Q_DECL_EXPORT
void C_QTextBlockList_prepend_0(void* this_ , QTextBlock* t) {
    // QTextBlockList_prepend_0()
     ((QTextBlockList*)this_)->prepend(*t);
}

// [-2] void insert(int, const T &)
extern "C" Q_DECL_EXPORT
void C_QTextBlockList_insert_0(void* this_ , int i, QTextBlock* t) {
    // QTextBlockList_insert_0()
     ((QTextBlockList*)this_)->insert(i, *t);
}

// [-2] void replace(int, const T &)
extern "C" Q_DECL_EXPORT
void C_QTextBlockList_replace_0(void* this_ , int i, QTextBlock* t) {
    // QTextBlockList_replace_0()
     ((QTextBlockList*)this_)->replace(i, *t);
}

// [-2] void removeAt(int)
extern "C" Q_DECL_EXPORT
void C_QTextBlockList_removeAt_0(void* this_ , int i) {
    // QTextBlockList_removeAt_0()
     ((QTextBlockList*)this_)->removeAt(i);
}

// [4] int removeAll(const T &)
extern "C" Q_DECL_EXPORT
int C_QTextBlockList_removeAll_0(void* this_ , QTextBlock* t) {
    // QTextBlockList_removeAll_0()
    auto rv =  ((QTextBlockList*)this_)->removeAll(*t);
    return rv;
}

// [1] bool removeOne(const T &)
extern "C" Q_DECL_EXPORT
bool C_QTextBlockList_removeOne_0(void* this_ , QTextBlock* t) {
    // QTextBlockList_removeOne_0()
    auto rv =  ((QTextBlockList*)this_)->removeOne(*t);
    return rv;
}

// [-3] T takeAt(int)
extern "C" Q_DECL_EXPORT
QTextBlock* C_QTextBlockList_takeAt_0(void* this_ , int i) {
    // QTextBlockList_takeAt_0()
    auto rv =  ((QTextBlockList*)this_)->takeAt(i);
    return new decltype(rv)(rv);
}

// [-3] T takeFirst()
extern "C" Q_DECL_EXPORT
QTextBlock* C_QTextBlockList_takeFirst_0(void* this_ ) {
    // QTextBlockList_takeFirst_0()
    auto rv =  ((QTextBlockList*)this_)->takeFirst();
    return new decltype(rv)(rv);
}

// [-3] T takeLast()
extern "C" Q_DECL_EXPORT
QTextBlock* C_QTextBlockList_takeLast_0(void* this_ ) {
    // QTextBlockList_takeLast_0()
    auto rv =  ((QTextBlockList*)this_)->takeLast();
    return new decltype(rv)(rv);
}

// [-2] void move(int, int)
extern "C" Q_DECL_EXPORT
void C_QTextBlockList_move_0(void* this_ , int from, int to) {
    // QTextBlockList_move_0()
     ((QTextBlockList*)this_)->move(from, to);
}

// [-2] void swapItemsAt(int, int)
extern "C" Q_DECL_EXPORT
void C_QTextBlockList_swapItemsAt_0(void* this_ , int i, int j) {
    // QTextBlockList_swapItemsAt_0()
     ((QTextBlockList*)this_)->swapItemsAt(i, j);
}

// [-2] void swap(int, int)
extern "C" Q_DECL_EXPORT
void C_QTextBlockList_swap_1(void* this_ , int i, int j) {
    // QTextBlockList_swap_1()
     ((QTextBlockList*)this_)->swap(i, j);
}

// [4] int indexOf(const T &, int)
extern "C" Q_DECL_EXPORT
int C_QTextBlockList_indexOf_0(void* this_ , QTextBlock* t, int from) {
    // QTextBlockList_indexOf_0()
    auto rv =  ((QTextBlockList*)this_)->indexOf(*t, from);
    return rv;
}

// [4] int lastIndexOf(const T &, int)
extern "C" Q_DECL_EXPORT
int C_QTextBlockList_lastIndexOf_0(void* this_ , QTextBlock* t, int from) {
    // QTextBlockList_lastIndexOf_0()
    auto rv =  ((QTextBlockList*)this_)->lastIndexOf(*t, from);
    return rv;
}

// [1] bool contains(const T &)
extern "C" Q_DECL_EXPORT
bool C_QTextBlockList_contains_0(void* this_ , QTextBlock* t) {
    // QTextBlockList_contains_0()
    auto rv =  ((QTextBlockList*)this_)->contains(*t);
    return rv;
}

// [4] int count(const T &)
extern "C" Q_DECL_EXPORT
int C_QTextBlockList_count_0(void* this_ , QTextBlock* t) {
    // QTextBlockList_count_0()
    auto rv =  ((QTextBlockList*)this_)->count(*t);
    return rv;
}

// [-3] QList::iterator begin()
extern "C" Q_DECL_EXPORT
QTextBlockList::iterator* C_QTextBlockList_begin_0(void* this_ ) {
    // QTextBlockList_begin_0()
    auto rv =  ((QTextBlockList*)this_)->begin();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator end()
extern "C" Q_DECL_EXPORT
QTextBlockList::iterator* C_QTextBlockList_end_0(void* this_ ) {
    // QTextBlockList_end_0()
    auto rv =  ((QTextBlockList*)this_)->end();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rbegin()
extern "C" Q_DECL_EXPORT
QTextBlockList::reverse_iterator* C_QTextBlockList_rbegin_0(void* this_ ) {
    // QTextBlockList_rbegin_0()
    auto rv =  ((QTextBlockList*)this_)->rbegin();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rend()
extern "C" Q_DECL_EXPORT
QTextBlockList::reverse_iterator* C_QTextBlockList_rend_0(void* this_ ) {
    // QTextBlockList_rend_0()
    auto rv =  ((QTextBlockList*)this_)->rend();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator insert(QList::iterator, const T &)
extern "C" Q_DECL_EXPORT
QTextBlockList::iterator* C_QTextBlockList_insert_1(void* this_ , QTextBlockList::iterator* before, QTextBlock* t) {
    // QTextBlockList_insert_1()
    auto rv =  ((QTextBlockList*)this_)->insert(*before, *t);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator)
extern "C" Q_DECL_EXPORT
QTextBlockList::iterator* C_QTextBlockList_erase_0(void* this_ , QTextBlockList::iterator* pos) {
    // QTextBlockList_erase_0()
    auto rv =  ((QTextBlockList*)this_)->erase(*pos);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator, QList::iterator)
extern "C" Q_DECL_EXPORT
QTextBlockList::iterator* C_QTextBlockList_erase_1(void* this_ , QTextBlockList::iterator* first, QTextBlockList::iterator* last) {
    // QTextBlockList_erase_1()
    auto rv =  ((QTextBlockList*)this_)->erase(*first, *last);
    return new decltype(rv)(rv);
}

// [4] int count()
extern "C" Q_DECL_EXPORT
int C_QTextBlockList_count_1(void* this_ ) {
    // QTextBlockList_count_1()
    auto rv =  ((QTextBlockList*)this_)->count();
    return rv;
}

// [4] int length()
extern "C" Q_DECL_EXPORT
int C_QTextBlockList_length_0(void* this_ ) {
    // QTextBlockList_length_0()
    auto rv =  ((QTextBlockList*)this_)->length();
    return rv;
}

// [-3] T & first()
extern "C" Q_DECL_EXPORT
QTextBlock* C_QTextBlockList_first_0(void* this_ ) {
    // QTextBlockList_first_0()
    auto rv =  ((QTextBlockList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] const T & constFirst()
extern "C" Q_DECL_EXPORT
QTextBlock* C_QTextBlockList_constFirst_0(void* this_ ) {
    // QTextBlockList_constFirst_0()
    auto rv =  ((QTextBlockList*)this_)->constFirst();
    return new decltype(rv)(rv);
}

// [-3] const T & first()
extern "C" Q_DECL_EXPORT
QTextBlock* C_QTextBlockList_first_1(void* this_ ) {
    // QTextBlockList_first_1()
    auto rv =  ((QTextBlockList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] T & last()
extern "C" Q_DECL_EXPORT
QTextBlock* C_QTextBlockList_last_0(void* this_ ) {
    // QTextBlockList_last_0()
    auto rv =  ((QTextBlockList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & last()
extern "C" Q_DECL_EXPORT
QTextBlock* C_QTextBlockList_last_1(void* this_ ) {
    // QTextBlockList_last_1()
    auto rv =  ((QTextBlockList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & constLast()
extern "C" Q_DECL_EXPORT
QTextBlock* C_QTextBlockList_constLast_0(void* this_ ) {
    // QTextBlockList_constLast_0()
    auto rv =  ((QTextBlockList*)this_)->constLast();
    return new decltype(rv)(rv);
}

// [-2] void removeFirst()
extern "C" Q_DECL_EXPORT
void C_QTextBlockList_removeFirst_0(void* this_ ) {
    // QTextBlockList_removeFirst_0()
     ((QTextBlockList*)this_)->removeFirst();
}

// [-2] void removeLast()
extern "C" Q_DECL_EXPORT
void C_QTextBlockList_removeLast_0(void* this_ ) {
    // QTextBlockList_removeLast_0()
     ((QTextBlockList*)this_)->removeLast();
}

// [1] bool startsWith(const T &)
extern "C" Q_DECL_EXPORT
bool C_QTextBlockList_startsWith_0(void* this_ , QTextBlock* t) {
    // QTextBlockList_startsWith_0()
    auto rv =  ((QTextBlockList*)this_)->startsWith(*t);
    return rv;
}

// [1] bool endsWith(const T &)
extern "C" Q_DECL_EXPORT
bool C_QTextBlockList_endsWith_0(void* this_ , QTextBlock* t) {
    // QTextBlockList_endsWith_0()
    auto rv =  ((QTextBlockList*)this_)->endsWith(*t);
    return rv;
}

// [-3] QList<T> mid(int, int)
extern "C" Q_DECL_EXPORT
QTextBlockList* C_QTextBlockList_mid_0(void* this_ , int pos, int length) {
    // QTextBlockList_mid_0()
    auto rv =  ((QTextBlockList*)this_)->mid(pos, length);
    return (QTextBlockList*)this_;
}

// [-3] T value(int)
extern "C" Q_DECL_EXPORT
QTextBlock* C_QTextBlockList_value_0(void* this_ , int i) {
    // QTextBlockList_value_0()
    auto rv =  ((QTextBlockList*)this_)->value(i);
    return new decltype(rv)(rv);
}

// [-3] T value(int, const T &)
extern "C" Q_DECL_EXPORT
QTextBlock* C_QTextBlockList_value_1(void* this_ , int i, QTextBlock* defaultValue) {
    // QTextBlockList_value_1()
    auto rv =  ((QTextBlockList*)this_)->value(i, *defaultValue);
    return new decltype(rv)(rv);
}

// [-2] void push_back(const T &)
extern "C" Q_DECL_EXPORT
void C_QTextBlockList_push_back_0(void* this_ , QTextBlock* t) {
    // QTextBlockList_push_back_0()
     ((QTextBlockList*)this_)->push_back(*t);
}

// [-2] void push_front(const T &)
extern "C" Q_DECL_EXPORT
void C_QTextBlockList_push_front_0(void* this_ , QTextBlock* t) {
    // QTextBlockList_push_front_0()
     ((QTextBlockList*)this_)->push_front(*t);
}

// [-3] T & front()
extern "C" Q_DECL_EXPORT
QTextBlock* C_QTextBlockList_front_0(void* this_ ) {
    // QTextBlockList_front_0()
    auto rv =  ((QTextBlockList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] const T & front()
extern "C" Q_DECL_EXPORT
QTextBlock* C_QTextBlockList_front_1(void* this_ ) {
    // QTextBlockList_front_1()
    auto rv =  ((QTextBlockList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] T & back()
extern "C" Q_DECL_EXPORT
QTextBlock* C_QTextBlockList_back_0(void* this_ ) {
    // QTextBlockList_back_0()
    auto rv =  ((QTextBlockList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-3] const T & back()
extern "C" Q_DECL_EXPORT
QTextBlock* C_QTextBlockList_back_1(void* this_ ) {
    // QTextBlockList_back_1()
    auto rv =  ((QTextBlockList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-2] void pop_front()
extern "C" Q_DECL_EXPORT
void C_QTextBlockList_pop_front_0(void* this_ ) {
    // QTextBlockList_pop_front_0()
     ((QTextBlockList*)this_)->pop_front();
}

// [-2] void pop_back()
extern "C" Q_DECL_EXPORT
void C_QTextBlockList_pop_back_0(void* this_ ) {
    // QTextBlockList_pop_back_0()
     ((QTextBlockList*)this_)->pop_back();
}

// [1] bool empty()
extern "C" Q_DECL_EXPORT
bool C_QTextBlockList_empty_0(void* this_ ) {
    // QTextBlockList_empty_0()
    auto rv =  ((QTextBlockList*)this_)->empty();
    return rv;
}

// [-3] QList<T> & operator+=(const QList<T> &)
extern "C" Q_DECL_EXPORT
QTextBlockList* C_QTextBlockList_operator_add_equal_0(void* this_ , QTextBlockList* l) {
    // QTextBlockList_operator_add_equal_0()
    auto rv =  ((QTextBlockList*)this_)->operator+=(*l);
    return (QTextBlockList*)this_;
}

// [-3] QList<T> operator+(const QList<T> &)
extern "C" Q_DECL_EXPORT
QTextBlockList* C_QTextBlockList_operator_add_0(void* this_ , QTextBlockList* l) {
    // QTextBlockList_operator_add_0()
    auto rv =  ((QTextBlockList*)this_)->operator+(*l);
    return (QTextBlockList*)this_;
}

// [-3] QList<T> & operator+=(const T &)
extern "C" Q_DECL_EXPORT
QTextBlockList* C_QTextBlockList_operator_add_equal_1(void* this_ , QTextBlock* t) {
    // QTextBlockList_operator_add_equal_1()
    auto rv =  ((QTextBlockList*)this_)->operator+=(*t);
    return (QTextBlockList*)this_;
}

// [-3] QList<T> & operator<<(const T &)
extern "C" Q_DECL_EXPORT
QTextBlockList* C_QTextBlockList_operator_left_shift_0(void* this_ , QTextBlock* t) {
    // QTextBlockList_operator_left_shift_0()
    auto rv =  ((QTextBlockList*)this_)->operator<<(*t);
    return (QTextBlockList*)this_;
}

// [-3] QList<T> & operator<<(const QList<T> &)
extern "C" Q_DECL_EXPORT
QTextBlockList* C_QTextBlockList_operator_left_shift_1(void* this_ , QTextBlockList* l) {
    // QTextBlockList_operator_left_shift_1()
    auto rv =  ((QTextBlockList*)this_)->operator<<(*l);
    return (QTextBlockList*)this_;
}

// [-3] QVector<T> toVector()
extern "C" Q_DECL_EXPORT
void C_QTextBlockList_toVector_0(void* this_ ) {
    // QTextBlockList_toVector_0()
    auto rv =  ((QTextBlockList*)this_)->toVector();
}

// [-3] std::list<T> toStdList()
extern "C" Q_DECL_EXPORT
void C_QTextBlockList_toStdList_0(void* this_ ) {
    // QTextBlockList_toStdList_0()
    auto rv =  ((QTextBlockList*)this_)->toStdList();
}

//  body block end
