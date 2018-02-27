
// /usr/include/qt/QtCore/qvariant.h
#ifndef protected
#define protected public
#endif
#include <qvariant.h>
#include <QtCore>
#include "callback_inherit.h"

//  header block end

//  body block begin
// [-3] QList<T> & operator=(const QList<T> &)
extern "C"
QVariantList* C_QVariantList_operator_equal_0(void* this_ , QVariantList* l) {
    // QVariantList_operator_equal_0()
    auto rv =  ((QVariantList*)this_)->operator=(*l);
    return (QVariantList*)this_;
}

// [-3] QList<T> & operator=(QList<T> &&)
extern "C"
QVariantList* C_QVariantList_operator_equal_1(void* this_ , QVariantList* other) {
    // QVariantList_operator_equal_1()
    auto rv =  ((QVariantList*)this_)->operator=(*other);
    return (QVariantList*)this_;
}

// [-2] void swap(QList<T> &)
extern "C"
void C_QVariantList_swap_0(void* this_ , QVariantList* other) {
    // QVariantList_swap_0()
     ((QVariantList*)this_)->swap(*other);
}

// [1] bool operator==(const QList<T> &)
extern "C"
bool C_QVariantList_operator_equal_equal_0(void* this_ , QVariantList* l) {
    // QVariantList_operator_equal_equal_0()
    auto rv =  ((QVariantList*)this_)->operator==(*l);
    return rv;
}

// [1] bool operator!=(const QList<T> &)
extern "C"
bool C_QVariantList_operator_not_equal_0(void* this_ , QVariantList* l) {
    // QVariantList_operator_not_equal_0()
    auto rv =  ((QVariantList*)this_)->operator!=(*l);
    return rv;
}

// [4] int size()
extern "C"
int C_QVariantList_size_0(void* this_ ) {
    // QVariantList_size_0()
    auto rv =  ((QVariantList*)this_)->size();
    return rv;
}

// [-2] void detach()
extern "C"
void C_QVariantList_detach_0(void* this_ ) {
    // QVariantList_detach_0()
     ((QVariantList*)this_)->detach();
}

// [-2] void detachShared()
extern "C"
void C_QVariantList_detachShared_0(void* this_ ) {
    // QVariantList_detachShared_0()
     ((QVariantList*)this_)->detachShared();
}

// [1] bool isDetached()
extern "C"
bool C_QVariantList_isDetached_0(void* this_ ) {
    // QVariantList_isDetached_0()
    auto rv =  ((QVariantList*)this_)->isDetached();
    return rv;
}

// [-2] void setSharable(_Bool)
extern "C"
void C_QVariantList_setSharable_0(void* this_ , bool sharable) {
    // QVariantList_setSharable_0()
     ((QVariantList*)this_)->setSharable(sharable);
}

// [1] bool isSharedWith(const QList<T> &)
extern "C"
bool C_QVariantList_isSharedWith_0(void* this_ , QVariantList* other) {
    // QVariantList_isSharedWith_0()
    auto rv =  ((QVariantList*)this_)->isSharedWith(*other);
    return rv;
}

// [1] bool isEmpty()
extern "C"
bool C_QVariantList_isEmpty_0(void* this_ ) {
    // QVariantList_isEmpty_0()
    auto rv =  ((QVariantList*)this_)->isEmpty();
    return rv;
}

// [-2] void clear()
extern "C"
void C_QVariantList_clear_0(void* this_ ) {
    // QVariantList_clear_0()
     ((QVariantList*)this_)->clear();
}

// [-3] const T & at(int)
extern "C"
QVariant* C_QVariantList_at_0(void* this_ , int i) {
    // QVariantList_at_0()
    auto rv =  ((QVariantList*)this_)->at(i);
    return new decltype(rv)(rv);
}

