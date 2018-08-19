//  header block begin
// /usr/include/qt/QtQml/qqmlpropertymap.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlpropertymap.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlPropertyMap is pure virtual: false
// QQmlPropertyMap has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQQmlPropertyMap : public QQmlPropertyMap {
public:
  virtual ~MyQQmlPropertyMap() {}
// void QQmlPropertyMap(QObject *)
MyQQmlPropertyMap(QObject * parent) : QQmlPropertyMap(parent) {}
// Protected virtual Visibility=Default Availability=Available
// QVariant updateValue(const QString &, const QVariant &)
  virtual QVariant updateValue(const QString & key, const QVariant & input) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"updateValue", &handled, 2, (uint64_t)&key, (uint64_t)&input, 0, 0, 0, 0, 0, 0, 0, 0);
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
// [16] QVariant updateValue(const QString &, const QVariant &)
extern "C" Q_DECL_EXPORT
void* C_ZN15QQmlPropertyMap11updateValueERK7QStringRK8QVariant(void *this_, QString* key, QVariant* input) {
  auto rv = ((QQmlPropertyMap*)this_)->QQmlPropertyMap::updateValue(*key, *input);
return new QVariant(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertymap.h:56
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QQmlPropertyMap10metaObjectEv(void *this_) {
  return (void*)((QQmlPropertyMap*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertymap.h:56
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN15QQmlPropertyMap11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QQmlPropertyMap*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertymap.h:56
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN15QQmlPropertyMap11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QQmlPropertyMap*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertymap.h:56
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QQmlPropertyMap2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QQmlPropertyMap::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertymap.h:56
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QQmlPropertyMap6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QQmlPropertyMap::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertymap.h:58
// [-2] void QQmlPropertyMap(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN15QQmlPropertyMapC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQQmlPropertyMap*)(0);
  return  new MyQQmlPropertyMap(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertymap.h:59
// [-2] void ~QQmlPropertyMap()
extern "C" Q_DECL_EXPORT
void C_ZN15QQmlPropertyMapD2Ev(void *this_) {
  delete (QQmlPropertyMap*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertymap.h:61
// [16] QVariant value(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK15QQmlPropertyMap5valueERK7QString(void *this_, QString* key) {
  auto rv = ((QQmlPropertyMap*)this_)->value(*key);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertymap.h:62
// [-2] void insert(const QString &, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN15QQmlPropertyMap6insertERK7QStringRK8QVariant(void *this_, QString* key, QVariant* value) {
  ((QQmlPropertyMap*)this_)->insert(*key, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertymap.h:63
// [-2] void clear(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN15QQmlPropertyMap5clearERK7QString(void *this_, QString* key) {
  ((QQmlPropertyMap*)this_)->clear(*key);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertymap.h:65
// [8] QStringList keys()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QQmlPropertyMap4keysEv(void *this_) {
  auto rv = ((QQmlPropertyMap*)this_)->keys();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertymap.h:67
// [4] int count()
extern "C" Q_DECL_EXPORT
int C_ZNK15QQmlPropertyMap5countEv(void *this_) {
  return (int)((QQmlPropertyMap*)this_)->count();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertymap.h:68
// [4] int size()
extern "C" Q_DECL_EXPORT
int C_ZNK15QQmlPropertyMap4sizeEv(void *this_) {
  return (int)((QQmlPropertyMap*)this_)->size();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertymap.h:69
// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QQmlPropertyMap7isEmptyEv(void *this_) {
  return (bool)((QQmlPropertyMap*)this_)->isEmpty();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertymap.h:70
// [1] bool contains(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZNK15QQmlPropertyMap8containsERK7QString(void *this_, QString* key) {
  return (bool)((QQmlPropertyMap*)this_)->contains(*key);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertymap.h:72
// [16] QVariant & operator[](const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN15QQmlPropertyMapixERK7QString(void *this_, QString* key) {
  auto& rv = ((QQmlPropertyMap*)this_)->operator[](*key);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertymap.h:73
// [16] QVariant operator[](const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK15QQmlPropertyMapixERK7QString(void *this_, QString* key) {
  auto rv = ((QQmlPropertyMap*)this_)->operator[](*key);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertymap.h:76
// [-2] void valueChanged(const QString &, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN15QQmlPropertyMap12valueChangedERK7QStringRK8QVariant(void *this_, QString* key, QVariant* value) {
  ((QQmlPropertyMap*)this_)->valueChanged(*key, *value);
}

//  main block end
