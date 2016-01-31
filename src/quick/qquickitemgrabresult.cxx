#include <qimage.h>
#include <qurl.h>
// auto generated, do not modify.
// created: Fri Jan 22 22:26:45 2016
// src-file: /QtQuick/qquickitemgrabresult.h
// dst-file: /src/quick/qquickitemgrabresult.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qquickitemgrabresult.h>

extern "C" {

int QQuickItemGrabResult_Class_Size()
{
  return sizeof(QQuickItemGrabResult);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qquickitemgrabresult_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitemgrabresult.h', line 61, column 22>
//   // proto:  bool QQuickItemGrabResult::saveToFile(const QString & fileName);
if (true) {
  auto f = [](QQuickItemGrabResult flythis, const QString & arg1) {
    ((QQuickItemGrabResult*)0)->saveToFile(arg1);
    flythis.saveToFile(arg1);
  };
  if (f == nullptr){}
}
// _ZN20QQuickItemGrabResult10saveToFileERK7QString saveToFile(const class QString &)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitemgrabresult.h', line 59, column 10>
//   // proto:  QUrl QQuickItemGrabResult::url();
if (true) {
  auto f = [](QQuickItemGrabResult flythis) {
    ((QQuickItemGrabResult*)0)->url();
    flythis.url();
  };
  if (f == nullptr){}
}
// _ZNK20QQuickItemGrabResult3urlEv url()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitemgrabresult.h', line 58, column 12>
//   // proto:  QImage QQuickItemGrabResult::image();
if (true) {
  auto f = [](QQuickItemGrabResult flythis) {
    ((QQuickItemGrabResult*)0)->image();
    flythis.image();
  };
  if (f == nullptr){}
}
// _ZNK20QQuickItemGrabResult5imageEv image()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitemgrabresult.h', line 52, column 5>
//   // proto:  const QMetaObject * QQuickItemGrabResult::metaObject();
if (true) {
  auto f = [](QQuickItemGrabResult flythis) {
    ((QQuickItemGrabResult*)0)->metaObject();
    flythis.metaObject();
  };
  if (f == nullptr){}
}
// _ZNK20QQuickItemGrabResult10metaObjectEv metaObject()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitemgrabresult.h', line 67, column 10>
//   // proto:  void QQuickItemGrabResult::ready();
if (true) {
  auto f = [](QQuickItemGrabResult flythis) {
    ((QQuickItemGrabResult*)0)->ready();
    flythis.ready();
  };
  if (f == nullptr){}
}
// _ZN20QQuickItemGrabResult5readyEv ready()
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitemgrabresult.h', line 61, column 22>
//   // proto:  bool QQuickItemGrabResult::saveToFile(const QString & fileName);
extern "C"
void C_ZN20QQuickItemGrabResult10saveToFileERK7QString(void *qthis, const QString & arg1) {
  ((QQuickItemGrabResult*)qthis)->saveToFile(arg1);
}
// _ZN20QQuickItemGrabResult10saveToFileERK7QString saveToFile(const class QString &)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitemgrabresult.h', line 59, column 10>
//   // proto:  QUrl QQuickItemGrabResult::url();
extern "C"
void C_ZNK20QQuickItemGrabResult3urlEv(void *qthis) {
  ((QQuickItemGrabResult*)qthis)->url();
}
// _ZNK20QQuickItemGrabResult3urlEv url()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitemgrabresult.h', line 58, column 12>
//   // proto:  QImage QQuickItemGrabResult::image();
extern "C"
void C_ZNK20QQuickItemGrabResult5imageEv(void *qthis) {
  ((QQuickItemGrabResult*)qthis)->image();
}
// _ZNK20QQuickItemGrabResult5imageEv image()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitemgrabresult.h', line 52, column 5>
//   // proto:  const QMetaObject * QQuickItemGrabResult::metaObject();
extern "C"
void C_ZNK20QQuickItemGrabResult10metaObjectEv(void *qthis) {
  ((QQuickItemGrabResult*)qthis)->metaObject();
}
// _ZNK20QQuickItemGrabResult10metaObjectEv metaObject()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitemgrabresult.h', line 67, column 10>
//   // proto:  void QQuickItemGrabResult::ready();
extern "C"
void C_ZN20QQuickItemGrabResult5readyEv(void *qthis) {
  ((QQuickItemGrabResult*)qthis)->ready();
}
// _ZN20QQuickItemGrabResult5readyEv ready()
// <= ext block end

// body block begin =>
// QQuickItemGrabResult_SlotProxy here
class QQuickItemGrabResult_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QQuickItemGrabResult_SlotProxy():QObject(){}

public slots:
  // ready()
  void slot_proxy_func__ZN20QQuickItemGrabResult5readyEv();
public:
  void (*slot_func__ZN20QQuickItemGrabResult5readyEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/quick/qquickitemgrabresult.moc"

extern "C" {
  QQuickItemGrabResult_SlotProxy* QQuickItemGrabResult_SlotProxy_new()
  {
    return new QQuickItemGrabResult_SlotProxy();
  }
};

void QQuickItemGrabResult_SlotProxy::slot_proxy_func__ZN20QQuickItemGrabResult5readyEv() {
  if (this->slot_func__ZN20QQuickItemGrabResult5readyEv != NULL) {
    // do smth...
    this->slot_func__ZN20QQuickItemGrabResult5readyEv(this->rsfptr);
  }
}
extern "C"
void* QQuickItemGrabResult_SlotProxy_connect__ZN20QQuickItemGrabResult5readyEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickItemGrabResult_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN20QQuickItemGrabResult5readyEv = (decltype(that->slot_func__ZN20QQuickItemGrabResult5readyEv))ffifptr;
  QObject::connect((QQuickItemGrabResult*)sender, SIGNAL(ready()), that, SLOT(slot_proxy_func__ZN20QQuickItemGrabResult5readyEv()));
  return that;
}
extern "C"
void QQuickItemGrabResult_SlotProxy_disconnect__ZN20QQuickItemGrabResult5readyEv(QQuickItemGrabResult_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

