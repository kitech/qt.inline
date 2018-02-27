//  header block begin
// /usr/include/qt/QtQml/qqmlpropertymap.h
#ifndef protected
#define protected public
#endif
#include <qqmlpropertymap.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlPropertyMap is pure virtual: false
// QQmlPropertyMap has virtual projected: true
//  header block end

//  main block begin

class MyQQmlPropertyMap : public QQmlPropertyMap {
public:
  virtual ~MyQQmlPropertyMap() {}
// void QQmlPropertyMap(class QObject *)
MyQQmlPropertyMap(QObject * parent) : QQmlPropertyMap(parent) {}
// Protected virtual Visibility=Default Availability=Available
// QVariant updateValue(const class QString &, const class QVariant &)
  virtual QVariant updateValue(const QString & key, const QVariant & input) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"updateValue", &handled, 2, (uint64_t)&key, (uint64_t)&input, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QVariant*)(irv);
      // RecordRecordQVariant
    } else {
    return QQmlPropertyMap::updateValue(key, input);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertymap.h:79
// [16] QVariant updateValue(const class QString &, const class QVariant &)
extern "C"
void* C_ZN15QQmlPropertyMap11updateValueERK7QStringRK8QVariant(void *this_, QString* key, QVariant* input) {
  auto rv = ((QQmlPropertyMap*)this_)->QQmlPropertyMap::updateValue(*key, *input);
return new QVariant(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertymap.h:56
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK15QQmlPropertyMap10metaObjectEv(void *this_) {
  return (void*)((QQmlPropertyMap*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertymap.h:58
// [-2] void QQmlPropertyMap(class QObject *)
extern "C"
void* C_ZN15QQmlPropertyMapC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQQmlPropertyMap*)(0);
  return  new MyQQmlPropertyMap(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertymap.h:59
// [-2] void ~QQmlPropertyMap()
extern "C"
void C_ZN15QQmlPropertyMapD2Ev(void *this_) {
  delete (QQmlPropertyMap*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertymap.h:61
// [16] QVariant value(const class QString &)
extern "C"
void* C_ZNK15QQmlPropertyMap5valueERK7QString(void *this_, QString* key) {
  auto rv = ((QQmlPropertyMap*)this_)->value(*key);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertymap.h:63
// [-2] void clear(const class QString &)
extern "C"
void C_ZN15QQmlPropertyMap5clearERK7QString(void *this_, QString* key) {
  ((QQmlPropertyMap*)this_)->clear(*key);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertymap.h:65
// [8] QStringList keys()
extern "C"
void* C_ZNK15QQmlPropertyMap4keysEv(void *this_) {
  auto rv = ((QQmlPropertyMap*)this_)->keys();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertymap.h:67
// [4] int count()
extern "C"
int C_ZNK15QQmlPropertyMap5countEv(void *this_) {
  return (int)((QQmlPropertyMap*)this_)->count();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertymap.h:68
// [4] int size()
extern "C"
int C_ZNK15QQmlPropertyMap4sizeEv(void *this_) {
  return (int)((QQmlPropertyMap*)this_)->size();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertymap.h:69
// [1] bool isEmpty()
extern "C"
bool C_ZNK15QQmlPropertyMap7isEmptyEv(void *this_) {
  return (bool)((QQmlPropertyMap*)this_)->isEmpty();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertymap.h:70
// [1] bool contains(const class QString &)
extern "C"
bool C_ZNK15QQmlPropertyMap8containsERK7QString(void *this_, QString* key) {
  return (bool)((QQmlPropertyMap*)this_)->contains(*key);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertymap.h:72
// [16] QVariant & operator[](const class QString &)
extern "C"
void* C_ZN15QQmlPropertyMapixERK7QString(void *this_, QString* key) {
  auto& rv = ((QQmlPropertyMap*)this_)->operator[](*key);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertymap.h:73
// [16] QVariant operator[](const class QString &)
extern "C"
void* C_ZNK15QQmlPropertyMapixERK7QString(void *this_, QString* key) {
  auto rv = ((QQmlPropertyMap*)this_)->operator[](*key);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertymap.h:76
// [-2] void valueChanged(const class QString &, const class QVariant &)
extern "C"
void C_ZN15QQmlPropertyMap12valueChangedERK7QStringRK8QVariant(void *this_, QString* key, QVariant* value) {
  ((QQmlPropertyMap*)this_)->valueChanged(*key, *value);
}

//  main block end
