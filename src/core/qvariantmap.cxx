
// /usr/include/qt/QtCore/qstring.h
#include <qstring.h>
#include <QtCore>
#include "callback_inherit.h"

//  header block end

//  body block begin
// [-3] QMap<Key, T> & operator=(const QMap<Key, T> &)
extern "C"
void C_QVariantMap_operator_equal_0(void* this_ , QVariantMap* other) {
    // QVariantMap_operator_equal_0()
    auto rv =  ((QVariantMap*)this_)->operator=(*other);
}

// [-3] QMap<Key, T> & operator=(QMap<Key, T> &&)
extern "C"
void C_QVariantMap_operator_equal_1(void* this_ , QVariantMap* other) {
    // QVariantMap_operator_equal_1()
    auto rv =  ((QVariantMap*)this_)->operator=(*other);
}

// [-2] void swap(QMap<Key, T> &)
extern "C"
void C_QVariantMap_swap_0(void* this_ , QVariantMap* other) {
    // QVariantMap_swap_0()
     ((QVariantMap*)this_)->swap(*other);
}

// [-3] std::map<Key, T> toStdMap()
extern "C"
void C_QVariantMap_toStdMap_0(void* this_ ) {
    // QVariantMap_toStdMap_0()
    auto rv =  ((QVariantMap*)this_)->toStdMap();
}

// [1] bool operator==(const QMap<Key, T> &)
extern "C"
bool C_QVariantMap_operator_equal_equal_0(void* this_ , QVariantMap* other) {
    // QVariantMap_operator_equal_equal_0()
    auto rv =  ((QVariantMap*)this_)->operator==(*other);
    return rv;
}

// [1] bool operator!=(const QMap<Key, T> &)
extern "C"
bool C_QVariantMap_operator_not_equal_0(void* this_ , QVariantMap* other) {
    // QVariantMap_operator_not_equal_0()
    auto rv =  ((QVariantMap*)this_)->operator!=(*other);
    return rv;
}

// [4] int size()
extern "C"
int C_QVariantMap_size_0(void* this_ ) {
    // QVariantMap_size_0()
    auto rv =  ((QVariantMap*)this_)->size();
    return rv;
}

// [1] bool isEmpty()
extern "C"
bool C_QVariantMap_isEmpty_0(void* this_ ) {
    // QVariantMap_isEmpty_0()
    auto rv =  ((QVariantMap*)this_)->isEmpty();
    return rv;
}

// [-2] void detach()
extern "C"
void C_QVariantMap_detach_0(void* this_ ) {
    // QVariantMap_detach_0()
     ((QVariantMap*)this_)->detach();
}

// [1] bool isDetached()
extern "C"
bool C_QVariantMap_isDetached_0(void* this_ ) {
    // QVariantMap_isDetached_0()
    auto rv =  ((QVariantMap*)this_)->isDetached();
    return rv;
}

// [-2] void setSharable(_Bool)
extern "C"
void C_QVariantMap_setSharable_0(void* this_ , bool sharable) {
    // QVariantMap_setSharable_0()
     ((QVariantMap*)this_)->setSharable(sharable);
}

// [1] bool isSharedWith(const QMap<Key, T> &)
extern "C"
bool C_QVariantMap_isSharedWith_0(void* this_ , QVariantMap* other) {
    // QVariantMap_isSharedWith_0()
    auto rv =  ((QVariantMap*)this_)->isSharedWith(*other);
    return rv;
}

// [-2] void clear()
extern "C"
void C_QVariantMap_clear_0(void* this_ ) {
    // QVariantMap_clear_0()
     ((QVariantMap*)this_)->clear();
}

// [4] int remove(const Key &)
extern "C"
int C_QVariantMap_remove_0(void* this_ , QString* key) {
    // QVariantMap_remove_0()
    auto rv =  ((QVariantMap*)this_)->remove(*key);
    return rv;
}

// [-3] T take(const Key &)
extern "C"
QVariant* C_QVariantMap_take_0(void* this_ , QString* key) {
    // QVariantMap_take_0()
    auto rv =  ((QVariantMap*)this_)->take(*key);
    return new decltype(rv)(rv);
}

// [1] bool contains(const Key &)
extern "C"
bool C_QVariantMap_contains_0(void* this_ , QString* key) {
    // QVariantMap_contains_0()
    auto rv =  ((QVariantMap*)this_)->contains(*key);
    return rv;
}

// [-3] const Key key(const T &, const Key &)
extern "C"
void C_QVariantMap_key_0(void* this_ , QString* value, QString* defaultKey) {
    // QVariantMap_key_0()
    auto rv =  ((QVariantMap*)this_)->key(*value, *defaultKey);
}

