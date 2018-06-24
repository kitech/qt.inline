
// /usr/include/qt/QtCore/qstring.h
#ifndef protected
#define protected public
#endif
#include <qstring.h>
#include <QtCore>
#include "callback_inherit.h"

#ifndef QStringList
#ifndef QSTRINGLIST_H
typedef QList<QString> QStringList;
#endif
#endif
//  header block end

//  body block begin
// [-3] QHash<K, V> & operator=(const QHash<K, V> &)
extern "C" Q_DECL_EXPORT
void C_QVariantHash_operator_equal_0(void* this_ , QVariantHash* other) {
    // QVariantHash_operator_equal_0()
    auto rv =  ((QVariantHash*)this_)->operator=(*other);
}

// [-3] QHash<K, V> & operator=(QHash<K, V> &&)
extern "C" Q_DECL_EXPORT
void C_QVariantHash_operator_equal_1(void* this_ , QVariantHash* other) {
    // QVariantHash_operator_equal_1()
    auto rv =  ((QVariantHash*)this_)->operator=(*other);
}

// [-2] void swap(QHash<K, V> &)
extern "C" Q_DECL_EXPORT
void C_QVariantHash_swap_0(void* this_ , QVariantHash* other) {
    // QVariantHash_swap_0()
     ((QVariantHash*)this_)->swap(*other);
}

// [1] bool operator==(const QHash<K, V> &)
extern "C" Q_DECL_EXPORT
bool C_QVariantHash_operator_equal_equal_0(void* this_ , QVariantHash* other) {
    // QVariantHash_operator_equal_equal_0()
    auto rv =  ((QVariantHash*)this_)->operator==(*other);
    return rv;
}

// [1] bool operator!=(const QHash<K, V> &)
extern "C" Q_DECL_EXPORT
bool C_QVariantHash_operator_not_equal_0(void* this_ , QVariantHash* other) {
    // QVariantHash_operator_not_equal_0()
    auto rv =  ((QVariantHash*)this_)->operator!=(*other);
    return rv;
}

// [4] int size()
extern "C" Q_DECL_EXPORT
int C_QVariantHash_size_0(void* this_ ) {
    // QVariantHash_size_0()
    auto rv =  ((QVariantHash*)this_)->size();
    return rv;
}

// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_QVariantHash_isEmpty_0(void* this_ ) {
    // QVariantHash_isEmpty_0()
    auto rv =  ((QVariantHash*)this_)->isEmpty();
    return rv;
}

// [4] int capacity()
extern "C" Q_DECL_EXPORT
int C_QVariantHash_capacity_0(void* this_ ) {
    // QVariantHash_capacity_0()
    auto rv =  ((QVariantHash*)this_)->capacity();
    return rv;
}

// [-2] void reserve(int)
extern "C" Q_DECL_EXPORT
void C_QVariantHash_reserve_0(void* this_ , int size) {
    // QVariantHash_reserve_0()
     ((QVariantHash*)this_)->reserve(size);
}

// [-2] void squeeze()
extern "C" Q_DECL_EXPORT
void C_QVariantHash_squeeze_0(void* this_ ) {
    // QVariantHash_squeeze_0()
     ((QVariantHash*)this_)->squeeze();
}

// [-2] void detach()
extern "C" Q_DECL_EXPORT
void C_QVariantHash_detach_0(void* this_ ) {
    // QVariantHash_detach_0()
     ((QVariantHash*)this_)->detach();
}

// [1] bool isDetached()
extern "C" Q_DECL_EXPORT
bool C_QVariantHash_isDetached_0(void* this_ ) {
    // QVariantHash_isDetached_0()
    auto rv =  ((QVariantHash*)this_)->isDetached();
    return rv;
}

// [-2] void setSharable(bool)
extern "C" Q_DECL_EXPORT
void C_QVariantHash_setSharable_0(void* this_ , bool sharable) {
    // QVariantHash_setSharable_0()
     ((QVariantHash*)this_)->setSharable(sharable);
}

// [1] bool isSharedWith(const QHash<K, V> &)
extern "C" Q_DECL_EXPORT
bool C_QVariantHash_isSharedWith_0(void* this_ , QVariantHash* other) {
    // QVariantHash_isSharedWith_0()
    auto rv =  ((QVariantHash*)this_)->isSharedWith(*other);
    return rv;
}

// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_QVariantHash_clear_0(void* this_ ) {
    // QVariantHash_clear_0()
     ((QVariantHash*)this_)->clear();
}

// [4] int remove(const Key &)
extern "C" Q_DECL_EXPORT
int C_QVariantHash_remove_0(void* this_ , QString* key) {
    // QVariantHash_remove_0()
    auto rv =  ((QVariantHash*)this_)->remove(*key);
    return rv;
}

