
// /usr/include/qt/QtMultimedia/qcamerafocus.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcamerafocus.h>
#include <QtMultimedia>
#include "callback_inherit.h"

#ifndef QCameraFocusZoneList
#ifndef QCAMERAFOCUSZONELIST_H
typedef QList<QCameraFocusZone> QCameraFocusZoneList;
#endif
#endif
//  header block end

//  body block begin
// [-3] QList<T> & operator=(const QList<T> &)
extern "C" Q_DECL_EXPORT
QCameraFocusZoneList* C_QCameraFocusZoneList_operator_equal_0(void* this_ , QCameraFocusZoneList* l) {
    // QCameraFocusZoneList_operator_equal_0()
    auto rv =  ((QCameraFocusZoneList*)this_)->operator=(*l);
    return (QCameraFocusZoneList*)this_;
}

// [-3] QList<T> & operator=(QList<T> &&)
extern "C" Q_DECL_EXPORT
QCameraFocusZoneList* C_QCameraFocusZoneList_operator_equal_1(void* this_ , QCameraFocusZoneList* other) {
    // QCameraFocusZoneList_operator_equal_1()
    auto rv =  ((QCameraFocusZoneList*)this_)->operator=(*other);
    return (QCameraFocusZoneList*)this_;
}

// [-2] void swap(QList<T> &)
extern "C" Q_DECL_EXPORT
void C_QCameraFocusZoneList_swap_0(void* this_ , QCameraFocusZoneList* other) {
    // QCameraFocusZoneList_swap_0()
     ((QCameraFocusZoneList*)this_)->swap(*other);
}

// [1] bool operator==(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QCameraFocusZoneList_operator_equal_equal_0(void* this_ , QCameraFocusZoneList* l) {
    // QCameraFocusZoneList_operator_equal_equal_0()
    auto rv =  ((QCameraFocusZoneList*)this_)->operator==(*l);
    return rv;
}

// [1] bool operator!=(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QCameraFocusZoneList_operator_not_equal_0(void* this_ , QCameraFocusZoneList* l) {
    // QCameraFocusZoneList_operator_not_equal_0()
    auto rv =  ((QCameraFocusZoneList*)this_)->operator!=(*l);
    return rv;
}

// [4] int size()
extern "C" Q_DECL_EXPORT
int C_QCameraFocusZoneList_size_0(void* this_ ) {
    // QCameraFocusZoneList_size_0()
    auto rv =  ((QCameraFocusZoneList*)this_)->size();
    return rv;
}

// [-2] void detach()
extern "C" Q_DECL_EXPORT
void C_QCameraFocusZoneList_detach_0(void* this_ ) {
    // QCameraFocusZoneList_detach_0()
     ((QCameraFocusZoneList*)this_)->detach();
}

// [-2] void detachShared()
extern "C" Q_DECL_EXPORT
void C_QCameraFocusZoneList_detachShared_0(void* this_ ) {
    // QCameraFocusZoneList_detachShared_0()
     ((QCameraFocusZoneList*)this_)->detachShared();
}

// [1] bool isDetached()
extern "C" Q_DECL_EXPORT
bool C_QCameraFocusZoneList_isDetached_0(void* this_ ) {
    // QCameraFocusZoneList_isDetached_0()
    auto rv =  ((QCameraFocusZoneList*)this_)->isDetached();
    return rv;
}

// [-2] void setSharable(bool)
extern "C" Q_DECL_EXPORT
void C_QCameraFocusZoneList_setSharable_0(void* this_ , bool sharable) {
    // QCameraFocusZoneList_setSharable_0()
     ((QCameraFocusZoneList*)this_)->setSharable(sharable);
}

// [1] bool isSharedWith(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QCameraFocusZoneList_isSharedWith_0(void* this_ , QCameraFocusZoneList* other) {
    // QCameraFocusZoneList_isSharedWith_0()
    auto rv =  ((QCameraFocusZoneList*)this_)->isSharedWith(*other);
    return rv;
}

// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_QCameraFocusZoneList_isEmpty_0(void* this_ ) {
    // QCameraFocusZoneList_isEmpty_0()
    auto rv =  ((QCameraFocusZoneList*)this_)->isEmpty();
    return rv;
}

// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_QCameraFocusZoneList_clear_0(void* this_ ) {
    // QCameraFocusZoneList_clear_0()
     ((QCameraFocusZoneList*)this_)->clear();
}

// [-3] const T & at(int)
extern "C" Q_DECL_EXPORT
QCameraFocusZone* C_QCameraFocusZoneList_at_0(void* this_ , int i) {
    // QCameraFocusZoneList_at_0()
    auto rv =  ((QCameraFocusZoneList*)this_)->at(i);
    return new decltype(rv)(rv);
}

// [-3] const T & operator[](int)
extern "C" Q_DECL_EXPORT
QCameraFocusZone* C_QCameraFocusZoneList_operator_get_index_0(void* this_ , int i) {
    // QCameraFocusZoneList_operator_get_index_0()
    auto rv =  ((QCameraFocusZoneList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-3] T & operator[](int)
extern "C" Q_DECL_EXPORT
QCameraFocusZone* C_QCameraFocusZoneList_operator_get_index_1(void* this_ , int i) {
    // QCameraFocusZoneList_operator_get_index_1()
    auto rv =  ((QCameraFocusZoneList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-2] void reserve(int)
extern "C" Q_DECL_EXPORT
void C_QCameraFocusZoneList_reserve_0(void* this_ , int size) {
    // QCameraFocusZoneList_reserve_0()
     ((QCameraFocusZoneList*)this_)->reserve(size);
}

// [-2] void append(const T &)
extern "C" Q_DECL_EXPORT
void C_QCameraFocusZoneList_append_0(void* this_ , QCameraFocusZone* t) {
    // QCameraFocusZoneList_append_0()
     ((QCameraFocusZoneList*)this_)->append(*t);
}

// [-2] void append(const QList<T> &)
extern "C" Q_DECL_EXPORT
void C_QCameraFocusZoneList_append_1(void* this_ , QCameraFocusZoneList* t) {
    // QCameraFocusZoneList_append_1()
     ((QCameraFocusZoneList*)this_)->append(*t);
}

// [-2] void prepend(const T &)
extern "C" Q_DECL_EXPORT
void C_QCameraFocusZoneList_prepend_0(void* this_ , QCameraFocusZone* t) {
    // QCameraFocusZoneList_prepend_0()
     ((QCameraFocusZoneList*)this_)->prepend(*t);
}

// [-2] void insert(int, const T &)
extern "C" Q_DECL_EXPORT
void C_QCameraFocusZoneList_insert_0(void* this_ , int i, QCameraFocusZone* t) {
    // QCameraFocusZoneList_insert_0()
     ((QCameraFocusZoneList*)this_)->insert(i, *t);
}

// [-2] void replace(int, const T &)
extern "C" Q_DECL_EXPORT
void C_QCameraFocusZoneList_replace_0(void* this_ , int i, QCameraFocusZone* t) {
    // QCameraFocusZoneList_replace_0()
     ((QCameraFocusZoneList*)this_)->replace(i, *t);
}

// [-2] void removeAt(int)
extern "C" Q_DECL_EXPORT
void C_QCameraFocusZoneList_removeAt_0(void* this_ , int i) {
    // QCameraFocusZoneList_removeAt_0()
     ((QCameraFocusZoneList*)this_)->removeAt(i);
}

// [4] int removeAll(const T &)
extern "C" Q_DECL_EXPORT
int C_QCameraFocusZoneList_removeAll_0(void* this_ , QCameraFocusZone* t) {
    // QCameraFocusZoneList_removeAll_0()
    auto rv =  ((QCameraFocusZoneList*)this_)->removeAll(*t);
    return rv;
}

// [1] bool removeOne(const T &)
extern "C" Q_DECL_EXPORT
bool C_QCameraFocusZoneList_removeOne_0(void* this_ , QCameraFocusZone* t) {
    // QCameraFocusZoneList_removeOne_0()
    auto rv =  ((QCameraFocusZoneList*)this_)->removeOne(*t);
    return rv;
}

// [-3] T takeAt(int)
extern "C" Q_DECL_EXPORT
QCameraFocusZone* C_QCameraFocusZoneList_takeAt_0(void* this_ , int i) {
    // QCameraFocusZoneList_takeAt_0()
    auto rv =  ((QCameraFocusZoneList*)this_)->takeAt(i);
    return new decltype(rv)(rv);
}

// [-3] T takeFirst()
extern "C" Q_DECL_EXPORT
QCameraFocusZone* C_QCameraFocusZoneList_takeFirst_0(void* this_ ) {
    // QCameraFocusZoneList_takeFirst_0()
    auto rv =  ((QCameraFocusZoneList*)this_)->takeFirst();
    return new decltype(rv)(rv);
}

// [-3] T takeLast()
extern "C" Q_DECL_EXPORT
QCameraFocusZone* C_QCameraFocusZoneList_takeLast_0(void* this_ ) {
    // QCameraFocusZoneList_takeLast_0()
    auto rv =  ((QCameraFocusZoneList*)this_)->takeLast();
    return new decltype(rv)(rv);
}

// [-2] void move(int, int)
extern "C" Q_DECL_EXPORT
void C_QCameraFocusZoneList_move_0(void* this_ , int from, int to) {
    // QCameraFocusZoneList_move_0()
     ((QCameraFocusZoneList*)this_)->move(from, to);
}

// [-2] void swap(int, int)
extern "C" Q_DECL_EXPORT
void C_QCameraFocusZoneList_swap_1(void* this_ , int i, int j) {
    // QCameraFocusZoneList_swap_1()
     ((QCameraFocusZoneList*)this_)->swap(i, j);
}

// [4] int indexOf(const T &, int)
extern "C" Q_DECL_EXPORT
int C_QCameraFocusZoneList_indexOf_0(void* this_ , QCameraFocusZone* t, int from) {
    // QCameraFocusZoneList_indexOf_0()
    auto rv =  ((QCameraFocusZoneList*)this_)->indexOf(*t, from);
    return rv;
}

// [4] int lastIndexOf(const T &, int)
extern "C" Q_DECL_EXPORT
int C_QCameraFocusZoneList_lastIndexOf_0(void* this_ , QCameraFocusZone* t, int from) {
    // QCameraFocusZoneList_lastIndexOf_0()
    auto rv =  ((QCameraFocusZoneList*)this_)->lastIndexOf(*t, from);
    return rv;
}

// [1] bool contains(const T &)
extern "C" Q_DECL_EXPORT
bool C_QCameraFocusZoneList_contains_0(void* this_ , QCameraFocusZone* t) {
    // QCameraFocusZoneList_contains_0()
    auto rv =  ((QCameraFocusZoneList*)this_)->contains(*t);
    return rv;
}

// [4] int count(const T &)
extern "C" Q_DECL_EXPORT
int C_QCameraFocusZoneList_count_0(void* this_ , QCameraFocusZone* t) {
    // QCameraFocusZoneList_count_0()
    auto rv =  ((QCameraFocusZoneList*)this_)->count(*t);
    return rv;
}

// [-3] QList::iterator begin()
extern "C" Q_DECL_EXPORT
QCameraFocusZoneList::iterator* C_QCameraFocusZoneList_begin_0(void* this_ ) {
    // QCameraFocusZoneList_begin_0()
    auto rv =  ((QCameraFocusZoneList*)this_)->begin();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator end()
extern "C" Q_DECL_EXPORT
QCameraFocusZoneList::iterator* C_QCameraFocusZoneList_end_0(void* this_ ) {
    // QCameraFocusZoneList_end_0()
    auto rv =  ((QCameraFocusZoneList*)this_)->end();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rbegin()
extern "C" Q_DECL_EXPORT
QCameraFocusZoneList::reverse_iterator* C_QCameraFocusZoneList_rbegin_0(void* this_ ) {
    // QCameraFocusZoneList_rbegin_0()
    auto rv =  ((QCameraFocusZoneList*)this_)->rbegin();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rend()
extern "C" Q_DECL_EXPORT
QCameraFocusZoneList::reverse_iterator* C_QCameraFocusZoneList_rend_0(void* this_ ) {
    // QCameraFocusZoneList_rend_0()
    auto rv =  ((QCameraFocusZoneList*)this_)->rend();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator insert(QList::iterator, const T &)
extern "C" Q_DECL_EXPORT
QCameraFocusZoneList::iterator* C_QCameraFocusZoneList_insert_1(void* this_ , QCameraFocusZoneList::iterator* before, QCameraFocusZone* t) {
    // QCameraFocusZoneList_insert_1()
    auto rv =  ((QCameraFocusZoneList*)this_)->insert(*before, *t);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator)
extern "C" Q_DECL_EXPORT
QCameraFocusZoneList::iterator* C_QCameraFocusZoneList_erase_0(void* this_ , QCameraFocusZoneList::iterator* pos) {
    // QCameraFocusZoneList_erase_0()
    auto rv =  ((QCameraFocusZoneList*)this_)->erase(*pos);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator, QList::iterator)
extern "C" Q_DECL_EXPORT
QCameraFocusZoneList::iterator* C_QCameraFocusZoneList_erase_1(void* this_ , QCameraFocusZoneList::iterator* first, QCameraFocusZoneList::iterator* last) {
    // QCameraFocusZoneList_erase_1()
    auto rv =  ((QCameraFocusZoneList*)this_)->erase(*first, *last);
    return new decltype(rv)(rv);
}

// [4] int count()
extern "C" Q_DECL_EXPORT
int C_QCameraFocusZoneList_count_1(void* this_ ) {
    // QCameraFocusZoneList_count_1()
    auto rv =  ((QCameraFocusZoneList*)this_)->count();
    return rv;
}

// [4] int length()
extern "C" Q_DECL_EXPORT
int C_QCameraFocusZoneList_length_0(void* this_ ) {
    // QCameraFocusZoneList_length_0()
    auto rv =  ((QCameraFocusZoneList*)this_)->length();
    return rv;
}

// [-3] T & first()
extern "C" Q_DECL_EXPORT
QCameraFocusZone* C_QCameraFocusZoneList_first_0(void* this_ ) {
    // QCameraFocusZoneList_first_0()
    auto rv =  ((QCameraFocusZoneList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] const T & constFirst()
extern "C" Q_DECL_EXPORT
QCameraFocusZone* C_QCameraFocusZoneList_constFirst_0(void* this_ ) {
    // QCameraFocusZoneList_constFirst_0()
    auto rv =  ((QCameraFocusZoneList*)this_)->constFirst();
    return new decltype(rv)(rv);
}

// [-3] const T & first()
extern "C" Q_DECL_EXPORT
QCameraFocusZone* C_QCameraFocusZoneList_first_1(void* this_ ) {
    // QCameraFocusZoneList_first_1()
    auto rv =  ((QCameraFocusZoneList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] T & last()
extern "C" Q_DECL_EXPORT
QCameraFocusZone* C_QCameraFocusZoneList_last_0(void* this_ ) {
    // QCameraFocusZoneList_last_0()
    auto rv =  ((QCameraFocusZoneList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & last()
extern "C" Q_DECL_EXPORT
QCameraFocusZone* C_QCameraFocusZoneList_last_1(void* this_ ) {
    // QCameraFocusZoneList_last_1()
    auto rv =  ((QCameraFocusZoneList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & constLast()
extern "C" Q_DECL_EXPORT
QCameraFocusZone* C_QCameraFocusZoneList_constLast_0(void* this_ ) {
    // QCameraFocusZoneList_constLast_0()
    auto rv =  ((QCameraFocusZoneList*)this_)->constLast();
    return new decltype(rv)(rv);
}

// [-2] void removeFirst()
extern "C" Q_DECL_EXPORT
void C_QCameraFocusZoneList_removeFirst_0(void* this_ ) {
    // QCameraFocusZoneList_removeFirst_0()
     ((QCameraFocusZoneList*)this_)->removeFirst();
}

// [-2] void removeLast()
extern "C" Q_DECL_EXPORT
void C_QCameraFocusZoneList_removeLast_0(void* this_ ) {
    // QCameraFocusZoneList_removeLast_0()
     ((QCameraFocusZoneList*)this_)->removeLast();
}

// [1] bool startsWith(const T &)
extern "C" Q_DECL_EXPORT
bool C_QCameraFocusZoneList_startsWith_0(void* this_ , QCameraFocusZone* t) {
    // QCameraFocusZoneList_startsWith_0()
    auto rv =  ((QCameraFocusZoneList*)this_)->startsWith(*t);
    return rv;
}

// [1] bool endsWith(const T &)
extern "C" Q_DECL_EXPORT
bool C_QCameraFocusZoneList_endsWith_0(void* this_ , QCameraFocusZone* t) {
    // QCameraFocusZoneList_endsWith_0()
    auto rv =  ((QCameraFocusZoneList*)this_)->endsWith(*t);
    return rv;
}

// [-3] QList<T> mid(int, int)
extern "C" Q_DECL_EXPORT
QCameraFocusZoneList* C_QCameraFocusZoneList_mid_0(void* this_ , int pos, int length) {
    // QCameraFocusZoneList_mid_0()
    auto rv =  ((QCameraFocusZoneList*)this_)->mid(pos, length);
    return (QCameraFocusZoneList*)this_;
}

// [-3] T value(int)
extern "C" Q_DECL_EXPORT
QCameraFocusZone* C_QCameraFocusZoneList_value_0(void* this_ , int i) {
    // QCameraFocusZoneList_value_0()
    auto rv =  ((QCameraFocusZoneList*)this_)->value(i);
    return new decltype(rv)(rv);
}

// [-3] T value(int, const T &)
extern "C" Q_DECL_EXPORT
QCameraFocusZone* C_QCameraFocusZoneList_value_1(void* this_ , int i, QCameraFocusZone* defaultValue) {
    // QCameraFocusZoneList_value_1()
    auto rv =  ((QCameraFocusZoneList*)this_)->value(i, *defaultValue);
    return new decltype(rv)(rv);
}

// [-2] void push_back(const T &)
extern "C" Q_DECL_EXPORT
void C_QCameraFocusZoneList_push_back_0(void* this_ , QCameraFocusZone* t) {
    // QCameraFocusZoneList_push_back_0()
     ((QCameraFocusZoneList*)this_)->push_back(*t);
}

// [-2] void push_front(const T &)
extern "C" Q_DECL_EXPORT
void C_QCameraFocusZoneList_push_front_0(void* this_ , QCameraFocusZone* t) {
    // QCameraFocusZoneList_push_front_0()
     ((QCameraFocusZoneList*)this_)->push_front(*t);
}

// [-3] T & front()
extern "C" Q_DECL_EXPORT
QCameraFocusZone* C_QCameraFocusZoneList_front_0(void* this_ ) {
    // QCameraFocusZoneList_front_0()
    auto rv =  ((QCameraFocusZoneList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] const T & front()
extern "C" Q_DECL_EXPORT
QCameraFocusZone* C_QCameraFocusZoneList_front_1(void* this_ ) {
    // QCameraFocusZoneList_front_1()
    auto rv =  ((QCameraFocusZoneList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] T & back()
extern "C" Q_DECL_EXPORT
QCameraFocusZone* C_QCameraFocusZoneList_back_0(void* this_ ) {
    // QCameraFocusZoneList_back_0()
    auto rv =  ((QCameraFocusZoneList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-3] const T & back()
extern "C" Q_DECL_EXPORT
QCameraFocusZone* C_QCameraFocusZoneList_back_1(void* this_ ) {
    // QCameraFocusZoneList_back_1()
    auto rv =  ((QCameraFocusZoneList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-2] void pop_front()
extern "C" Q_DECL_EXPORT
void C_QCameraFocusZoneList_pop_front_0(void* this_ ) {
    // QCameraFocusZoneList_pop_front_0()
     ((QCameraFocusZoneList*)this_)->pop_front();
}

// [-2] void pop_back()
extern "C" Q_DECL_EXPORT
void C_QCameraFocusZoneList_pop_back_0(void* this_ ) {
    // QCameraFocusZoneList_pop_back_0()
     ((QCameraFocusZoneList*)this_)->pop_back();
}

// [1] bool empty()
extern "C" Q_DECL_EXPORT
bool C_QCameraFocusZoneList_empty_0(void* this_ ) {
    // QCameraFocusZoneList_empty_0()
    auto rv =  ((QCameraFocusZoneList*)this_)->empty();
    return rv;
}

// [-3] QList<T> & operator+=(const QList<T> &)
extern "C" Q_DECL_EXPORT
QCameraFocusZoneList* C_QCameraFocusZoneList_operator_add_equal_0(void* this_ , QCameraFocusZoneList* l) {
    // QCameraFocusZoneList_operator_add_equal_0()
    auto rv =  ((QCameraFocusZoneList*)this_)->operator+=(*l);
    return (QCameraFocusZoneList*)this_;
}

// [-3] QList<T> operator+(const QList<T> &)
extern "C" Q_DECL_EXPORT
QCameraFocusZoneList* C_QCameraFocusZoneList_operator_add_0(void* this_ , QCameraFocusZoneList* l) {
    // QCameraFocusZoneList_operator_add_0()
    auto rv =  ((QCameraFocusZoneList*)this_)->operator+(*l);
    return (QCameraFocusZoneList*)this_;
}

// [-3] QList<T> & operator+=(const T &)
extern "C" Q_DECL_EXPORT
QCameraFocusZoneList* C_QCameraFocusZoneList_operator_add_equal_1(void* this_ , QCameraFocusZone* t) {
    // QCameraFocusZoneList_operator_add_equal_1()
    auto rv =  ((QCameraFocusZoneList*)this_)->operator+=(*t);
    return (QCameraFocusZoneList*)this_;
}

// [-3] QList<T> & operator<<(const T &)
extern "C" Q_DECL_EXPORT
QCameraFocusZoneList* C_QCameraFocusZoneList_operator_left_shift_0(void* this_ , QCameraFocusZone* t) {
    // QCameraFocusZoneList_operator_left_shift_0()
    auto rv =  ((QCameraFocusZoneList*)this_)->operator<<(*t);
    return (QCameraFocusZoneList*)this_;
}

// [-3] QList<T> & operator<<(const QList<T> &)
extern "C" Q_DECL_EXPORT
QCameraFocusZoneList* C_QCameraFocusZoneList_operator_left_shift_1(void* this_ , QCameraFocusZoneList* l) {
    // QCameraFocusZoneList_operator_left_shift_1()
    auto rv =  ((QCameraFocusZoneList*)this_)->operator<<(*l);
    return (QCameraFocusZoneList*)this_;
}

// [-3] QVector<T> toVector()
extern "C" Q_DECL_EXPORT
void C_QCameraFocusZoneList_toVector_0(void* this_ ) {
    // QCameraFocusZoneList_toVector_0()
    auto rv =  ((QCameraFocusZoneList*)this_)->toVector();
}

// [-3] std::list<T> toStdList()
extern "C" Q_DECL_EXPORT
void C_QCameraFocusZoneList_toStdList_0(void* this_ ) {
    // QCameraFocusZoneList_toStdList_0()
    auto rv =  ((QCameraFocusZoneList*)this_)->toStdList();
}

//  body block end
