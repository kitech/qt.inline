
#ifndef QT_MINIMAL
#if QT_CONFIG(graphicsview)
// /usr/include/qt/QtWidgets/qgraphicswidget.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgraphicswidget.h>
#include <QtWidgets>
#include "callback_inherit.h"

#ifndef QGraphicsWidgetList
#ifndef QGRAPHICSWIDGETLIST_H
typedef QList<QGraphicsWidget *> QGraphicsWidgetList;
#endif
#endif
//  header block end

//  footer block begin
#endif // #if QT_CONFIG(graphicsview)
#endif // #ifndef QT_MINIMAL
//  footer block end

//  body block begin
// [-3] QList<T> & operator=(const QList<T> &)
extern "C" Q_DECL_EXPORT
QGraphicsWidgetList* C_QGraphicsWidgetList_operator_equal_0(void* this_ , QGraphicsWidgetList* l) {
    // QGraphicsWidgetList_operator_equal_0()
    auto rv =  ((QGraphicsWidgetList*)this_)->operator=(*l);
    return (QGraphicsWidgetList*)this_;
}

// [-3] QList<T> & operator=(QList<T> &&)
extern "C" Q_DECL_EXPORT
QGraphicsWidgetList* C_QGraphicsWidgetList_operator_equal_1(void* this_ , QGraphicsWidgetList* other) {
    // QGraphicsWidgetList_operator_equal_1()
    auto rv =  ((QGraphicsWidgetList*)this_)->operator=(*other);
    return (QGraphicsWidgetList*)this_;
}

// [-2] void swap(QList<T> &)
extern "C" Q_DECL_EXPORT
void C_QGraphicsWidgetList_swap_0(void* this_ , QGraphicsWidgetList* other) {
    // QGraphicsWidgetList_swap_0()
     ((QGraphicsWidgetList*)this_)->swap(*other);
}

// [1] bool operator==(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QGraphicsWidgetList_operator_equal_equal_0(void* this_ , QGraphicsWidgetList* l) {
    // QGraphicsWidgetList_operator_equal_equal_0()
    auto rv =  ((QGraphicsWidgetList*)this_)->operator==(*l);
    return rv;
}

// [1] bool operator!=(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QGraphicsWidgetList_operator_not_equal_0(void* this_ , QGraphicsWidgetList* l) {
    // QGraphicsWidgetList_operator_not_equal_0()
    auto rv =  ((QGraphicsWidgetList*)this_)->operator!=(*l);
    return rv;
}

// [4] int size()
extern "C" Q_DECL_EXPORT
int C_QGraphicsWidgetList_size_0(void* this_ ) {
    // QGraphicsWidgetList_size_0()
    auto rv =  ((QGraphicsWidgetList*)this_)->size();
    return rv;
}

// [-2] void detach()
extern "C" Q_DECL_EXPORT
void C_QGraphicsWidgetList_detach_0(void* this_ ) {
    // QGraphicsWidgetList_detach_0()
     ((QGraphicsWidgetList*)this_)->detach();
}

// [-2] void detachShared()
extern "C" Q_DECL_EXPORT
void C_QGraphicsWidgetList_detachShared_0(void* this_ ) {
    // QGraphicsWidgetList_detachShared_0()
     ((QGraphicsWidgetList*)this_)->detachShared();
}

// [1] bool isDetached()
extern "C" Q_DECL_EXPORT
bool C_QGraphicsWidgetList_isDetached_0(void* this_ ) {
    // QGraphicsWidgetList_isDetached_0()
    auto rv =  ((QGraphicsWidgetList*)this_)->isDetached();
    return rv;
}

// [-2] void setSharable(bool)
extern "C" Q_DECL_EXPORT
void C_QGraphicsWidgetList_setSharable_0(void* this_ , bool sharable) {
    // QGraphicsWidgetList_setSharable_0()
     ((QGraphicsWidgetList*)this_)->setSharable(sharable);
}