// [-3] const T value(const Key &, const T &)
extern "C"
QVariant* C_QVariantMap_value_0(void* this_ , QString* key, QString* defaultValue) {
    // QVariantMap_value_0()
    auto rv =  ((QVariantMap*)this_)->value(*key, *defaultValue);
    return new decltype(rv)(rv);
}

// [-3] T & operator[](const Key &)
extern "C"
QVariant* C_QVariantMap_operator_get_index_0(void* this_ , QString* key) {
    // QVariantMap_operator_get_index_0()
    auto rv =  ((QVariantMap*)this_)->operator[](*key);
    return new decltype(rv)(rv);
}

// [-3] const T operator[](const Key &)
extern "C"
QVariant* C_QVariantMap_operator_get_index_1(void* this_ , QString* key) {
    // QVariantMap_operator_get_index_1()
    auto rv =  ((QVariantMap*)this_)->operator[](*key);
    return new decltype(rv)(rv);
}

// [-3] QList<Key> uniqueKeys()
extern "C"
void C_QVariantMap_uniqueKeys_0(void* this_ ) {
    // QVariantMap_uniqueKeys_0()
    auto rv =  ((QVariantMap*)this_)->uniqueKeys();
}

// [-3] QList<Key> keys()
extern "C"
void C_QVariantMap_keys_0(void* this_ ) {
    // QVariantMap_keys_0()
    auto rv =  ((QVariantMap*)this_)->keys();
}

// [-3] QList<Key> keys(const T &)
extern "C"
void C_QVariantMap_keys_1(void* this_ , QString* value) {
    // QVariantMap_keys_1()
    auto rv =  ((QVariantMap*)this_)->keys(*value);
}

// [-3] QList<T> values()
extern "C"
void C_QVariantMap_values_0(void* this_ ) {
    // QVariantMap_values_0()
    auto rv =  ((QVariantMap*)this_)->values();
}

// [-3] QList<T> values(const Key &)
extern "C"
void C_QVariantMap_values_1(void* this_ , QString* key) {
    // QVariantMap_values_1()
    auto rv =  ((QVariantMap*)this_)->values(*key);
}

// [4] int count(const Key &)
extern "C"
int C_QVariantMap_count_0(void* this_ , QString* key) {
    // QVariantMap_count_0()
    auto rv =  ((QVariantMap*)this_)->count(*key);
    return rv;
}

// [-3] const Key & firstKey()
extern "C"
void C_QVariantMap_firstKey_0(void* this_ ) {
    // QVariantMap_firstKey_0()
    auto rv =  ((QVariantMap*)this_)->firstKey();
}

// [-3] const Key & lastKey()
extern "C"
void C_QVariantMap_lastKey_0(void* this_ ) {
    // QVariantMap_lastKey_0()
    auto rv =  ((QVariantMap*)this_)->lastKey();
}

