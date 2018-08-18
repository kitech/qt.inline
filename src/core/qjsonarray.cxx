//  header block begin
// since 0x050000
// /usr/include/qt/QtCore/qjsonarray.h
#ifndef protected
#define protected public
#endif
#include <qjsonarray.h>
#include <QtCore>
#include "callback_inherit.h"

// QJsonArray is pure virtual: false
// QJsonArray has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQJsonArray : public QJsonArray {
public:
  virtual ~MyQJsonArray() {}
// void QJsonArray()
MyQJsonArray() : QJsonArray() {}
// void QJsonArray(std::initializer_list<QJsonValue>)
MyQJsonArray(std::initializer_list<QJsonValue> args) : QJsonArray(args) {}
// void QJsonArray(const QJsonArray &)
MyQJsonArray(const QJsonArray & other) : QJsonArray(other) {}
// void QJsonArray(QJsonArray &&)
MyQJsonArray(QJsonArray && other) : QJsonArray(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:59
// [-2] void QJsonArray()
extern "C" Q_DECL_EXPORT
void* C_ZN10QJsonArrayC2Ev() {
  return  new QJsonArray();
}

// Public inline Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtCore/qjsonarray.h:62
// [-2] void QJsonArray(std::initializer_list<QJsonValue>)
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
void* C_ZN10QJsonArrayC2ESt16initializer_listI10QJsonValueE(std::initializer_list<QJsonValue> args) {
  return  new QJsonArray(args);
}
#endif // QT_VERSION >= 0x050400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:70
// [-2] void ~QJsonArray()
extern "C" Q_DECL_EXPORT
void C_ZN10QJsonArrayD2Ev(void *this_) {
  delete (QJsonArray*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:72
// [-2] void QJsonArray(const QJsonArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QJsonArrayC2ERKS_(QJsonArray* other) {
  return  new QJsonArray(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:73
// [16] QJsonArray & operator=(const QJsonArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QJsonArrayaSERKS_(void *this_, QJsonArray* other) {
  auto& rv = ((QJsonArray*)this_)->operator=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qjsonarray.h:75
// [-2] void QJsonArray(QJsonArray &&)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
void* C_ZN10QJsonArrayC2EOS_(QJsonArray && other) {
  return  new QJsonArray(other);
}
#endif // QT_VERSION >= 0x050a00

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:83
// [16] QJsonArray & operator=(QJsonArray &&)
extern "C" Q_DECL_EXPORT
void* C_ZN10QJsonArrayaSEOS_(void *this_, QJsonArray && other) {
  auto& rv = ((QJsonArray*)this_)->operator=(other);
return &rv;
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:89
// [16] QJsonArray fromStringList(const QStringList &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QJsonArray14fromStringListERK11QStringList(QStringList* list) {
  auto rv = QJsonArray::fromStringList(*list);
return new QJsonArray(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:90
// [16] QJsonArray fromVariantList(const QVariantList &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QJsonArray15fromVariantListERK5QListI8QVariantE(const QVariantList & list) {
  auto rv = QJsonArray::fromVariantList(list);
return new QJsonArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:91
// [8] QVariantList toVariantList()
extern "C" Q_DECL_EXPORT
QVariantList* C_ZNK10QJsonArray13toVariantListEv(void *this_) {
  auto rv = ((QJsonArray*)this_)->toVariantList();
return new QVariantList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:93
// [4] int size()
extern "C" Q_DECL_EXPORT
int C_ZNK10QJsonArray4sizeEv(void *this_) {
  return (int)((QJsonArray*)this_)->size();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:94
// [4] int count()
extern "C" Q_DECL_EXPORT
int C_ZNK10QJsonArray5countEv(void *this_) {
  return (int)((QJsonArray*)this_)->count();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:96
// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QJsonArray7isEmptyEv(void *this_) {
  return (bool)((QJsonArray*)this_)->isEmpty();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:97
// [24] QJsonValue at(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QJsonArray2atEi(void *this_, int i) {
  auto rv = ((QJsonArray*)this_)->at(i);
return new QJsonValue(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:98
// [24] QJsonValue first()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QJsonArray5firstEv(void *this_) {
  auto rv = ((QJsonArray*)this_)->first();
return new QJsonValue(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:99
// [24] QJsonValue last()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QJsonArray4lastEv(void *this_) {
  auto rv = ((QJsonArray*)this_)->last();
return new QJsonValue(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:101
// [-2] void prepend(const QJsonValue &)
extern "C" Q_DECL_EXPORT
void C_ZN10QJsonArray7prependERK10QJsonValue(void *this_, QJsonValue* value) {
  ((QJsonArray*)this_)->prepend(*value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:102
// [-2] void append(const QJsonValue &)
extern "C" Q_DECL_EXPORT
void C_ZN10QJsonArray6appendERK10QJsonValue(void *this_, QJsonValue* value) {
  ((QJsonArray*)this_)->append(*value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:103
// [-2] void removeAt(int)
extern "C" Q_DECL_EXPORT
void C_ZN10QJsonArray8removeAtEi(void *this_, int i) {
  ((QJsonArray*)this_)->removeAt(i);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:104
// [24] QJsonValue takeAt(int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QJsonArray6takeAtEi(void *this_, int i) {
  auto rv = ((QJsonArray*)this_)->takeAt(i);
return new QJsonValue(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:105
// [-2] void removeFirst()
extern "C" Q_DECL_EXPORT
void C_ZN10QJsonArray11removeFirstEv(void *this_) {
  ((QJsonArray*)this_)->removeFirst();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:106
// [-2] void removeLast()
extern "C" Q_DECL_EXPORT
void C_ZN10QJsonArray10removeLastEv(void *this_) {
  ((QJsonArray*)this_)->removeLast();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:108
// [-2] void insert(int, const QJsonValue &)
extern "C" Q_DECL_EXPORT
void C_ZN10QJsonArray6insertEiRK10QJsonValue(void *this_, int i, QJsonValue* value) {
  ((QJsonArray*)this_)->insert(i, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:109
// [-2] void replace(int, const QJsonValue &)
extern "C" Q_DECL_EXPORT
void C_ZN10QJsonArray7replaceEiRK10QJsonValue(void *this_, int i, QJsonValue* value) {
  ((QJsonArray*)this_)->replace(i, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:111
// [1] bool contains(const QJsonValue &)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QJsonArray8containsERK10QJsonValue(void *this_, QJsonValue* element) {
  return (bool)((QJsonArray*)this_)->contains(*element);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:112
// [16] QJsonValueRef operator[](int)
extern "C" Q_DECL_EXPORT
void C_ZN10QJsonArrayixEi(void *this_, int i) {
  auto rv = ((QJsonArray*)this_)->operator[](i);
/*return rv;*/
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:113
// [24] QJsonValue operator[](int)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QJsonArrayixEi(void *this_, int i) {
  auto rv = ((QJsonArray*)this_)->operator[](i);
return new QJsonValue(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:115
// [1] bool operator==(const QJsonArray &)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QJsonArrayeqERKS_(void *this_, QJsonArray* other) {
  return (bool)((QJsonArray*)this_)->operator==(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:116
// [1] bool operator!=(const QJsonArray &)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QJsonArrayneERKS_(void *this_, QJsonArray* other) {
  return (bool)((QJsonArray*)this_)->operator!=(*other);
}

// Public inline Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qjsonarray.h:118
// [-2] void swap(QJsonArray &)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
void C_ZN10QJsonArray4swapERS_(void *this_, QJsonArray* other) {
  ((QJsonArray*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x050a00

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:214
// [16] QJsonArray::iterator begin()
extern "C" Q_DECL_EXPORT
void* C_ZN10QJsonArray5beginEv(void *this_) {
  auto rv = ((QJsonArray*)this_)->begin();
return new QJsonArray::iterator(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:215
// [16] QJsonArray::const_iterator begin()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QJsonArray5beginEv(void *this_) {
  auto rv = ((QJsonArray*)this_)->begin();
return new QJsonArray::const_iterator(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:216
// [16] QJsonArray::const_iterator constBegin()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QJsonArray10constBeginEv(void *this_) {
  auto rv = ((QJsonArray*)this_)->constBegin();
return new QJsonArray::const_iterator(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:217
// [16] QJsonArray::iterator end()
extern "C" Q_DECL_EXPORT
void* C_ZN10QJsonArray3endEv(void *this_) {
  auto rv = ((QJsonArray*)this_)->end();
return new QJsonArray::iterator(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:218
// [16] QJsonArray::const_iterator end()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QJsonArray3endEv(void *this_) {
  auto rv = ((QJsonArray*)this_)->end();
return new QJsonArray::const_iterator(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:219
// [16] QJsonArray::const_iterator constEnd()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QJsonArray8constEndEv(void *this_) {
  auto rv = ((QJsonArray*)this_)->constEnd();
return new QJsonArray::const_iterator(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:220
// [16] QJsonArray::iterator insert(QJsonArray::iterator, const QJsonValue &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QJsonArray6insertENS_8iteratorERK10QJsonValue(void *this_, QJsonArray::iterator* before, QJsonValue* value) {
  auto rv = ((QJsonArray*)this_)->insert(*before, *value);
return new QJsonArray::iterator(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:221
// [16] QJsonArray::iterator erase(QJsonArray::iterator)
extern "C" Q_DECL_EXPORT
void* C_ZN10QJsonArray5eraseENS_8iteratorE(void *this_, QJsonArray::iterator* it) {
  auto rv = ((QJsonArray*)this_)->erase(*it);
return new QJsonArray::iterator(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:228
// [16] QJsonArray operator+(const QJsonValue &)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QJsonArrayplERK10QJsonValue(void *this_, QJsonValue* v) {
  auto rv = ((QJsonArray*)this_)->operator+(*v);
return new QJsonArray(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:230
// [16] QJsonArray & operator+=(const QJsonValue &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QJsonArraypLERK10QJsonValue(void *this_, QJsonValue* v) {
  auto& rv = ((QJsonArray*)this_)->operator+=(*v);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:232
// [16] QJsonArray & operator<<(const QJsonValue &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QJsonArraylsERK10QJsonValue(void *this_, QJsonValue* v) {
  auto& rv = ((QJsonArray*)this_)->operator<<(*v);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:236
// [-2] void push_back(const QJsonValue &)
extern "C" Q_DECL_EXPORT
void C_ZN10QJsonArray9push_backERK10QJsonValue(void *this_, QJsonValue* t) {
  ((QJsonArray*)this_)->push_back(*t);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:237
// [-2] void push_front(const QJsonValue &)
extern "C" Q_DECL_EXPORT
void C_ZN10QJsonArray10push_frontERK10QJsonValue(void *this_, QJsonValue* t) {
  ((QJsonArray*)this_)->push_front(*t);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:238
// [-2] void pop_front()
extern "C" Q_DECL_EXPORT
void C_ZN10QJsonArray9pop_frontEv(void *this_) {
  ((QJsonArray*)this_)->pop_front();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:239
// [-2] void pop_back()
extern "C" Q_DECL_EXPORT
void C_ZN10QJsonArray8pop_backEv(void *this_) {
  ((QJsonArray*)this_)->pop_back();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:240
// [1] bool empty()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QJsonArray5emptyEv(void *this_) {
  return (bool)((QJsonArray*)this_)->empty();
}

//  main block end
