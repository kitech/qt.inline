
// /usr/include/qt/QtGui/qglyphrun.h
#ifndef protected
#define protected public
#endif
#include <qglyphrun.h>
#include <QtGui>
#include "callback_inherit.h"

#ifndef QGlyphRunList
typedef QList<QGlyphRun> QGlyphRunList;
#endif
//  header block end

//  body block begin
// [-3] QList<T> & operator=(const QList<T> &)
extern "C"
QGlyphRunList* C_QGlyphRunList_operator_equal_0(void* this_ , QGlyphRunList* l) {
    // QGlyphRunList_operator_equal_0()
    auto rv =  ((QGlyphRunList*)this_)->operator=(*l);
    return (QGlyphRunList*)this_;
}

// [-3] QList<T> & operator=(QList<T> &&)
extern "C"
QGlyphRunList* C_QGlyphRunList_operator_equal_1(void* this_ , QGlyphRunList* other) {
    // QGlyphRunList_operator_equal_1()
    auto rv =  ((QGlyphRunList*)this_)->operator=(*other);
    return (QGlyphRunList*)this_;
}

// [-2] void swap(QList<T> &)
extern "C"
void C_QGlyphRunList_swap_0(void* this_ , QGlyphRunList* other) {
    // QGlyphRunList_swap_0()
     ((QGlyphRunList*)this_)->swap(*other);
}

// [1] bool operator==(const QList<T> &)
extern "C"
bool C_QGlyphRunList_operator_equal_equal_0(void* this_ , QGlyphRunList* l) {
    // QGlyphRunList_operator_equal_equal_0()
    auto rv =  ((QGlyphRunList*)this_)->operator==(*l);
    return rv;
}

// [1] bool operator!=(const QList<T> &)
extern "C"
bool C_QGlyphRunList_operator_not_equal_0(void* this_ , QGlyphRunList* l) {
    // QGlyphRunList_operator_not_equal_0()
    auto rv =  ((QGlyphRunList*)this_)->operator!=(*l);
    return rv;
}

// [4] int size()
extern "C"
int C_QGlyphRunList_size_0(void* this_ ) {
    // QGlyphRunList_size_0()
    auto rv =  ((QGlyphRunList*)this_)->size();
    return rv;
}

// [-2] void detach()
extern "C"
void C_QGlyphRunList_detach_0(void* this_ ) {
    // QGlyphRunList_detach_0()
     ((QGlyphRunList*)this_)->detach();
}

// [-2] void detachShared()
extern "C"
void C_QGlyphRunList_detachShared_0(void* this_ ) {
    // QGlyphRunList_detachShared_0()
     ((QGlyphRunList*)this_)->detachShared();
}

// [1] bool isDetached()
extern "C"
bool C_QGlyphRunList_isDetached_0(void* this_ ) {
    // QGlyphRunList_isDetached_0()
    auto rv =  ((QGlyphRunList*)this_)->isDetached();
    return rv;
}

// [-2] void setSharable(bool)
extern "C"
void C_QGlyphRunList_setSharable_0(void* this_ , bool sharable) {
    // QGlyphRunList_setSharable_0()
     ((QGlyphRunList*)this_)->setSharable(sharable);
}

// [1] bool isSharedWith(const QList<T> &)
extern "C"
bool C_QGlyphRunList_isSharedWith_0(void* this_ , QGlyphRunList* other) {
    // QGlyphRunList_isSharedWith_0()
    auto rv =  ((QGlyphRunList*)this_)->isSharedWith(*other);
    return rv;
}

// [1] bool isEmpty()
extern "C"
bool C_QGlyphRunList_isEmpty_0(void* this_ ) {
    // QGlyphRunList_isEmpty_0()
    auto rv =  ((QGlyphRunList*)this_)->isEmpty();
    return rv;
}

// [-2] void clear()
extern "C"
void C_QGlyphRunList_clear_0(void* this_ ) {
    // QGlyphRunList_clear_0()
     ((QGlyphRunList*)this_)->clear();
}

