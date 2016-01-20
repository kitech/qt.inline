// auto generated, do not modify.
// created: Wed Jan 20 00:16:23 2016
// src-file: /QtQml/qqmlcomponent.h
// dst-file: /src/qml/qqmlcomponent.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qqmlcomponent.h>

extern "C" {

int QQmlComponent_Class_Size()
{
  return sizeof(QQmlComponent);
}

int QQmlTypeInfo_QQmlComponent__Class_Size()
{
  return sizeof(QQmlTypeInfo<QQmlComponent>);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qqmlcomponent_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QQmlComponent_SlotProxy here
class QQmlComponent_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QQmlComponent_SlotProxy():QObject(){}

public slots:
  // progressChanged(qreal)
  void slot_proxy_func__ZN13QQmlComponent15progressChangedEd(qreal arg0);
public:
  void (*slot_func__ZN13QQmlComponent15progressChangedEd)(void* rsfptr, qreal arg0) = NULL;
public slots:
  // statusChanged(class QQmlComponent::Status)
  void slot_proxy_func__ZN13QQmlComponent13statusChangedENS_6StatusE(QQmlComponent::Status arg0);
public:
  void (*slot_func__ZN13QQmlComponent13statusChangedENS_6StatusE)(void* rsfptr, QQmlComponent::Status arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/qml/qqmlcomponent.moc"

extern "C" {
  QQmlComponent_SlotProxy* QQmlComponent_SlotProxy_new()
  {
    return new QQmlComponent_SlotProxy();
  }
};

void QQmlComponent_SlotProxy::slot_proxy_func__ZN13QQmlComponent15progressChangedEd(qreal arg0) {
  if (this->slot_func__ZN13QQmlComponent15progressChangedEd != NULL) {
    // do smth...
    this->slot_func__ZN13QQmlComponent15progressChangedEd(this->rsfptr, arg0);
  }
}
extern "C"
void* QQmlComponent_SlotProxy_connect__ZN13QQmlComponent15progressChangedEd(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQmlComponent_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN13QQmlComponent15progressChangedEd = (decltype(that->slot_func__ZN13QQmlComponent15progressChangedEd))ffifptr;
  QObject::connect((QQmlComponent*)sender, SIGNAL(progressChanged(qreal)), that, SLOT(slot_proxy_func__ZN13QQmlComponent15progressChangedEd(qreal arg0)));
  return that;
}
extern "C"
void QQmlComponent_SlotProxy_disconnect__ZN13QQmlComponent15progressChangedEd(QQmlComponent_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQmlComponent_SlotProxy::slot_proxy_func__ZN13QQmlComponent13statusChangedENS_6StatusE(QQmlComponent::Status arg0) {
  if (this->slot_func__ZN13QQmlComponent13statusChangedENS_6StatusE != NULL) {
    // do smth...
    this->slot_func__ZN13QQmlComponent13statusChangedENS_6StatusE(this->rsfptr, arg0);
  }
}
extern "C"
void* QQmlComponent_SlotProxy_connect__ZN13QQmlComponent13statusChangedENS_6StatusE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQmlComponent_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN13QQmlComponent13statusChangedENS_6StatusE = (decltype(that->slot_func__ZN13QQmlComponent13statusChangedENS_6StatusE))ffifptr;
  QObject::connect((QQmlComponent*)sender, SIGNAL(statusChanged(class QQmlComponent::Status)), that, SLOT(slot_proxy_func__ZN13QQmlComponent13statusChangedENS_6StatusE(QQmlComponent::Status arg0)));
  return that;
}
extern "C"
void QQmlComponent_SlotProxy_disconnect__ZN13QQmlComponent13statusChangedENS_6StatusE(QQmlComponent_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

