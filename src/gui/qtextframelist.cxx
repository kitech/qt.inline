
// /usr/include/qt/QtGui/qtextobject.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextobject.h>
#include <QtGui>
#include "callback_inherit.h"

#ifndef QTextFrameList
#ifndef QTEXTFRAMELIST_H
typedef QList<QTextFrame *> QTextFrameList;
#endif
#endif
//  header block end

//  body block begin
// [-3] QList<T> & operator=(const QList<T> &)
extern "C" Q_DECL_EXPORT
QTextFrameList* C_QTextFrameList_operator_equal_0(void* this_ , QTextFrameList* l) {
    // QTextFrameList_operator_equal_0()
    auto rv =  ((QTextFrameList*)this_)->operator=(*l);
    return (QTextFrameList*)this_;
}

// [-3] QList<T> & operator=(QList<T> &&)
extern "C" Q_DECL_EXPORT
QTextFrameList* C_QTextFrameList_operator_equal_1(void* this_ , QTextFrameList* other) {
    // QTextFrameList_operator_equal_1()
    auto rv =  ((QTextFrameList*)this_)->operator=(*other);
    return (QTextFrameList*)this_;
}

// [-2] void swap(QList<T> &)
extern "C" Q_DECL_EXPORT
void C_QTextFrameList_swap_0(void* this_ , QTextFrameList* other) {
    // QTextFrameList_swap_0()
     ((QTextFrameList*)this_)->swap(*other);
}

// [1] bool operator==(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QTextFrameList_operator_equal_equal_0(void* this_ , QTextFrameList* l) {
    // QTextFrameList_operator_equal_equal_0()
    auto rv =  ((QTextFrameList*)this_)->operator==(*l);
    return rv;
}

// [1] bool operator!=(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QTextFrameList_operator_not_equal_0(void* this_ , QTextFrameList* l) {
    // QTextFrameList_operator_not_equal_0()
    auto rv =  ((QTextFrameList*)this_)->operator!=(*l);
    return rv;
}

// [4] int size()
extern "C" Q_DECL_EXPORT
int C_QTextFrameList_size_0(void* this_ ) {
    // QTextFrameList_size_0()
    auto rv =  ((QTextFrameList*)this_)->size();
    return rv;
}

// [-2] void detach()
extern "C" Q_DECL_EXPORT
void C_QTextFrameList_detach_0(void* this_ ) {
    // QTextFrameList_detach_0()
     ((QTextFrameList*)this_)->detach();
}

// [-2] void detachShared()
extern "C" Q_DECL_EXPORT
void C_QTextFrameList_detachShared_0(void* this_ ) {
    // QTextFrameList_detachShared_0()
     ((QTextFrameList*)this_)->detachShared();
}

// [1] bool isDetached()
extern "C" Q_DECL_EXPORT
bool C_QTextFrameList_isDetached_0(void* this_ ) {
    // QTextFrameList_isDetached_0()
    auto rv =  ((QTextFrameList*)this_)->isDetached();
    return rv;
}

// [-2] void setSharable(bool)
extern "C" Q_DECL_EXPORT
void C_QTextFrameList_setSharable_0(void* this_ , bool sharable) {
    // QTextFrameList_setSharable_0()
     ((QTextFrameList*)this_)->setSharable(sharable);
}

// [1] bool isSharedWith(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QTextFrameList_isSharedWith_0(void* this_ , QTextFrameList* other) {
    // QTextFrameList_isSharedWith_0()
    auto rv =  ((QTextFrameList*)this_)->isSharedWith(*other);
    return rv;
}

// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_QTextFrameList_isEmpty_0(void* this_ ) {
    // QTextFrameList_isEmpty_0()
    auto rv =  ((QTextFrameList*)this_)->isEmpty();
    return rv;
}

// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_QTextFrameList_clear_0(void* this_ ) {
    // QTextFrameList_clear_0()
     ((QTextFrameList*)this_)->clear();
}

// [-3] const T & at(int)
extern "C" Q_DECL_EXPORT
QTextFrame ** C_QTextFrameList_at_0(void* this_ , int i) {
    // QTextFrameList_at_0()
    auto rv =  ((QTextFrameList*)this_)->at(i);
    return new decltype(rv)(rv);
}

