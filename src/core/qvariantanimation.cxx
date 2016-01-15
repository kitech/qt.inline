// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtCore/qvariantanimation.h
// dst-file: /src/core/qvariantanimation.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qvariantanimation.h>

extern "C" {

int QVariantAnimation_Class_Size()
{
  return sizeof(QVariantAnimation);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qvariantanimation_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QVariantAnimation_SlotProxy here
class QVariantAnimation_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QVariantAnimation_SlotProxy():QObject(){}

public slots:
  // valueChanged(const class QVariant &)
  void slot_proxy_func__ZN17QVariantAnimation12valueChangedERK8QVariant(const QVariant & arg0);
public:
  void (*slot_func__ZN17QVariantAnimation12valueChangedERK8QVariant)(void* rsfptr, const QVariant & arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/core/qvariantanimation.moc"

extern "C" {
  QVariantAnimation_SlotProxy* QVariantAnimation_SlotProxy_new()
  {
    return new QVariantAnimation_SlotProxy();
  }
};

void QVariantAnimation_SlotProxy::slot_proxy_func__ZN17QVariantAnimation12valueChangedERK8QVariant(const QVariant & arg0) {
  if (this->slot_func__ZN17QVariantAnimation12valueChangedERK8QVariant != NULL) {
    // do smth...
    this->slot_func__ZN17QVariantAnimation12valueChangedERK8QVariant(this->rsfptr, arg0);
  }
}
extern "C"
void* QVariantAnimation_SlotProxy_connect__ZN17QVariantAnimation12valueChangedERK8QVariant(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QVariantAnimation_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN17QVariantAnimation12valueChangedERK8QVariant = (decltype(that->slot_func__ZN17QVariantAnimation12valueChangedERK8QVariant))ffifptr;
  QObject::connect((QVariantAnimation*)sender, SIGNAL(valueChanged(const class QVariant &)), that, SLOT(slot_proxy_func__ZN17QVariantAnimation12valueChangedERK8QVariant(const QVariant & arg0)));
  return that;
}
extern "C"
void QVariantAnimation_SlotProxy_disconnect__ZN17QVariantAnimation12valueChangedERK8QVariant(QVariantAnimation_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

