
// /usr/include/qt/QtMultimedia/qcamerainfo.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcamerainfo.h>
#include <QtMultimedia>
#include "callback_inherit.h"

#ifndef QCameraInfoList
#ifndef QCAMERAINFOLIST_H
typedef QList<QCameraInfo> QCameraInfoList;
#endif
#endif
//  header block end

//  body block begin
// [-3] QList<T> & operator=(const QList<T> &)
extern "C" Q_DECL_EXPORT
QCameraInfoList* C_QCameraInfoList_operator_equal_0(void* this_ , QCameraInfoList* l) {
    // QCameraInfoList_operator_equal_0()
    auto rv =  ((QCameraInfoList*)this_)->operator=(*l);
    return (QCameraInfoList*)this_;
}

// [-3] QList<T> & operator=(QList<T> &&)
extern "C" Q_DECL_EXPORT
QCameraInfoList* C_QCameraInfoList_operator_equal_1(void* this_ , QCameraInfoList* other) {
    // QCameraInfoList_operator_equal_1()
    auto rv =  ((QCameraInfoList*)this_)->operator=(*other);
    return (QCameraInfoList*)this_;
}

// [-2] void swap(QList<T> &)
extern "C" Q_DECL_EXPORT
void C_QCameraInfoList_swap_0(void* this_ , QCameraInfoList* other) {
    // QCameraInfoList_swap_0()
     ((QCameraInfoList*)this_)->swap(*other);
}

// [1] bool operator==(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QCameraInfoList_operator_equal_equal_0(void* this_ , QCameraInfoList* l) {
    // QCameraInfoList_operator_equal_equal_0()
    auto rv =  ((QCameraInfoList*)this_)->operator==(*l);
    return rv;
}

// [1] bool operator!=(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QCameraInfoList_operator_not_equal_0(void* this_ , QCameraInfoList* l) {
    // QCameraInfoList_operator_not_equal_0()
    auto rv =  ((QCameraInfoList*)this_)->operator!=(*l);
    return rv;
}

// [4] int size()
extern "C" Q_DECL_EXPORT
int C_QCameraInfoList_size_0(void* this_ ) {
    // QCameraInfoList_size_0()
    auto rv =  ((QCameraInfoList*)this_)->size();
    return rv;
}

// [-2] void detach()
extern "C" Q_DECL_EXPORT
void C_QCameraInfoList_detach_0(void* this_ ) {
    // QCameraInfoList_detach_0()
     ((QCameraInfoList*)this_)->detach();
}

// [-2] void detachShared()
extern "C" Q_DECL_EXPORT
void C_QCameraInfoList_detachShared_0(void* this_ ) {
    // QCameraInfoList_detachShared_0()
     ((QCameraInfoList*)this_)->detachShared();
}

// [1] bool isDetached()
extern "C" Q_DECL_EXPORT
bool C_QCameraInfoList_isDetached_0(void* this_ ) {
    // QCameraInfoList_isDetached_0()
    auto rv =  ((QCameraInfoList*)this_)->isDetached();
    return rv;
}

// [-2] void setSharable(bool)
extern "C" Q_DECL_EXPORT
void C_QCameraInfoList_setSharable_0(void* this_ , bool sharable) {
    // QCameraInfoList_setSharable_0()
     ((QCameraInfoList*)this_)->setSharable(sharable);
}

// [1] bool isSharedWith(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QCameraInfoList_isSharedWith_0(void* this_ , QCameraInfoList* other) {
    // QCameraInfoList_isSharedWith_0()
    auto rv =  ((QCameraInfoList*)this_)->isSharedWith(*other);
    return rv;
}

// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_QCameraInfoList_isEmpty_0(void* this_ ) {
    // QCameraInfoList_isEmpty_0()
    auto rv =  ((QCameraInfoList*)this_)->isEmpty();
    return rv;
}

// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_QCameraInfoList_clear_0(void* this_ ) {
    // QCameraInfoList_clear_0()
     ((QCameraInfoList*)this_)->clear();
}

// [-3] const T & at(int)
extern "C" Q_DECL_EXPORT
QCameraInfo* C_QCameraInfoList_at_0(void* this_ , int i) {
    // QCameraInfoList_at_0()
    auto rv =  ((QCameraInfoList*)this_)->at(i);
    return new decltype(rv)(rv);
}

