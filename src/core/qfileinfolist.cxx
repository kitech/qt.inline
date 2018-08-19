
// /usr/include/qt/QtCore/qfileinfo.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qfileinfo.h>
#include <QtCore>
#include "callback_inherit.h"

#ifndef QFileInfoList
#ifndef QFILEINFOLIST_H
typedef QList<QFileInfo> QFileInfoList;
#endif
#endif
//  header block end

//  body block begin
// [-3] QList<T> & operator=(const QList<T> &)
extern "C" Q_DECL_EXPORT
QFileInfoList* C_QFileInfoList_operator_equal_0(void* this_ , QFileInfoList* l) {
    // QFileInfoList_operator_equal_0()
    auto rv =  ((QFileInfoList*)this_)->operator=(*l);
    return (QFileInfoList*)this_;
}

// [-3] QList<T> & operator=(QList<T> &&)
extern "C" Q_DECL_EXPORT
QFileInfoList* C_QFileInfoList_operator_equal_1(void* this_ , QFileInfoList* other) {
    // QFileInfoList_operator_equal_1()
    auto rv =  ((QFileInfoList*)this_)->operator=(*other);
    return (QFileInfoList*)this_;
}

// [-2] void swap(QList<T> &)
extern "C" Q_DECL_EXPORT
void C_QFileInfoList_swap_0(void* this_ , QFileInfoList* other) {
    // QFileInfoList_swap_0()
     ((QFileInfoList*)this_)->swap(*other);
}

// [1] bool operator==(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QFileInfoList_operator_equal_equal_0(void* this_ , QFileInfoList* l) {
    // QFileInfoList_operator_equal_equal_0()
    auto rv =  ((QFileInfoList*)this_)->operator==(*l);
    return rv;
}

// [1] bool operator!=(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QFileInfoList_operator_not_equal_0(void* this_ , QFileInfoList* l) {
    // QFileInfoList_operator_not_equal_0()
    auto rv =  ((QFileInfoList*)this_)->operator!=(*l);
    return rv;
}

// [4] int size()
extern "C" Q_DECL_EXPORT
int C_QFileInfoList_size_0(void* this_ ) {
    // QFileInfoList_size_0()
    auto rv =  ((QFileInfoList*)this_)->size();
    return rv;
}

// [-2] void detach()
extern "C" Q_DECL_EXPORT
void C_QFileInfoList_detach_0(void* this_ ) {
    // QFileInfoList_detach_0()
     ((QFileInfoList*)this_)->detach();
}

// [-2] void detachShared()
extern "C" Q_DECL_EXPORT
void C_QFileInfoList_detachShared_0(void* this_ ) {
    // QFileInfoList_detachShared_0()
     ((QFileInfoList*)this_)->detachShared();
}

// [1] bool isDetached()
extern "C" Q_DECL_EXPORT
bool C_QFileInfoList_isDetached_0(void* this_ ) {
    // QFileInfoList_isDetached_0()
    auto rv =  ((QFileInfoList*)this_)->isDetached();
    return rv;
}

// [-2] void setSharable(bool)
extern "C" Q_DECL_EXPORT
void C_QFileInfoList_setSharable_0(void* this_ , bool sharable) {
    // QFileInfoList_setSharable_0()
     ((QFileInfoList*)this_)->setSharable(sharable);
}

// [1] bool isSharedWith(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QFileInfoList_isSharedWith_0(void* this_ , QFileInfoList* other) {
    // QFileInfoList_isSharedWith_0()
    auto rv =  ((QFileInfoList*)this_)->isSharedWith(*other);
    return rv;
}

// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_QFileInfoList_isEmpty_0(void* this_ ) {
    // QFileInfoList_isEmpty_0()
    auto rv =  ((QFileInfoList*)this_)->isEmpty();
    return rv;
}

// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_QFileInfoList_clear_0(void* this_ ) {
    // QFileInfoList_clear_0()
     ((QFileInfoList*)this_)->clear();
}

// [-3] const T & at(int)
extern "C" Q_DECL_EXPORT
QFileInfo* C_QFileInfoList_at_0(void* this_ , int i) {
    // QFileInfoList_at_0()
    auto rv =  ((QFileInfoList*)this_)->at(i);
    return new decltype(rv)(rv);
}

