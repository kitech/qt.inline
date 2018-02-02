//  header block begin
// /usr/include/qt/QtCore/qjsonarray.h
#include <qjsonarray.h>
#include <QtCore>
#include "callback_inherit.h"

// QJsonArray is pure virtual: false
// QJsonArray has virtual projected: false
//  header block end

//  main block begin

class MyQJsonArray : public QJsonArray {
public:
  virtual ~MyQJsonArray() {}
// void QJsonArray()
MyQJsonArray() : QJsonArray() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:59
// [-2] void QJsonArray()
extern "C"
void* C_ZN10QJsonArrayC2Ev() {
  return  new QJsonArray();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:70
// [-2] void ~QJsonArray()
extern "C"
void C_ZN10QJsonArrayD2Ev(void *this_) {
  delete (QJsonArray*)(this_);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:89
// [16] QJsonArray fromStringList(const class QStringList &)
extern "C"
void* C_ZN10QJsonArray14fromStringListERK11QStringList(QStringList* list) {
  auto rv = QJsonArray::fromStringList(*list);
return new QJsonArray(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:93
// [4] int size()
extern "C"
int C_ZNK10QJsonArray4sizeEv(void *this_) {
  return (int)((QJsonArray*)this_)->size();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:94
// [4] int count()
extern "C"
int C_ZNK10QJsonArray5countEv(void *this_) {
  return (int)((QJsonArray*)this_)->count();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:96
// [1] bool isEmpty()
extern "C"
bool C_ZNK10QJsonArray7isEmptyEv(void *this_) {
  return (bool)((QJsonArray*)this_)->isEmpty();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:97
// [24] QJsonValue at(int)
extern "C"
void* C_ZNK10QJsonArray2atEi(void *this_, int i) {
  auto rv = ((QJsonArray*)this_)->at(i);
return new QJsonValue(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:98
// [24] QJsonValue first()
extern "C"
void* C_ZNK10QJsonArray5firstEv(void *this_) {
  auto rv = ((QJsonArray*)this_)->first();
return new QJsonValue(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:99
// [24] QJsonValue last()
extern "C"
void* C_ZNK10QJsonArray4lastEv(void *this_) {
  auto rv = ((QJsonArray*)this_)->last();
return new QJsonValue(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:103
// [-2] void removeAt(int)
extern "C"
void C_ZN10QJsonArray8removeAtEi(void *this_, int i) {
  ((QJsonArray*)this_)->removeAt(i);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:104
// [24] QJsonValue takeAt(int)
extern "C"
void* C_ZN10QJsonArray6takeAtEi(void *this_, int i) {
  auto rv = ((QJsonArray*)this_)->takeAt(i);
return new QJsonValue(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:105
// [-2] void removeFirst()
extern "C"
void C_ZN10QJsonArray11removeFirstEv(void *this_) {
  ((QJsonArray*)this_)->removeFirst();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:106
// [-2] void removeLast()
extern "C"
void C_ZN10QJsonArray10removeLastEv(void *this_) {
  ((QJsonArray*)this_)->removeLast();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:109
// [-2] void replace(int, const class QJsonValue &)
extern "C"
void C_ZN10QJsonArray7replaceEiRK10QJsonValue(void *this_, int i, QJsonValue* value) {
  ((QJsonArray*)this_)->replace(i, *value);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:111
// [1] bool contains(const class QJsonValue &)
extern "C"
bool C_ZNK10QJsonArray8containsERK10QJsonValue(void *this_, QJsonValue* element) {
  return (bool)((QJsonArray*)this_)->contains(*element);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:118
// [-2] void swap(class QJsonArray &)
extern "C"
void C_ZN10QJsonArray4swapERS_(void *this_, QJsonArray* other) {
  ((QJsonArray*)this_)->swap(*other);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:214
// [16] QJsonArray::iterator begin()
extern "C"
void* C_ZN10QJsonArray5beginEv(void *this_) {
  auto rv = ((QJsonArray*)this_)->begin();
return new QJsonArray::iterator(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:215
// [16] QJsonArray::const_iterator begin()
extern "C"
void* C_ZNK10QJsonArray5beginEv(void *this_) {
  auto rv = ((QJsonArray*)this_)->begin();
return new QJsonArray::const_iterator(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:216
// [16] QJsonArray::const_iterator constBegin()
extern "C"
void* C_ZNK10QJsonArray10constBeginEv(void *this_) {
  auto rv = ((QJsonArray*)this_)->constBegin();
return new QJsonArray::const_iterator(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:217
// [16] QJsonArray::iterator end()
extern "C"
void* C_ZN10QJsonArray3endEv(void *this_) {
  auto rv = ((QJsonArray*)this_)->end();
return new QJsonArray::iterator(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:218
// [16] QJsonArray::const_iterator end()
extern "C"
void* C_ZNK10QJsonArray3endEv(void *this_) {
  auto rv = ((QJsonArray*)this_)->end();
return new QJsonArray::const_iterator(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:219
// [16] QJsonArray::const_iterator constEnd()
extern "C"
void* C_ZNK10QJsonArray8constEndEv(void *this_) {
  auto rv = ((QJsonArray*)this_)->constEnd();
return new QJsonArray::const_iterator(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:236
// [-2] void push_back(const class QJsonValue &)
extern "C"
void C_ZN10QJsonArray9push_backERK10QJsonValue(void *this_, QJsonValue* t) {
  ((QJsonArray*)this_)->push_back(*t);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:237
// [-2] void push_front(const class QJsonValue &)
extern "C"
void C_ZN10QJsonArray10push_frontERK10QJsonValue(void *this_, QJsonValue* t) {
  ((QJsonArray*)this_)->push_front(*t);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:238
// [-2] void pop_front()
extern "C"
void C_ZN10QJsonArray9pop_frontEv(void *this_) {
  ((QJsonArray*)this_)->pop_front();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:239
// [-2] void pop_back()
extern "C"
void C_ZN10QJsonArray8pop_backEv(void *this_) {
  ((QJsonArray*)this_)->pop_back();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:240
// [1] bool empty()
extern "C"
bool C_ZNK10QJsonArray5emptyEv(void *this_) {
  return (bool)((QJsonArray*)this_)->empty();
}
//  main block end