// [-3] T take(const Key &)
extern "C" Q_DECL_EXPORT
QVariant* C_QVariantHash_take_0(void* this_ , QString* key) {
    // QVariantHash_take_0()
    auto rv =  ((QVariantHash*)this_)->take(*key);
    return new decltype(rv)(rv);
}

// [1] bool contains(const Key &)
extern "C" Q_DECL_EXPORT
bool C_QVariantHash_contains_0(void* this_ , QString* key) {
    // QVariantHash_contains_0()
    auto rv =  ((QVariantHash*)this_)->contains(*key);
    return rv;
}

// [-3] const Key key(const T &)
extern "C" Q_DECL_EXPORT
void C_QVariantHash_key_0(void* this_ , QString* value) {
    // QVariantHash_key_0()
    auto rv =  ((QVariantHash*)this_)->key(*value);
}

// [-3] const Key key(const T &, const Key &)
extern "C" Q_DECL_EXPORT
void C_QVariantHash_key_1(void* this_ , QString* value, QString* defaultKey) {
    // QVariantHash_key_1()
    auto rv =  ((QVariantHash*)this_)->key(*value, *defaultKey);
}

// [-3] const T value(const Key &)
extern "C" Q_DECL_EXPORT
QVariant* C_QVariantHash_value_0(void* this_ , QString* key) {
    // QVariantHash_value_0()
    auto rv =  ((QVariantHash*)this_)->value(*key);
    return new decltype(rv)(rv);
}

// [-3] const T value(const Key &, const T &)
extern "C" Q_DECL_EXPORT
QVariant* C_QVariantHash_value_1(void* this_ , QString* key, QString* defaultValue) {
    // QVariantHash_value_1()
    auto rv =  ((QVariantHash*)this_)->value(*key, *defaultValue);
    return new decltype(rv)(rv);
}

// [-3] T & operator[](const Key &)
extern "C" Q_DECL_EXPORT
QVariant* C_QVariantHash_operator_get_index_0(void* this_ , QString* key) {
    // QVariantHash_operator_get_index_0()
    auto rv =  ((QVariantHash*)this_)->operator[](*key);
    return new decltype(rv)(rv);
}

// [-3] const T operator[](const Key &)
extern "C" Q_DECL_EXPORT
QVariant* C_QVariantHash_operator_get_index_1(void* this_ , QString* key) {
    // QVariantHash_operator_get_index_1()
    auto rv =  ((QVariantHash*)this_)->operator[](*key);
    return new decltype(rv)(rv);
}

// [-3] QList<Key> uniqueKeys()
extern "C" Q_DECL_EXPORT
void C_QVariantHash_uniqueKeys_0(void* this_ ) {
    // QVariantHash_uniqueKeys_0()
    auto rv =  ((QVariantHash*)this_)->uniqueKeys();
}

// [-3] QList<Key> keys()
extern "C" Q_DECL_EXPORT
void C_QVariantHash_keys_0(void* this_ ) {
    // QVariantHash_keys_0()
    auto rv =  ((QVariantHash*)this_)->keys();
}

// [-3] QList<Key> keys(const T &)
extern "C" Q_DECL_EXPORT
void C_QVariantHash_keys_1(void* this_ , QString* value) {
    // QVariantHash_keys_1()
    auto rv =  ((QVariantHash*)this_)->keys(*value);
}

// [-3] QList<T> values()
extern "C" Q_DECL_EXPORT
void C_QVariantHash_values_0(void* this_ ) {
    // QVariantHash_values_0()
    auto rv =  ((QVariantHash*)this_)->values();
}

// [-3] QList<T> values(const Key &)
extern "C" Q_DECL_EXPORT
void C_QVariantHash_values_1(void* this_ , QString* key) {
    // QVariantHash_values_1()
    auto rv =  ((QVariantHash*)this_)->values(*key);
}

// [4] int count(const Key &)
extern "C" Q_DECL_EXPORT
int C_QVariantHash_count_0(void* this_ , QString* key) {
    // QVariantHash_count_0()
    auto rv =  ((QVariantHash*)this_)->count(*key);
    return rv;
}

// [-3] QHash::iterator begin()
extern "C" Q_DECL_EXPORT
QVariantHash::iterator* C_QVariantHash_begin_0(void* this_ ) {
    // QVariantHash_begin_0()
    auto rv =  ((QVariantHash*)this_)->begin();
    return new decltype(rv)(rv);
}

