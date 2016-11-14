// /usr/include/qt/QtCore/qjsonarray.h
#include <qjsonarray.h>
#include <QtCore>

// /usr/include/qt/QtCore/qjsonarray.h:59
// void QJsonArray()
extern "C"
void* C_ZN10QJsonArrayC1Ev() {
  return new QJsonArray();
}
// inline
// /usr/include/qt/QtCore/qjsonarray.h:62
// void QJsonArray(std::initializer_list<QJsonValue>)
extern "C"
void* C_ZN10QJsonArrayC1ESt16initializer_listI10QJsonValueE(std::initializer_list<QJsonValue> args) {
  return new QJsonArray(args);
}
// /usr/include/qt/QtCore/qjsonarray.h:70
// void ~QJsonArray()
extern "C"
void C_ZN10QJsonArrayD1Ev(void *this_) {
  delete (QJsonArray*)(this_);
}
// static
// /usr/include/qt/QtCore/qjsonarray.h:75
// QJsonArray fromStringList(const class QStringList &)
extern "C"
void C_ZN10QJsonArray14fromStringListERK11QStringList(const QStringList & list) {
  /*return*/ QJsonArray::fromStringList(list);
}
// static
// /usr/include/qt/QtCore/qjsonarray.h:76
// QJsonArray fromVariantList(const QVariantList &)
extern "C"
void C_ZN10QJsonArray15fromVariantListERK5QListI8QVariantE(const QVariantList & list) {
  /*return*/ QJsonArray::fromVariantList(list);
}
// /usr/include/qt/QtCore/qjsonarray.h:77
// QVariantList toVariantList()
extern "C"
void C_ZNK10QJsonArray13toVariantListEv(void *this_) {
  /*return*/ ((QJsonArray*)this_)->toVariantList();
}
// /usr/include/qt/QtCore/qjsonarray.h:79
// int size()
extern "C"
void C_ZNK10QJsonArray4sizeEv(void *this_) {
  /*return*/ ((QJsonArray*)this_)->size();
}
// inline
// /usr/include/qt/QtCore/qjsonarray.h:80
// int count()
extern "C"
void C_ZNK10QJsonArray5countEv(void *this_) {
  /*return*/ ((QJsonArray*)this_)->count();
}
// /usr/include/qt/QtCore/qjsonarray.h:82
// bool isEmpty()
extern "C"
void C_ZNK10QJsonArray7isEmptyEv(void *this_) {
  /*return*/ ((QJsonArray*)this_)->isEmpty();
}
// /usr/include/qt/QtCore/qjsonarray.h:83
// QJsonValue at(int)
extern "C"
void C_ZNK10QJsonArray2atEi(void *this_, int i) {
  /*return*/ ((QJsonArray*)this_)->at(i);
}
// /usr/include/qt/QtCore/qjsonarray.h:84
// QJsonValue first()
extern "C"
void C_ZNK10QJsonArray5firstEv(void *this_) {
  /*return*/ ((QJsonArray*)this_)->first();
}
// /usr/include/qt/QtCore/qjsonarray.h:85
// QJsonValue last()
extern "C"
void C_ZNK10QJsonArray4lastEv(void *this_) {
  /*return*/ ((QJsonArray*)this_)->last();
}
// /usr/include/qt/QtCore/qjsonarray.h:89
// void removeAt(int)
extern "C"
void C_ZN10QJsonArray8removeAtEi(void *this_, int i) {
  ((QJsonArray*)this_)->removeAt(i);
}
// /usr/include/qt/QtCore/qjsonarray.h:90
// QJsonValue takeAt(int)
extern "C"
void C_ZN10QJsonArray6takeAtEi(void *this_, int i) {
  /*return*/ ((QJsonArray*)this_)->takeAt(i);
}
// inline
// /usr/include/qt/QtCore/qjsonarray.h:91
// void removeFirst()
extern "C"
void C_ZN10QJsonArray11removeFirstEv(void *this_) {
  ((QJsonArray*)this_)->removeFirst();
}
// inline
// /usr/include/qt/QtCore/qjsonarray.h:92
// void removeLast()
extern "C"
void C_ZN10QJsonArray10removeLastEv(void *this_) {
  ((QJsonArray*)this_)->removeLast();
}
// /usr/include/qt/QtCore/qjsonarray.h:95
// void replace(int, const class QJsonValue &)
extern "C"
void C_ZN10QJsonArray7replaceEiRK10QJsonValue(void *this_, int i, const QJsonValue & value) {
  ((QJsonArray*)this_)->replace(i, value);
}
// /usr/include/qt/QtCore/qjsonarray.h:97
// bool contains(const class QJsonValue &)
extern "C"
void C_ZNK10QJsonArray8containsERK10QJsonValue(void *this_, const QJsonValue & element) {
  /*return*/ ((QJsonArray*)this_)->contains(element);
}
// inline
// /usr/include/qt/QtCore/qjsonarray.h:194
// QJsonArray::iterator begin()
extern "C"
void C_ZN10QJsonArray5beginEv(void *this_) {
  /*return*/ ((QJsonArray*)this_)->begin();
}
// inline
// /usr/include/qt/QtCore/qjsonarray.h:195
// QJsonArray::const_iterator begin()
extern "C"
void C_ZNK10QJsonArray5beginEv(void *this_) {
  /*return*/ ((QJsonArray*)this_)->begin();
}
// inline
// /usr/include/qt/QtCore/qjsonarray.h:196
// QJsonArray::const_iterator constBegin()
extern "C"
void C_ZNK10QJsonArray10constBeginEv(void *this_) {
  /*return*/ ((QJsonArray*)this_)->constBegin();
}
// inline
// /usr/include/qt/QtCore/qjsonarray.h:197
// QJsonArray::iterator end()
extern "C"
void C_ZN10QJsonArray3endEv(void *this_) {
  /*return*/ ((QJsonArray*)this_)->end();
}
// inline
// /usr/include/qt/QtCore/qjsonarray.h:198
// QJsonArray::const_iterator end()
extern "C"
void C_ZNK10QJsonArray3endEv(void *this_) {
  /*return*/ ((QJsonArray*)this_)->end();
}
// inline
// /usr/include/qt/QtCore/qjsonarray.h:199
// QJsonArray::const_iterator constEnd()
extern "C"
void C_ZNK10QJsonArray8constEndEv(void *this_) {
  /*return*/ ((QJsonArray*)this_)->constEnd();
}
// inline
// /usr/include/qt/QtCore/qjsonarray.h:201
// QJsonArray::iterator erase(class QJsonArray::iterator)
extern "C"
void C_ZN10QJsonArray5eraseENS_8iteratorE(void *this_, QJsonArray::iterator it) {
  /*return*/ ((QJsonArray*)this_)->erase(it);
}
// inline
// /usr/include/qt/QtCore/qjsonarray.h:216
// void push_back(const class QJsonValue &)
extern "C"
void C_ZN10QJsonArray9push_backERK10QJsonValue(void *this_, const QJsonValue & t) {
  ((QJsonArray*)this_)->push_back(t);
}
// inline
// /usr/include/qt/QtCore/qjsonarray.h:217
// void push_front(const class QJsonValue &)
extern "C"
void C_ZN10QJsonArray10push_frontERK10QJsonValue(void *this_, const QJsonValue & t) {
  ((QJsonArray*)this_)->push_front(t);
}
// inline
// /usr/include/qt/QtCore/qjsonarray.h:218
// void pop_front()
extern "C"
void C_ZN10QJsonArray9pop_frontEv(void *this_) {
  ((QJsonArray*)this_)->pop_front();
}
// inline
// /usr/include/qt/QtCore/qjsonarray.h:219
// void pop_back()
extern "C"
void C_ZN10QJsonArray8pop_backEv(void *this_) {
  ((QJsonArray*)this_)->pop_back();
}
// inline
// /usr/include/qt/QtCore/qjsonarray.h:220
// bool empty()
extern "C"
void C_ZNK10QJsonArray5emptyEv(void *this_) {
  /*return*/ ((QJsonArray*)this_)->empty();
}