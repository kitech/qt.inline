// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtCore/qsignalmapper.h
// dst-file: /src/core/qsignalmapper.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qsignalmapper.h>


// <= header block end

// main block begin =>
void __keep_qsignalmapper_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QSignalMapper_Class_Size()
{
  return sizeof(QSignalMapper);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qsignalmapper.h', line 55, column 10>
//   // proto:  void QSignalMapper::removeMappings(QObject * sender);
// _ZN13QSignalMapper14removeMappingsEP7QObject removeMappings(class QObject *)
extern "C"
void
C_ZN13QSignalMapper14removeMappingsEP7QObject(void *qthis,
QObject * arg1) {
  ((QSignalMapper*)qthis)->removeMappings(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qsignalmapper.h', line 70, column 10>
//   // proto:  void QSignalMapper::map(QObject * sender);
// _ZN13QSignalMapper3mapEP7QObject map(class QObject *)
extern "C"
void
C_ZN13QSignalMapper3mapEP7QObject(void *qthis,
QObject * arg1) {
  ((QSignalMapper*)qthis)->map(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qsignalmapper.h', line 63, column 10>
//   // proto:  void QSignalMapper::mapped(int );
// _ZN13QSignalMapper6mappedEi mapped(int)
extern "C"
void
C_ZN13QSignalMapper6mappedEi(void *qthis,
int arg1) {
  ((QSignalMapper*)qthis)->mapped(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qsignalmapper.h', line 45, column 5>
//   // proto:  const QMetaObject * QSignalMapper::metaObject();
// _ZNK13QSignalMapper10metaObjectEv metaObject()
extern "C"
void*
C_ZNK13QSignalMapper10metaObjectEv(void *qthis) {
  auto ret =
  ((QSignalMapper*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qsignalmapper.h', line 54, column 10>
//   // proto:  void QSignalMapper::setMapping(QObject * sender, QObject * object);
// _ZN13QSignalMapper10setMappingEP7QObjectS1_ setMapping(class QObject *, class QObject *)
extern "C"
void
C_ZN13QSignalMapper10setMappingEP7QObjectS1_(void *qthis,
QObject * arg1,
QObject * arg2) {
  ((QSignalMapper*)qthis)->setMapping(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtCore/qsignalmapper.h', line 66, column 10>
//   // proto:  void QSignalMapper::mapped(QObject * );
// _ZN13QSignalMapper6mappedEP7QObject mapped(class QObject *)
extern "C"
void
C_ZN13QSignalMapper6mappedEP7QObject(void *qthis,
QObject * arg1) {
  ((QSignalMapper*)qthis)->mapped(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qsignalmapper.h', line 57, column 14>
//   // proto:  QObject * QSignalMapper::mapping(int id);
// _ZNK13QSignalMapper7mappingEi mapping(int)
extern "C"
void*
C_ZNK13QSignalMapper7mappingEi(void *qthis,
int arg1) {
  auto ret =
  ((QSignalMapper*)qthis)->mapping(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qsignalmapper.h', line 48, column 14>
//   // proto:  void QSignalMapper::QSignalMapper(QObject * parent);
extern "C"
QSignalMapper*
C_ZN13QSignalMapperC2EP7QObject(QObject * arg1) {
  auto ret = new QSignalMapper(arg1);
  return ret;
}
//   // proto:  void QSignalMapper::~QSignalMapper();
extern "C"
void C_ZN13QSignalMapperD2Ev(void *qthis) {
  delete (QSignalMapper*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qsignalmapper.h', line 64, column 10>
//   // proto:  void QSignalMapper::mapped(const QString & );
// _ZN13QSignalMapper6mappedERK7QString mapped(const class QString &)
extern "C"
void
C_ZN13QSignalMapper6mappedERK7QString(void *qthis,
const QString* arg1) {
  ((QSignalMapper*)qthis)->mapped(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qsignalmapper.h', line 51, column 10>
//   // proto:  void QSignalMapper::setMapping(QObject * sender, int id);
// _ZN13QSignalMapper10setMappingEP7QObjecti setMapping(class QObject *, int)
extern "C"
void
C_ZN13QSignalMapper10setMappingEP7QObjecti(void *qthis,
QObject * arg1,
int arg2) {
  ((QSignalMapper*)qthis)->setMapping(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtCore/qsignalmapper.h', line 58, column 14>
//   // proto:  QObject * QSignalMapper::mapping(const QString & text);
// _ZNK13QSignalMapper7mappingERK7QString mapping(const class QString &)
extern "C"
void*
C_ZNK13QSignalMapper7mappingERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QSignalMapper*)qthis)->mapping(*((const QString*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qsignalmapper.h', line 69, column 10>
//   // proto:  void QSignalMapper::map();
// _ZN13QSignalMapper3mapEv map()
extern "C"
void
C_ZN13QSignalMapper3mapEv(void *qthis) {
  ((QSignalMapper*)qthis)->map();
}
// <SourceLocation file '/usr/include/qt/QtCore/qsignalmapper.h', line 60, column 14>
//   // proto:  QObject * QSignalMapper::mapping(QObject * object);
// _ZNK13QSignalMapper7mappingEP7QObject mapping(class QObject *)
extern "C"
void*
C_ZNK13QSignalMapper7mappingEP7QObject(void *qthis,
QObject * arg1) {
  auto ret =
  ((QSignalMapper*)qthis)->mapping(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qsignalmapper.h', line 65, column 10>
//   // proto:  void QSignalMapper::mapped(QWidget * );
// _ZN13QSignalMapper6mappedEP7QWidget mapped(class QWidget *)
extern "C"
void
C_ZN13QSignalMapper6mappedEP7QWidget(void *qthis,
QWidget * arg1) {
  ((QSignalMapper*)qthis)->mapped(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qsignalmapper.h', line 52, column 10>
//   // proto:  void QSignalMapper::setMapping(QObject * sender, const QString & text);
// _ZN13QSignalMapper10setMappingEP7QObjectRK7QString setMapping(class QObject *, const class QString &)
extern "C"
void
C_ZN13QSignalMapper10setMappingEP7QObjectRK7QString(void *qthis,
QObject * arg1,
const QString* arg2) {
  ((QSignalMapper*)qthis)->setMapping(arg1,
*((const QString*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtCore/qsignalmapper.h', line 59, column 14>
//   // proto:  QObject * QSignalMapper::mapping(QWidget * widget);
// _ZNK13QSignalMapper7mappingEP7QWidget mapping(class QWidget *)
extern "C"
void*
C_ZNK13QSignalMapper7mappingEP7QWidget(void *qthis,
QWidget * arg1) {
  auto ret =
  ((QSignalMapper*)qthis)->mapping(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qsignalmapper.h', line 53, column 10>
//   // proto:  void QSignalMapper::setMapping(QObject * sender, QWidget * widget);
// _ZN13QSignalMapper10setMappingEP7QObjectP7QWidget setMapping(class QObject *, class QWidget *)
extern "C"
void
C_ZN13QSignalMapper10setMappingEP7QObjectP7QWidget(void *qthis,
QObject * arg1,
QWidget * arg2) {
  ((QSignalMapper*)qthis)->setMapping(arg1,
arg2);
}
// <= ext block end

// body block begin =>
// QSignalMapper_SlotProxy here
class QSignalMapper_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QSignalMapper_SlotProxy():QObject(){}

public slots:
  // mapped(class QWidget *)
  void slot_proxy_func__ZN13QSignalMapper6mappedEP7QWidget(QWidget * arg0);
public:
  void (*slot_func__ZN13QSignalMapper6mappedEP7QWidget)(void* rsfptr, QWidget * arg0) = NULL;
public slots:
  // mapped(class QObject *)
  void slot_proxy_func__ZN13QSignalMapper6mappedEP7QObject(QObject * arg0);
public:
  void (*slot_func__ZN13QSignalMapper6mappedEP7QObject)(void* rsfptr, QObject * arg0) = NULL;
public slots:
  // mapped(const class QString &)
  void slot_proxy_func__ZN13QSignalMapper6mappedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN13QSignalMapper6mappedERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public slots:
  // mapped(int)
  void slot_proxy_func__ZN13QSignalMapper6mappedEi(int arg0);
public:
  void (*slot_func__ZN13QSignalMapper6mappedEi)(void* rsfptr, int arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/core/qsignalmapper.moc"

extern "C" {
  QSignalMapper_SlotProxy* QSignalMapper_SlotProxy_new()
  {
    return new QSignalMapper_SlotProxy();
  }
};

void QSignalMapper_SlotProxy::slot_proxy_func__ZN13QSignalMapper6mappedEP7QWidget(QWidget * arg0) {
  if (this->slot_func__ZN13QSignalMapper6mappedEP7QWidget != NULL) {
    // do smth...
    this->slot_func__ZN13QSignalMapper6mappedEP7QWidget(this->rsfptr, arg0);
  }
}
extern "C"
void* QSignalMapper_SlotProxy_connect__ZN13QSignalMapper6mappedEP7QWidget(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QSignalMapper_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN13QSignalMapper6mappedEP7QWidget = (decltype(that->slot_func__ZN13QSignalMapper6mappedEP7QWidget))ffifptr;
  QObject::connect((QSignalMapper*)sender, SIGNAL(mapped(class QWidget *)), that, SLOT(slot_proxy_func__ZN13QSignalMapper6mappedEP7QWidget(QWidget * arg0)));
  return that;
}
extern "C"
void QSignalMapper_SlotProxy_disconnect__ZN13QSignalMapper6mappedEP7QWidget(QSignalMapper_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QSignalMapper_SlotProxy::slot_proxy_func__ZN13QSignalMapper6mappedEP7QObject(QObject * arg0) {
  if (this->slot_func__ZN13QSignalMapper6mappedEP7QObject != NULL) {
    // do smth...
    this->slot_func__ZN13QSignalMapper6mappedEP7QObject(this->rsfptr, arg0);
  }
}
extern "C"
void* QSignalMapper_SlotProxy_connect__ZN13QSignalMapper6mappedEP7QObject(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QSignalMapper_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN13QSignalMapper6mappedEP7QObject = (decltype(that->slot_func__ZN13QSignalMapper6mappedEP7QObject))ffifptr;
  QObject::connect((QSignalMapper*)sender, SIGNAL(mapped(class QObject *)), that, SLOT(slot_proxy_func__ZN13QSignalMapper6mappedEP7QObject(QObject * arg0)));
  return that;
}
extern "C"
void QSignalMapper_SlotProxy_disconnect__ZN13QSignalMapper6mappedEP7QObject(QSignalMapper_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QSignalMapper_SlotProxy::slot_proxy_func__ZN13QSignalMapper6mappedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN13QSignalMapper6mappedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN13QSignalMapper6mappedERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QSignalMapper_SlotProxy_connect__ZN13QSignalMapper6mappedERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QSignalMapper_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN13QSignalMapper6mappedERK7QString = (decltype(that->slot_func__ZN13QSignalMapper6mappedERK7QString))ffifptr;
  QObject::connect((QSignalMapper*)sender, SIGNAL(mapped(const class QString &)), that, SLOT(slot_proxy_func__ZN13QSignalMapper6mappedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QSignalMapper_SlotProxy_disconnect__ZN13QSignalMapper6mappedERK7QString(QSignalMapper_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QSignalMapper_SlotProxy::slot_proxy_func__ZN13QSignalMapper6mappedEi(int arg0) {
  if (this->slot_func__ZN13QSignalMapper6mappedEi != NULL) {
    // do smth...
    this->slot_func__ZN13QSignalMapper6mappedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QSignalMapper_SlotProxy_connect__ZN13QSignalMapper6mappedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QSignalMapper_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN13QSignalMapper6mappedEi = (decltype(that->slot_func__ZN13QSignalMapper6mappedEi))ffifptr;
  QObject::connect((QSignalMapper*)sender, SIGNAL(mapped(int)), that, SLOT(slot_proxy_func__ZN13QSignalMapper6mappedEi(int arg0)));
  return that;
}
extern "C"
void QSignalMapper_SlotProxy_disconnect__ZN13QSignalMapper6mappedEi(QSignalMapper_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