// [-3] const T & operator[](int)
extern "C"
QVariant* C_QVariantList_operator_get_index_0(void* this_ , int i) {
    // QVariantList_operator_get_index_0()
    auto rv =  ((QVariantList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-3] T & operator[](int)
extern "C"
QVariant* C_QVariantList_operator_get_index_1(void* this_ , int i) {
    // QVariantList_operator_get_index_1()
    auto rv =  ((QVariantList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-2] void reserve(int)
extern "C"
void C_QVariantList_reserve_0(void* this_ , int size) {
    // QVariantList_reserve_0()
     ((QVariantList*)this_)->reserve(size);
}

// [-2] void append(const T &)
extern "C"
void C_QVariantList_append_0(void* this_ , QVariant* t) {
    // QVariantList_append_0()
     ((QVariantList*)this_)->append(*t);
}

// [-2] void append(const QList<T> &)
extern "C"
void C_QVariantList_append_1(void* this_ , QVariantList* t) {
    // QVariantList_append_1()
     ((QVariantList*)this_)->append(*t);
}

// [-2] void prepend(const T &)
extern "C"
void C_QVariantList_prepend_0(void* this_ , QVariant* t) {
    // QVariantList_prepend_0()
     ((QVariantList*)this_)->prepend(*t);
}

// [-2] void insert(int, const T &)
extern "C"
void C_QVariantList_insert_0(void* this_ , int i, QVariant* t) {
    // QVariantList_insert_0()
     ((QVariantList*)this_)->insert(i, *t);
}

// [-2] void replace(int, const T &)
extern "C"
void C_QVariantList_replace_0(void* this_ , int i, QVariant* t) {
    // QVariantList_replace_0()
     ((QVariantList*)this_)->replace(i, *t);
}

// [-2] void removeAt(int)
extern "C"
void C_QVariantList_removeAt_0(void* this_ , int i) {
    // QVariantList_removeAt_0()
     ((QVariantList*)this_)->removeAt(i);
}

// [4] int removeAll(const T &)
extern "C"
int C_QVariantList_removeAll_0(void* this_ , QVariant* t) {
    // QVariantList_removeAll_0()
    auto rv =  ((QVariantList*)this_)->removeAll(*t);
    return rv;
}

// [1] bool removeOne(const T &)
extern "C"
bool C_QVariantList_removeOne_0(void* this_ , QVariant* t) {
    // QVariantList_removeOne_0()
    auto rv =  ((QVariantList*)this_)->removeOne(*t);
    return rv;
}

// [-3] T takeAt(int)
extern "C"
QVariant* C_QVariantList_takeAt_0(void* this_ , int i) {
    // QVariantList_takeAt_0()
    auto rv =  ((QVariantList*)this_)->takeAt(i);
    return new decltype(rv)(rv);
}

// [-3] T takeFirst()
extern "C"
QVariant* C_QVariantList_takeFirst_0(void* this_ ) {
    // QVariantList_takeFirst_0()
    auto rv =  ((QVariantList*)this_)->takeFirst();
    return new decltype(rv)(rv);
}

// [-3] T takeLast()
extern "C"
QVariant* C_QVariantList_takeLast_0(void* this_ ) {
    // QVariantList_takeLast_0()
    auto rv =  ((QVariantList*)this_)->takeLast();
    return new decltype(rv)(rv);
}

// [-2] void move(int, int)
extern "C"
void C_QVariantList_move_0(void* this_ , int from, int to) {
    // QVariantList_move_0()
     ((QVariantList*)this_)->move(from, to);
}

// [-2] void swap(int, int)
extern "C"
void C_QVariantList_swap_1(void* this_ , int i, int j) {
    // QVariantList_swap_1()
     ((QVariantList*)this_)->swap(i, j);
}

// [4] int indexOf(const T &, int)
extern "C"
int C_QVariantList_indexOf_0(void* this_ , QVariant* t, int from) {
    // QVariantList_indexOf_0()
    auto rv =  ((QVariantList*)this_)->indexOf(*t, from);
    return rv;
}

// [4] int lastIndexOf(const T &, int)
extern "C"
int C_QVariantList_lastIndexOf_0(void* this_ , QVariant* t, int from) {
    // QVariantList_lastIndexOf_0()
    auto rv =  ((QVariantList*)this_)->lastIndexOf(*t, from);
    return rv;
}

// [1] bool contains(const T &)
extern "C"
bool C_QVariantList_contains_0(void* this_ , QVariant* t) {
    // QVariantList_contains_0()
    auto rv =  ((QVariantList*)this_)->contains(*t);
    return rv;
}

// [4] int count(const T &)
extern "C"
int C_QVariantList_count_0(void* this_ , QVariant* t) {
    // QVariantList_count_0()
    auto rv =  ((QVariantList*)this_)->count(*t);
    return rv;
}

// [-3] QList::iterator begin()
extern "C"
QVariantList::iterator* C_QVariantList_begin_0(void* this_ ) {
    // QVariantList_begin_0()
    auto rv =  ((QVariantList*)this_)->begin();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator end()
extern "C"
QVariantList::iterator* C_QVariantList_end_0(void* this_ ) {
    // QVariantList_end_0()
    auto rv =  ((QVariantList*)this_)->end();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rbegin()
extern "C"
QVariantList::reverse_iterator* C_QVariantList_rbegin_0(void* this_ ) {
    // QVariantList_rbegin_0()
    auto rv =  ((QVariantList*)this_)->rbegin();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rend()
extern "C"
QVariantList::reverse_iterator* C_QVariantList_rend_0(void* this_ ) {
    // QVariantList_rend_0()
    auto rv =  ((QVariantList*)this_)->rend();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator insert(class QList::iterator, const T &)
extern "C"
QVariantList::iterator* C_QVariantList_insert_1(void* this_ , QVariantList::iterator* before, QVariant* t) {
    // QVariantList_insert_1()
    auto rv =  ((QVariantList*)this_)->insert(*before, *t);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(class QList::iterator)
extern "C"
QVariantList::iterator* C_QVariantList_erase_0(void* this_ , QVariantList::iterator* pos) {
    // QVariantList_erase_0()
    auto rv =  ((QVariantList*)this_)->erase(*pos);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(class QList::iterator, class QList::iterator)
extern "C"
QVariantList::iterator* C_QVariantList_erase_1(void* this_ , QVariantList::iterator* first, QVariantList::iterator* last) {
    // QVariantList_erase_1()
    auto rv =  ((QVariantList*)this_)->erase(*first, *last);
    return new decltype(rv)(rv);
}

// [4] int count()
extern "C"
int C_QVariantList_count_1(void* this_ ) {
    // QVariantList_count_1()
    auto rv =  ((QVariantList*)this_)->count();
    return rv;
}

// [4] int length()
extern "C"
int C_QVariantList_length_0(void* this_ ) {
    // QVariantList_length_0()
    auto rv =  ((QVariantList*)this_)->length();
    return rv;
}

// [-3] T & first()
extern "C"
QVariant* C_QVariantList_first_0(void* this_ ) {
    // QVariantList_first_0()
    auto rv =  ((QVariantList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] const T & constFirst()
extern "C"
QVariant* C_QVariantList_constFirst_0(void* this_ ) {
    // QVariantList_constFirst_0()
    auto rv =  ((QVariantList*)this_)->constFirst();
    return new decltype(rv)(rv);
}

// [-3] const T & first()
extern "C"
QVariant* C_QVariantList_first_1(void* this_ ) {
    // QVariantList_first_1()
    auto rv =  ((QVariantList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] T & last()
extern "C"
QVariant* C_QVariantList_last_0(void* this_ ) {
    // QVariantList_last_0()
    auto rv =  ((QVariantList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & last()
extern "C"
QVariant* C_QVariantList_last_1(void* this_ ) {
    // QVariantList_last_1()
    auto rv =  ((QVariantList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & constLast()
extern "C"
QVariant* C_QVariantList_constLast_0(void* this_ ) {
    // QVariantList_constLast_0()
    auto rv =  ((QVariantList*)this_)->constLast();
    return new decltype(rv)(rv);
}

// [-2] void removeFirst()
extern "C"
void C_QVariantList_removeFirst_0(void* this_ ) {
    // QVariantList_removeFirst_0()
     ((QVariantList*)this_)->removeFirst();
}

// [-2] void removeLast()
extern "C"
void C_QVariantList_removeLast_0(void* this_ ) {
    // QVariantList_removeLast_0()
     ((QVariantList*)this_)->removeLast();
}

// [1] bool startsWith(const T &)
extern "C"
bool C_QVariantList_startsWith_0(void* this_ , QVariant* t) {
    // QVariantList_startsWith_0()
    auto rv =  ((QVariantList*)this_)->startsWith(*t);
    return rv;
}

// [1] bool endsWith(const T &)
extern "C"
bool C_QVariantList_endsWith_0(void* this_ , QVariant* t) {
    // QVariantList_endsWith_0()
    auto rv =  ((QVariantList*)this_)->endsWith(*t);
    return rv;
}

// [-3] QList<T> mid(int, int)
extern "C"
QVariantList* C_QVariantList_mid_0(void* this_ , int pos, int length) {
    // QVariantList_mid_0()
    auto rv =  ((QVariantList*)this_)->mid(pos, length);
    return (QVariantList*)this_;
}

// [-3] T value(int)
extern "C"
QVariant* C_QVariantList_value_0(void* this_ , int i) {
    // QVariantList_value_0()
    auto rv =  ((QVariantList*)this_)->value(i);
    return new decltype(rv)(rv);
}

// [-3] T value(int, const T &)
extern "C"
QVariant* C_QVariantList_value_1(void* this_ , int i, QVariant* defaultValue) {
    // QVariantList_value_1()
    auto rv =  ((QVariantList*)this_)->value(i, *defaultValue);
    return new decltype(rv)(rv);
}

// [-2] void push_back(const T &)
extern "C"
void C_QVariantList_push_back_0(void* this_ , QVariant* t) {
    // QVariantList_push_back_0()
     ((QVariantList*)this_)->push_back(*t);
}

// [-2] void push_front(const T &)
extern "C"
void C_QVariantList_push_front_0(void* this_ , QVariant* t) {
    // QVariantList_push_front_0()
     ((QVariantList*)this_)->push_front(*t);
}

// [-3] T & front()
extern "C"
QVariant* C_QVariantList_front_0(void* this_ ) {
    // QVariantList_front_0()
    auto rv =  ((QVariantList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] const T & front()
extern "C"
QVariant* C_QVariantList_front_1(void* this_ ) {
    // QVariantList_front_1()
    auto rv =  ((QVariantList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] T & back()
extern "C"
QVariant* C_QVariantList_back_0(void* this_ ) {
    // QVariantList_back_0()
    auto rv =  ((QVariantList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-3] const T & back()
extern "C"
QVariant* C_QVariantList_back_1(void* this_ ) {
    // QVariantList_back_1()
    auto rv =  ((QVariantList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-2] void pop_front()
extern "C"
void C_QVariantList_pop_front_0(void* this_ ) {
    // QVariantList_pop_front_0()
     ((QVariantList*)this_)->pop_front();
}

// [-2] void pop_back()
extern "C"
void C_QVariantList_pop_back_0(void* this_ ) {
    // QVariantList_pop_back_0()
     ((QVariantList*)this_)->pop_back();
}

// [1] bool empty()
extern "C"
bool C_QVariantList_empty_0(void* this_ ) {
    // QVariantList_empty_0()
    auto rv =  ((QVariantList*)this_)->empty();
    return rv;
}

// [-3] QList<T> & operator+=(const QList<T> &)
extern "C"
QVariantList* C_QVariantList_operator_add_equal_0(void* this_ , QVariantList* l) {
    // QVariantList_operator_add_equal_0()
    auto rv =  ((QVariantList*)this_)->operator+=(*l);
    return (QVariantList*)this_;
}

// [-3] QList<T> operator+(const QList<T> &)
extern "C"
QVariantList* C_QVariantList_operator_add_0(void* this_ , QVariantList* l) {
    // QVariantList_operator_add_0()
    auto rv =  ((QVariantList*)this_)->operator+(*l);
    return (QVariantList*)this_;
}

// [-3] QList<T> & operator+=(const T &)
extern "C"
QVariantList* C_QVariantList_operator_add_equal_1(void* this_ , QVariant* t) {
    // QVariantList_operator_add_equal_1()
    auto rv =  ((QVariantList*)this_)->operator+=(*t);
    return (QVariantList*)this_;
}

// [-3] QList<T> & operator<<(const T &)
extern "C"
QVariantList* C_QVariantList_operator_left_shift_0(void* this_ , QVariant* t) {
    // QVariantList_operator_left_shift_0()
    auto rv =  ((QVariantList*)this_)->operator<<(*t);
    return (QVariantList*)this_;
}

// [-3] QList<T> & operator<<(const QList<T> &)
extern "C"
QVariantList* C_QVariantList_operator_left_shift_1(void* this_ , QVariantList* l) {
    // QVariantList_operator_left_shift_1()
    auto rv =  ((QVariantList*)this_)->operator<<(*l);
    return (QVariantList*)this_;
}

// [-3] QVector<T> toVector()
extern "C"
void C_QVariantList_toVector_0(void* this_ ) {
    // QVariantList_toVector_0()
    auto rv =  ((QVariantList*)this_)->toVector();
}

// [-3] std::list<T> toStdList()
extern "C"
void C_QVariantList_toStdList_0(void* this_ ) {
    // QVariantList_toStdList_0()
    auto rv =  ((QVariantList*)this_)->toStdList();
}

//  body block end