// [-3] const T & operator[](int)
extern "C" Q_DECL_EXPORT
QFileInfo* C_QFileInfoList_operator_get_index_0(void* this_ , int i) {
    // QFileInfoList_operator_get_index_0()
    auto rv =  ((QFileInfoList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-3] T & operator[](int)
extern "C" Q_DECL_EXPORT
QFileInfo* C_QFileInfoList_operator_get_index_1(void* this_ , int i) {
    // QFileInfoList_operator_get_index_1()
    auto rv =  ((QFileInfoList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-2] void reserve(int)
extern "C" Q_DECL_EXPORT
void C_QFileInfoList_reserve_0(void* this_ , int size) {
    // QFileInfoList_reserve_0()
     ((QFileInfoList*)this_)->reserve(size);
}

// [-2] void append(const T &)
extern "C" Q_DECL_EXPORT
void C_QFileInfoList_append_0(void* this_ , QFileInfo* t) {
    // QFileInfoList_append_0()
     ((QFileInfoList*)this_)->append(*t);
}

// [-2] void append(const QList<T> &)
extern "C" Q_DECL_EXPORT
void C_QFileInfoList_append_1(void* this_ , QFileInfoList* t) {
    // QFileInfoList_append_1()
     ((QFileInfoList*)this_)->append(*t);
}

// [-2] void prepend(const T &)
extern "C" Q_DECL_EXPORT
void C_QFileInfoList_prepend_0(void* this_ , QFileInfo* t) {
    // QFileInfoList_prepend_0()
     ((QFileInfoList*)this_)->prepend(*t);
}

// [-2] void insert(int, const T &)
extern "C" Q_DECL_EXPORT
void C_QFileInfoList_insert_0(void* this_ , int i, QFileInfo* t) {
    // QFileInfoList_insert_0()
     ((QFileInfoList*)this_)->insert(i, *t);
}

// [-2] void replace(int, const T &)
extern "C" Q_DECL_EXPORT
void C_QFileInfoList_replace_0(void* this_ , int i, QFileInfo* t) {
    // QFileInfoList_replace_0()
     ((QFileInfoList*)this_)->replace(i, *t);
}

// [-2] void removeAt(int)
extern "C" Q_DECL_EXPORT
void C_QFileInfoList_removeAt_0(void* this_ , int i) {
    // QFileInfoList_removeAt_0()
     ((QFileInfoList*)this_)->removeAt(i);
}

// [4] int removeAll(const T &)
extern "C" Q_DECL_EXPORT
int C_QFileInfoList_removeAll_0(void* this_ , QFileInfo* t) {
    // QFileInfoList_removeAll_0()
    auto rv =  ((QFileInfoList*)this_)->removeAll(*t);
    return rv;
}

// [1] bool removeOne(const T &)
extern "C" Q_DECL_EXPORT
bool C_QFileInfoList_removeOne_0(void* this_ , QFileInfo* t) {
    // QFileInfoList_removeOne_0()
    auto rv =  ((QFileInfoList*)this_)->removeOne(*t);
    return rv;
}

// [-3] T takeAt(int)
extern "C" Q_DECL_EXPORT
QFileInfo* C_QFileInfoList_takeAt_0(void* this_ , int i) {
    // QFileInfoList_takeAt_0()
    auto rv =  ((QFileInfoList*)this_)->takeAt(i);
    return new decltype(rv)(rv);
}

// [-3] T takeFirst()
extern "C" Q_DECL_EXPORT
QFileInfo* C_QFileInfoList_takeFirst_0(void* this_ ) {
    // QFileInfoList_takeFirst_0()
    auto rv =  ((QFileInfoList*)this_)->takeFirst();
    return new decltype(rv)(rv);
}

// [-3] T takeLast()
extern "C" Q_DECL_EXPORT
QFileInfo* C_QFileInfoList_takeLast_0(void* this_ ) {
    // QFileInfoList_takeLast_0()
    auto rv =  ((QFileInfoList*)this_)->takeLast();
    return new decltype(rv)(rv);
}

// [-2] void move(int, int)
extern "C" Q_DECL_EXPORT
void C_QFileInfoList_move_0(void* this_ , int from, int to) {
    // QFileInfoList_move_0()
     ((QFileInfoList*)this_)->move(from, to);
}

// [-2] void swap(int, int)
extern "C" Q_DECL_EXPORT
void C_QFileInfoList_swap_1(void* this_ , int i, int j) {
    // QFileInfoList_swap_1()
     ((QFileInfoList*)this_)->swap(i, j);
}

// [4] int indexOf(const T &, int)
extern "C" Q_DECL_EXPORT
int C_QFileInfoList_indexOf_0(void* this_ , QFileInfo* t, int from) {
    // QFileInfoList_indexOf_0()
    auto rv =  ((QFileInfoList*)this_)->indexOf(*t, from);
    return rv;
}

// [4] int lastIndexOf(const T &, int)
extern "C" Q_DECL_EXPORT
int C_QFileInfoList_lastIndexOf_0(void* this_ , QFileInfo* t, int from) {
    // QFileInfoList_lastIndexOf_0()
    auto rv =  ((QFileInfoList*)this_)->lastIndexOf(*t, from);
    return rv;
}

// [1] bool contains(const T &)
extern "C" Q_DECL_EXPORT
bool C_QFileInfoList_contains_0(void* this_ , QFileInfo* t) {
    // QFileInfoList_contains_0()
    auto rv =  ((QFileInfoList*)this_)->contains(*t);
    return rv;
}

// [4] int count(const T &)
extern "C" Q_DECL_EXPORT
int C_QFileInfoList_count_0(void* this_ , QFileInfo* t) {
    // QFileInfoList_count_0()
    auto rv =  ((QFileInfoList*)this_)->count(*t);
    return rv;
}

// [-3] QList::iterator begin()
extern "C" Q_DECL_EXPORT
QFileInfoList::iterator* C_QFileInfoList_begin_0(void* this_ ) {
    // QFileInfoList_begin_0()
    auto rv =  ((QFileInfoList*)this_)->begin();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator end()
extern "C" Q_DECL_EXPORT
QFileInfoList::iterator* C_QFileInfoList_end_0(void* this_ ) {
    // QFileInfoList_end_0()
    auto rv =  ((QFileInfoList*)this_)->end();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rbegin()
extern "C" Q_DECL_EXPORT
QFileInfoList::reverse_iterator* C_QFileInfoList_rbegin_0(void* this_ ) {
    // QFileInfoList_rbegin_0()
    auto rv =  ((QFileInfoList*)this_)->rbegin();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rend()
extern "C" Q_DECL_EXPORT
QFileInfoList::reverse_iterator* C_QFileInfoList_rend_0(void* this_ ) {
    // QFileInfoList_rend_0()
    auto rv =  ((QFileInfoList*)this_)->rend();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator insert(QList::iterator, const T &)
extern "C" Q_DECL_EXPORT
QFileInfoList::iterator* C_QFileInfoList_insert_1(void* this_ , QFileInfoList::iterator* before, QFileInfo* t) {
    // QFileInfoList_insert_1()
    auto rv =  ((QFileInfoList*)this_)->insert(*before, *t);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator)
extern "C" Q_DECL_EXPORT
QFileInfoList::iterator* C_QFileInfoList_erase_0(void* this_ , QFileInfoList::iterator* pos) {
    // QFileInfoList_erase_0()
    auto rv =  ((QFileInfoList*)this_)->erase(*pos);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator, QList::iterator)
extern "C" Q_DECL_EXPORT
QFileInfoList::iterator* C_QFileInfoList_erase_1(void* this_ , QFileInfoList::iterator* first, QFileInfoList::iterator* last) {
    // QFileInfoList_erase_1()
    auto rv =  ((QFileInfoList*)this_)->erase(*first, *last);
    return new decltype(rv)(rv);
}

// [4] int count()
extern "C" Q_DECL_EXPORT
int C_QFileInfoList_count_1(void* this_ ) {
    // QFileInfoList_count_1()
    auto rv =  ((QFileInfoList*)this_)->count();
    return rv;
}

// [4] int length()
extern "C" Q_DECL_EXPORT
int C_QFileInfoList_length_0(void* this_ ) {
    // QFileInfoList_length_0()
    auto rv =  ((QFileInfoList*)this_)->length();
    return rv;
}

// [-3] T & first()
extern "C" Q_DECL_EXPORT
QFileInfo* C_QFileInfoList_first_0(void* this_ ) {
    // QFileInfoList_first_0()
    auto rv =  ((QFileInfoList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] const T & constFirst()
extern "C" Q_DECL_EXPORT
QFileInfo* C_QFileInfoList_constFirst_0(void* this_ ) {
    // QFileInfoList_constFirst_0()
    auto rv =  ((QFileInfoList*)this_)->constFirst();
    return new decltype(rv)(rv);
}

// [-3] const T & first()
extern "C" Q_DECL_EXPORT
QFileInfo* C_QFileInfoList_first_1(void* this_ ) {
    // QFileInfoList_first_1()
    auto rv =  ((QFileInfoList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] T & last()
extern "C" Q_DECL_EXPORT
QFileInfo* C_QFileInfoList_last_0(void* this_ ) {
    // QFileInfoList_last_0()
    auto rv =  ((QFileInfoList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & last()
extern "C" Q_DECL_EXPORT
QFileInfo* C_QFileInfoList_last_1(void* this_ ) {
    // QFileInfoList_last_1()
    auto rv =  ((QFileInfoList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & constLast()
extern "C" Q_DECL_EXPORT
QFileInfo* C_QFileInfoList_constLast_0(void* this_ ) {
    // QFileInfoList_constLast_0()
    auto rv =  ((QFileInfoList*)this_)->constLast();
    return new decltype(rv)(rv);
}

// [-2] void removeFirst()
extern "C" Q_DECL_EXPORT
void C_QFileInfoList_removeFirst_0(void* this_ ) {
    // QFileInfoList_removeFirst_0()
     ((QFileInfoList*)this_)->removeFirst();
}

// [-2] void removeLast()
extern "C" Q_DECL_EXPORT
void C_QFileInfoList_removeLast_0(void* this_ ) {
    // QFileInfoList_removeLast_0()
     ((QFileInfoList*)this_)->removeLast();
}

// [1] bool startsWith(const T &)
extern "C" Q_DECL_EXPORT
bool C_QFileInfoList_startsWith_0(void* this_ , QFileInfo* t) {
    // QFileInfoList_startsWith_0()
    auto rv =  ((QFileInfoList*)this_)->startsWith(*t);
    return rv;
}

// [1] bool endsWith(const T &)
extern "C" Q_DECL_EXPORT
bool C_QFileInfoList_endsWith_0(void* this_ , QFileInfo* t) {
    // QFileInfoList_endsWith_0()
    auto rv =  ((QFileInfoList*)this_)->endsWith(*t);
    return rv;
}

// [-3] QList<T> mid(int, int)
extern "C" Q_DECL_EXPORT
QFileInfoList* C_QFileInfoList_mid_0(void* this_ , int pos, int length) {
    // QFileInfoList_mid_0()
    auto rv =  ((QFileInfoList*)this_)->mid(pos, length);
    return (QFileInfoList*)this_;
}

// [-3] T value(int)
extern "C" Q_DECL_EXPORT
QFileInfo* C_QFileInfoList_value_0(void* this_ , int i) {
    // QFileInfoList_value_0()
    auto rv =  ((QFileInfoList*)this_)->value(i);
    return new decltype(rv)(rv);
}

// [-3] T value(int, const T &)
extern "C" Q_DECL_EXPORT
QFileInfo* C_QFileInfoList_value_1(void* this_ , int i, QFileInfo* defaultValue) {
    // QFileInfoList_value_1()
    auto rv =  ((QFileInfoList*)this_)->value(i, *defaultValue);
    return new decltype(rv)(rv);
}

// [-2] void push_back(const T &)
extern "C" Q_DECL_EXPORT
void C_QFileInfoList_push_back_0(void* this_ , QFileInfo* t) {
    // QFileInfoList_push_back_0()
     ((QFileInfoList*)this_)->push_back(*t);
}

// [-2] void push_front(const T &)
extern "C" Q_DECL_EXPORT
void C_QFileInfoList_push_front_0(void* this_ , QFileInfo* t) {
    // QFileInfoList_push_front_0()
     ((QFileInfoList*)this_)->push_front(*t);
}

// [-3] T & front()
extern "C" Q_DECL_EXPORT
QFileInfo* C_QFileInfoList_front_0(void* this_ ) {
    // QFileInfoList_front_0()
    auto rv =  ((QFileInfoList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] const T & front()
extern "C" Q_DECL_EXPORT
QFileInfo* C_QFileInfoList_front_1(void* this_ ) {
    // QFileInfoList_front_1()
    auto rv =  ((QFileInfoList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] T & back()
extern "C" Q_DECL_EXPORT
QFileInfo* C_QFileInfoList_back_0(void* this_ ) {
    // QFileInfoList_back_0()
    auto rv =  ((QFileInfoList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-3] const T & back()
extern "C" Q_DECL_EXPORT
QFileInfo* C_QFileInfoList_back_1(void* this_ ) {
    // QFileInfoList_back_1()
    auto rv =  ((QFileInfoList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-2] void pop_front()
extern "C" Q_DECL_EXPORT
void C_QFileInfoList_pop_front_0(void* this_ ) {
    // QFileInfoList_pop_front_0()
     ((QFileInfoList*)this_)->pop_front();
}

// [-2] void pop_back()
extern "C" Q_DECL_EXPORT
void C_QFileInfoList_pop_back_0(void* this_ ) {
    // QFileInfoList_pop_back_0()
     ((QFileInfoList*)this_)->pop_back();
}

// [1] bool empty()
extern "C" Q_DECL_EXPORT
bool C_QFileInfoList_empty_0(void* this_ ) {
    // QFileInfoList_empty_0()
    auto rv =  ((QFileInfoList*)this_)->empty();
    return rv;
}

// [-3] QList<T> & operator+=(const QList<T> &)
extern "C" Q_DECL_EXPORT
QFileInfoList* C_QFileInfoList_operator_add_equal_0(void* this_ , QFileInfoList* l) {
    // QFileInfoList_operator_add_equal_0()
    auto rv =  ((QFileInfoList*)this_)->operator+=(*l);
    return (QFileInfoList*)this_;
}

// [-3] QList<T> operator+(const QList<T> &)
extern "C" Q_DECL_EXPORT
QFileInfoList* C_QFileInfoList_operator_add_0(void* this_ , QFileInfoList* l) {
    // QFileInfoList_operator_add_0()
    auto rv =  ((QFileInfoList*)this_)->operator+(*l);
    return (QFileInfoList*)this_;
}

// [-3] QList<T> & operator+=(const T &)
extern "C" Q_DECL_EXPORT
QFileInfoList* C_QFileInfoList_operator_add_equal_1(void* this_ , QFileInfo* t) {
    // QFileInfoList_operator_add_equal_1()
    auto rv =  ((QFileInfoList*)this_)->operator+=(*t);
    return (QFileInfoList*)this_;
}

// [-3] QList<T> & operator<<(const T &)
extern "C" Q_DECL_EXPORT
QFileInfoList* C_QFileInfoList_operator_left_shift_0(void* this_ , QFileInfo* t) {
    // QFileInfoList_operator_left_shift_0()
    auto rv =  ((QFileInfoList*)this_)->operator<<(*t);
    return (QFileInfoList*)this_;
}

// [-3] QList<T> & operator<<(const QList<T> &)
extern "C" Q_DECL_EXPORT
QFileInfoList* C_QFileInfoList_operator_left_shift_1(void* this_ , QFileInfoList* l) {
    // QFileInfoList_operator_left_shift_1()
    auto rv =  ((QFileInfoList*)this_)->operator<<(*l);
    return (QFileInfoList*)this_;
}

// [-3] QVector<T> toVector()
extern "C" Q_DECL_EXPORT
void C_QFileInfoList_toVector_0(void* this_ ) {
    // QFileInfoList_toVector_0()
    auto rv =  ((QFileInfoList*)this_)->toVector();
}

// [-3] std::list<T> toStdList()
extern "C" Q_DECL_EXPORT
void C_QFileInfoList_toStdList_0(void* this_ ) {
    // QFileInfoList_toStdList_0()
    auto rv =  ((QFileInfoList*)this_)->toStdList();
}

//  body block end