// [-3] T & first()
extern "C"
QVariant* C_QVariantMap_first_0(void* this_ ) {
    // QVariantMap_first_0()
    auto rv =  ((QVariantMap*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] const T & first()
extern "C"
QVariant* C_QVariantMap_first_1(void* this_ ) {
    // QVariantMap_first_1()
    auto rv =  ((QVariantMap*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] T & last()
extern "C"
QVariant* C_QVariantMap_last_0(void* this_ ) {
    // QVariantMap_last_0()
    auto rv =  ((QVariantMap*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & last()
extern "C"
QVariant* C_QVariantMap_last_1(void* this_ ) {
    // QVariantMap_last_1()
    auto rv =  ((QVariantMap*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] QMap::iterator begin()
extern "C"
QVariantMap::iterator* C_QVariantMap_begin_0(void* this_ ) {
    // QVariantMap_begin_0()
    auto rv =  ((QVariantMap*)this_)->begin();
    return new decltype(rv)(rv);
}

// [-3] QMap::iterator end()
extern "C"
QVariantMap::iterator* C_QVariantMap_end_0(void* this_ ) {
    // QVariantMap_end_0()
    auto rv =  ((QVariantMap*)this_)->end();
    return new decltype(rv)(rv);
}

// [-3] QMap::key_iterator keyBegin()
extern "C"
QVariantMap::key_iterator* C_QVariantMap_keyBegin_0(void* this_ ) {
    // QVariantMap_keyBegin_0()
    auto rv =  ((QVariantMap*)this_)->keyBegin();
    return new decltype(rv)(rv);
}

// [-3] QMap::key_iterator keyEnd()
extern "C"
QVariantMap::key_iterator* C_QVariantMap_keyEnd_0(void* this_ ) {
    // QVariantMap_keyEnd_0()
    auto rv =  ((QVariantMap*)this_)->keyEnd();
    return new decltype(rv)(rv);
}

// [-3] QMap::key_value_iterator keyValueBegin()
extern "C"
QVariantMap::key_value_iterator* C_QVariantMap_keyValueBegin_0(void* this_ ) {
    // QVariantMap_keyValueBegin_0()
    auto rv =  ((QVariantMap*)this_)->keyValueBegin();
    return new decltype(rv)(rv);
}

// [-3] QMap::key_value_iterator keyValueEnd()
extern "C"
QVariantMap::key_value_iterator* C_QVariantMap_keyValueEnd_0(void* this_ ) {
    // QVariantMap_keyValueEnd_0()
    auto rv =  ((QVariantMap*)this_)->keyValueEnd();
    return new decltype(rv)(rv);
}

// [-3] QMap::iterator erase(class QMap::iterator)
extern "C"
QVariantMap::iterator* C_QVariantMap_erase_0(void* this_ , QVariantMap::iterator* it) {
    // QVariantMap_erase_0()
    auto rv =  ((QVariantMap*)this_)->erase(*it);
    return new decltype(rv)(rv);
}

// [4] int count()
extern "C"
int C_QVariantMap_count_1(void* this_ ) {
    // QVariantMap_count_1()
    auto rv =  ((QVariantMap*)this_)->count();
    return rv;
}

// [-3] QMap::iterator find(const Key &)
extern "C"
QVariantMap::iterator* C_QVariantMap_find_0(void* this_ , QString* key) {
    // QVariantMap_find_0()
    auto rv =  ((QVariantMap*)this_)->find(*key);
    return new decltype(rv)(rv);
}

// [-3] QMap::iterator lowerBound(const Key &)
extern "C"
QVariantMap::iterator* C_QVariantMap_lowerBound_0(void* this_ , QString* key) {
    // QVariantMap_lowerBound_0()
    auto rv =  ((QVariantMap*)this_)->lowerBound(*key);
    return new decltype(rv)(rv);
}

// [-3] QMap::iterator upperBound(const Key &)
extern "C"
QVariantMap::iterator* C_QVariantMap_upperBound_0(void* this_ , QString* key) {
    // QVariantMap_upperBound_0()
    auto rv =  ((QVariantMap*)this_)->upperBound(*key);
    return new decltype(rv)(rv);
}

// [-3] QMap::iterator insert(const Key &, const T &)
extern "C"
QVariantMap::iterator* C_QVariantMap_insert_0(void* this_ , QString* key, QString* value) {
    // QVariantMap_insert_0()
    auto rv =  ((QVariantMap*)this_)->insert(*key, *value);
    return new decltype(rv)(rv);
}

// [-3] QMap::iterator insert(class QMap::const_iterator, const Key &, const T &)
extern "C"
QVariantMap::iterator* C_QVariantMap_insert_1(void* this_ , QVariantMap::const_iterator* pos, QString* key, QString* value) {
    // QVariantMap_insert_1()
    auto rv =  ((QVariantMap*)this_)->insert(*pos, *key, *value);
    return new decltype(rv)(rv);
}

// [-3] QMap::iterator insertMulti(const Key &, const T &)
extern "C"
QVariantMap::iterator* C_QVariantMap_insertMulti_0(void* this_ , QString* key, QString* value) {
    // QVariantMap_insertMulti_0()
    auto rv =  ((QVariantMap*)this_)->insertMulti(*key, *value);
    return new decltype(rv)(rv);
}

// [-3] QMap::iterator insertMulti(class QMap::const_iterator, const Key &, const T &)
extern "C"
QVariantMap::iterator* C_QVariantMap_insertMulti_1(void* this_ , QVariantMap::const_iterator* pos, QString* akey, QString* avalue) {
    // QVariantMap_insertMulti_1()
    auto rv =  ((QVariantMap*)this_)->insertMulti(*pos, *akey, *avalue);
    return new decltype(rv)(rv);
}

// [-3] QMap<Key, T> & unite(const QMap<Key, T> &)
extern "C"
void C_QVariantMap_unite_0(void* this_ , QVariantMap* other) {
    // QVariantMap_unite_0()
    auto rv =  ((QVariantMap*)this_)->unite(*other);
}

// [1] bool empty()
extern "C"
bool C_QVariantMap_empty_0(void* this_ ) {
    // QVariantMap_empty_0()
    auto rv =  ((QVariantMap*)this_)->empty();
    return rv;
}

// [-3] QPair<QMap::iterator, QMap::iterator> equal_range(const Key &)
extern "C"
void C_QVariantMap_equal_range_0(void* this_ , QString* akey) {
    // QVariantMap_equal_range_0()
    auto rv =  ((QVariantMap*)this_)->equal_range(*akey);
}

//  body block end
