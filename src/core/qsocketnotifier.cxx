// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtCore/qsocketnotifier.h
// dst-file: /src/core/qsocketnotifier.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qsocketnotifier.h>


#include <qglobal.h>
// <= header block end

// main block begin =>
void __keep_qsocketnotifier_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QSocketNotifier_Class_Size()
{
  return sizeof(QSocketNotifier);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qsocketnotifier.h', line 53, column 13>
//   // proto:  qintptr QSocketNotifier::socket();
// _ZNK15QSocketNotifier6socketEv socket()
extern "C"
int
C_ZNK15QSocketNotifier6socketEv(void *qthis) {
  auto ret =
  ((QSocketNotifier*)qthis)->socket();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qsocketnotifier.h', line 56, column 10>
//   // proto:  bool QSocketNotifier::isEnabled();
// _ZNK15QSocketNotifier9isEnabledEv isEnabled()
extern "C"
bool
C_ZNK15QSocketNotifier9isEnabledEv(void *qthis) {
  auto ret =
  ((QSocketNotifier*)qthis)->isEnabled();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qsocketnotifier.h', line 59, column 10>
//   // proto:  void QSocketNotifier::setEnabled(bool );
// _ZN15QSocketNotifier10setEnabledEb setEnabled(_Bool)
extern "C"
void
C_ZN15QSocketNotifier10setEnabledEb(void *qthis,
bool arg1) {
  ((QSocketNotifier*)qthis)->setEnabled(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qsocketnotifier.h', line 54, column 10>
//   // proto:  QSocketNotifier::Type QSocketNotifier::type();
// _ZNK15QSocketNotifier4typeEv type()
extern "C"
QSocketNotifier::Type
C_ZNK15QSocketNotifier4typeEv(void *qthis) {
  auto ret =
  ((QSocketNotifier*)qthis)->type();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qsocketnotifier.h', line 50, column 5>
//   // proto:  void QSocketNotifier::QSocketNotifier(qintptr socket, QSocketNotifier::Type , QObject * parent);
extern "C"
QSocketNotifier*
C_ZN15QSocketNotifierC2EiNS_4TypeEP7QObject(qintptr arg1,
QSocketNotifier::Type arg2,
QObject * arg3) {
  auto ret = new QSocketNotifier(arg1,
arg2,
arg3);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qsocketnotifier.h', line 44, column 5>
//   // proto:  const QMetaObject * QSocketNotifier::metaObject();
// _ZNK15QSocketNotifier10metaObjectEv metaObject()
extern "C"
void*
C_ZNK15QSocketNotifier10metaObjectEv(void *qthis) {
  auto ret =
  ((QSocketNotifier*)qthis)->metaObject();
  return (void*)ret;
}
//   // proto:  void QSocketNotifier::~QSocketNotifier();
extern "C"
void C_ZN15QSocketNotifierD2Ev(void *qthis) {
  delete (QSocketNotifier*)qthis;
}
// <= ext block end

// body block begin =>
// QSocketNotifier_SlotProxy here
class QSocketNotifier_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QSocketNotifier_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qsocketnotifier.moc"

extern "C" {
  QSocketNotifier_SlotProxy* QSocketNotifier_SlotProxy_new()
  {
    return new QSocketNotifier_SlotProxy();
  }
};

// <= body block end

