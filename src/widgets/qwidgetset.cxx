
// /usr/include/qt/QtWidgets/qwidget.h
#include <qwidget.h>
#include <QtWidgets>
#include "callback_inherit.h"

//  header block end

//  body block begin
// [-2] void swap(QSet<T> &)
extern "C"
void C_QWidgetSet_swap_0(void* this_ , QWidgetSet* other) {
    // QWidgetSet_swap_0()
     ((QWidgetSet*)this_)->swap(*other);
}

// [1] bool operator==(const QSet<T> &)
extern "C"
bool C_QWidgetSet_operator_equal_equal_0(void* this_ , QWidgetSet* other) {
    // QWidgetSet_operator_equal_equal_0()
    auto rv =  ((QWidgetSet*)this_)->operator==(*other);
    return rv;
}

// [1] bool operator!=(const QSet<T> &)
extern "C"
bool C_QWidgetSet_operator_not_equal_0(void* this_ , QWidgetSet* other) {
    // QWidgetSet_operator_not_equal_0()
    auto rv =  ((QWidgetSet*)this_)->operator!=(*other);
    return rv;
}

// [4] int size()
extern "C"
int C_QWidgetSet_size_0(void* this_ ) {
    // QWidgetSet_size_0()
    auto rv =  ((QWidgetSet*)this_)->size();
    return rv;
}

// [1] bool isEmpty()
extern "C"
bool C_QWidgetSet_isEmpty_0(void* this_ ) {
    // QWidgetSet_isEmpty_0()
    auto rv =  ((QWidgetSet*)this_)->isEmpty();
    return rv;
}

// [4] int capacity()
extern "C"
int C_QWidgetSet_capacity_0(void* this_ ) {
    // QWidgetSet_capacity_0()
    auto rv =  ((QWidgetSet*)this_)->capacity();
    return rv;
}

// [-2] void reserve(int)
extern "C"
void C_QWidgetSet_reserve_0(void* this_ , int size) {
    // QWidgetSet_reserve_0()
     ((QWidgetSet*)this_)->reserve(size);
}

// [-2] void squeeze()
extern "C"
void C_QWidgetSet_squeeze_0(void* this_ ) {
    // QWidgetSet_squeeze_0()
     ((QWidgetSet*)this_)->squeeze();
}

// [-2] void detach()
extern "C"
void C_QWidgetSet_detach_0(void* this_ ) {
    // QWidgetSet_detach_0()
     ((QWidgetSet*)this_)->detach();
}

// [1] bool isDetached()
extern "C"
bool C_QWidgetSet_isDetached_0(void* this_ ) {
    // QWidgetSet_isDetached_0()
    auto rv =  ((QWidgetSet*)this_)->isDetached();
    return rv;
}

// [-2] void setSharable(_Bool)
extern "C"
void C_QWidgetSet_setSharable_0(void* this_ , bool sharable) {
    // QWidgetSet_setSharable_0()
     ((QWidgetSet*)this_)->setSharable(sharable);
}

// [-2] void clear()
extern "C"
void C_QWidgetSet_clear_0(void* this_ ) {
    // QWidgetSet_clear_0()
     ((QWidgetSet*)this_)->clear();
}

// [1] bool remove(const T &)
extern "C"
bool C_QWidgetSet_remove_0(void* this_ , QWidget * value) {
    // QWidgetSet_remove_0()
    auto rv =  ((QWidgetSet*)this_)->remove(value);
    return rv;
}

// [1] bool contains(const T &)
extern "C"
bool C_QWidgetSet_contains_0(void* this_ , QWidget * value) {
    // QWidgetSet_contains_0()
    auto rv =  ((QWidgetSet*)this_)->contains(value);
    return rv;
}

// [1] bool contains(const QSet<T> &)
extern "C"
bool C_QWidgetSet_contains_1(void* this_ , QWidgetSet* set) {
    // QWidgetSet_contains_1()
    auto rv =  ((QWidgetSet*)this_)->contains(*set);
    return rv;
}

// [-3] QSet::iterator begin()
extern "C"
QWidgetSet::iterator* C_QWidgetSet_begin_0(void* this_ ) {
    // QWidgetSet_begin_0()
    auto rv =  ((QWidgetSet*)this_)->begin();
    return new decltype(rv)(rv);
}

// [-3] QSet::iterator end()
extern "C"
QWidgetSet::iterator* C_QWidgetSet_end_0(void* this_ ) {
    // QWidgetSet_end_0()
    auto rv =  ((QWidgetSet*)this_)->end();
    return new decltype(rv)(rv);
}