// [1] bool isSharedWith(const QList<T> &)
extern "C" Q_DECL_EXPORT
bool C_QGraphicsWidgetList_isSharedWith_0(void* this_ , QGraphicsWidgetList* other) {
    // QGraphicsWidgetList_isSharedWith_0()
    auto rv =  ((QGraphicsWidgetList*)this_)->isSharedWith(*other);
    return rv;
}

// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_QGraphicsWidgetList_isEmpty_0(void* this_ ) {
    // QGraphicsWidgetList_isEmpty_0()
    auto rv =  ((QGraphicsWidgetList*)this_)->isEmpty();
    return rv;
}

// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_QGraphicsWidgetList_clear_0(void* this_ ) {
    // QGraphicsWidgetList_clear_0()
     ((QGraphicsWidgetList*)this_)->clear();
}

// [-3] const T & at(int)
extern "C" Q_DECL_EXPORT
QGraphicsWidget ** C_QGraphicsWidgetList_at_0(void* this_ , int i) {
    // QGraphicsWidgetList_at_0()
    auto rv =  ((QGraphicsWidgetList*)this_)->at(i);
    return new decltype(rv)(rv);
}

// [-3] const T & operator[](int)
extern "C" Q_DECL_EXPORT
QGraphicsWidget ** C_QGraphicsWidgetList_operator_get_index_0(void* this_ , int i) {
    // QGraphicsWidgetList_operator_get_index_0()
    auto rv =  ((QGraphicsWidgetList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-3] T & operator[](int)
extern "C" Q_DECL_EXPORT
QGraphicsWidget ** C_QGraphicsWidgetList_operator_get_index_1(void* this_ , int i) {
    // QGraphicsWidgetList_operator_get_index_1()
    auto rv =  ((QGraphicsWidgetList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-2] void reserve(int)
extern "C" Q_DECL_EXPORT
void C_QGraphicsWidgetList_reserve_0(void* this_ , int size) {
    // QGraphicsWidgetList_reserve_0()
     ((QGraphicsWidgetList*)this_)->reserve(size);
}

// [-2] void append(const T &)
extern "C" Q_DECL_EXPORT
void C_QGraphicsWidgetList_append_0(void* this_ , QGraphicsWidget * t) {
    // QGraphicsWidgetList_append_0()
     ((QGraphicsWidgetList*)this_)->append(t);
}

// [-2] void append(const QList<T> &)
extern "C" Q_DECL_EXPORT
void C_QGraphicsWidgetList_append_1(void* this_ , QGraphicsWidgetList* t) {
    // QGraphicsWidgetList_append_1()
     ((QGraphicsWidgetList*)this_)->append(*t);
}

// [-2] void prepend(const T &)
extern "C" Q_DECL_EXPORT
void C_QGraphicsWidgetList_prepend_0(void* this_ , QGraphicsWidget * t) {
    // QGraphicsWidgetList_prepend_0()
     ((QGraphicsWidgetList*)this_)->prepend(t);
}

// [-2] void insert(int, const T &)
extern "C" Q_DECL_EXPORT
void C_QGraphicsWidgetList_insert_0(void* this_ , int i, QGraphicsWidget * t) {
    // QGraphicsWidgetList_insert_0()
     ((QGraphicsWidgetList*)this_)->insert(i, t);
}

// [-2] void replace(int, const T &)
extern "C" Q_DECL_EXPORT
void C_QGraphicsWidgetList_replace_0(void* this_ , int i, QGraphicsWidget * t) {
    // QGraphicsWidgetList_replace_0()
     ((QGraphicsWidgetList*)this_)->replace(i, t);
}

// [-2] void removeAt(int)
extern "C" Q_DECL_EXPORT
void C_QGraphicsWidgetList_removeAt_0(void* this_ , int i) {
    // QGraphicsWidgetList_removeAt_0()
     ((QGraphicsWidgetList*)this_)->removeAt(i);
}

// [4] int removeAll(const T &)
extern "C" Q_DECL_EXPORT
int C_QGraphicsWidgetList_removeAll_0(void* this_ , QGraphicsWidget * t) {
    // QGraphicsWidgetList_removeAll_0()
    auto rv =  ((QGraphicsWidgetList*)this_)->removeAll(t);
    return rv;
}

// [1] bool removeOne(const T &)
extern "C" Q_DECL_EXPORT
bool C_QGraphicsWidgetList_removeOne_0(void* this_ , QGraphicsWidget * t) {
    // QGraphicsWidgetList_removeOne_0()
    auto rv =  ((QGraphicsWidgetList*)this_)->removeOne(t);
    return rv;
}

// [-3] T takeAt(int)
extern "C" Q_DECL_EXPORT
QGraphicsWidget ** C_QGraphicsWidgetList_takeAt_0(void* this_ , int i) {
    // QGraphicsWidgetList_takeAt_0()
    auto rv =  ((QGraphicsWidgetList*)this_)->takeAt(i);
    return new decltype(rv)(rv);
}

// [-3] T takeFirst()
extern "C" Q_DECL_EXPORT
QGraphicsWidget ** C_QGraphicsWidgetList_takeFirst_0(void* this_ ) {
    // QGraphicsWidgetList_takeFirst_0()
    auto rv =  ((QGraphicsWidgetList*)this_)->takeFirst();
    return new decltype(rv)(rv);
}

// [-3] T takeLast()
extern "C" Q_DECL_EXPORT
QGraphicsWidget ** C_QGraphicsWidgetList_takeLast_0(void* this_ ) {
    // QGraphicsWidgetList_takeLast_0()
    auto rv =  ((QGraphicsWidgetList*)this_)->takeLast();
    return new decltype(rv)(rv);
}

// [-2] void move(int, int)
extern "C" Q_DECL_EXPORT
void C_QGraphicsWidgetList_move_0(void* this_ , int from, int to) {
    // QGraphicsWidgetList_move_0()
     ((QGraphicsWidgetList*)this_)->move(from, to);
}

// [-2] void swap(int, int)
extern "C" Q_DECL_EXPORT
void C_QGraphicsWidgetList_swap_1(void* this_ , int i, int j) {
    // QGraphicsWidgetList_swap_1()
     ((QGraphicsWidgetList*)this_)->swap(i, j);
}

// [4] int indexOf(const T &, int)
extern "C" Q_DECL_EXPORT
int C_QGraphicsWidgetList_indexOf_0(void* this_ , QGraphicsWidget * t, int from) {
    // QGraphicsWidgetList_indexOf_0()
    auto rv =  ((QGraphicsWidgetList*)this_)->indexOf(t, from);
    return rv;
}

// [4] int lastIndexOf(const T &, int)
extern "C" Q_DECL_EXPORT
int C_QGraphicsWidgetList_lastIndexOf_0(void* this_ , QGraphicsWidget * t, int from) {
    // QGraphicsWidgetList_lastIndexOf_0()
    auto rv =  ((QGraphicsWidgetList*)this_)->lastIndexOf(t, from);
    return rv;
}

// [1] bool contains(const T &)
extern "C" Q_DECL_EXPORT
bool C_QGraphicsWidgetList_contains_0(void* this_ , QGraphicsWidget * t) {
    // QGraphicsWidgetList_contains_0()
    auto rv =  ((QGraphicsWidgetList*)this_)->contains(t);
    return rv;
}

// [4] int count(const T &)
extern "C" Q_DECL_EXPORT
int C_QGraphicsWidgetList_count_0(void* this_ , QGraphicsWidget * t) {
    // QGraphicsWidgetList_count_0()
    auto rv =  ((QGraphicsWidgetList*)this_)->count(t);
    return rv;
}

// [-3] QList::iterator begin()
extern "C" Q_DECL_EXPORT
QGraphicsWidgetList::iterator* C_QGraphicsWidgetList_begin_0(void* this_ ) {
    // QGraphicsWidgetList_begin_0()
    auto rv =  ((QGraphicsWidgetList*)this_)->begin();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator end()
extern "C" Q_DECL_EXPORT
QGraphicsWidgetList::iterator* C_QGraphicsWidgetList_end_0(void* this_ ) {
    // QGraphicsWidgetList_end_0()
    auto rv =  ((QGraphicsWidgetList*)this_)->end();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rbegin()
extern "C" Q_DECL_EXPORT
QGraphicsWidgetList::reverse_iterator* C_QGraphicsWidgetList_rbegin_0(void* this_ ) {
    // QGraphicsWidgetList_rbegin_0()
    auto rv =  ((QGraphicsWidgetList*)this_)->rbegin();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rend()
extern "C" Q_DECL_EXPORT
QGraphicsWidgetList::reverse_iterator* C_QGraphicsWidgetList_rend_0(void* this_ ) {
    // QGraphicsWidgetList_rend_0()
    auto rv =  ((QGraphicsWidgetList*)this_)->rend();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator insert(QList::iterator, const T &)
extern "C" Q_DECL_EXPORT
QGraphicsWidgetList::iterator* C_QGraphicsWidgetList_insert_1(void* this_ , QGraphicsWidgetList::iterator* before, QGraphicsWidget * t) {
    // QGraphicsWidgetList_insert_1()
    auto rv =  ((QGraphicsWidgetList*)this_)->insert(*before, t);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator)
extern "C" Q_DECL_EXPORT
QGraphicsWidgetList::iterator* C_QGraphicsWidgetList_erase_0(void* this_ , QGraphicsWidgetList::iterator* pos) {
    // QGraphicsWidgetList_erase_0()
    auto rv =  ((QGraphicsWidgetList*)this_)->erase(*pos);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator, QList::iterator)
extern "C" Q_DECL_EXPORT
QGraphicsWidgetList::iterator* C_QGraphicsWidgetList_erase_1(void* this_ , QGraphicsWidgetList::iterator* first, QGraphicsWidgetList::iterator* last) {
    // QGraphicsWidgetList_erase_1()
    auto rv =  ((QGraphicsWidgetList*)this_)->erase(*first, *last);
    return new decltype(rv)(rv);
}

// [4] int count()
extern "C" Q_DECL_EXPORT
int C_QGraphicsWidgetList_count_1(void* this_ ) {
    // QGraphicsWidgetList_count_1()
    auto rv =  ((QGraphicsWidgetList*)this_)->count();
    return rv;
}

// [4] int length()
extern "C" Q_DECL_EXPORT
int C_QGraphicsWidgetList_length_0(void* this_ ) {
    // QGraphicsWidgetList_length_0()
    auto rv =  ((QGraphicsWidgetList*)this_)->length();
    return rv;
}

// [-3] T & first()
extern "C" Q_DECL_EXPORT
QGraphicsWidget ** C_QGraphicsWidgetList_first_0(void* this_ ) {
    // QGraphicsWidgetList_first_0()
    auto rv =  ((QGraphicsWidgetList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] const T & constFirst()
extern "C" Q_DECL_EXPORT
QGraphicsWidget ** C_QGraphicsWidgetList_constFirst_0(void* this_ ) {
    // QGraphicsWidgetList_constFirst_0()
    auto rv =  ((QGraphicsWidgetList*)this_)->constFirst();
    return new decltype(rv)(rv);
}

// [-3] const T & first()
extern "C" Q_DECL_EXPORT
QGraphicsWidget ** C_QGraphicsWidgetList_first_1(void* this_ ) {
    // QGraphicsWidgetList_first_1()
    auto rv =  ((QGraphicsWidgetList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] T & last()
extern "C" Q_DECL_EXPORT
QGraphicsWidget ** C_QGraphicsWidgetList_last_0(void* this_ ) {
    // QGraphicsWidgetList_last_0()
    auto rv =  ((QGraphicsWidgetList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & last()
extern "C" Q_DECL_EXPORT
QGraphicsWidget ** C_QGraphicsWidgetList_last_1(void* this_ ) {
    // QGraphicsWidgetList_last_1()
    auto rv =  ((QGraphicsWidgetList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & constLast()
extern "C" Q_DECL_EXPORT
QGraphicsWidget ** C_QGraphicsWidgetList_constLast_0(void* this_ ) {
    // QGraphicsWidgetList_constLast_0()
    auto rv =  ((QGraphicsWidgetList*)this_)->constLast();
    return new decltype(rv)(rv);
}

// [-2] void removeFirst()
extern "C" Q_DECL_EXPORT
void C_QGraphicsWidgetList_removeFirst_0(void* this_ ) {
    // QGraphicsWidgetList_removeFirst_0()
     ((QGraphicsWidgetList*)this_)->removeFirst();
}

// [-2] void removeLast()
extern "C" Q_DECL_EXPORT
void C_QGraphicsWidgetList_removeLast_0(void* this_ ) {
    // QGraphicsWidgetList_removeLast_0()
     ((QGraphicsWidgetList*)this_)->removeLast();
}

// [1] bool startsWith(const T &)
extern "C" Q_DECL_EXPORT
bool C_QGraphicsWidgetList_startsWith_0(void* this_ , QGraphicsWidget * t) {
    // QGraphicsWidgetList_startsWith_0()
    auto rv =  ((QGraphicsWidgetList*)this_)->startsWith(t);
    return rv;
}

// [1] bool endsWith(const T &)
extern "C" Q_DECL_EXPORT
bool C_QGraphicsWidgetList_endsWith_0(void* this_ , QGraphicsWidget * t) {
    // QGraphicsWidgetList_endsWith_0()
    auto rv =  ((QGraphicsWidgetList*)this_)->endsWith(t);
    return rv;
}

// [-3] QList<T> mid(int, int)
extern "C" Q_DECL_EXPORT
QGraphicsWidgetList* C_QGraphicsWidgetList_mid_0(void* this_ , int pos, int length) {
    // QGraphicsWidgetList_mid_0()
    auto rv =  ((QGraphicsWidgetList*)this_)->mid(pos, length);
    return (QGraphicsWidgetList*)this_;
}

// [-3] T value(int)
extern "C" Q_DECL_EXPORT
QGraphicsWidget ** C_QGraphicsWidgetList_value_0(void* this_ , int i) {
    // QGraphicsWidgetList_value_0()
    auto rv =  ((QGraphicsWidgetList*)this_)->value(i);
    return new decltype(rv)(rv);
}

// [-3] T value(int, const T &)
extern "C" Q_DECL_EXPORT
QGraphicsWidget ** C_QGraphicsWidgetList_value_1(void* this_ , int i, QGraphicsWidget * defaultValue) {
    // QGraphicsWidgetList_value_1()
    auto rv =  ((QGraphicsWidgetList*)this_)->value(i, defaultValue);
    return new decltype(rv)(rv);
}

// [-2] void push_back(const T &)
extern "C" Q_DECL_EXPORT
void C_QGraphicsWidgetList_push_back_0(void* this_ , QGraphicsWidget * t) {
    // QGraphicsWidgetList_push_back_0()
     ((QGraphicsWidgetList*)this_)->push_back(t);
}

// [-2] void push_front(const T &)
extern "C" Q_DECL_EXPORT
void C_QGraphicsWidgetList_push_front_0(void* this_ , QGraphicsWidget * t) {
    // QGraphicsWidgetList_push_front_0()
     ((QGraphicsWidgetList*)this_)->push_front(t);
}

// [-3] T & front()
extern "C" Q_DECL_EXPORT
QGraphicsWidget ** C_QGraphicsWidgetList_front_0(void* this_ ) {
    // QGraphicsWidgetList_front_0()
    auto rv =  ((QGraphicsWidgetList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] const T & front()
extern "C" Q_DECL_EXPORT
QGraphicsWidget ** C_QGraphicsWidgetList_front_1(void* this_ ) {
    // QGraphicsWidgetList_front_1()
    auto rv =  ((QGraphicsWidgetList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] T & back()
extern "C" Q_DECL_EXPORT
QGraphicsWidget ** C_QGraphicsWidgetList_back_0(void* this_ ) {
    // QGraphicsWidgetList_back_0()
    auto rv =  ((QGraphicsWidgetList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-3] const T & back()
extern "C" Q_DECL_EXPORT
QGraphicsWidget ** C_QGraphicsWidgetList_back_1(void* this_ ) {
    // QGraphicsWidgetList_back_1()
    auto rv =  ((QGraphicsWidgetList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-2] void pop_front()
extern "C" Q_DECL_EXPORT
void C_QGraphicsWidgetList_pop_front_0(void* this_ ) {
    // QGraphicsWidgetList_pop_front_0()
     ((QGraphicsWidgetList*)this_)->pop_front();
}

// [-2] void pop_back()
extern "C" Q_DECL_EXPORT
void C_QGraphicsWidgetList_pop_back_0(void* this_ ) {
    // QGraphicsWidgetList_pop_back_0()
     ((QGraphicsWidgetList*)this_)->pop_back();
}

// [1] bool empty()
extern "C" Q_DECL_EXPORT
bool C_QGraphicsWidgetList_empty_0(void* this_ ) {
    // QGraphicsWidgetList_empty_0()
    auto rv =  ((QGraphicsWidgetList*)this_)->empty();
    return rv;
}

// [-3] QList<T> & operator+=(const QList<T> &)
extern "C" Q_DECL_EXPORT
QGraphicsWidgetList* C_QGraphicsWidgetList_operator_add_equal_0(void* this_ , QGraphicsWidgetList* l) {
    // QGraphicsWidgetList_operator_add_equal_0()
    auto rv =  ((QGraphicsWidgetList*)this_)->operator+=(*l);
    return (QGraphicsWidgetList*)this_;
}

// [-3] QList<T> operator+(const QList<T> &)
extern "C" Q_DECL_EXPORT
QGraphicsWidgetList* C_QGraphicsWidgetList_operator_add_0(void* this_ , QGraphicsWidgetList* l) {
    // QGraphicsWidgetList_operator_add_0()
    auto rv =  ((QGraphicsWidgetList*)this_)->operator+(*l);
    return (QGraphicsWidgetList*)this_;
}

// [-3] QList<T> & operator+=(const T &)
extern "C" Q_DECL_EXPORT
QGraphicsWidgetList* C_QGraphicsWidgetList_operator_add_equal_1(void* this_ , QGraphicsWidget * t) {
    // QGraphicsWidgetList_operator_add_equal_1()
    auto rv =  ((QGraphicsWidgetList*)this_)->operator+=(t);
    return (QGraphicsWidgetList*)this_;
}

// [-3] QList<T> & operator<<(const T &)
extern "C" Q_DECL_EXPORT
QGraphicsWidgetList* C_QGraphicsWidgetList_operator_left_shift_0(void* this_ , QGraphicsWidget * t) {
    // QGraphicsWidgetList_operator_left_shift_0()
    auto rv =  ((QGraphicsWidgetList*)this_)->operator<<(t);
    return (QGraphicsWidgetList*)this_;
}

// [-3] QList<T> & operator<<(const QList<T> &)
extern "C" Q_DECL_EXPORT
QGraphicsWidgetList* C_QGraphicsWidgetList_operator_left_shift_1(void* this_ , QGraphicsWidgetList* l) {
    // QGraphicsWidgetList_operator_left_shift_1()
    auto rv =  ((QGraphicsWidgetList*)this_)->operator<<(*l);
    return (QGraphicsWidgetList*)this_;
}

// [-3] QVector<T> toVector()
extern "C" Q_DECL_EXPORT
void C_QGraphicsWidgetList_toVector_0(void* this_ ) {
    // QGraphicsWidgetList_toVector_0()
    auto rv =  ((QGraphicsWidgetList*)this_)->toVector();
}

// [-3] std::list<T> toStdList()
extern "C" Q_DECL_EXPORT
void C_QGraphicsWidgetList_toStdList_0(void* this_ ) {
    // QGraphicsWidgetList_toStdList_0()
    auto rv =  ((QGraphicsWidgetList*)this_)->toStdList();
}

//  body block end
