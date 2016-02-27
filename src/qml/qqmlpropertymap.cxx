// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtQml/qqmlpropertymap.h
// dst-file: /src/qml/qqmlpropertymap.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qqmlpropertymap.h>


#include <qstringlist.h>
#include <qvariant.h>
// <= header block end

// main block begin =>
void __keep_qqmlpropertymap_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QQmlPropertyMap_Class_Size()
{
  return sizeof(QQmlPropertyMap);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtQml/qqmlpropertymap.h', line 59, column 29>
//   // proto:  QStringList QQmlPropertyMap::keys();
// _ZNK15QQmlPropertyMap4keysEv keys()
extern "C"
QStringList*
C_ZNK15QQmlPropertyMap4keysEv(void *qthis) {
  auto ret =
  ((QQmlPropertyMap*)qthis)->keys();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlpropertymap.h', line 52, column 14>
//   // proto:  void QQmlPropertyMap::QQmlPropertyMap(QObject * parent);
extern "C"
QQmlPropertyMap*
C_ZN15QQmlPropertyMapC2EP7QObject(QObject * arg1) {
  auto ret = new QQmlPropertyMap(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlpropertymap.h', line 55, column 14>
//   // proto:  QVariant QQmlPropertyMap::value(const QString & key);
// _ZNK15QQmlPropertyMap5valueERK7QString value(const class QString &)
extern "C"
QVariant*
C_ZNK15QQmlPropertyMap5valueERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QQmlPropertyMap*)qthis)->value(*((const QString*)arg1));
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlpropertymap.h', line 62, column 9>
//   // proto:  int QQmlPropertyMap::size();
// _ZNK15QQmlPropertyMap4sizeEv size()
extern "C"
int
C_ZNK15QQmlPropertyMap4sizeEv(void *qthis) {
  auto ret =
  ((QQmlPropertyMap*)qthis)->size();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlpropertymap.h', line 64, column 10>
//   // proto:  bool QQmlPropertyMap::contains(const QString & key);
// _ZNK15QQmlPropertyMap8containsERK7QString contains(const class QString &)
extern "C"
bool
C_ZNK15QQmlPropertyMap8containsERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QQmlPropertyMap*)qthis)->contains(*((const QString*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlpropertymap.h', line 61, column 9>
//   // proto:  int QQmlPropertyMap::count();
// _ZNK15QQmlPropertyMap5countEv count()
extern "C"
int
C_ZNK15QQmlPropertyMap5countEv(void *qthis) {
  auto ret =
  ((QQmlPropertyMap*)qthis)->count();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlpropertymap.h', line 50, column 5>
//   // proto:  const QMetaObject * QQmlPropertyMap::metaObject();
// _ZNK15QQmlPropertyMap10metaObjectEv metaObject()
extern "C"
void*
C_ZNK15QQmlPropertyMap10metaObjectEv(void *qthis) {
  auto ret =
  ((QQmlPropertyMap*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlpropertymap.h', line 57, column 10>
//   // proto:  void QQmlPropertyMap::clear(const QString & key);
// _ZN15QQmlPropertyMap5clearERK7QString clear(const class QString &)
extern "C"
void
C_ZN15QQmlPropertyMap5clearERK7QString(void *qthis,
const QString* arg1) {
  ((QQmlPropertyMap*)qthis)->clear(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlpropertymap.h', line 56, column 10>
//   // proto:  void QQmlPropertyMap::insert(const QString & key, const QVariant & value);
// _ZN15QQmlPropertyMap6insertERK7QStringRK8QVariant insert(const class QString &, const class QVariant &)
extern "C"
void
C_ZN15QQmlPropertyMap6insertERK7QStringRK8QVariant(void *qthis,
const QString* arg1,
const QVariant* arg2) {
  ((QQmlPropertyMap*)qthis)->insert(*((const QString*)arg1),
*((const QVariant*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlpropertymap.h', line 63, column 10>
//   // proto:  bool QQmlPropertyMap::isEmpty();
// _ZNK15QQmlPropertyMap7isEmptyEv isEmpty()
extern "C"
bool
C_ZNK15QQmlPropertyMap7isEmptyEv(void *qthis) {
  auto ret =
  ((QQmlPropertyMap*)qthis)->isEmpty();
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QQmlPropertyMap::~QQmlPropertyMap();
extern "C"
void C_ZN15QQmlPropertyMapD2Ev(void *qthis) {
  delete (QQmlPropertyMap*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlpropertymap.h', line 70, column 10>
//   // proto:  void QQmlPropertyMap::valueChanged(const QString & key, const QVariant & value);
// _ZN15QQmlPropertyMap12valueChangedERK7QStringRK8QVariant valueChanged(const class QString &, const class QVariant &)
extern "C"
void
C_ZN15QQmlPropertyMap12valueChangedERK7QStringRK8QVariant(void *qthis,
const QString* arg1,
const QVariant* arg2) {
  ((QQmlPropertyMap*)qthis)->valueChanged(*((const QString*)arg1),
*((const QVariant*)arg2));
}
// <= ext block end

// body block begin =>
// QQmlPropertyMap_SlotProxy here
class QQmlPropertyMap_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QQmlPropertyMap_SlotProxy():QObject(){}

public slots:
  // valueChanged(const class QString &, const class QVariant &)
  void slot_proxy_func__ZN15QQmlPropertyMap12valueChangedERK7QStringRK8QVariant(const QString & arg0, const QVariant & arg1);
public:
  void (*slot_func__ZN15QQmlPropertyMap12valueChangedERK7QStringRK8QVariant)(void* rsfptr, const QString & arg0, const QVariant & arg1) = NULL;
public: void* rsfptr = NULL;
};
#include "src/qml/qqmlpropertymap.moc"

extern "C" {
  QQmlPropertyMap_SlotProxy* QQmlPropertyMap_SlotProxy_new()
  {
    return new QQmlPropertyMap_SlotProxy();
  }
};

void QQmlPropertyMap_SlotProxy::slot_proxy_func__ZN15QQmlPropertyMap12valueChangedERK7QStringRK8QVariant(const QString & arg0, const QVariant & arg1) {
  if (this->slot_func__ZN15QQmlPropertyMap12valueChangedERK7QStringRK8QVariant != NULL) {
    // do smth...
    this->slot_func__ZN15QQmlPropertyMap12valueChangedERK7QStringRK8QVariant(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QQmlPropertyMap_SlotProxy_connect__ZN15QQmlPropertyMap12valueChangedERK7QStringRK8QVariant(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQmlPropertyMap_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QQmlPropertyMap12valueChangedERK7QStringRK8QVariant = (decltype(that->slot_func__ZN15QQmlPropertyMap12valueChangedERK7QStringRK8QVariant))ffifptr;
  QObject::connect((QQmlPropertyMap*)sender, SIGNAL(valueChanged(const class QString &, const class QVariant &)), that, SLOT(slot_proxy_func__ZN15QQmlPropertyMap12valueChangedERK7QStringRK8QVariant(const QString & arg0, const QVariant & arg1)));
  return that;
}
extern "C"
void QQmlPropertyMap_SlotProxy_disconnect__ZN15QQmlPropertyMap12valueChangedERK7QStringRK8QVariant(QQmlPropertyMap_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

