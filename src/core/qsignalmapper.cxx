// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
// src-file: /QtCore/qsignalmapper.h
// dst-file: /src/core/qsignalmapper.cxx
//

// header block begin =>
#include <qsignalmapper.h>

extern "C" {

int QSignalMapper_Class_Size()
{
  return sizeof(QSignalMapper);
}

// QSignalMapper(class QObject *)
QSignalMapper* dector_ZN13QSignalMapperC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QSignalMapper) == 32, "tyszerr");
  QSignalMapper* rthis = new QSignalMapper(parent);
  return rthis;
}

// ~QSignalMapper()
void dedtor_ZN13QSignalMapperD0Ev(QSignalMapper* that)
{
  QSignalMapper* rthis = (QSignalMapper*)that;
  delete rthis;
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
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