// [-3] QHash::iterator end()
extern "C" Q_DECL_EXPORT
QVariantHash::iterator* C_QVariantHash_end_0(void* this_ ) {
    // QVariantHash_end_0()
    auto rv =  ((QVariantHash*)this_)->end();
    return new decltype(rv)(rv);
}

// [-3] QHash::key_iterator keyBegin()
extern "C" Q_DECL_EXPORT
QVariantHash::key_iterator* C_QVariantHash_keyBegin_0(void* this_ ) {
    // QVariantHash_keyBegin_0()
    auto rv =  ((QVariantHash*)this_)->keyBegin();
    return new decltype(rv)(rv);
}

// [-3] QHash::key_iterator keyEnd()
extern "C" Q_DECL_EXPORT
QVariantHash::key_iterator* C_QVariantHash_keyEnd_0(void* this_ ) {
    // QVariantHash_keyEnd_0()
    auto rv =  ((QVariantHash*)this_)->keyEnd();
    return new decltype(rv)(rv);
}

// [-3] QHash::key_value_iterator keyValueBegin()
extern "C" Q_DECL_EXPORT
QVariantHash::key_value_iterator* C_QVariantHash_keyValueBegin_0(void* this_ ) {
    // QVariantHash_keyValueBegin_0()
    auto rv =  ((QVariantHash*)this_)->keyValueBegin();
    return new decltype(rv)(rv);
}

// [-3] QHash::key_value_iterator keyValueEnd()
extern "C" Q_DECL_EXPORT
QVariantHash::key_value_iterator* C_QVariantHash_keyValueEnd_0(void* this_ ) {
    // QVariantHash_keyValueEnd_0()
    auto rv =  ((QVariantHash*)this_)->keyValueEnd();
    return new decltype(rv)(rv);
}

// [-3] QPair<QHash::iterator, QHash::iterator> equal_range(const Key &)
extern "C" Q_DECL_EXPORT
void C_QVariantHash_equal_range_0(void* this_ , QString* key) {
    // QVariantHash_equal_range_0()
    auto rv =  ((QVariantHash*)this_)->equal_range(*key);
}

// [-3] QHash::iterator erase(QHash::iterator)
extern "C" Q_DECL_EXPORT
QVariantHash::iterator* C_QVariantHash_erase_0(void* this_ , QVariantHash::iterator* it) {
    // QVariantHash_erase_0()
    auto rv =  ((QVariantHash*)this_)->erase(*it);
    return new decltype(rv)(rv);
}

// [-3] QHash::iterator erase(QHash::const_iterator)
extern "C" Q_DECL_EXPORT
QVariantHash::iterator* C_QVariantHash_erase_1(void* this_ , QVariantHash::const_iterator* it) {
    // QVariantHash_erase_1()
    auto rv =  ((QVariantHash*)this_)->erase(*it);
    return new decltype(rv)(rv);
}

// [4] int count()
extern "C" Q_DECL_EXPORT
int C_QVariantHash_count_1(void* this_ ) {
    // QVariantHash_count_1()
    auto rv =  ((QVariantHash*)this_)->count();
    return rv;
}

// [-3] QHash::iterator find(const Key &)
extern "C" Q_DECL_EXPORT
QVariantHash::iterator* C_QVariantHash_find_0(void* this_ , QString* key) {
    // QVariantHash_find_0()
    auto rv =  ((QVariantHash*)this_)->find(*key);
    return new decltype(rv)(rv);
}

// [-3] QHash::iterator insert(const Key &, const T &)
extern "C" Q_DECL_EXPORT
QVariantHash::iterator* C_QVariantHash_insert_0(void* this_ , QString* key, QString* value) {
    // QVariantHash_insert_0()
    auto rv =  ((QVariantHash*)this_)->insert(*key, *value);
    return new decltype(rv)(rv);
}

// [-3] QHash::iterator insertMulti(const Key &, const T &)
extern "C" Q_DECL_EXPORT
QVariantHash::iterator* C_QVariantHash_insertMulti_0(void* this_ , QString* key, QString* value) {
    // QVariantHash_insertMulti_0()
    auto rv =  ((QVariantHash*)this_)->insertMulti(*key, *value);
    return new decltype(rv)(rv);
}

// [-3] QHash<K, V> & unite(const QHash<K, V> &)
extern "C" Q_DECL_EXPORT
void C_QVariantHash_unite_0(void* this_ , QVariantHash* other) {
    // QVariantHash_unite_0()
    auto rv =  ((QVariantHash*)this_)->unite(*other);
}

// [1] bool empty()
extern "C" Q_DECL_EXPORT
bool C_QVariantHash_empty_0(void* this_ ) {
    // QVariantHash_empty_0()
    auto rv =  ((QVariantHash*)this_)->empty();
    return rv;
}

//  body block end