// [-3] QSet::reverse_iterator rbegin()
extern "C"
QWidgetSet::reverse_iterator* C_QWidgetSet_rbegin_0(void* this_ ) {
    // QWidgetSet_rbegin_0()
    auto rv =  ((QWidgetSet*)this_)->rbegin();
    return new decltype(rv)(rv);
}

// [-3] QSet::reverse_iterator rend()
extern "C"
QWidgetSet::reverse_iterator* C_QWidgetSet_rend_0(void* this_ ) {
    // QWidgetSet_rend_0()
    auto rv =  ((QWidgetSet*)this_)->rend();
    return new decltype(rv)(rv);
}

// [-3] QSet::iterator erase(class QSet::iterator)
extern "C"
QWidgetSet::iterator* C_QWidgetSet_erase_0(void* this_ , QWidgetSet::iterator* i) {
    // QWidgetSet_erase_0()
    auto rv =  ((QWidgetSet*)this_)->erase(*i);
    return new decltype(rv)(rv);
}

// [-3] QSet::iterator erase(class QSet::const_iterator)
extern "C"
QWidgetSet::iterator* C_QWidgetSet_erase_1(void* this_ , QWidgetSet::const_iterator* i) {
    // QWidgetSet_erase_1()
    auto rv =  ((QWidgetSet*)this_)->erase(*i);
    return new decltype(rv)(rv);
}

// [4] int count()
extern "C"
int C_QWidgetSet_count_0(void* this_ ) {
    // QWidgetSet_count_0()
    auto rv =  ((QWidgetSet*)this_)->count();
    return rv;
}

// [-3] QSet::iterator insert(const T &)
extern "C"
QWidgetSet::iterator* C_QWidgetSet_insert_0(void* this_ , QWidget * value) {
    // QWidgetSet_insert_0()
    auto rv =  ((QWidgetSet*)this_)->insert(value);
    return new decltype(rv)(rv);
}

// [-3] QSet::iterator find(const T &)
extern "C"
QWidgetSet::iterator* C_QWidgetSet_find_0(void* this_ , QWidget * value) {
    // QWidgetSet_find_0()
    auto rv =  ((QWidgetSet*)this_)->find(value);
    return new decltype(rv)(rv);
}

// [-3] QSet<T> & unite(const QSet<T> &)
extern "C"
QWidgetSet* C_QWidgetSet_unite_0(void* this_ , QWidgetSet* other) {
    // QWidgetSet_unite_0()
    auto rv =  ((QWidgetSet*)this_)->unite(*other);
    return (QWidgetSet*)this_;
}

// [-3] QSet<T> & intersect(const QSet<T> &)
extern "C"
QWidgetSet* C_QWidgetSet_intersect_0(void* this_ , QWidgetSet* other) {
    // QWidgetSet_intersect_0()
    auto rv =  ((QWidgetSet*)this_)->intersect(*other);
    return (QWidgetSet*)this_;
}

// [1] bool intersects(const QSet<T> &)
extern "C"
bool C_QWidgetSet_intersects_0(void* this_ , QWidgetSet* other) {
    // QWidgetSet_intersects_0()
    auto rv =  ((QWidgetSet*)this_)->intersects(*other);
    return rv;
}

// [-3] QSet<T> & subtract(const QSet<T> &)
extern "C"
QWidgetSet* C_QWidgetSet_subtract_0(void* this_ , QWidgetSet* other) {
    // QWidgetSet_subtract_0()
    auto rv =  ((QWidgetSet*)this_)->subtract(*other);
    return (QWidgetSet*)this_;
}

// [1] bool empty()
extern "C"
bool C_QWidgetSet_empty_0(void* this_ ) {
    // QWidgetSet_empty_0()
    auto rv =  ((QWidgetSet*)this_)->empty();
    return rv;
}

// [-3] QSet<T> & operator<<(const T &)
extern "C"
QWidgetSet* C_QWidgetSet_operator_left_shift_0(void* this_ , QWidget * value) {
    // QWidgetSet_operator_left_shift_0()
    auto rv =  ((QWidgetSet*)this_)->operator<<(value);
    return (QWidgetSet*)this_;
}

// [-3] QSet<T> & operator|=(const QSet<T> &)
extern "C"
QWidgetSet* C_QWidgetSet_operator_or_equal_0(void* this_ , QWidgetSet* other) {
    // QWidgetSet_operator_or_equal_0()
    auto rv =  ((QWidgetSet*)this_)->operator|=(*other);
    return (QWidgetSet*)this_;
}