// [-3] const T & at(int)
extern "C"
QGlyphRun* C_QGlyphRunList_at_0(void* this_ , int i) {
    // QGlyphRunList_at_0()
    auto rv =  ((QGlyphRunList*)this_)->at(i);
    return new decltype(rv)(rv);
}

// [-3] const T & operator[](int)
extern "C"
QGlyphRun* C_QGlyphRunList_operator_get_index_0(void* this_ , int i) {
    // QGlyphRunList_operator_get_index_0()
    auto rv =  ((QGlyphRunList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-3] T & operator[](int)
extern "C"
QGlyphRun* C_QGlyphRunList_operator_get_index_1(void* this_ , int i) {
    // QGlyphRunList_operator_get_index_1()
    auto rv =  ((QGlyphRunList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-2] void reserve(int)
extern "C"
void C_QGlyphRunList_reserve_0(void* this_ , int size) {
    // QGlyphRunList_reserve_0()
     ((QGlyphRunList*)this_)->reserve(size);
}

// [-2] void append(const T &)
extern "C"
void C_QGlyphRunList_append_0(void* this_ , QGlyphRun* t) {
    // QGlyphRunList_append_0()
     ((QGlyphRunList*)this_)->append(*t);
}

// [-2] void append(const QList<T> &)
extern "C"
void C_QGlyphRunList_append_1(void* this_ , QGlyphRunList* t) {
    // QGlyphRunList_append_1()
     ((QGlyphRunList*)this_)->append(*t);
}

// [-2] void prepend(const T &)
extern "C"
void C_QGlyphRunList_prepend_0(void* this_ , QGlyphRun* t) {
    // QGlyphRunList_prepend_0()
     ((QGlyphRunList*)this_)->prepend(*t);
}

// [-2] void insert(int, const T &)
extern "C"
void C_QGlyphRunList_insert_0(void* this_ , int i, QGlyphRun* t) {
    // QGlyphRunList_insert_0()
     ((QGlyphRunList*)this_)->insert(i, *t);
}

// [-2] void replace(int, const T &)
extern "C"
void C_QGlyphRunList_replace_0(void* this_ , int i, QGlyphRun* t) {
    // QGlyphRunList_replace_0()
     ((QGlyphRunList*)this_)->replace(i, *t);
}

// [-2] void removeAt(int)
extern "C"
void C_QGlyphRunList_removeAt_0(void* this_ , int i) {
    // QGlyphRunList_removeAt_0()
     ((QGlyphRunList*)this_)->removeAt(i);
}

// [4] int removeAll(const T &)
extern "C"
int C_QGlyphRunList_removeAll_0(void* this_ , QGlyphRun* t) {
    // QGlyphRunList_removeAll_0()
    auto rv =  ((QGlyphRunList*)this_)->removeAll(*t);
    return rv;
}

// [1] bool removeOne(const T &)
extern "C"
bool C_QGlyphRunList_removeOne_0(void* this_ , QGlyphRun* t) {
    // QGlyphRunList_removeOne_0()
    auto rv =  ((QGlyphRunList*)this_)->removeOne(*t);
    return rv;
}

// [-3] T takeAt(int)
extern "C"
QGlyphRun* C_QGlyphRunList_takeAt_0(void* this_ , int i) {
    // QGlyphRunList_takeAt_0()
    auto rv =  ((QGlyphRunList*)this_)->takeAt(i);
    return new decltype(rv)(rv);
}

// [-3] T takeFirst()
extern "C"
QGlyphRun* C_QGlyphRunList_takeFirst_0(void* this_ ) {
    // QGlyphRunList_takeFirst_0()
    auto rv =  ((QGlyphRunList*)this_)->takeFirst();
    return new decltype(rv)(rv);
}

// [-3] T takeLast()
extern "C"
QGlyphRun* C_QGlyphRunList_takeLast_0(void* this_ ) {
    // QGlyphRunList_takeLast_0()
    auto rv =  ((QGlyphRunList*)this_)->takeLast();
    return new decltype(rv)(rv);
}

// [-2] void move(int, int)
extern "C"
void C_QGlyphRunList_move_0(void* this_ , int from, int to) {
    // QGlyphRunList_move_0()
     ((QGlyphRunList*)this_)->move(from, to);
}

// [-2] void swap(int, int)
extern "C"
void C_QGlyphRunList_swap_1(void* this_ , int i, int j) {
    // QGlyphRunList_swap_1()
     ((QGlyphRunList*)this_)->swap(i, j);
}

// [4] int indexOf(const T &, int)
extern "C"
int C_QGlyphRunList_indexOf_0(void* this_ , QGlyphRun* t, int from) {
    // QGlyphRunList_indexOf_0()
    auto rv =  ((QGlyphRunList*)this_)->indexOf(*t, from);
    return rv;
}

// [4] int lastIndexOf(const T &, int)
extern "C"
int C_QGlyphRunList_lastIndexOf_0(void* this_ , QGlyphRun* t, int from) {
    // QGlyphRunList_lastIndexOf_0()
    auto rv =  ((QGlyphRunList*)this_)->lastIndexOf(*t, from);
    return rv;
}

// [1] bool contains(const T &)
extern "C"
bool C_QGlyphRunList_contains_0(void* this_ , QGlyphRun* t) {
    // QGlyphRunList_contains_0()
    auto rv =  ((QGlyphRunList*)this_)->contains(*t);
    return rv;
}

// [4] int count(const T &)
extern "C"
int C_QGlyphRunList_count_0(void* this_ , QGlyphRun* t) {
    // QGlyphRunList_count_0()
    auto rv =  ((QGlyphRunList*)this_)->count(*t);
    return rv;
}

// [-3] QList::iterator begin()
extern "C"
QGlyphRunList::iterator* C_QGlyphRunList_begin_0(void* this_ ) {
    // QGlyphRunList_begin_0()
    auto rv =  ((QGlyphRunList*)this_)->begin();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator end()
extern "C"
QGlyphRunList::iterator* C_QGlyphRunList_end_0(void* this_ ) {
    // QGlyphRunList_end_0()
    auto rv =  ((QGlyphRunList*)this_)->end();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rbegin()
extern "C"
QGlyphRunList::reverse_iterator* C_QGlyphRunList_rbegin_0(void* this_ ) {
    // QGlyphRunList_rbegin_0()
    auto rv =  ((QGlyphRunList*)this_)->rbegin();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rend()
extern "C"
QGlyphRunList::reverse_iterator* C_QGlyphRunList_rend_0(void* this_ ) {
    // QGlyphRunList_rend_0()
    auto rv =  ((QGlyphRunList*)this_)->rend();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator insert(QList::iterator, const T &)
extern "C"
QGlyphRunList::iterator* C_QGlyphRunList_insert_1(void* this_ , QGlyphRunList::iterator* before, QGlyphRun* t) {
    // QGlyphRunList_insert_1()
    auto rv =  ((QGlyphRunList*)this_)->insert(*before, *t);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator)
extern "C"
QGlyphRunList::iterator* C_QGlyphRunList_erase_0(void* this_ , QGlyphRunList::iterator* pos) {
    // QGlyphRunList_erase_0()
    auto rv =  ((QGlyphRunList*)this_)->erase(*pos);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator, QList::iterator)
extern "C"
QGlyphRunList::iterator* C_QGlyphRunList_erase_1(void* this_ , QGlyphRunList::iterator* first, QGlyphRunList::iterator* last) {
    // QGlyphRunList_erase_1()
    auto rv =  ((QGlyphRunList*)this_)->erase(*first, *last);
    return new decltype(rv)(rv);
}

// [4] int count()
extern "C"
int C_QGlyphRunList_count_1(void* this_ ) {
    // QGlyphRunList_count_1()
    auto rv =  ((QGlyphRunList*)this_)->count();
    return rv;
}

// [4] int length()
extern "C"
int C_QGlyphRunList_length_0(void* this_ ) {
    // QGlyphRunList_length_0()
    auto rv =  ((QGlyphRunList*)this_)->length();
    return rv;
}

// [-3] T & first()
extern "C"
QGlyphRun* C_QGlyphRunList_first_0(void* this_ ) {
    // QGlyphRunList_first_0()
    auto rv =  ((QGlyphRunList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] const T & constFirst()
extern "C"
QGlyphRun* C_QGlyphRunList_constFirst_0(void* this_ ) {
    // QGlyphRunList_constFirst_0()
    auto rv =  ((QGlyphRunList*)this_)->constFirst();
    return new decltype(rv)(rv);
}

// [-3] const T & first()
extern "C"
QGlyphRun* C_QGlyphRunList_first_1(void* this_ ) {
    // QGlyphRunList_first_1()
    auto rv =  ((QGlyphRunList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] T & last()
extern "C"
QGlyphRun* C_QGlyphRunList_last_0(void* this_ ) {
    // QGlyphRunList_last_0()
    auto rv =  ((QGlyphRunList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & last()
extern "C"
QGlyphRun* C_QGlyphRunList_last_1(void* this_ ) {
    // QGlyphRunList_last_1()
    auto rv =  ((QGlyphRunList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & constLast()
extern "C"
QGlyphRun* C_QGlyphRunList_constLast_0(void* this_ ) {
    // QGlyphRunList_constLast_0()
    auto rv =  ((QGlyphRunList*)this_)->constLast();
    return new decltype(rv)(rv);
}

// [-2] void removeFirst()
extern "C"
void C_QGlyphRunList_removeFirst_0(void* this_ ) {
    // QGlyphRunList_removeFirst_0()
     ((QGlyphRunList*)this_)->removeFirst();
}

// [-2] void removeLast()
extern "C"
void C_QGlyphRunList_removeLast_0(void* this_ ) {
    // QGlyphRunList_removeLast_0()
     ((QGlyphRunList*)this_)->removeLast();
}

// [1] bool startsWith(const T &)
extern "C"
bool C_QGlyphRunList_startsWith_0(void* this_ , QGlyphRun* t) {
    // QGlyphRunList_startsWith_0()
    auto rv =  ((QGlyphRunList*)this_)->startsWith(*t);
    return rv;
}

// [1] bool endsWith(const T &)
extern "C"
bool C_QGlyphRunList_endsWith_0(void* this_ , QGlyphRun* t) {
    // QGlyphRunList_endsWith_0()
    auto rv =  ((QGlyphRunList*)this_)->endsWith(*t);
    return rv;
}

// [-3] QList<T> mid(int, int)
extern "C"
QGlyphRunList* C_QGlyphRunList_mid_0(void* this_ , int pos, int length) {
    // QGlyphRunList_mid_0()
    auto rv =  ((QGlyphRunList*)this_)->mid(pos, length);
    return (QGlyphRunList*)this_;
}

// [-3] T value(int)
extern "C"
QGlyphRun* C_QGlyphRunList_value_0(void* this_ , int i) {
    // QGlyphRunList_value_0()
    auto rv =  ((QGlyphRunList*)this_)->value(i);
    return new decltype(rv)(rv);
}

// [-3] T value(int, const T &)
extern "C"
QGlyphRun* C_QGlyphRunList_value_1(void* this_ , int i, QGlyphRun* defaultValue) {
    // QGlyphRunList_value_1()
    auto rv =  ((QGlyphRunList*)this_)->value(i, *defaultValue);
    return new decltype(rv)(rv);
}

// [-2] void push_back(const T &)
extern "C"
void C_QGlyphRunList_push_back_0(void* this_ , QGlyphRun* t) {
    // QGlyphRunList_push_back_0()
     ((QGlyphRunList*)this_)->push_back(*t);
}

// [-2] void push_front(const T &)
extern "C"
void C_QGlyphRunList_push_front_0(void* this_ , QGlyphRun* t) {
    // QGlyphRunList_push_front_0()
     ((QGlyphRunList*)this_)->push_front(*t);
}

// [-3] T & front()
extern "C"
QGlyphRun* C_QGlyphRunList_front_0(void* this_ ) {
    // QGlyphRunList_front_0()
    auto rv =  ((QGlyphRunList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] const T & front()
extern "C"
QGlyphRun* C_QGlyphRunList_front_1(void* this_ ) {
    // QGlyphRunList_front_1()
    auto rv =  ((QGlyphRunList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] T & back()
extern "C"
QGlyphRun* C_QGlyphRunList_back_0(void* this_ ) {
    // QGlyphRunList_back_0()
    auto rv =  ((QGlyphRunList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-3] const T & back()
extern "C"
QGlyphRun* C_QGlyphRunList_back_1(void* this_ ) {
    // QGlyphRunList_back_1()
    auto rv =  ((QGlyphRunList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-2] void pop_front()
extern "C"
void C_QGlyphRunList_pop_front_0(void* this_ ) {
    // QGlyphRunList_pop_front_0()
     ((QGlyphRunList*)this_)->pop_front();
}

// [-2] void pop_back()
extern "C"
void C_QGlyphRunList_pop_back_0(void* this_ ) {
    // QGlyphRunList_pop_back_0()
     ((QGlyphRunList*)this_)->pop_back();
}

// [1] bool empty()
extern "C"
bool C_QGlyphRunList_empty_0(void* this_ ) {
    // QGlyphRunList_empty_0()
    auto rv =  ((QGlyphRunList*)this_)->empty();
    return rv;
}

// [-3] QList<T> & operator+=(const QList<T> &)
extern "C"
QGlyphRunList* C_QGlyphRunList_operator_add_equal_0(void* this_ , QGlyphRunList* l) {
    // QGlyphRunList_operator_add_equal_0()
    auto rv =  ((QGlyphRunList*)this_)->operator+=(*l);
    return (QGlyphRunList*)this_;
}

// [-3] QList<T> operator+(const QList<T> &)
extern "C"
QGlyphRunList* C_QGlyphRunList_operator_add_0(void* this_ , QGlyphRunList* l) {
    // QGlyphRunList_operator_add_0()
    auto rv =  ((QGlyphRunList*)this_)->operator+(*l);
    return (QGlyphRunList*)this_;
}

// [-3] QList<T> & operator+=(const T &)
extern "C"
QGlyphRunList* C_QGlyphRunList_operator_add_equal_1(void* this_ , QGlyphRun* t) {
    // QGlyphRunList_operator_add_equal_1()
    auto rv =  ((QGlyphRunList*)this_)->operator+=(*t);
    return (QGlyphRunList*)this_;
}

// [-3] QList<T> & operator<<(const T &)
extern "C"
QGlyphRunList* C_QGlyphRunList_operator_left_shift_0(void* this_ , QGlyphRun* t) {
    // QGlyphRunList_operator_left_shift_0()
    auto rv =  ((QGlyphRunList*)this_)->operator<<(*t);
    return (QGlyphRunList*)this_;
}

// [-3] QList<T> & operator<<(const QList<T> &)
extern "C"
QGlyphRunList* C_QGlyphRunList_operator_left_shift_1(void* this_ , QGlyphRunList* l) {
    // QGlyphRunList_operator_left_shift_1()
    auto rv =  ((QGlyphRunList*)this_)->operator<<(*l);
    return (QGlyphRunList*)this_;
}

// [-3] QVector<T> toVector()
extern "C"
void C_QGlyphRunList_toVector_0(void* this_ ) {
    // QGlyphRunList_toVector_0()
    auto rv =  ((QGlyphRunList*)this_)->toVector();
}

// [-3] std::list<T> toStdList()
extern "C"
void C_QGlyphRunList_toStdList_0(void* this_ ) {
    // QGlyphRunList_toStdList_0()
    auto rv =  ((QGlyphRunList*)this_)->toStdList();
}

//  body block end
