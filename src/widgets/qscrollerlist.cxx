
#ifndef QT_MINIMAL
#if QT_CONFIG(scroller)
// /usr/include/qt/QtWidgets/qscroller.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qscroller.h>
#include <QtWidgets>
#include "callback_inherit.h"

#ifndef QScrollerList
#ifndef QSCROLLERLIST_H
typedef QList<QScroller *> QScrollerList;
#endif
#endif
//  header block end

//  footer block begin
#endif // #if QT_CONFIG(scroller)
#endif // #ifndef QT_MINIMAL
//  footer block end

//  body block begin
// [-3] QList<T> & operator=(const QList<T> &)
extern "C" Q_DECL_EXPORT
QScrollerList* C_QScrollerList_operator_equal_0(void* this_ , QScrollerList* l) {
    // QScrollerList_operator_equal_0()
    auto rv =  ((QScrollerList*)this_)->operator=(*l);
    return (QScrollerList*)this_;
}

// [-3] QList<T> & operator=(QList<T> &&)
extern "C" Q_DECL_EXPORT
QScrollerList* C_QScrollerList_operator_equal_1(void* this_ , QScrollerList* other) {
    // QScrollerList_operator_equal_1()
    auto rv =  ((QScrollerList*)this_)->operator=(*other);
    return (QScrollerList*)this_;
}

// [-2] void swap(QList<T> &)
extern "C" Q_DECL_EXPORT
void C_QScrollerList_swap_0(void* this_ , QScrollerList* other) {
    // QScrollerList_swap_0()
     ((QScrollerList*)this_)->swap(*other);
}

// [1] bool operator==(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QScrollerList_operator_equal_equal_0(void* this_ , QScrollerList* l) {
    // QScrollerList_operator_equal_equal_0()
    auto rv =  ((QScrollerList*)this_)->operator==(*l);
    return rv;
}

// [1] bool operator!=(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QScrollerList_operator_not_equal_0(void* this_ , QScrollerList* l) {
    // QScrollerList_operator_not_equal_0()
    auto rv =  ((QScrollerList*)this_)->operator!=(*l);
    return rv;
}

// [4] int size()
extern "C" Q_DECL_EXPORT
int C_QScrollerList_size_0(void* this_ ) {
    // QScrollerList_size_0()
    auto rv =  ((QScrollerList*)this_)->size();
    return rv;
}

// [-2] void detach()
extern "C" Q_DECL_EXPORT
void C_QScrollerList_detach_0(void* this_ ) {
    // QScrollerList_detach_0()
     ((QScrollerList*)this_)->detach();
}

// [-2] void detachShared()
extern "C" Q_DECL_EXPORT
void C_QScrollerList_detachShared_0(void* this_ ) {
    // QScrollerList_detachShared_0()
     ((QScrollerList*)this_)->detachShared();
}

// [1] bool isDetached()
extern "C" Q_DECL_EXPORT
bool C_QScrollerList_isDetached_0(void* this_ ) {
    // QScrollerList_isDetached_0()
    auto rv =  ((QScrollerList*)this_)->isDetached();
    return rv;
}

// [-2] void setSharable(bool)
extern "C" Q_DECL_EXPORT
void C_QScrollerList_setSharable_0(void* this_ , bool sharable) {
    // QScrollerList_setSharable_0()
     ((QScrollerList*)this_)->setSharable(sharable);
}

// [1] bool isSharedWith(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QScrollerList_isSharedWith_0(void* this_ , QScrollerList* other) {
    // QScrollerList_isSharedWith_0()
    auto rv =  ((QScrollerList*)this_)->isSharedWith(*other);
    return rv;
}

// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_QScrollerList_isEmpty_0(void* this_ ) {
    // QScrollerList_isEmpty_0()
    auto rv =  ((QScrollerList*)this_)->isEmpty();
    return rv;
}

// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_QScrollerList_clear_0(void* this_ ) {
    // QScrollerList_clear_0()
     ((QScrollerList*)this_)->clear();
}

