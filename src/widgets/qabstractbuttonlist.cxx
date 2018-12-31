
#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(abstractbutton)
// /usr/include/qt/QtWidgets/qabstractbutton.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qabstractbutton.h>
#include <QtWidgets>
#include "callback_inherit.h"

#ifndef QAbstractButtonList
#ifndef QABSTRACTBUTTONLIST_H
typedef QList<QAbstractButton *> QAbstractButtonList;
#endif
#endif
//  header block end

//  footer block begin
#endif // #if QT_CONFIG(abstractbutton)
#endif // #ifndef QT_MINIMAL
//  footer block end

//  body block begin
// [-3] QList<T> & operator=(const QList<T> &)
extern "C" Q_DECL_EXPORT
QAbstractButtonList* C_QAbstractButtonList_operator_equal_0(void* this_ , QAbstractButtonList* l) {
    // QAbstractButtonList_operator_equal_0()
    auto rv =  ((QAbstractButtonList*)this_)->operator=(*l);
    return (QAbstractButtonList*)this_;
}

// [-3] QList<T> & operator=(QList<T> &&)
extern "C" Q_DECL_EXPORT
QAbstractButtonList* C_QAbstractButtonList_operator_equal_1(void* this_ , QAbstractButtonList* other) {
    // QAbstractButtonList_operator_equal_1()
    auto rv =  ((QAbstractButtonList*)this_)->operator=(*other);
    return (QAbstractButtonList*)this_;
}

// [-2] void swap(QList<T> &)
extern "C" Q_DECL_EXPORT
void C_QAbstractButtonList_swap_0(void* this_ , QAbstractButtonList* other) {
    // QAbstractButtonList_swap_0()
     ((QAbstractButtonList*)this_)->swap(*other);
}

// [1] bool operator==(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QAbstractButtonList_operator_equal_equal_0(void* this_ , QAbstractButtonList* l) {
    // QAbstractButtonList_operator_equal_equal_0()
    auto rv =  ((QAbstractButtonList*)this_)->operator==(*l);
    return rv;
}

// [1] bool operator!=(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QAbstractButtonList_operator_not_equal_0(void* this_ , QAbstractButtonList* l) {
    // QAbstractButtonList_operator_not_equal_0()
    auto rv =  ((QAbstractButtonList*)this_)->operator!=(*l);
    return rv;
}

// [4] int size()
extern "C" Q_DECL_EXPORT
int C_QAbstractButtonList_size_0(void* this_ ) {
    // QAbstractButtonList_size_0()
    auto rv =  ((QAbstractButtonList*)this_)->size();
    return rv;
}

// [-2] void detach()
extern "C" Q_DECL_EXPORT
void C_QAbstractButtonList_detach_0(void* this_ ) {
    // QAbstractButtonList_detach_0()
     ((QAbstractButtonList*)this_)->detach();
}

// [-2] void detachShared()
extern "C" Q_DECL_EXPORT
void C_QAbstractButtonList_detachShared_0(void* this_ ) {
    // QAbstractButtonList_detachShared_0()
     ((QAbstractButtonList*)this_)->detachShared();
}

// [1] bool isDetached()
extern "C" Q_DECL_EXPORT
bool C_QAbstractButtonList_isDetached_0(void* this_ ) {
    // QAbstractButtonList_isDetached_0()
    auto rv =  ((QAbstractButtonList*)this_)->isDetached();
    return rv;
}

// [-2] void setSharable(bool)
extern "C" Q_DECL_EXPORT
void C_QAbstractButtonList_setSharable_0(void* this_ , bool sharable) {
    // QAbstractButtonList_setSharable_0()
     ((QAbstractButtonList*)this_)->setSharable(sharable);
}

// [1] bool isSharedWith(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QAbstractButtonList_isSharedWith_0(void* this_ , QAbstractButtonList* other) {
    // QAbstractButtonList_isSharedWith_0()
    auto rv =  ((QAbstractButtonList*)this_)->isSharedWith(*other);
    return rv;
}

// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_QAbstractButtonList_isEmpty_0(void* this_ ) {
    // QAbstractButtonList_isEmpty_0()
    auto rv =  ((QAbstractButtonList*)this_)->isEmpty();
    return rv;
}

// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_QAbstractButtonList_clear_0(void* this_ ) {
    // QAbstractButtonList_clear_0()
     ((QAbstractButtonList*)this_)->clear();
}

