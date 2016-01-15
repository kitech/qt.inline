// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtCore/qcoreapplication.h
// dst-file: /src/core/qcoreapplication.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qcoreapplication.h>

extern "C" {

int QCoreApplication_Class_Size()
{
  return sizeof(QCoreApplication);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qcoreapplication_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qcoreapplication.h', line 110, column 30>
//   // proto: static QCoreApplication * QCoreApplication::instance();
if (false) {
  auto f = []() {
    ((QCoreApplication*)0)->instance();
  };
}
// _ZN16QCoreApplication8instanceEv instance()
// <SourceLocation file '/usr/include/qt/QtCore/qcoreapplication.h', line 118, column 17>
//   // proto: static bool QCoreApplication::sendEvent(QObject * receiver, QEvent * event);
if (false) {
  auto f = [](QObject * arg1, QEvent * arg2) {
    ((QCoreApplication*)0)->sendEvent(arg1, arg2);
  };
}
// _ZN16QCoreApplication9sendEventEP7QObjectP6QEvent sendEvent(class QObject *, class QEvent *)
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QCoreApplication_SlotProxy here
class QCoreApplication_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QCoreApplication_SlotProxy():QObject(){}

public slots:
  // applicationVersionChanged()
  void slot_proxy_func__ZN16QCoreApplication25applicationVersionChangedEv();
public:
  void (*slot_func__ZN16QCoreApplication25applicationVersionChangedEv)(void* rsfptr) = NULL;
public slots:
  // organizationNameChanged()
  void slot_proxy_func__ZN16QCoreApplication23organizationNameChangedEv();
public:
  void (*slot_func__ZN16QCoreApplication23organizationNameChangedEv)(void* rsfptr) = NULL;
public slots:
  // applicationNameChanged()
  void slot_proxy_func__ZN16QCoreApplication22applicationNameChangedEv();
public:
  void (*slot_func__ZN16QCoreApplication22applicationNameChangedEv)(void* rsfptr) = NULL;
public slots:
  // organizationDomainChanged()
  void slot_proxy_func__ZN16QCoreApplication25organizationDomainChangedEv();
public:
  void (*slot_func__ZN16QCoreApplication25organizationDomainChangedEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/core/qcoreapplication.moc"

extern "C" {
  QCoreApplication_SlotProxy* QCoreApplication_SlotProxy_new()
  {
    return new QCoreApplication_SlotProxy();
  }
};

void QCoreApplication_SlotProxy::slot_proxy_func__ZN16QCoreApplication25applicationVersionChangedEv() {
  if (this->slot_func__ZN16QCoreApplication25applicationVersionChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN16QCoreApplication25applicationVersionChangedEv(this->rsfptr);
  }
}
extern "C"
void* QCoreApplication_SlotProxy_connect__ZN16QCoreApplication25applicationVersionChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QCoreApplication_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN16QCoreApplication25applicationVersionChangedEv = (decltype(that->slot_func__ZN16QCoreApplication25applicationVersionChangedEv))ffifptr;
  QObject::connect((QCoreApplication*)sender, SIGNAL(applicationVersionChanged()), that, SLOT(slot_proxy_func__ZN16QCoreApplication25applicationVersionChangedEv()));
  return that;
}
extern "C"
void QCoreApplication_SlotProxy_disconnect__ZN16QCoreApplication25applicationVersionChangedEv(QCoreApplication_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QCoreApplication_SlotProxy::slot_proxy_func__ZN16QCoreApplication23organizationNameChangedEv() {
  if (this->slot_func__ZN16QCoreApplication23organizationNameChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN16QCoreApplication23organizationNameChangedEv(this->rsfptr);
  }
}
extern "C"
void* QCoreApplication_SlotProxy_connect__ZN16QCoreApplication23organizationNameChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QCoreApplication_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN16QCoreApplication23organizationNameChangedEv = (decltype(that->slot_func__ZN16QCoreApplication23organizationNameChangedEv))ffifptr;
  QObject::connect((QCoreApplication*)sender, SIGNAL(organizationNameChanged()), that, SLOT(slot_proxy_func__ZN16QCoreApplication23organizationNameChangedEv()));
  return that;
}
extern "C"
void QCoreApplication_SlotProxy_disconnect__ZN16QCoreApplication23organizationNameChangedEv(QCoreApplication_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QCoreApplication_SlotProxy::slot_proxy_func__ZN16QCoreApplication22applicationNameChangedEv() {
  if (this->slot_func__ZN16QCoreApplication22applicationNameChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN16QCoreApplication22applicationNameChangedEv(this->rsfptr);
  }
}
extern "C"
void* QCoreApplication_SlotProxy_connect__ZN16QCoreApplication22applicationNameChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QCoreApplication_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN16QCoreApplication22applicationNameChangedEv = (decltype(that->slot_func__ZN16QCoreApplication22applicationNameChangedEv))ffifptr;
  QObject::connect((QCoreApplication*)sender, SIGNAL(applicationNameChanged()), that, SLOT(slot_proxy_func__ZN16QCoreApplication22applicationNameChangedEv()));
  return that;
}
extern "C"
void QCoreApplication_SlotProxy_disconnect__ZN16QCoreApplication22applicationNameChangedEv(QCoreApplication_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QCoreApplication_SlotProxy::slot_proxy_func__ZN16QCoreApplication25organizationDomainChangedEv() {
  if (this->slot_func__ZN16QCoreApplication25organizationDomainChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN16QCoreApplication25organizationDomainChangedEv(this->rsfptr);
  }
}
extern "C"
void* QCoreApplication_SlotProxy_connect__ZN16QCoreApplication25organizationDomainChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QCoreApplication_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN16QCoreApplication25organizationDomainChangedEv = (decltype(that->slot_func__ZN16QCoreApplication25organizationDomainChangedEv))ffifptr;
  QObject::connect((QCoreApplication*)sender, SIGNAL(organizationDomainChanged()), that, SLOT(slot_proxy_func__ZN16QCoreApplication25organizationDomainChangedEv()));
  return that;
}
extern "C"
void QCoreApplication_SlotProxy_disconnect__ZN16QCoreApplication25organizationDomainChangedEv(QCoreApplication_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