// [-3] const T & operator[](int)
extern "C" Q_DECL_EXPORT
QCameraInfo* C_QCameraInfoList_operator_get_index_0(void* this_ , int i) {
    // QCameraInfoList_operator_get_index_0()
    auto rv =  ((QCameraInfoList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-3] T & operator[](int)
extern "C" Q_DECL_EXPORT
QCameraInfo* C_QCameraInfoList_operator_get_index_1(void* this_ , int i) {
    // QCameraInfoList_operator_get_index_1()
    auto rv =  ((QCameraInfoList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-2] void reserve(int)
extern "C" Q_DECL_EXPORT
void C_QCameraInfoList_reserve_0(void* this_ , int size) {
    // QCameraInfoList_reserve_0()
     ((QCameraInfoList*)this_)->reserve(size);
}

// [-2] void append(const T &)
extern "C" Q_DECL_EXPORT
void C_QCameraInfoList_append_0(void* this_ , QCameraInfo* t) {
    // QCameraInfoList_append_0()
     ((QCameraInfoList*)this_)->append(*t);
}

// [-2] void append(const QList<T> &)
extern "C" Q_DECL_EXPORT
void C_QCameraInfoList_append_1(void* this_ , QCameraInfoList* t) {
    // QCameraInfoList_append_1()
     ((QCameraInfoList*)this_)->append(*t);
}

// [-2] void prepend(const T &)
extern "C" Q_DECL_EXPORT
void C_QCameraInfoList_prepend_0(void* this_ , QCameraInfo* t) {
    // QCameraInfoList_prepend_0()
     ((QCameraInfoList*)this_)->prepend(*t);
}

// [-2] void insert(int, const T &)
extern "C" Q_DECL_EXPORT
void C_QCameraInfoList_insert_0(void* this_ , int i, QCameraInfo* t) {
    // QCameraInfoList_insert_0()
     ((QCameraInfoList*)this_)->insert(i, *t);
}

// [-2] void replace(int, const T &)
extern "C" Q_DECL_EXPORT
void C_QCameraInfoList_replace_0(void* this_ , int i, QCameraInfo* t) {
    // QCameraInfoList_replace_0()
     ((QCameraInfoList*)this_)->replace(i, *t);
}

// [-2] void removeAt(int)
extern "C" Q_DECL_EXPORT
void C_QCameraInfoList_removeAt_0(void* this_ , int i) {
    // QCameraInfoList_removeAt_0()
     ((QCameraInfoList*)this_)->removeAt(i);
}

// [4] int removeAll(const T &)
extern "C" Q_DECL_EXPORT
int C_QCameraInfoList_removeAll_0(void* this_ , QCameraInfo* t) {
    // QCameraInfoList_removeAll_0()
    auto rv =  ((QCameraInfoList*)this_)->removeAll(*t);
    return rv;
}

// [1] bool removeOne(const T &)
extern "C" Q_DECL_EXPORT
bool C_QCameraInfoList_removeOne_0(void* this_ , QCameraInfo* t) {
    // QCameraInfoList_removeOne_0()
    auto rv =  ((QCameraInfoList*)this_)->removeOne(*t);
    return rv;
}

// [-3] T takeAt(int)
extern "C" Q_DECL_EXPORT
QCameraInfo* C_QCameraInfoList_takeAt_0(void* this_ , int i) {
    // QCameraInfoList_takeAt_0()
    auto rv =  ((QCameraInfoList*)this_)->takeAt(i);
    return new decltype(rv)(rv);
}

// [-3] T takeFirst()
extern "C" Q_DECL_EXPORT
QCameraInfo* C_QCameraInfoList_takeFirst_0(void* this_ ) {
    // QCameraInfoList_takeFirst_0()
    auto rv =  ((QCameraInfoList*)this_)->takeFirst();
    return new decltype(rv)(rv);
}

// [-3] T takeLast()
extern "C" Q_DECL_EXPORT
QCameraInfo* C_QCameraInfoList_takeLast_0(void* this_ ) {
    // QCameraInfoList_takeLast_0()
    auto rv =  ((QCameraInfoList*)this_)->takeLast();
    return new decltype(rv)(rv);
}

// [-2] void move(int, int)
extern "C" Q_DECL_EXPORT
void C_QCameraInfoList_move_0(void* this_ , int from, int to) {
    // QCameraInfoList_move_0()
     ((QCameraInfoList*)this_)->move(from, to);
}

// [-2] void swap(int, int)
extern "C" Q_DECL_EXPORT
void C_QCameraInfoList_swap_1(void* this_ , int i, int j) {
    // QCameraInfoList_swap_1()
     ((QCameraInfoList*)this_)->swap(i, j);
}

// [4] int indexOf(const T &, int)
extern "C" Q_DECL_EXPORT
int C_QCameraInfoList_indexOf_0(void* this_ , QCameraInfo* t, int from) {
    // QCameraInfoList_indexOf_0()
    auto rv =  ((QCameraInfoList*)this_)->indexOf(*t, from);
    return rv;
}

// [4] int lastIndexOf(const T &, int)
extern "C" Q_DECL_EXPORT
int C_QCameraInfoList_lastIndexOf_0(void* this_ , QCameraInfo* t, int from) {
    // QCameraInfoList_lastIndexOf_0()
    auto rv =  ((QCameraInfoList*)this_)->lastIndexOf(*t, from);
    return rv;
}

// [1] bool contains(const T &)
extern "C" Q_DECL_EXPORT
bool C_QCameraInfoList_contains_0(void* this_ , QCameraInfo* t) {
    // QCameraInfoList_contains_0()
    auto rv =  ((QCameraInfoList*)this_)->contains(*t);
    return rv;
}

// [4] int count(const T &)
extern "C" Q_DECL_EXPORT
int C_QCameraInfoList_count_0(void* this_ , QCameraInfo* t) {
    // QCameraInfoList_count_0()
    auto rv =  ((QCameraInfoList*)this_)->count(*t);
    return rv;
}

// [-3] QList::iterator begin()
extern "C" Q_DECL_EXPORT
QCameraInfoList::iterator* C_QCameraInfoList_begin_0(void* this_ ) {
    // QCameraInfoList_begin_0()
    auto rv =  ((QCameraInfoList*)this_)->begin();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator end()
extern "C" Q_DECL_EXPORT
QCameraInfoList::iterator* C_QCameraInfoList_end_0(void* this_ ) {
    // QCameraInfoList_end_0()
    auto rv =  ((QCameraInfoList*)this_)->end();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rbegin()
extern "C" Q_DECL_EXPORT
QCameraInfoList::reverse_iterator* C_QCameraInfoList_rbegin_0(void* this_ ) {
    // QCameraInfoList_rbegin_0()
    auto rv =  ((QCameraInfoList*)this_)->rbegin();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rend()
extern "C" Q_DECL_EXPORT
QCameraInfoList::reverse_iterator* C_QCameraInfoList_rend_0(void* this_ ) {
    // QCameraInfoList_rend_0()
    auto rv =  ((QCameraInfoList*)this_)->rend();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator insert(QList::iterator, const T &)
extern "C" Q_DECL_EXPORT
QCameraInfoList::iterator* C_QCameraInfoList_insert_1(void* this_ , QCameraInfoList::iterator* before, QCameraInfo* t) {
    // QCameraInfoList_insert_1()
    auto rv =  ((QCameraInfoList*)this_)->insert(*before, *t);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator)
extern "C" Q_DECL_EXPORT
QCameraInfoList::iterator* C_QCameraInfoList_erase_0(void* this_ , QCameraInfoList::iterator* pos) {
    // QCameraInfoList_erase_0()
    auto rv =  ((QCameraInfoList*)this_)->erase(*pos);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator, QList::iterator)
extern "C" Q_DECL_EXPORT
QCameraInfoList::iterator* C_QCameraInfoList_erase_1(void* this_ , QCameraInfoList::iterator* first, QCameraInfoList::iterator* last) {
    // QCameraInfoList_erase_1()
    auto rv =  ((QCameraInfoList*)this_)->erase(*first, *last);
    return new decltype(rv)(rv);
}

// [4] int count()
extern "C" Q_DECL_EXPORT
int C_QCameraInfoList_count_1(void* this_ ) {
    // QCameraInfoList_count_1()
    auto rv =  ((QCameraInfoList*)this_)->count();
    return rv;
}

// [4] int length()
extern "C" Q_DECL_EXPORT
int C_QCameraInfoList_length_0(void* this_ ) {
    // QCameraInfoList_length_0()
    auto rv =  ((QCameraInfoList*)this_)->length();
    return rv;
}

// [-3] T & first()
extern "C" Q_DECL_EXPORT
QCameraInfo* C_QCameraInfoList_first_0(void* this_ ) {
    // QCameraInfoList_first_0()
    auto rv =  ((QCameraInfoList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] const T & constFirst()
extern "C" Q_DECL_EXPORT
QCameraInfo* C_QCameraInfoList_constFirst_0(void* this_ ) {
    // QCameraInfoList_constFirst_0()
    auto rv =  ((QCameraInfoList*)this_)->constFirst();
    return new decltype(rv)(rv);
}

// [-3] const T & first()
extern "C" Q_DECL_EXPORT
QCameraInfo* C_QCameraInfoList_first_1(void* this_ ) {
    // QCameraInfoList_first_1()
    auto rv =  ((QCameraInfoList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] T & last()
extern "C" Q_DECL_EXPORT
QCameraInfo* C_QCameraInfoList_last_0(void* this_ ) {
    // QCameraInfoList_last_0()
    auto rv =  ((QCameraInfoList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & last()
extern "C" Q_DECL_EXPORT
QCameraInfo* C_QCameraInfoList_last_1(void* this_ ) {
    // QCameraInfoList_last_1()
    auto rv =  ((QCameraInfoList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & constLast()
extern "C" Q_DECL_EXPORT
QCameraInfo* C_QCameraInfoList_constLast_0(void* this_ ) {
    // QCameraInfoList_constLast_0()
    auto rv =  ((QCameraInfoList*)this_)->constLast();
    return new decltype(rv)(rv);
}

// [-2] void removeFirst()
extern "C" Q_DECL_EXPORT
void C_QCameraInfoList_removeFirst_0(void* this_ ) {
    // QCameraInfoList_removeFirst_0()
     ((QCameraInfoList*)this_)->removeFirst();
}

// [-2] void removeLast()
extern "C" Q_DECL_EXPORT
void C_QCameraInfoList_removeLast_0(void* this_ ) {
    // QCameraInfoList_removeLast_0()
     ((QCameraInfoList*)this_)->removeLast();
}

// [1] bool startsWith(const T &)
extern "C" Q_DECL_EXPORT
bool C_QCameraInfoList_startsWith_0(void* this_ , QCameraInfo* t) {
    // QCameraInfoList_startsWith_0()
    auto rv =  ((QCameraInfoList*)this_)->startsWith(*t);
    return rv;
}

// [1] bool endsWith(const T &)
extern "C" Q_DECL_EXPORT
bool C_QCameraInfoList_endsWith_0(void* this_ , QCameraInfo* t) {
    // QCameraInfoList_endsWith_0()
    auto rv =  ((QCameraInfoList*)this_)->endsWith(*t);
    return rv;
}

// [-3] QList<T> mid(int, int)
extern "C" Q_DECL_EXPORT
QCameraInfoList* C_QCameraInfoList_mid_0(void* this_ , int pos, int length) {
    // QCameraInfoList_mid_0()
    auto rv =  ((QCameraInfoList*)this_)->mid(pos, length);
    return (QCameraInfoList*)this_;
}

// [-3] T value(int)
extern "C" Q_DECL_EXPORT
QCameraInfo* C_QCameraInfoList_value_0(void* this_ , int i) {
    // QCameraInfoList_value_0()
    auto rv =  ((QCameraInfoList*)this_)->value(i);
    return new decltype(rv)(rv);
}

// [-3] T value(int, const T &)
extern "C" Q_DECL_EXPORT
QCameraInfo* C_QCameraInfoList_value_1(void* this_ , int i, QCameraInfo* defaultValue) {
    // QCameraInfoList_value_1()
    auto rv =  ((QCameraInfoList*)this_)->value(i, *defaultValue);
    return new decltype(rv)(rv);
}

// [-2] void push_back(const T &)
extern "C" Q_DECL_EXPORT
void C_QCameraInfoList_push_back_0(void* this_ , QCameraInfo* t) {
    // QCameraInfoList_push_back_0()
     ((QCameraInfoList*)this_)->push_back(*t);
}

// [-2] void push_front(const T &)
extern "C" Q_DECL_EXPORT
void C_QCameraInfoList_push_front_0(void* this_ , QCameraInfo* t) {
    // QCameraInfoList_push_front_0()
     ((QCameraInfoList*)this_)->push_front(*t);
}

// [-3] T & front()
extern "C" Q_DECL_EXPORT
QCameraInfo* C_QCameraInfoList_front_0(void* this_ ) {
    // QCameraInfoList_front_0()
    auto rv =  ((QCameraInfoList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] const T & front()
extern "C" Q_DECL_EXPORT
QCameraInfo* C_QCameraInfoList_front_1(void* this_ ) {
    // QCameraInfoList_front_1()
    auto rv =  ((QCameraInfoList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] T & back()
extern "C" Q_DECL_EXPORT
QCameraInfo* C_QCameraInfoList_back_0(void* this_ ) {
    // QCameraInfoList_back_0()
    auto rv =  ((QCameraInfoList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-3] const T & back()
extern "C" Q_DECL_EXPORT
QCameraInfo* C_QCameraInfoList_back_1(void* this_ ) {
    // QCameraInfoList_back_1()
    auto rv =  ((QCameraInfoList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-2] void pop_front()
extern "C" Q_DECL_EXPORT
void C_QCameraInfoList_pop_front_0(void* this_ ) {
    // QCameraInfoList_pop_front_0()
     ((QCameraInfoList*)this_)->pop_front();
}

// [-2] void pop_back()
extern "C" Q_DECL_EXPORT
void C_QCameraInfoList_pop_back_0(void* this_ ) {
    // QCameraInfoList_pop_back_0()
     ((QCameraInfoList*)this_)->pop_back();
}

// [1] bool empty()
extern "C" Q_DECL_EXPORT
bool C_QCameraInfoList_empty_0(void* this_ ) {
    // QCameraInfoList_empty_0()
    auto rv =  ((QCameraInfoList*)this_)->empty();
    return rv;
}

// [-3] QList<T> & operator+=(const QList<T> &)
extern "C" Q_DECL_EXPORT
QCameraInfoList* C_QCameraInfoList_operator_add_equal_0(void* this_ , QCameraInfoList* l) {
    // QCameraInfoList_operator_add_equal_0()
    auto rv =  ((QCameraInfoList*)this_)->operator+=(*l);
    return (QCameraInfoList*)this_;
}

// [-3] QList<T> operator+(const QList<T> &)
extern "C" Q_DECL_EXPORT
QCameraInfoList* C_QCameraInfoList_operator_add_0(void* this_ , QCameraInfoList* l) {
    // QCameraInfoList_operator_add_0()
    auto rv =  ((QCameraInfoList*)this_)->operator+(*l);
    return (QCameraInfoList*)this_;
}

// [-3] QList<T> & operator+=(const T &)
extern "C" Q_DECL_EXPORT
QCameraInfoList* C_QCameraInfoList_operator_add_equal_1(void* this_ , QCameraInfo* t) {
    // QCameraInfoList_operator_add_equal_1()
    auto rv =  ((QCameraInfoList*)this_)->operator+=(*t);
    return (QCameraInfoList*)this_;
}

// [-3] QList<T> & operator<<(const T &)
extern "C" Q_DECL_EXPORT
QCameraInfoList* C_QCameraInfoList_operator_left_shift_0(void* this_ , QCameraInfo* t) {
    // QCameraInfoList_operator_left_shift_0()
    auto rv =  ((QCameraInfoList*)this_)->operator<<(*t);
    return (QCameraInfoList*)this_;
}

// [-3] QList<T> & operator<<(const QList<T> &)
extern "C" Q_DECL_EXPORT
QCameraInfoList* C_QCameraInfoList_operator_left_shift_1(void* this_ , QCameraInfoList* l) {
    // QCameraInfoList_operator_left_shift_1()
    auto rv =  ((QCameraInfoList*)this_)->operator<<(*l);
    return (QCameraInfoList*)this_;
}

// [-3] QVector<T> toVector()
extern "C" Q_DECL_EXPORT
void C_QCameraInfoList_toVector_0(void* this_ ) {
    // QCameraInfoList_toVector_0()
    auto rv =  ((QCameraInfoList*)this_)->toVector();
}

// [-3] std::list<T> toStdList()
extern "C" Q_DECL_EXPORT
void C_QCameraInfoList_toStdList_0(void* this_ ) {
    // QCameraInfoList_toStdList_0()
    auto rv =  ((QCameraInfoList*)this_)->toStdList();
}

//  body block end
