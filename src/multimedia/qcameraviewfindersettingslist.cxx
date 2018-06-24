
// /usr/include/qt/QtMultimedia/qcameraviewfindersettings.h
#ifndef protected
#define protected public
#endif
#include <qcameraviewfindersettings.h>
#include <QtMultimedia>
#include "callback_inherit.h"

#ifndef QCameraViewfinderSettingsList
#ifndef QCAMERAVIEWFINDERSETTINGSLIST_H
typedef QList<QCameraViewfinderSettings> QCameraViewfinderSettingsList;
#endif
#endif
//  header block end

//  body block begin
// [-3] QList<T> & operator=(const QList<T> &)
extern "C" Q_DECL_EXPORT
QCameraViewfinderSettingsList* C_QCameraViewfinderSettingsList_operator_equal_0(void* this_ , QCameraViewfinderSettingsList* l) {
    // QCameraViewfinderSettingsList_operator_equal_0()
    auto rv =  ((QCameraViewfinderSettingsList*)this_)->operator=(*l);
    return (QCameraViewfinderSettingsList*)this_;
}

// [-3] QList<T> & operator=(QList<T> &&)
extern "C" Q_DECL_EXPORT
QCameraViewfinderSettingsList* C_QCameraViewfinderSettingsList_operator_equal_1(void* this_ , QCameraViewfinderSettingsList* other) {
    // QCameraViewfinderSettingsList_operator_equal_1()
    auto rv =  ((QCameraViewfinderSettingsList*)this_)->operator=(*other);
    return (QCameraViewfinderSettingsList*)this_;
}

// [-2] void swap(QList<T> &)
extern "C" Q_DECL_EXPORT
void C_QCameraViewfinderSettingsList_swap_0(void* this_ , QCameraViewfinderSettingsList* other) {
    // QCameraViewfinderSettingsList_swap_0()
     ((QCameraViewfinderSettingsList*)this_)->swap(*other);
}

// [1] bool operator==(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QCameraViewfinderSettingsList_operator_equal_equal_0(void* this_ , QCameraViewfinderSettingsList* l) {
    // QCameraViewfinderSettingsList_operator_equal_equal_0()
    auto rv =  ((QCameraViewfinderSettingsList*)this_)->operator==(*l);
    return rv;
}

// [1] bool operator!=(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QCameraViewfinderSettingsList_operator_not_equal_0(void* this_ , QCameraViewfinderSettingsList* l) {
    // QCameraViewfinderSettingsList_operator_not_equal_0()
    auto rv =  ((QCameraViewfinderSettingsList*)this_)->operator!=(*l);
    return rv;
}

// [4] int size()
extern "C" Q_DECL_EXPORT
int C_QCameraViewfinderSettingsList_size_0(void* this_ ) {
    // QCameraViewfinderSettingsList_size_0()
    auto rv =  ((QCameraViewfinderSettingsList*)this_)->size();
    return rv;
}

// [-2] void detach()
extern "C" Q_DECL_EXPORT
void C_QCameraViewfinderSettingsList_detach_0(void* this_ ) {
    // QCameraViewfinderSettingsList_detach_0()
     ((QCameraViewfinderSettingsList*)this_)->detach();
}

// [-2] void detachShared()
extern "C" Q_DECL_EXPORT
void C_QCameraViewfinderSettingsList_detachShared_0(void* this_ ) {
    // QCameraViewfinderSettingsList_detachShared_0()
     ((QCameraViewfinderSettingsList*)this_)->detachShared();
}

// [1] bool isDetached()
extern "C" Q_DECL_EXPORT
bool C_QCameraViewfinderSettingsList_isDetached_0(void* this_ ) {
    // QCameraViewfinderSettingsList_isDetached_0()
    auto rv =  ((QCameraViewfinderSettingsList*)this_)->isDetached();
    return rv;
}

// [-2] void setSharable(bool)
extern "C" Q_DECL_EXPORT
void C_QCameraViewfinderSettingsList_setSharable_0(void* this_ , bool sharable) {
    // QCameraViewfinderSettingsList_setSharable_0()
     ((QCameraViewfinderSettingsList*)this_)->setSharable(sharable);
}

// [1] bool isSharedWith(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QCameraViewfinderSettingsList_isSharedWith_0(void* this_ , QCameraViewfinderSettingsList* other) {
    // QCameraViewfinderSettingsList_isSharedWith_0()
    auto rv =  ((QCameraViewfinderSettingsList*)this_)->isSharedWith(*other);
    return rv;
}

// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_QCameraViewfinderSettingsList_isEmpty_0(void* this_ ) {
    // QCameraViewfinderSettingsList_isEmpty_0()
    auto rv =  ((QCameraViewfinderSettingsList*)this_)->isEmpty();
    return rv;
}

// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_QCameraViewfinderSettingsList_clear_0(void* this_ ) {
    // QCameraViewfinderSettingsList_clear_0()
     ((QCameraViewfinderSettingsList*)this_)->clear();
}

// [-3] const T & at(int)
extern "C" Q_DECL_EXPORT
QCameraViewfinderSettings* C_QCameraViewfinderSettingsList_at_0(void* this_ , int i) {
    // QCameraViewfinderSettingsList_at_0()
    auto rv =  ((QCameraViewfinderSettingsList*)this_)->at(i);
    return new decltype(rv)(rv);
}

// [-3] const T & operator[](int)
extern "C" Q_DECL_EXPORT
QCameraViewfinderSettings* C_QCameraViewfinderSettingsList_operator_get_index_0(void* this_ , int i) {
    // QCameraViewfinderSettingsList_operator_get_index_0()
    auto rv =  ((QCameraViewfinderSettingsList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-3] T & operator[](int)
extern "C" Q_DECL_EXPORT
QCameraViewfinderSettings* C_QCameraViewfinderSettingsList_operator_get_index_1(void* this_ , int i) {
    // QCameraViewfinderSettingsList_operator_get_index_1()
    auto rv =  ((QCameraViewfinderSettingsList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-2] void reserve(int)
extern "C" Q_DECL_EXPORT
void C_QCameraViewfinderSettingsList_reserve_0(void* this_ , int size) {
    // QCameraViewfinderSettingsList_reserve_0()
     ((QCameraViewfinderSettingsList*)this_)->reserve(size);
}

// [-2] void append(const T &)
extern "C" Q_DECL_EXPORT
void C_QCameraViewfinderSettingsList_append_0(void* this_ , QCameraViewfinderSettings* t) {
    // QCameraViewfinderSettingsList_append_0()
     ((QCameraViewfinderSettingsList*)this_)->append(*t);
}

// [-2] void append(const QList<T> &)
extern "C" Q_DECL_EXPORT
void C_QCameraViewfinderSettingsList_append_1(void* this_ , QCameraViewfinderSettingsList* t) {
    // QCameraViewfinderSettingsList_append_1()
     ((QCameraViewfinderSettingsList*)this_)->append(*t);
}

// [-2] void prepend(const T &)
extern "C" Q_DECL_EXPORT
void C_QCameraViewfinderSettingsList_prepend_0(void* this_ , QCameraViewfinderSettings* t) {
    // QCameraViewfinderSettingsList_prepend_0()
     ((QCameraViewfinderSettingsList*)this_)->prepend(*t);
}

// [-2] void insert(int, const T &)
extern "C" Q_DECL_EXPORT
void C_QCameraViewfinderSettingsList_insert_0(void* this_ , int i, QCameraViewfinderSettings* t) {
    // QCameraViewfinderSettingsList_insert_0()
     ((QCameraViewfinderSettingsList*)this_)->insert(i, *t);
}

// [-2] void replace(int, const T &)
extern "C" Q_DECL_EXPORT
void C_QCameraViewfinderSettingsList_replace_0(void* this_ , int i, QCameraViewfinderSettings* t) {
    // QCameraViewfinderSettingsList_replace_0()
     ((QCameraViewfinderSettingsList*)this_)->replace(i, *t);
}

// [-2] void removeAt(int)
extern "C" Q_DECL_EXPORT
void C_QCameraViewfinderSettingsList_removeAt_0(void* this_ , int i) {
    // QCameraViewfinderSettingsList_removeAt_0()
     ((QCameraViewfinderSettingsList*)this_)->removeAt(i);
}

// [4] int removeAll(const T &)
extern "C" Q_DECL_EXPORT
int C_QCameraViewfinderSettingsList_removeAll_0(void* this_ , QCameraViewfinderSettings* t) {
    // QCameraViewfinderSettingsList_removeAll_0()
    auto rv =  ((QCameraViewfinderSettingsList*)this_)->removeAll(*t);
    return rv;
}

// [1] bool removeOne(const T &)
extern "C" Q_DECL_EXPORT
bool C_QCameraViewfinderSettingsList_removeOne_0(void* this_ , QCameraViewfinderSettings* t) {
    // QCameraViewfinderSettingsList_removeOne_0()
    auto rv =  ((QCameraViewfinderSettingsList*)this_)->removeOne(*t);
    return rv;
}

// [-3] T takeAt(int)
extern "C" Q_DECL_EXPORT
QCameraViewfinderSettings* C_QCameraViewfinderSettingsList_takeAt_0(void* this_ , int i) {
    // QCameraViewfinderSettingsList_takeAt_0()
    auto rv =  ((QCameraViewfinderSettingsList*)this_)->takeAt(i);
    return new decltype(rv)(rv);
}

// [-3] T takeFirst()
extern "C" Q_DECL_EXPORT
QCameraViewfinderSettings* C_QCameraViewfinderSettingsList_takeFirst_0(void* this_ ) {
    // QCameraViewfinderSettingsList_takeFirst_0()
    auto rv =  ((QCameraViewfinderSettingsList*)this_)->takeFirst();
    return new decltype(rv)(rv);
}

// [-3] T takeLast()
extern "C" Q_DECL_EXPORT
QCameraViewfinderSettings* C_QCameraViewfinderSettingsList_takeLast_0(void* this_ ) {
    // QCameraViewfinderSettingsList_takeLast_0()
    auto rv =  ((QCameraViewfinderSettingsList*)this_)->takeLast();
    return new decltype(rv)(rv);
}

// [-2] void move(int, int)
extern "C" Q_DECL_EXPORT
void C_QCameraViewfinderSettingsList_move_0(void* this_ , int from, int to) {
    // QCameraViewfinderSettingsList_move_0()
     ((QCameraViewfinderSettingsList*)this_)->move(from, to);
}

// [-2] void swap(int, int)
extern "C" Q_DECL_EXPORT
void C_QCameraViewfinderSettingsList_swap_1(void* this_ , int i, int j) {
    // QCameraViewfinderSettingsList_swap_1()
     ((QCameraViewfinderSettingsList*)this_)->swap(i, j);
}

// [4] int indexOf(const T &, int)
extern "C" Q_DECL_EXPORT
int C_QCameraViewfinderSettingsList_indexOf_0(void* this_ , QCameraViewfinderSettings* t, int from) {
    // QCameraViewfinderSettingsList_indexOf_0()
    auto rv =  ((QCameraViewfinderSettingsList*)this_)->indexOf(*t, from);
    return rv;
}

// [4] int lastIndexOf(const T &, int)
extern "C" Q_DECL_EXPORT
int C_QCameraViewfinderSettingsList_lastIndexOf_0(void* this_ , QCameraViewfinderSettings* t, int from) {
    // QCameraViewfinderSettingsList_lastIndexOf_0()
    auto rv =  ((QCameraViewfinderSettingsList*)this_)->lastIndexOf(*t, from);
    return rv;
}

// [1] bool contains(const T &)
extern "C" Q_DECL_EXPORT
bool C_QCameraViewfinderSettingsList_contains_0(void* this_ , QCameraViewfinderSettings* t) {
    // QCameraViewfinderSettingsList_contains_0()
    auto rv =  ((QCameraViewfinderSettingsList*)this_)->contains(*t);
    return rv;
}

// [4] int count(const T &)
extern "C" Q_DECL_EXPORT
int C_QCameraViewfinderSettingsList_count_0(void* this_ , QCameraViewfinderSettings* t) {
    // QCameraViewfinderSettingsList_count_0()
    auto rv =  ((QCameraViewfinderSettingsList*)this_)->count(*t);
    return rv;
}

// [-3] QList::iterator begin()
extern "C" Q_DECL_EXPORT
QCameraViewfinderSettingsList::iterator* C_QCameraViewfinderSettingsList_begin_0(void* this_ ) {
    // QCameraViewfinderSettingsList_begin_0()
    auto rv =  ((QCameraViewfinderSettingsList*)this_)->begin();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator end()
extern "C" Q_DECL_EXPORT
QCameraViewfinderSettingsList::iterator* C_QCameraViewfinderSettingsList_end_0(void* this_ ) {
    // QCameraViewfinderSettingsList_end_0()
    auto rv =  ((QCameraViewfinderSettingsList*)this_)->end();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rbegin()
extern "C" Q_DECL_EXPORT
QCameraViewfinderSettingsList::reverse_iterator* C_QCameraViewfinderSettingsList_rbegin_0(void* this_ ) {
    // QCameraViewfinderSettingsList_rbegin_0()
    auto rv =  ((QCameraViewfinderSettingsList*)this_)->rbegin();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rend()
extern "C" Q_DECL_EXPORT
QCameraViewfinderSettingsList::reverse_iterator* C_QCameraViewfinderSettingsList_rend_0(void* this_ ) {
    // QCameraViewfinderSettingsList_rend_0()
    auto rv =  ((QCameraViewfinderSettingsList*)this_)->rend();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator insert(QList::iterator, const T &)
extern "C" Q_DECL_EXPORT
QCameraViewfinderSettingsList::iterator* C_QCameraViewfinderSettingsList_insert_1(void* this_ , QCameraViewfinderSettingsList::iterator* before, QCameraViewfinderSettings* t) {
    // QCameraViewfinderSettingsList_insert_1()
    auto rv =  ((QCameraViewfinderSettingsList*)this_)->insert(*before, *t);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator)
extern "C" Q_DECL_EXPORT
QCameraViewfinderSettingsList::iterator* C_QCameraViewfinderSettingsList_erase_0(void* this_ , QCameraViewfinderSettingsList::iterator* pos) {
    // QCameraViewfinderSettingsList_erase_0()
    auto rv =  ((QCameraViewfinderSettingsList*)this_)->erase(*pos);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator, QList::iterator)
extern "C" Q_DECL_EXPORT
QCameraViewfinderSettingsList::iterator* C_QCameraViewfinderSettingsList_erase_1(void* this_ , QCameraViewfinderSettingsList::iterator* first, QCameraViewfinderSettingsList::iterator* last) {
    // QCameraViewfinderSettingsList_erase_1()
    auto rv =  ((QCameraViewfinderSettingsList*)this_)->erase(*first, *last);
    return new decltype(rv)(rv);
}

// [4] int count()
extern "C" Q_DECL_EXPORT
int C_QCameraViewfinderSettingsList_count_1(void* this_ ) {
    // QCameraViewfinderSettingsList_count_1()
    auto rv =  ((QCameraViewfinderSettingsList*)this_)->count();
    return rv;
}

// [4] int length()
extern "C" Q_DECL_EXPORT
int C_QCameraViewfinderSettingsList_length_0(void* this_ ) {
    // QCameraViewfinderSettingsList_length_0()
    auto rv =  ((QCameraViewfinderSettingsList*)this_)->length();
    return rv;
}

// [-3] T & first()
extern "C" Q_DECL_EXPORT
QCameraViewfinderSettings* C_QCameraViewfinderSettingsList_first_0(void* this_ ) {
    // QCameraViewfinderSettingsList_first_0()
    auto rv =  ((QCameraViewfinderSettingsList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] const T & constFirst()
extern "C" Q_DECL_EXPORT
QCameraViewfinderSettings* C_QCameraViewfinderSettingsList_constFirst_0(void* this_ ) {
    // QCameraViewfinderSettingsList_constFirst_0()
    auto rv =  ((QCameraViewfinderSettingsList*)this_)->constFirst();
    return new decltype(rv)(rv);
}

// [-3] const T & first()
extern "C" Q_DECL_EXPORT
QCameraViewfinderSettings* C_QCameraViewfinderSettingsList_first_1(void* this_ ) {
    // QCameraViewfinderSettingsList_first_1()
    auto rv =  ((QCameraViewfinderSettingsList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] T & last()
extern "C" Q_DECL_EXPORT
QCameraViewfinderSettings* C_QCameraViewfinderSettingsList_last_0(void* this_ ) {
    // QCameraViewfinderSettingsList_last_0()
    auto rv =  ((QCameraViewfinderSettingsList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & last()
extern "C" Q_DECL_EXPORT
QCameraViewfinderSettings* C_QCameraViewfinderSettingsList_last_1(void* this_ ) {
    // QCameraViewfinderSettingsList_last_1()
    auto rv =  ((QCameraViewfinderSettingsList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & constLast()
extern "C" Q_DECL_EXPORT
QCameraViewfinderSettings* C_QCameraViewfinderSettingsList_constLast_0(void* this_ ) {
    // QCameraViewfinderSettingsList_constLast_0()
    auto rv =  ((QCameraViewfinderSettingsList*)this_)->constLast();
    return new decltype(rv)(rv);
}

// [-2] void removeFirst()
extern "C" Q_DECL_EXPORT
void C_QCameraViewfinderSettingsList_removeFirst_0(void* this_ ) {
    // QCameraViewfinderSettingsList_removeFirst_0()
     ((QCameraViewfinderSettingsList*)this_)->removeFirst();
}

// [-2] void removeLast()
extern "C" Q_DECL_EXPORT
void C_QCameraViewfinderSettingsList_removeLast_0(void* this_ ) {
    // QCameraViewfinderSettingsList_removeLast_0()
     ((QCameraViewfinderSettingsList*)this_)->removeLast();
}

// [1] bool startsWith(const T &)
extern "C" Q_DECL_EXPORT
bool C_QCameraViewfinderSettingsList_startsWith_0(void* this_ , QCameraViewfinderSettings* t) {
    // QCameraViewfinderSettingsList_startsWith_0()
    auto rv =  ((QCameraViewfinderSettingsList*)this_)->startsWith(*t);
    return rv;
}

// [1] bool endsWith(const T &)
extern "C" Q_DECL_EXPORT
bool C_QCameraViewfinderSettingsList_endsWith_0(void* this_ , QCameraViewfinderSettings* t) {
    // QCameraViewfinderSettingsList_endsWith_0()
    auto rv =  ((QCameraViewfinderSettingsList*)this_)->endsWith(*t);
    return rv;
}

// [-3] QList<T> mid(int, int)
extern "C" Q_DECL_EXPORT
QCameraViewfinderSettingsList* C_QCameraViewfinderSettingsList_mid_0(void* this_ , int pos, int length) {
    // QCameraViewfinderSettingsList_mid_0()
    auto rv =  ((QCameraViewfinderSettingsList*)this_)->mid(pos, length);
    return (QCameraViewfinderSettingsList*)this_;
}

// [-3] T value(int)
extern "C" Q_DECL_EXPORT
QCameraViewfinderSettings* C_QCameraViewfinderSettingsList_value_0(void* this_ , int i) {
    // QCameraViewfinderSettingsList_value_0()
    auto rv =  ((QCameraViewfinderSettingsList*)this_)->value(i);
    return new decltype(rv)(rv);
}

// [-3] T value(int, const T &)
extern "C" Q_DECL_EXPORT
QCameraViewfinderSettings* C_QCameraViewfinderSettingsList_value_1(void* this_ , int i, QCameraViewfinderSettings* defaultValue) {
    // QCameraViewfinderSettingsList_value_1()
    auto rv =  ((QCameraViewfinderSettingsList*)this_)->value(i, *defaultValue);
    return new decltype(rv)(rv);
}

// [-2] void push_back(const T &)
extern "C" Q_DECL_EXPORT
void C_QCameraViewfinderSettingsList_push_back_0(void* this_ , QCameraViewfinderSettings* t) {
    // QCameraViewfinderSettingsList_push_back_0()
     ((QCameraViewfinderSettingsList*)this_)->push_back(*t);
}

// [-2] void push_front(const T &)
extern "C" Q_DECL_EXPORT
void C_QCameraViewfinderSettingsList_push_front_0(void* this_ , QCameraViewfinderSettings* t) {
    // QCameraViewfinderSettingsList_push_front_0()
     ((QCameraViewfinderSettingsList*)this_)->push_front(*t);
}

// [-3] T & front()
extern "C" Q_DECL_EXPORT
QCameraViewfinderSettings* C_QCameraViewfinderSettingsList_front_0(void* this_ ) {
    // QCameraViewfinderSettingsList_front_0()
    auto rv =  ((QCameraViewfinderSettingsList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] const T & front()
extern "C" Q_DECL_EXPORT
QCameraViewfinderSettings* C_QCameraViewfinderSettingsList_front_1(void* this_ ) {
    // QCameraViewfinderSettingsList_front_1()
    auto rv =  ((QCameraViewfinderSettingsList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] T & back()
extern "C" Q_DECL_EXPORT
QCameraViewfinderSettings* C_QCameraViewfinderSettingsList_back_0(void* this_ ) {
    // QCameraViewfinderSettingsList_back_0()
    auto rv =  ((QCameraViewfinderSettingsList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-3] const T & back()
extern "C" Q_DECL_EXPORT
QCameraViewfinderSettings* C_QCameraViewfinderSettingsList_back_1(void* this_ ) {
    // QCameraViewfinderSettingsList_back_1()
    auto rv =  ((QCameraViewfinderSettingsList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-2] void pop_front()
extern "C" Q_DECL_EXPORT
void C_QCameraViewfinderSettingsList_pop_front_0(void* this_ ) {
    // QCameraViewfinderSettingsList_pop_front_0()
     ((QCameraViewfinderSettingsList*)this_)->pop_front();
}

// [-2] void pop_back()
extern "C" Q_DECL_EXPORT
void C_QCameraViewfinderSettingsList_pop_back_0(void* this_ ) {
    // QCameraViewfinderSettingsList_pop_back_0()
     ((QCameraViewfinderSettingsList*)this_)->pop_back();
}

// [1] bool empty()
extern "C" Q_DECL_EXPORT
bool C_QCameraViewfinderSettingsList_empty_0(void* this_ ) {
    // QCameraViewfinderSettingsList_empty_0()
    auto rv =  ((QCameraViewfinderSettingsList*)this_)->empty();
    return rv;
}

// [-3] QList<T> & operator+=(const QList<T> &)
extern "C" Q_DECL_EXPORT
QCameraViewfinderSettingsList* C_QCameraViewfinderSettingsList_operator_add_equal_0(void* this_ , QCameraViewfinderSettingsList* l) {
    // QCameraViewfinderSettingsList_operator_add_equal_0()
    auto rv =  ((QCameraViewfinderSettingsList*)this_)->operator+=(*l);
    return (QCameraViewfinderSettingsList*)this_;
}

// [-3] QList<T> operator+(const QList<T> &)
extern "C" Q_DECL_EXPORT
QCameraViewfinderSettingsList* C_QCameraViewfinderSettingsList_operator_add_0(void* this_ , QCameraViewfinderSettingsList* l) {
    // QCameraViewfinderSettingsList_operator_add_0()
    auto rv =  ((QCameraViewfinderSettingsList*)this_)->operator+(*l);
    return (QCameraViewfinderSettingsList*)this_;
}

// [-3] QList<T> & operator+=(const T &)
extern "C" Q_DECL_EXPORT
QCameraViewfinderSettingsList* C_QCameraViewfinderSettingsList_operator_add_equal_1(void* this_ , QCameraViewfinderSettings* t) {
    // QCameraViewfinderSettingsList_operator_add_equal_1()
    auto rv =  ((QCameraViewfinderSettingsList*)this_)->operator+=(*t);
    return (QCameraViewfinderSettingsList*)this_;
}

// [-3] QList<T> & operator<<(const T &)
extern "C" Q_DECL_EXPORT
QCameraViewfinderSettingsList* C_QCameraViewfinderSettingsList_operator_left_shift_0(void* this_ , QCameraViewfinderSettings* t) {
    // QCameraViewfinderSettingsList_operator_left_shift_0()
    auto rv =  ((QCameraViewfinderSettingsList*)this_)->operator<<(*t);
    return (QCameraViewfinderSettingsList*)this_;
}

// [-3] QList<T> & operator<<(const QList<T> &)
extern "C" Q_DECL_EXPORT
QCameraViewfinderSettingsList* C_QCameraViewfinderSettingsList_operator_left_shift_1(void* this_ , QCameraViewfinderSettingsList* l) {
    // QCameraViewfinderSettingsList_operator_left_shift_1()
    auto rv =  ((QCameraViewfinderSettingsList*)this_)->operator<<(*l);
    return (QCameraViewfinderSettingsList*)this_;
}

// [-3] QVector<T> toVector()
extern "C" Q_DECL_EXPORT
void C_QCameraViewfinderSettingsList_toVector_0(void* this_ ) {
    // QCameraViewfinderSettingsList_toVector_0()
    auto rv =  ((QCameraViewfinderSettingsList*)this_)->toVector();
}

// [-3] std::list<T> toStdList()
extern "C" Q_DECL_EXPORT
void C_QCameraViewfinderSettingsList_toStdList_0(void* this_ ) {
    // QCameraViewfinderSettingsList_toStdList_0()
    auto rv =  ((QCameraViewfinderSettingsList*)this_)->toStdList();
}

//  body block end