// [-3] QSet<T> & operator|=(const T &)
extern "C"
QWidgetSet* C_QWidgetSet_operator_or_equal_1(void* this_ , QWidget * value) {
    // QWidgetSet_operator_or_equal_1()
    auto rv =  ((QWidgetSet*)this_)->operator|=(value);
    return (QWidgetSet*)this_;
}

// [-3] QSet<T> & operator&=(const QSet<T> &)
extern "C"
QWidgetSet* C_QWidgetSet_operator_and_equal_0(void* this_ , QWidgetSet* other) {
    // QWidgetSet_operator_and_equal_0()
    auto rv =  ((QWidgetSet*)this_)->operator&=(*other);
    return (QWidgetSet*)this_;
}

// [-3] QSet<T> & operator&=(const T &)
extern "C"
QWidgetSet* C_QWidgetSet_operator_and_equal_1(void* this_ , QWidget * value) {
    // QWidgetSet_operator_and_equal_1()
    auto rv =  ((QWidgetSet*)this_)->operator&=(value);
    return (QWidgetSet*)this_;
}

// [-3] QSet<T> & operator+=(const QSet<T> &)
extern "C"
QWidgetSet* C_QWidgetSet_operator_add_equal_0(void* this_ , QWidgetSet* other) {
    // QWidgetSet_operator_add_equal_0()
    auto rv =  ((QWidgetSet*)this_)->operator+=(*other);
    return (QWidgetSet*)this_;
}

// [-3] QSet<T> & operator+=(const T &)
extern "C"
QWidgetSet* C_QWidgetSet_operator_add_equal_1(void* this_ , QWidget * value) {
    // QWidgetSet_operator_add_equal_1()
    auto rv =  ((QWidgetSet*)this_)->operator+=(value);
    return (QWidgetSet*)this_;
}

// [-3] QSet<T> & operator-=(const QSet<T> &)
extern "C"
QWidgetSet* C_QWidgetSet_operator_minus_equal_0(void* this_ , QWidgetSet* other) {
    // QWidgetSet_operator_minus_equal_0()
    auto rv =  ((QWidgetSet*)this_)->operator-=(*other);
    return (QWidgetSet*)this_;
}

// [-3] QSet<T> & operator-=(const T &)
extern "C"
QWidgetSet* C_QWidgetSet_operator_minus_equal_1(void* this_ , QWidget * value) {
    // QWidgetSet_operator_minus_equal_1()
    auto rv =  ((QWidgetSet*)this_)->operator-=(value);
    return (QWidgetSet*)this_;
}

// [-3] QSet<T> operator|(const QSet<T> &)
extern "C"
QWidgetSet* C_QWidgetSet_operator_or_0(void* this_ , QWidgetSet* other) {
    // QWidgetSet_operator_or_0()
    auto rv =  ((QWidgetSet*)this_)->operator|(*other);
    return (QWidgetSet*)this_;
}

// [-3] QSet<T> operator&(const QSet<T> &)
extern "C"
QWidgetSet* C_QWidgetSet_operator_and_0(void* this_ , QWidgetSet* other) {
    // QWidgetSet_operator_and_0()
    auto rv =  ((QWidgetSet*)this_)->operator&(*other);
    return (QWidgetSet*)this_;
}

// [-3] QSet<T> operator+(const QSet<T> &)
extern "C"
QWidgetSet* C_QWidgetSet_operator_add_0(void* this_ , QWidgetSet* other) {
    // QWidgetSet_operator_add_0()
    auto rv =  ((QWidgetSet*)this_)->operator+(*other);
    return (QWidgetSet*)this_;
}

// [-3] QSet<T> operator-(const QSet<T> &)
extern "C"
QWidgetSet* C_QWidgetSet_operator_minus_0(void* this_ , QWidgetSet* other) {
    // QWidgetSet_operator_minus_0()
    auto rv =  ((QWidgetSet*)this_)->operator-(*other);
    return (QWidgetSet*)this_;
}

// [-3] QList<T> toList()
extern "C"
void C_QWidgetSet_toList_0(void* this_ ) {
    // QWidgetSet_toList_0()
    auto rv =  ((QWidgetSet*)this_)->toList();
}

// [-3] QList<T> values()
extern "C"
void C_QWidgetSet_values_0(void* this_ ) {
    // QWidgetSet_values_0()
    auto rv =  ((QWidgetSet*)this_)->values();
}

//  body block end
