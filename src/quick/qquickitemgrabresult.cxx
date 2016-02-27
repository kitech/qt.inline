// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtQuick/qquickitemgrabresult.h
// dst-file: /src/quick/qquickitemgrabresult.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qquickitemgrabresult.h>


#include <qurl.h>
#include <qimage.h>
// <= header block end

// main block begin =>
void __keep_qquickitemgrabresult_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QQuickItemGrabResult_Class_Size()
{
  return sizeof(QQuickItemGrabResult);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitemgrabresult.h', line 61, column 22>
//   // proto:  bool QQuickItemGrabResult::saveToFile(const QString & fileName);
// _ZN20QQuickItemGrabResult10saveToFileERK7QString saveToFile(const class QString &)
extern "C"
bool
C_ZN20QQuickItemGrabResult10saveToFileERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QQuickItemGrabResult*)qthis)->saveToFile(*((const QString*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitemgrabresult.h', line 59, column 10>
//   // proto:  QUrl QQuickItemGrabResult::url();
// _ZNK20QQuickItemGrabResult3urlEv url()
extern "C"
QUrl*
C_ZNK20QQuickItemGrabResult3urlEv(void *qthis) {
  auto ret =
  ((QQuickItemGrabResult*)qthis)->url();
  return new QUrl(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitemgrabresult.h', line 58, column 12>
//   // proto:  QImage QQuickItemGrabResult::image();
// _ZNK20QQuickItemGrabResult5imageEv image()
extern "C"
QImage*
C_ZNK20QQuickItemGrabResult5imageEv(void *qthis) {
  auto ret =
  ((QQuickItemGrabResult*)qthis)->image();
  return new QImage(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitemgrabresult.h', line 52, column 5>
//   // proto:  const QMetaObject * QQuickItemGrabResult::metaObject();
// _ZNK20QQuickItemGrabResult10metaObjectEv metaObject()
extern "C"
void*
C_ZNK20QQuickItemGrabResult10metaObjectEv(void *qthis) {
  auto ret =
  ((QQuickItemGrabResult*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitemgrabresult.h', line 67, column 10>
//   // proto:  void QQuickItemGrabResult::ready();
// _ZN20QQuickItemGrabResult5readyEv ready()
extern "C"
void
C_ZN20QQuickItemGrabResult5readyEv(void *qthis) {
  ((QQuickItemGrabResult*)qthis)->ready();
}
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