// [-3] const T & at(int)
extern "C" Q_DECL_EXPORT
QScroller ** C_QScrollerList_at_0(void* this_ , int i) {
    // QScrollerList_at_0()
    auto rv =  ((QScrollerList*)this_)->at(i);
    return new decltype(rv)(rv);
}

// [-3] const T & operator[](int)
extern "C" Q_DECL_EXPORT
QScroller ** C_QScrollerList_operator_get_index_0(void* this_ , int i) {
    // QScrollerList_operator_get_index_0()
    auto rv =  ((QScrollerList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-3] T & operator[](int)
extern "C" Q_DECL_EXPORT
QScroller ** C_QScrollerList_operator_get_index_1(void* this_ , int i) {
    // QScrollerList_operator_get_index_1()
    auto rv =  ((QScrollerList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-2] void reserve(int)
extern "C" Q_DECL_EXPORT
void C_QScrollerList_reserve_0(void* this_ , int size) {
    // QScrollerList_reserve_0()
     ((QScrollerList*)this_)->reserve(size);
}

// [-2] void append(const T &)
extern "C" Q_DECL_EXPORT
void C_QScrollerList_append_0(void* this_ , QScroller * t) {
    // QScrollerList_append_0()
     ((QScrollerList*)this_)->append(t);
}

// [-2] void append(const QList<T> &)
extern "C" Q_DECL_EXPORT
void C_QScrollerList_append_1(void* this_ , QScrollerList* t) {
    // QScrollerList_append_1()
     ((QScrollerList*)this_)->append(*t);
}

// [-2] void prepend(const T &)
extern "C" Q_DECL_EXPORT
void C_QScrollerList_prepend_0(void* this_ , QScroller * t) {
    // QScrollerList_prepend_0()
     ((QScrollerList*)this_)->prepend(t);
}

// [-2] void insert(int, const T &)
extern "C" Q_DECL_EXPORT
void C_QScrollerList_insert_0(void* this_ , int i, QScroller * t) {
    // QScrollerList_insert_0()
     ((QScrollerList*)this_)->insert(i, t);
}

// [-2] void replace(int, const T &)
extern "C" Q_DECL_EXPORT
void C_QScrollerList_replace_0(void* this_ , int i, QScroller * t) {
    // QScrollerList_replace_0()
     ((QScrollerList*)this_)->replace(i, t);
}

// [-2] void removeAt(int)
extern "C" Q_DECL_EXPORT
void C_QScrollerList_removeAt_0(void* this_ , int i) {
    // QScrollerList_removeAt_0()
     ((QScrollerList*)this_)->removeAt(i);
}

// [4] int removeAll(const T &)
extern "C" Q_DECL_EXPORT
int C_QScrollerList_removeAll_0(void* this_ , QScroller * t) {
    // QScrollerList_removeAll_0()
    auto rv =  ((QScrollerList*)this_)->removeAll(t);
    return rv;
}

// [1] bool removeOne(const T &)
extern "C" Q_DECL_EXPORT
bool C_QScrollerList_removeOne_0(void* this_ , QScroller * t) {
    // QScrollerList_removeOne_0()
    auto rv =  ((QScrollerList*)this_)->removeOne(t);
    return rv;
}

// [-3] T takeAt(int)
extern "C" Q_DECL_EXPORT
QScroller ** C_QScrollerList_takeAt_0(void* this_ , int i) {
    // QScrollerList_takeAt_0()
    auto rv =  ((QScrollerList*)this_)->takeAt(i);
    return new decltype(rv)(rv);
}

// [-3] T takeFirst()
extern "C" Q_DECL_EXPORT
QScroller ** C_QScrollerList_takeFirst_0(void* this_ ) {
    // QScrollerList_takeFirst_0()
    auto rv =  ((QScrollerList*)this_)->takeFirst();
    return new decltype(rv)(rv);
}

// [-3] T takeLast()
extern "C" Q_DECL_EXPORT
QScroller ** C_QScrollerList_takeLast_0(void* this_ ) {
    // QScrollerList_takeLast_0()
    auto rv =  ((QScrollerList*)this_)->takeLast();
    return new decltype(rv)(rv);
}

// [-2] void move(int, int)
extern "C" Q_DECL_EXPORT
void C_QScrollerList_move_0(void* this_ , int from, int to) {
    // QScrollerList_move_0()
     ((QScrollerList*)this_)->move(from, to);
}

// [-2] void swap(int, int)
extern "C" Q_DECL_EXPORT
void C_QScrollerList_swap_1(void* this_ , int i, int j) {
    // QScrollerList_swap_1()
     ((QScrollerList*)this_)->swap(i, j);
}

// [4] int indexOf(const T &, int)
extern "C" Q_DECL_EXPORT
int C_QScrollerList_indexOf_0(void* this_ , QScroller * t, int from) {
    // QScrollerList_indexOf_0()
    auto rv =  ((QScrollerList*)this_)->indexOf(t, from);
    return rv;
}

// [4] int lastIndexOf(const T &, int)
extern "C" Q_DECL_EXPORT
int C_QScrollerList_lastIndexOf_0(void* this_ , QScroller * t, int from) {
    // QScrollerList_lastIndexOf_0()
    auto rv =  ((QScrollerList*)this_)->lastIndexOf(t, from);
    return rv;
}

// [1] bool contains(const T &)
extern "C" Q_DECL_EXPORT
bool C_QScrollerList_contains_0(void* this_ , QScroller * t) {
    // QScrollerList_contains_0()
    auto rv =  ((QScrollerList*)this_)->contains(t);
    return rv;
}

// [4] int count(const T &)
extern "C" Q_DECL_EXPORT
int C_QScrollerList_count_0(void* this_ , QScroller * t) {
    // QScrollerList_count_0()
    auto rv =  ((QScrollerList*)this_)->count(t);
    return rv;
}

// [-3] QList::iterator begin()
extern "C" Q_DECL_EXPORT
QScrollerList::iterator* C_QScrollerList_begin_0(void* this_ ) {
    // QScrollerList_begin_0()
    auto rv =  ((QScrollerList*)this_)->begin();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator end()
extern "C" Q_DECL_EXPORT
QScrollerList::iterator* C_QScrollerList_end_0(void* this_ ) {
    // QScrollerList_end_0()
    auto rv =  ((QScrollerList*)this_)->end();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rbegin()
extern "C" Q_DECL_EXPORT
QScrollerList::reverse_iterator* C_QScrollerList_rbegin_0(void* this_ ) {
    // QScrollerList_rbegin_0()
    auto rv =  ((QScrollerList*)this_)->rbegin();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rend()
extern "C" Q_DECL_EXPORT
QScrollerList::reverse_iterator* C_QScrollerList_rend_0(void* this_ ) {
    // QScrollerList_rend_0()
    auto rv =  ((QScrollerList*)this_)->rend();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator insert(QList::iterator, const T &)
extern "C" Q_DECL_EXPORT
QScrollerList::iterator* C_QScrollerList_insert_1(void* this_ , QScrollerList::iterator* before, QScroller * t) {
    // QScrollerList_insert_1()
    auto rv =  ((QScrollerList*)this_)->insert(*before, t);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator)
extern "C" Q_DECL_EXPORT
QScrollerList::iterator* C_QScrollerList_erase_0(void* this_ , QScrollerList::iterator* pos) {
    // QScrollerList_erase_0()
    auto rv =  ((QScrollerList*)this_)->erase(*pos);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator, QList::iterator)
extern "C" Q_DECL_EXPORT
QScrollerList::iterator* C_QScrollerList_erase_1(void* this_ , QScrollerList::iterator* first, QScrollerList::iterator* last) {
    // QScrollerList_erase_1()
    auto rv =  ((QScrollerList*)this_)->erase(*first, *last);
    return new decltype(rv)(rv);
}

// [4] int count()
extern "C" Q_DECL_EXPORT
int C_QScrollerList_count_1(void* this_ ) {
    // QScrollerList_count_1()
    auto rv =  ((QScrollerList*)this_)->count();
    return rv;
}

// [4] int length()
extern "C" Q_DECL_EXPORT
int C_QScrollerList_length_0(void* this_ ) {
    // QScrollerList_length_0()
    auto rv =  ((QScrollerList*)this_)->length();
    return rv;
}

// [-3] T & first()
extern "C" Q_DECL_EXPORT
QScroller ** C_QScrollerList_first_0(void* this_ ) {
    // QScrollerList_first_0()
    auto rv =  ((QScrollerList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] const T & constFirst()
extern "C" Q_DECL_EXPORT
QScroller ** C_QScrollerList_constFirst_0(void* this_ ) {
    // QScrollerList_constFirst_0()
    auto rv =  ((QScrollerList*)this_)->constFirst();
    return new decltype(rv)(rv);
}

// [-3] const T & first()
extern "C" Q_DECL_EXPORT
QScroller ** C_QScrollerList_first_1(void* this_ ) {
    // QScrollerList_first_1()
    auto rv =  ((QScrollerList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] T & last()
extern "C" Q_DECL_EXPORT
QScroller ** C_QScrollerList_last_0(void* this_ ) {
    // QScrollerList_last_0()
    auto rv =  ((QScrollerList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & last()
extern "C" Q_DECL_EXPORT
QScroller ** C_QScrollerList_last_1(void* this_ ) {
    // QScrollerList_last_1()
    auto rv =  ((QScrollerList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & constLast()
extern "C" Q_DECL_EXPORT
QScroller ** C_QScrollerList_constLast_0(void* this_ ) {
    // QScrollerList_constLast_0()
    auto rv =  ((QScrollerList*)this_)->constLast();
    return new decltype(rv)(rv);
}

// [-2] void removeFirst()
extern "C" Q_DECL_EXPORT
void C_QScrollerList_removeFirst_0(void* this_ ) {
    // QScrollerList_removeFirst_0()
     ((QScrollerList*)this_)->removeFirst();
}

// [-2] void removeLast()
extern "C" Q_DECL_EXPORT
void C_QScrollerList_removeLast_0(void* this_ ) {
    // QScrollerList_removeLast_0()
     ((QScrollerList*)this_)->removeLast();
}

// [1] bool startsWith(const T &)
extern "C" Q_DECL_EXPORT
bool C_QScrollerList_startsWith_0(void* this_ , QScroller * t) {
    // QScrollerList_startsWith_0()
    auto rv =  ((QScrollerList*)this_)->startsWith(t);
    return rv;
}

// [1] bool endsWith(const T &)
extern "C" Q_DECL_EXPORT
bool C_QScrollerList_endsWith_0(void* this_ , QScroller * t) {
    // QScrollerList_endsWith_0()
    auto rv =  ((QScrollerList*)this_)->endsWith(t);
    return rv;
}

// [-3] QList<T> mid(int, int)
extern "C" Q_DECL_EXPORT
QScrollerList* C_QScrollerList_mid_0(void* this_ , int pos, int length) {
    // QScrollerList_mid_0()
    auto rv =  ((QScrollerList*)this_)->mid(pos, length);
    return (QScrollerList*)this_;
}

// [-3] T value(int)
extern "C" Q_DECL_EXPORT
QScroller ** C_QScrollerList_value_0(void* this_ , int i) {
    // QScrollerList_value_0()
    auto rv =  ((QScrollerList*)this_)->value(i);
    return new decltype(rv)(rv);
}

// [-3] T value(int, const T &)
extern "C" Q_DECL_EXPORT
QScroller ** C_QScrollerList_value_1(void* this_ , int i, QScroller * defaultValue) {
    // QScrollerList_value_1()
    auto rv =  ((QScrollerList*)this_)->value(i, defaultValue);
    return new decltype(rv)(rv);
}

// [-2] void push_back(const T &)
extern "C" Q_DECL_EXPORT
void C_QScrollerList_push_back_0(void* this_ , QScroller * t) {
    // QScrollerList_push_back_0()
     ((QScrollerList*)this_)->push_back(t);
}

// [-2] void push_front(const T &)
extern "C" Q_DECL_EXPORT
void C_QScrollerList_push_front_0(void* this_ , QScroller * t) {
    // QScrollerList_push_front_0()
     ((QScrollerList*)this_)->push_front(t);
}

// [-3] T & front()
extern "C" Q_DECL_EXPORT
QScroller ** C_QScrollerList_front_0(void* this_ ) {
    // QScrollerList_front_0()
    auto rv =  ((QScrollerList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] const T & front()
extern "C" Q_DECL_EXPORT
QScroller ** C_QScrollerList_front_1(void* this_ ) {
    // QScrollerList_front_1()
    auto rv =  ((QScrollerList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] T & back()
extern "C" Q_DECL_EXPORT
QScroller ** C_QScrollerList_back_0(void* this_ ) {
    // QScrollerList_back_0()
    auto rv =  ((QScrollerList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-3] const T & back()
extern "C" Q_DECL_EXPORT
QScroller ** C_QScrollerList_back_1(void* this_ ) {
    // QScrollerList_back_1()
    auto rv =  ((QScrollerList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-2] void pop_front()
extern "C" Q_DECL_EXPORT
void C_QScrollerList_pop_front_0(void* this_ ) {
    // QScrollerList_pop_front_0()
     ((QScrollerList*)this_)->pop_front();
}

// [-2] void pop_back()
extern "C" Q_DECL_EXPORT
void C_QScrollerList_pop_back_0(void* this_ ) {
    // QScrollerList_pop_back_0()
     ((QScrollerList*)this_)->pop_back();
}

// [1] bool empty()
extern "C" Q_DECL_EXPORT
bool C_QScrollerList_empty_0(void* this_ ) {
    // QScrollerList_empty_0()
    auto rv =  ((QScrollerList*)this_)->empty();
    return rv;
}

// [-3] QList<T> & operator+=(const QList<T> &)
extern "C" Q_DECL_EXPORT
QScrollerList* C_QScrollerList_operator_add_equal_0(void* this_ , QScrollerList* l) {
    // QScrollerList_operator_add_equal_0()
    auto rv =  ((QScrollerList*)this_)->operator+=(*l);
    return (QScrollerList*)this_;
}

// [-3] QList<T> operator+(const QList<T> &)
extern "C" Q_DECL_EXPORT
QScrollerList* C_QScrollerList_operator_add_0(void* this_ , QScrollerList* l) {
    // QScrollerList_operator_add_0()
    auto rv =  ((QScrollerList*)this_)->operator+(*l);
    return (QScrollerList*)this_;
}

// [-3] QList<T> & operator+=(const T &)
extern "C" Q_DECL_EXPORT
QScrollerList* C_QScrollerList_operator_add_equal_1(void* this_ , QScroller * t) {
    // QScrollerList_operator_add_equal_1()
    auto rv =  ((QScrollerList*)this_)->operator+=(t);
    return (QScrollerList*)this_;
}

// [-3] QList<T> & operator<<(const T &)
extern "C" Q_DECL_EXPORT
QScrollerList* C_QScrollerList_operator_left_shift_0(void* this_ , QScroller * t) {
    // QScrollerList_operator_left_shift_0()
    auto rv =  ((QScrollerList*)this_)->operator<<(t);
    return (QScrollerList*)this_;
}

// [-3] QList<T> & operator<<(const QList<T> &)
extern "C" Q_DECL_EXPORT
QScrollerList* C_QScrollerList_operator_left_shift_1(void* this_ , QScrollerList* l) {
    // QScrollerList_operator_left_shift_1()
    auto rv =  ((QScrollerList*)this_)->operator<<(*l);
    return (QScrollerList*)this_;
}

// [-3] QVector<T> toVector()
extern "C" Q_DECL_EXPORT
void C_QScrollerList_toVector_0(void* this_ ) {
    // QScrollerList_toVector_0()
    auto rv =  ((QScrollerList*)this_)->toVector();
}

// [-3] std::list<T> toStdList()
extern "C" Q_DECL_EXPORT
void C_QScrollerList_toStdList_0(void* this_ ) {
    // QScrollerList_toStdList_0()
    auto rv =  ((QScrollerList*)this_)->toStdList();
}

//  body block end