// [-3] const T & at(int)
extern "C" Q_DECL_EXPORT
QAbstractButton ** C_QAbstractButtonList_at_0(void* this_ , int i) {
    // QAbstractButtonList_at_0()
    auto rv =  ((QAbstractButtonList*)this_)->at(i);
    return new decltype(rv)(rv);
}

// [-3] const T & operator[](int)
extern "C" Q_DECL_EXPORT
QAbstractButton ** C_QAbstractButtonList_operator_get_index_0(void* this_ , int i) {
    // QAbstractButtonList_operator_get_index_0()
    auto rv =  ((QAbstractButtonList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-3] T & operator[](int)
extern "C" Q_DECL_EXPORT
QAbstractButton ** C_QAbstractButtonList_operator_get_index_1(void* this_ , int i) {
    // QAbstractButtonList_operator_get_index_1()
    auto rv =  ((QAbstractButtonList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-2] void reserve(int)
extern "C" Q_DECL_EXPORT
void C_QAbstractButtonList_reserve_0(void* this_ , int size) {
    // QAbstractButtonList_reserve_0()
     ((QAbstractButtonList*)this_)->reserve(size);
}

// [-2] void append(const T &)
extern "C" Q_DECL_EXPORT
void C_QAbstractButtonList_append_0(void* this_ , QAbstractButton * t) {
    // QAbstractButtonList_append_0()
     ((QAbstractButtonList*)this_)->append(t);
}

// [-2] void append(const QList<T> &)
extern "C" Q_DECL_EXPORT
void C_QAbstractButtonList_append_1(void* this_ , QAbstractButtonList* t) {
    // QAbstractButtonList_append_1()
     ((QAbstractButtonList*)this_)->append(*t);
}

// [-2] void prepend(const T &)
extern "C" Q_DECL_EXPORT
void C_QAbstractButtonList_prepend_0(void* this_ , QAbstractButton * t) {
    // QAbstractButtonList_prepend_0()
     ((QAbstractButtonList*)this_)->prepend(t);
}

// [-2] void insert(int, const T &)
extern "C" Q_DECL_EXPORT
void C_QAbstractButtonList_insert_0(void* this_ , int i, QAbstractButton * t) {
    // QAbstractButtonList_insert_0()
     ((QAbstractButtonList*)this_)->insert(i, t);
}

// [-2] void replace(int, const T &)
extern "C" Q_DECL_EXPORT
void C_QAbstractButtonList_replace_0(void* this_ , int i, QAbstractButton * t) {
    // QAbstractButtonList_replace_0()
     ((QAbstractButtonList*)this_)->replace(i, t);
}

// [-2] void removeAt(int)
extern "C" Q_DECL_EXPORT
void C_QAbstractButtonList_removeAt_0(void* this_ , int i) {
    // QAbstractButtonList_removeAt_0()
     ((QAbstractButtonList*)this_)->removeAt(i);
}

// [4] int removeAll(const T &)
extern "C" Q_DECL_EXPORT
int C_QAbstractButtonList_removeAll_0(void* this_ , QAbstractButton * t) {
    // QAbstractButtonList_removeAll_0()
    auto rv =  ((QAbstractButtonList*)this_)->removeAll(t);
    return rv;
}

// [1] bool removeOne(const T &)
extern "C" Q_DECL_EXPORT
bool C_QAbstractButtonList_removeOne_0(void* this_ , QAbstractButton * t) {
    // QAbstractButtonList_removeOne_0()
    auto rv =  ((QAbstractButtonList*)this_)->removeOne(t);
    return rv;
}

// [-3] T takeAt(int)
extern "C" Q_DECL_EXPORT
QAbstractButton ** C_QAbstractButtonList_takeAt_0(void* this_ , int i) {
    // QAbstractButtonList_takeAt_0()
    auto rv =  ((QAbstractButtonList*)this_)->takeAt(i);
    return new decltype(rv)(rv);
}

// [-3] T takeFirst()
extern "C" Q_DECL_EXPORT
QAbstractButton ** C_QAbstractButtonList_takeFirst_0(void* this_ ) {
    // QAbstractButtonList_takeFirst_0()
    auto rv =  ((QAbstractButtonList*)this_)->takeFirst();
    return new decltype(rv)(rv);
}

// [-3] T takeLast()
extern "C" Q_DECL_EXPORT
QAbstractButton ** C_QAbstractButtonList_takeLast_0(void* this_ ) {
    // QAbstractButtonList_takeLast_0()
    auto rv =  ((QAbstractButtonList*)this_)->takeLast();
    return new decltype(rv)(rv);
}

// [-2] void move(int, int)
extern "C" Q_DECL_EXPORT
void C_QAbstractButtonList_move_0(void* this_ , int from, int to) {
    // QAbstractButtonList_move_0()
     ((QAbstractButtonList*)this_)->move(from, to);
}

// [-2] void swap(int, int)
extern "C" Q_DECL_EXPORT
void C_QAbstractButtonList_swap_1(void* this_ , int i, int j) {
    // QAbstractButtonList_swap_1()
     ((QAbstractButtonList*)this_)->swap(i, j);
}

// [4] int indexOf(const T &, int)
extern "C" Q_DECL_EXPORT
int C_QAbstractButtonList_indexOf_0(void* this_ , QAbstractButton * t, int from) {
    // QAbstractButtonList_indexOf_0()
    auto rv =  ((QAbstractButtonList*)this_)->indexOf(t, from);
    return rv;
}

// [4] int lastIndexOf(const T &, int)
extern "C" Q_DECL_EXPORT
int C_QAbstractButtonList_lastIndexOf_0(void* this_ , QAbstractButton * t, int from) {
    // QAbstractButtonList_lastIndexOf_0()
    auto rv =  ((QAbstractButtonList*)this_)->lastIndexOf(t, from);
    return rv;
}

// [1] bool contains(const T &)
extern "C" Q_DECL_EXPORT
bool C_QAbstractButtonList_contains_0(void* this_ , QAbstractButton * t) {
    // QAbstractButtonList_contains_0()
    auto rv =  ((QAbstractButtonList*)this_)->contains(t);
    return rv;
}

// [4] int count(const T &)
extern "C" Q_DECL_EXPORT
int C_QAbstractButtonList_count_0(void* this_ , QAbstractButton * t) {
    // QAbstractButtonList_count_0()
    auto rv =  ((QAbstractButtonList*)this_)->count(t);
    return rv;
}

// [-3] QList::iterator begin()
extern "C" Q_DECL_EXPORT
QAbstractButtonList::iterator* C_QAbstractButtonList_begin_0(void* this_ ) {
    // QAbstractButtonList_begin_0()
    auto rv =  ((QAbstractButtonList*)this_)->begin();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator end()
extern "C" Q_DECL_EXPORT
QAbstractButtonList::iterator* C_QAbstractButtonList_end_0(void* this_ ) {
    // QAbstractButtonList_end_0()
    auto rv =  ((QAbstractButtonList*)this_)->end();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rbegin()
extern "C" Q_DECL_EXPORT
QAbstractButtonList::reverse_iterator* C_QAbstractButtonList_rbegin_0(void* this_ ) {
    // QAbstractButtonList_rbegin_0()
    auto rv =  ((QAbstractButtonList*)this_)->rbegin();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rend()
extern "C" Q_DECL_EXPORT
QAbstractButtonList::reverse_iterator* C_QAbstractButtonList_rend_0(void* this_ ) {
    // QAbstractButtonList_rend_0()
    auto rv =  ((QAbstractButtonList*)this_)->rend();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator insert(QList::iterator, const T &)
extern "C" Q_DECL_EXPORT
QAbstractButtonList::iterator* C_QAbstractButtonList_insert_1(void* this_ , QAbstractButtonList::iterator* before, QAbstractButton * t) {
    // QAbstractButtonList_insert_1()
    auto rv =  ((QAbstractButtonList*)this_)->insert(*before, t);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator)
extern "C" Q_DECL_EXPORT
QAbstractButtonList::iterator* C_QAbstractButtonList_erase_0(void* this_ , QAbstractButtonList::iterator* pos) {
    // QAbstractButtonList_erase_0()
    auto rv =  ((QAbstractButtonList*)this_)->erase(*pos);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator, QList::iterator)
extern "C" Q_DECL_EXPORT
QAbstractButtonList::iterator* C_QAbstractButtonList_erase_1(void* this_ , QAbstractButtonList::iterator* first, QAbstractButtonList::iterator* last) {
    // QAbstractButtonList_erase_1()
    auto rv =  ((QAbstractButtonList*)this_)->erase(*first, *last);
    return new decltype(rv)(rv);
}

// [4] int count()
extern "C" Q_DECL_EXPORT
int C_QAbstractButtonList_count_1(void* this_ ) {
    // QAbstractButtonList_count_1()
    auto rv =  ((QAbstractButtonList*)this_)->count();
    return rv;
}

// [4] int length()
extern "C" Q_DECL_EXPORT
int C_QAbstractButtonList_length_0(void* this_ ) {
    // QAbstractButtonList_length_0()
    auto rv =  ((QAbstractButtonList*)this_)->length();
    return rv;
}

// [-3] T & first()
extern "C" Q_DECL_EXPORT
QAbstractButton ** C_QAbstractButtonList_first_0(void* this_ ) {
    // QAbstractButtonList_first_0()
    auto rv =  ((QAbstractButtonList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] const T & constFirst()
extern "C" Q_DECL_EXPORT
QAbstractButton ** C_QAbstractButtonList_constFirst_0(void* this_ ) {
    // QAbstractButtonList_constFirst_0()
    auto rv =  ((QAbstractButtonList*)this_)->constFirst();
    return new decltype(rv)(rv);
}

// [-3] const T & first()
extern "C" Q_DECL_EXPORT
QAbstractButton ** C_QAbstractButtonList_first_1(void* this_ ) {
    // QAbstractButtonList_first_1()
    auto rv =  ((QAbstractButtonList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] T & last()
extern "C" Q_DECL_EXPORT
QAbstractButton ** C_QAbstractButtonList_last_0(void* this_ ) {
    // QAbstractButtonList_last_0()
    auto rv =  ((QAbstractButtonList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & last()
extern "C" Q_DECL_EXPORT
QAbstractButton ** C_QAbstractButtonList_last_1(void* this_ ) {
    // QAbstractButtonList_last_1()
    auto rv =  ((QAbstractButtonList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & constLast()
extern "C" Q_DECL_EXPORT
QAbstractButton ** C_QAbstractButtonList_constLast_0(void* this_ ) {
    // QAbstractButtonList_constLast_0()
    auto rv =  ((QAbstractButtonList*)this_)->constLast();
    return new decltype(rv)(rv);
}

// [-2] void removeFirst()
extern "C" Q_DECL_EXPORT
void C_QAbstractButtonList_removeFirst_0(void* this_ ) {
    // QAbstractButtonList_removeFirst_0()
     ((QAbstractButtonList*)this_)->removeFirst();
}

// [-2] void removeLast()
extern "C" Q_DECL_EXPORT
void C_QAbstractButtonList_removeLast_0(void* this_ ) {
    // QAbstractButtonList_removeLast_0()
     ((QAbstractButtonList*)this_)->removeLast();
}

// [1] bool startsWith(const T &)
extern "C" Q_DECL_EXPORT
bool C_QAbstractButtonList_startsWith_0(void* this_ , QAbstractButton * t) {
    // QAbstractButtonList_startsWith_0()
    auto rv =  ((QAbstractButtonList*)this_)->startsWith(t);
    return rv;
}

// [1] bool endsWith(const T &)
extern "C" Q_DECL_EXPORT
bool C_QAbstractButtonList_endsWith_0(void* this_ , QAbstractButton * t) {
    // QAbstractButtonList_endsWith_0()
    auto rv =  ((QAbstractButtonList*)this_)->endsWith(t);
    return rv;
}

// [-3] QList<T> mid(int, int)
extern "C" Q_DECL_EXPORT
QAbstractButtonList* C_QAbstractButtonList_mid_0(void* this_ , int pos, int length) {
    // QAbstractButtonList_mid_0()
    auto rv =  ((QAbstractButtonList*)this_)->mid(pos, length);
    return (QAbstractButtonList*)this_;
}

// [-3] T value(int)
extern "C" Q_DECL_EXPORT
QAbstractButton ** C_QAbstractButtonList_value_0(void* this_ , int i) {
    // QAbstractButtonList_value_0()
    auto rv =  ((QAbstractButtonList*)this_)->value(i);
    return new decltype(rv)(rv);
}

// [-3] T value(int, const T &)
extern "C" Q_DECL_EXPORT
QAbstractButton ** C_QAbstractButtonList_value_1(void* this_ , int i, QAbstractButton * defaultValue) {
    // QAbstractButtonList_value_1()
    auto rv =  ((QAbstractButtonList*)this_)->value(i, defaultValue);
    return new decltype(rv)(rv);
}

// [-2] void push_back(const T &)
extern "C" Q_DECL_EXPORT
void C_QAbstractButtonList_push_back_0(void* this_ , QAbstractButton * t) {
    // QAbstractButtonList_push_back_0()
     ((QAbstractButtonList*)this_)->push_back(t);
}

// [-2] void push_front(const T &)
extern "C" Q_DECL_EXPORT
void C_QAbstractButtonList_push_front_0(void* this_ , QAbstractButton * t) {
    // QAbstractButtonList_push_front_0()
     ((QAbstractButtonList*)this_)->push_front(t);
}

// [-3] T & front()
extern "C" Q_DECL_EXPORT
QAbstractButton ** C_QAbstractButtonList_front_0(void* this_ ) {
    // QAbstractButtonList_front_0()
    auto rv =  ((QAbstractButtonList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] const T & front()
extern "C" Q_DECL_EXPORT
QAbstractButton ** C_QAbstractButtonList_front_1(void* this_ ) {
    // QAbstractButtonList_front_1()
    auto rv =  ((QAbstractButtonList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] T & back()
extern "C" Q_DECL_EXPORT
QAbstractButton ** C_QAbstractButtonList_back_0(void* this_ ) {
    // QAbstractButtonList_back_0()
    auto rv =  ((QAbstractButtonList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-3] const T & back()
extern "C" Q_DECL_EXPORT
QAbstractButton ** C_QAbstractButtonList_back_1(void* this_ ) {
    // QAbstractButtonList_back_1()
    auto rv =  ((QAbstractButtonList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-2] void pop_front()
extern "C" Q_DECL_EXPORT
void C_QAbstractButtonList_pop_front_0(void* this_ ) {
    // QAbstractButtonList_pop_front_0()
     ((QAbstractButtonList*)this_)->pop_front();
}

// [-2] void pop_back()
extern "C" Q_DECL_EXPORT
void C_QAbstractButtonList_pop_back_0(void* this_ ) {
    // QAbstractButtonList_pop_back_0()
     ((QAbstractButtonList*)this_)->pop_back();
}

// [1] bool empty()
extern "C" Q_DECL_EXPORT
bool C_QAbstractButtonList_empty_0(void* this_ ) {
    // QAbstractButtonList_empty_0()
    auto rv =  ((QAbstractButtonList*)this_)->empty();
    return rv;
}

// [-3] QList<T> & operator+=(const QList<T> &)
extern "C" Q_DECL_EXPORT
QAbstractButtonList* C_QAbstractButtonList_operator_add_equal_0(void* this_ , QAbstractButtonList* l) {
    // QAbstractButtonList_operator_add_equal_0()
    auto rv =  ((QAbstractButtonList*)this_)->operator+=(*l);
    return (QAbstractButtonList*)this_;
}

// [-3] QList<T> operator+(const QList<T> &)
extern "C" Q_DECL_EXPORT
QAbstractButtonList* C_QAbstractButtonList_operator_add_0(void* this_ , QAbstractButtonList* l) {
    // QAbstractButtonList_operator_add_0()
    auto rv =  ((QAbstractButtonList*)this_)->operator+(*l);
    return (QAbstractButtonList*)this_;
}

// [-3] QList<T> & operator+=(const T &)
extern "C" Q_DECL_EXPORT
QAbstractButtonList* C_QAbstractButtonList_operator_add_equal_1(void* this_ , QAbstractButton * t) {
    // QAbstractButtonList_operator_add_equal_1()
    auto rv =  ((QAbstractButtonList*)this_)->operator+=(t);
    return (QAbstractButtonList*)this_;
}

// [-3] QList<T> & operator<<(const T &)
extern "C" Q_DECL_EXPORT
QAbstractButtonList* C_QAbstractButtonList_operator_left_shift_0(void* this_ , QAbstractButton * t) {
    // QAbstractButtonList_operator_left_shift_0()
    auto rv =  ((QAbstractButtonList*)this_)->operator<<(t);
    return (QAbstractButtonList*)this_;
}

// [-3] QList<T> & operator<<(const QList<T> &)
extern "C" Q_DECL_EXPORT
QAbstractButtonList* C_QAbstractButtonList_operator_left_shift_1(void* this_ , QAbstractButtonList* l) {
    // QAbstractButtonList_operator_left_shift_1()
    auto rv =  ((QAbstractButtonList*)this_)->operator<<(*l);
    return (QAbstractButtonList*)this_;
}

// [-3] QVector<T> toVector()
extern "C" Q_DECL_EXPORT
void C_QAbstractButtonList_toVector_0(void* this_ ) {
    // QAbstractButtonList_toVector_0()
    auto rv =  ((QAbstractButtonList*)this_)->toVector();
}

// [-3] std::list<T> toStdList()
extern "C" Q_DECL_EXPORT
void C_QAbstractButtonList_toStdList_0(void* this_ ) {
    // QAbstractButtonList_toStdList_0()
    auto rv =  ((QAbstractButtonList*)this_)->toStdList();
}

//  body block end
