// auto generated, do not modify.
// created: Wed Jan 20 00:16:23 2016
// src-file: /QtQml/qqmlpropertymap.h
// dst-file: /src/qml/qqmlpropertymap.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qqmlpropertymap.h>

extern "C" {

int QQmlPropertyMap_Class_Size()
{
  return sizeof(QQmlPropertyMap);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qqmlpropertymap_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
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

