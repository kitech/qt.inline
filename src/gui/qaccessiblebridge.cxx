// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtGui/qaccessiblebridge.h
// dst-file: /src/gui/qaccessiblebridge.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qaccessiblebridge.h>


// <= header block end

// main block begin =>
void __keep_qaccessiblebridge_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QAccessibleBridgePlugin_Class_Size()
{
  return sizeof(QAccessibleBridgePlugin);
}

extern "C"
int QAccessibleBridge_Class_Size()
{
  return sizeof(QAccessibleBridge);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qaccessiblebridge.h', line 62, column 14>
//   // proto:  void QAccessibleBridgePlugin::QAccessibleBridgePlugin(QObject * parent);
extern "C"
QAccessibleBridgePlugin*
C_ZN23QAccessibleBridgePluginC2EP7QObject(QObject * arg1) {
  // auto ret = new QAccessibleBridgePlugin(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qaccessiblebridge.h', line 65, column 32>
//   // proto:  QAccessibleBridge * QAccessibleBridgePlugin::create(const QString & key);
// _ZN23QAccessibleBridgePlugin6createERK7QString create(const class QString &)
extern "C"
void*
C_ZN23QAccessibleBridgePlugin6createERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QAccessibleBridgePlugin*)qthis)->create(*((const QString*)arg1));
  return (void*)ret;
}
//   // proto:  void QAccessibleBridgePlugin::~QAccessibleBridgePlugin();
extern "C"
void C_ZN23QAccessibleBridgePluginD2Ev(void *qthis) {
  delete (QAccessibleBridgePlugin*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qaccessiblebridge.h', line 60, column 5>
//   // proto:  const QMetaObject * QAccessibleBridgePlugin::metaObject();
// _ZNK23QAccessibleBridgePlugin10metaObjectEv metaObject()
extern "C"
void*
C_ZNK23QAccessibleBridgePlugin10metaObjectEv(void *qthis) {
  auto ret =
  ((QAccessibleBridgePlugin*)qthis)->metaObject();
  return (void*)ret;
}
//   // proto:  void QAccessibleBridge::~QAccessibleBridge();
extern "C"
void C_ZN17QAccessibleBridgeD2Ev(void *qthis) {
  delete (QAccessibleBridge*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qaccessiblebridge.h', line 53, column 18>
//   // proto:  void QAccessibleBridge::notifyAccessibilityUpdate(QAccessibleEvent * event);
// _ZN17QAccessibleBridge25notifyAccessibilityUpdateEP16QAccessibleEvent notifyAccessibilityUpdate(class QAccessibleEvent *)
extern "C"
void
C_ZN17QAccessibleBridge25notifyAccessibilityUpdateEP16QAccessibleEvent(void *qthis,
QAccessibleEvent * arg1) {
  ((QAccessibleBridge*)qthis)->notifyAccessibilityUpdate(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qaccessiblebridge.h', line 52, column 18>
//   // proto:  void QAccessibleBridge::setRootObject(QAccessibleInterface * );
// _ZN17QAccessibleBridge13setRootObjectEP20QAccessibleInterface setRootObject(class QAccessibleInterface *)
extern "C"
void
C_ZN17QAccessibleBridge13setRootObjectEP20QAccessibleInterface(void *qthis,
QAccessibleInterface * arg1) {
  ((QAccessibleBridge*)qthis)->setRootObject(arg1);
}
// <= ext block end

// body block begin =>
// QAccessibleBridgePlugin_SlotProxy here
class QAccessibleBridgePlugin_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QAccessibleBridgePlugin_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/gui/qaccessiblebridge.moc"

extern "C" {
  QAccessibleBridgePlugin_SlotProxy* QAccessibleBridgePlugin_SlotProxy_new()
  {
    return new QAccessibleBridgePlugin_SlotProxy();
  }
};

// <= body block end