// [-3] const T & operator[](int)
extern "C" Q_DECL_EXPORT
QTextFrame ** C_QTextFrameList_operator_get_index_0(void* this_ , int i) {
    // QTextFrameList_operator_get_index_0()
    auto rv =  ((QTextFrameList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-3] T & operator[](int)
extern "C" Q_DECL_EXPORT
QTextFrame ** C_QTextFrameList_operator_get_index_1(void* this_ , int i) {
    // QTextFrameList_operator_get_index_1()
    auto rv =  ((QTextFrameList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-2] void reserve(int)
extern "C" Q_DECL_EXPORT
void C_QTextFrameList_reserve_0(void* this_ , int size) {
    // QTextFrameList_reserve_0()
     ((QTextFrameList*)this_)->reserve(size);
}

// [-2] void append(const T &)
extern "C" Q_DECL_EXPORT
void C_QTextFrameList_append_0(void* this_ , QTextFrame * t) {
    // QTextFrameList_append_0()
     ((QTextFrameList*)this_)->append(t);
}

// [-2] void append(const QList<T> &)
extern "C" Q_DECL_EXPORT
void C_QTextFrameList_append_1(void* this_ , QTextFrameList* t) {
    // QTextFrameList_append_1()
     ((QTextFrameList*)this_)->append(*t);
}

// [-2] void prepend(const T &)
extern "C" Q_DECL_EXPORT
void C_QTextFrameList_prepend_0(void* this_ , QTextFrame * t) {
    // QTextFrameList_prepend_0()
     ((QTextFrameList*)this_)->prepend(t);
}

// [-2] void insert(int, const T &)
extern "C" Q_DECL_EXPORT
void C_QTextFrameList_insert_0(void* this_ , int i, QTextFrame * t) {
    // QTextFrameList_insert_0()
     ((QTextFrameList*)this_)->insert(i, t);
}

// [-2] void replace(int, const T &)
extern "C" Q_DECL_EXPORT
void C_QTextFrameList_replace_0(void* this_ , int i, QTextFrame * t) {
    // QTextFrameList_replace_0()
     ((QTextFrameList*)this_)->replace(i, t);
}

// [-2] void removeAt(int)
extern "C" Q_DECL_EXPORT
void C_QTextFrameList_removeAt_0(void* this_ , int i) {
    // QTextFrameList_removeAt_0()
     ((QTextFrameList*)this_)->removeAt(i);
}

// [4] int removeAll(const T &)
extern "C" Q_DECL_EXPORT
int C_QTextFrameList_removeAll_0(void* this_ , QTextFrame * t) {
    // QTextFrameList_removeAll_0()
    auto rv =  ((QTextFrameList*)this_)->removeAll(t);
    return rv;
}

// [1] bool removeOne(const T &)
extern "C" Q_DECL_EXPORT
bool C_QTextFrameList_removeOne_0(void* this_ , QTextFrame * t) {
    // QTextFrameList_removeOne_0()
    auto rv =  ((QTextFrameList*)this_)->removeOne(t);
    return rv;
}

// [-3] T takeAt(int)
extern "C" Q_DECL_EXPORT
QTextFrame ** C_QTextFrameList_takeAt_0(void* this_ , int i) {
    // QTextFrameList_takeAt_0()
    auto rv =  ((QTextFrameList*)this_)->takeAt(i);
    return new decltype(rv)(rv);
}

// [-3] T takeFirst()
extern "C" Q_DECL_EXPORT
QTextFrame ** C_QTextFrameList_takeFirst_0(void* this_ ) {
    // QTextFrameList_takeFirst_0()
    auto rv =  ((QTextFrameList*)this_)->takeFirst();
    return new decltype(rv)(rv);
}

// [-3] T takeLast()
extern "C" Q_DECL_EXPORT
QTextFrame ** C_QTextFrameList_takeLast_0(void* this_ ) {
    // QTextFrameList_takeLast_0()
    auto rv =  ((QTextFrameList*)this_)->takeLast();
    return new decltype(rv)(rv);
}

// [-2] void move(int, int)
extern "C" Q_DECL_EXPORT
void C_QTextFrameList_move_0(void* this_ , int from, int to) {
    // QTextFrameList_move_0()
     ((QTextFrameList*)this_)->move(from, to);
}

// [-2] void swapItemsAt(int, int)
extern "C" Q_DECL_EXPORT
void C_QTextFrameList_swapItemsAt_0(void* this_ , int i, int j) {
    // QTextFrameList_swapItemsAt_0()
     ((QTextFrameList*)this_)->swapItemsAt(i, j);
}

// [-2] void swap(int, int)
extern "C" Q_DECL_EXPORT
void C_QTextFrameList_swap_1(void* this_ , int i, int j) {
    // QTextFrameList_swap_1()
     ((QTextFrameList*)this_)->swap(i, j);
}

// [4] int indexOf(const T &, int)
extern "C" Q_DECL_EXPORT
int C_QTextFrameList_indexOf_0(void* this_ , QTextFrame * t, int from) {
    // QTextFrameList_indexOf_0()
    auto rv =  ((QTextFrameList*)this_)->indexOf(t, from);
    return rv;
}

// [4] int lastIndexOf(const T &, int)
extern "C" Q_DECL_EXPORT
int C_QTextFrameList_lastIndexOf_0(void* this_ , QTextFrame * t, int from) {
    // QTextFrameList_lastIndexOf_0()
    auto rv =  ((QTextFrameList*)this_)->lastIndexOf(t, from);
    return rv;
}

// [1] bool contains(const T &)
extern "C" Q_DECL_EXPORT
bool C_QTextFrameList_contains_0(void* this_ , QTextFrame * t) {
    // QTextFrameList_contains_0()
    auto rv =  ((QTextFrameList*)this_)->contains(t);
    return rv;
}

// [4] int count(const T &)
extern "C" Q_DECL_EXPORT
int C_QTextFrameList_count_0(void* this_ , QTextFrame * t) {
    // QTextFrameList_count_0()
    auto rv =  ((QTextFrameList*)this_)->count(t);
    return rv;
}

// [-3] QList::iterator begin()
extern "C" Q_DECL_EXPORT
QTextFrameList::iterator* C_QTextFrameList_begin_0(void* this_ ) {
    // QTextFrameList_begin_0()
    auto rv =  ((QTextFrameList*)this_)->begin();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator end()
extern "C" Q_DECL_EXPORT
QTextFrameList::iterator* C_QTextFrameList_end_0(void* this_ ) {
    // QTextFrameList_end_0()
    auto rv =  ((QTextFrameList*)this_)->end();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rbegin()
extern "C" Q_DECL_EXPORT
QTextFrameList::reverse_iterator* C_QTextFrameList_rbegin_0(void* this_ ) {
    // QTextFrameList_rbegin_0()
    auto rv =  ((QTextFrameList*)this_)->rbegin();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rend()
extern "C" Q_DECL_EXPORT
QTextFrameList::reverse_iterator* C_QTextFrameList_rend_0(void* this_ ) {
    // QTextFrameList_rend_0()
    auto rv =  ((QTextFrameList*)this_)->rend();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator insert(QList::iterator, const T &)
extern "C" Q_DECL_EXPORT
QTextFrameList::iterator* C_QTextFrameList_insert_1(void* this_ , QTextFrameList::iterator* before, QTextFrame * t) {
    // QTextFrameList_insert_1()
    auto rv =  ((QTextFrameList*)this_)->insert(*before, t);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator)
extern "C" Q_DECL_EXPORT
QTextFrameList::iterator* C_QTextFrameList_erase_0(void* this_ , QTextFrameList::iterator* pos) {
    // QTextFrameList_erase_0()
    auto rv =  ((QTextFrameList*)this_)->erase(*pos);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator, QList::iterator)
extern "C" Q_DECL_EXPORT
QTextFrameList::iterator* C_QTextFrameList_erase_1(void* this_ , QTextFrameList::iterator* first, QTextFrameList::iterator* last) {
    // QTextFrameList_erase_1()
    auto rv =  ((QTextFrameList*)this_)->erase(*first, *last);
    return new decltype(rv)(rv);
}

// [4] int count()
extern "C" Q_DECL_EXPORT
int C_QTextFrameList_count_1(void* this_ ) {
    // QTextFrameList_count_1()
    auto rv =  ((QTextFrameList*)this_)->count();
    return rv;
}

// [4] int length()
extern "C" Q_DECL_EXPORT
int C_QTextFrameList_length_0(void* this_ ) {
    // QTextFrameList_length_0()
    auto rv =  ((QTextFrameList*)this_)->length();
    return rv;
}

// [-3] T & first()
extern "C" Q_DECL_EXPORT
QTextFrame ** C_QTextFrameList_first_0(void* this_ ) {
    // QTextFrameList_first_0()
    auto rv =  ((QTextFrameList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] const T & constFirst()
extern "C" Q_DECL_EXPORT
QTextFrame ** C_QTextFrameList_constFirst_0(void* this_ ) {
    // QTextFrameList_constFirst_0()
    auto rv =  ((QTextFrameList*)this_)->constFirst();
    return new decltype(rv)(rv);
}

// [-3] const T & first()
extern "C" Q_DECL_EXPORT
QTextFrame ** C_QTextFrameList_first_1(void* this_ ) {
    // QTextFrameList_first_1()
    auto rv =  ((QTextFrameList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] T & last()
extern "C" Q_DECL_EXPORT
QTextFrame ** C_QTextFrameList_last_0(void* this_ ) {
    // QTextFrameList_last_0()
    auto rv =  ((QTextFrameList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & last()
extern "C" Q_DECL_EXPORT
QTextFrame ** C_QTextFrameList_last_1(void* this_ ) {
    // QTextFrameList_last_1()
    auto rv =  ((QTextFrameList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & constLast()
extern "C" Q_DECL_EXPORT
QTextFrame ** C_QTextFrameList_constLast_0(void* this_ ) {
    // QTextFrameList_constLast_0()
    auto rv =  ((QTextFrameList*)this_)->constLast();
    return new decltype(rv)(rv);
}

// [-2] void removeFirst()
extern "C" Q_DECL_EXPORT
void C_QTextFrameList_removeFirst_0(void* this_ ) {
    // QTextFrameList_removeFirst_0()
     ((QTextFrameList*)this_)->removeFirst();
}

// [-2] void removeLast()
extern "C" Q_DECL_EXPORT
void C_QTextFrameList_removeLast_0(void* this_ ) {
    // QTextFrameList_removeLast_0()
     ((QTextFrameList*)this_)->removeLast();
}

// [1] bool startsWith(const T &)
extern "C" Q_DECL_EXPORT
bool C_QTextFrameList_startsWith_0(void* this_ , QTextFrame * t) {
    // QTextFrameList_startsWith_0()
    auto rv =  ((QTextFrameList*)this_)->startsWith(t);
    return rv;
}

// [1] bool endsWith(const T &)
extern "C" Q_DECL_EXPORT
bool C_QTextFrameList_endsWith_0(void* this_ , QTextFrame * t) {
    // QTextFrameList_endsWith_0()
    auto rv =  ((QTextFrameList*)this_)->endsWith(t);
    return rv;
}

// [-3] QList<T> mid(int, int)
extern "C" Q_DECL_EXPORT
QTextFrameList* C_QTextFrameList_mid_0(void* this_ , int pos, int length) {
    // QTextFrameList_mid_0()
    auto rv =  ((QTextFrameList*)this_)->mid(pos, length);
    return (QTextFrameList*)this_;
}

// [-3] T value(int)
extern "C" Q_DECL_EXPORT
QTextFrame ** C_QTextFrameList_value_0(void* this_ , int i) {
    // QTextFrameList_value_0()
    auto rv =  ((QTextFrameList*)this_)->value(i);
    return new decltype(rv)(rv);
}

// [-3] T value(int, const T &)
extern "C" Q_DECL_EXPORT
QTextFrame ** C_QTextFrameList_value_1(void* this_ , int i, QTextFrame * defaultValue) {
    // QTextFrameList_value_1()
    auto rv =  ((QTextFrameList*)this_)->value(i, defaultValue);
    return new decltype(rv)(rv);
}

// [-2] void push_back(const T &)
extern "C" Q_DECL_EXPORT
void C_QTextFrameList_push_back_0(void* this_ , QTextFrame * t) {
    // QTextFrameList_push_back_0()
     ((QTextFrameList*)this_)->push_back(t);
}

// [-2] void push_front(const T &)
extern "C" Q_DECL_EXPORT
void C_QTextFrameList_push_front_0(void* this_ , QTextFrame * t) {
    // QTextFrameList_push_front_0()
     ((QTextFrameList*)this_)->push_front(t);
}

// [-3] T & front()
extern "C" Q_DECL_EXPORT
QTextFrame ** C_QTextFrameList_front_0(void* this_ ) {
    // QTextFrameList_front_0()
    auto rv =  ((QTextFrameList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] const T & front()
extern "C" Q_DECL_EXPORT
QTextFrame ** C_QTextFrameList_front_1(void* this_ ) {
    // QTextFrameList_front_1()
    auto rv =  ((QTextFrameList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] T & back()
extern "C" Q_DECL_EXPORT
QTextFrame ** C_QTextFrameList_back_0(void* this_ ) {
    // QTextFrameList_back_0()
    auto rv =  ((QTextFrameList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-3] const T & back()
extern "C" Q_DECL_EXPORT
QTextFrame ** C_QTextFrameList_back_1(void* this_ ) {
    // QTextFrameList_back_1()
    auto rv =  ((QTextFrameList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-2] void pop_front()
extern "C" Q_DECL_EXPORT
void C_QTextFrameList_pop_front_0(void* this_ ) {
    // QTextFrameList_pop_front_0()
     ((QTextFrameList*)this_)->pop_front();
}

// [-2] void pop_back()
extern "C" Q_DECL_EXPORT
void C_QTextFrameList_pop_back_0(void* this_ ) {
    // QTextFrameList_pop_back_0()
     ((QTextFrameList*)this_)->pop_back();
}

// [1] bool empty()
extern "C" Q_DECL_EXPORT
bool C_QTextFrameList_empty_0(void* this_ ) {
    // QTextFrameList_empty_0()
    auto rv =  ((QTextFrameList*)this_)->empty();
    return rv;
}

// [-3] QList<T> & operator+=(const QList<T> &)
extern "C" Q_DECL_EXPORT
QTextFrameList* C_QTextFrameList_operator_add_equal_0(void* this_ , QTextFrameList* l) {
    // QTextFrameList_operator_add_equal_0()
    auto rv =  ((QTextFrameList*)this_)->operator+=(*l);
    return (QTextFrameList*)this_;
}

// [-3] QList<T> operator+(const QList<T> &)
extern "C" Q_DECL_EXPORT
QTextFrameList* C_QTextFrameList_operator_add_0(void* this_ , QTextFrameList* l) {
    // QTextFrameList_operator_add_0()
    auto rv =  ((QTextFrameList*)this_)->operator+(*l);
    return (QTextFrameList*)this_;
}

// [-3] QList<T> & operator+=(const T &)
extern "C" Q_DECL_EXPORT
QTextFrameList* C_QTextFrameList_operator_add_equal_1(void* this_ , QTextFrame * t) {
    // QTextFrameList_operator_add_equal_1()
    auto rv =  ((QTextFrameList*)this_)->operator+=(t);
    return (QTextFrameList*)this_;
}

// [-3] QList<T> & operator<<(const T &)
extern "C" Q_DECL_EXPORT
QTextFrameList* C_QTextFrameList_operator_left_shift_0(void* this_ , QTextFrame * t) {
    // QTextFrameList_operator_left_shift_0()
    auto rv =  ((QTextFrameList*)this_)->operator<<(t);
    return (QTextFrameList*)this_;
}

// [-3] QList<T> & operator<<(const QList<T> &)
extern "C" Q_DECL_EXPORT
QTextFrameList* C_QTextFrameList_operator_left_shift_1(void* this_ , QTextFrameList* l) {
    // QTextFrameList_operator_left_shift_1()
    auto rv =  ((QTextFrameList*)this_)->operator<<(*l);
    return (QTextFrameList*)this_;
}

// [-3] QVector<T> toVector()
extern "C" Q_DECL_EXPORT
void C_QTextFrameList_toVector_0(void* this_ ) {
    // QTextFrameList_toVector_0()
    auto rv =  ((QTextFrameList*)this_)->toVector();
}

// [-3] std::list<T> toStdList()
extern "C" Q_DECL_EXPORT
void C_QTextFrameList_toStdList_0(void* this_ ) {
    // QTextFrameList_toStdList_0()
    auto rv =  ((QTextFrameList*)this_)->toStdList();
}

//  body block end
