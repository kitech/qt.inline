// auto generated, do not modify.
// created: Wed Jan 20 00:16:23 2016
// src-file: /QtQml/qqmlexpression.h
// dst-file: /src/qml/qqmlexpression.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qqmlexpression.h>

extern "C" {

int QQmlExpression_Class_Size()
{
  return sizeof(QQmlExpression);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qqmlexpression_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QQmlExpression_SlotProxy here
class QQmlExpression_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QQmlExpression_SlotProxy():QObject(){}

public slots:
  // valueChanged()
  void slot_proxy_func__ZN14QQmlExpression12valueChangedEv();
public:
  void (*slot_func__ZN14QQmlExpression12valueChangedEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/qml/qqmlexpression.moc"

extern "C" {
  QQmlExpression_SlotProxy* QQmlExpression_SlotProxy_new()
  {
    return new QQmlExpression_SlotProxy();
  }
};

void QQmlExpression_SlotProxy::slot_proxy_func__ZN14QQmlExpression12valueChangedEv() {
  if (this->slot_func__ZN14QQmlExpression12valueChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN14QQmlExpression12valueChangedEv(this->rsfptr);
  }
}
extern "C"
void* QQmlExpression_SlotProxy_connect__ZN14QQmlExpression12valueChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQmlExpression_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN14QQmlExpression12valueChangedEv = (decltype(that->slot_func__ZN14QQmlExpression12valueChangedEv))ffifptr;
  QObject::connect((QQmlExpression*)sender, SIGNAL(valueChanged()), that, SLOT(slot_proxy_func__ZN14QQmlExpression12valueChangedEv()));
  return that;
}
extern "C"
void QQmlExpression_SlotProxy_disconnect__ZN14QQmlExpression12valueChangedEv(QQmlExpression_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

