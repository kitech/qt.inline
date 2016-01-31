// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtCore/qsignaltransition.h
// dst-file: /src/core/qsignaltransition.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qsignaltransition.h>


#include <qbytearray.h>
// <= header block end

// main block begin =>
void __keep_qsignaltransition_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QSignalTransition_Class_Size()
{
  return sizeof(QSignalTransition);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qsignaltransition.h', line 58, column 10>
//   // proto:  void QSignalTransition::setSenderObject(const QObject * sender);
// _ZN17QSignalTransition15setSenderObjectEPK7QObject setSenderObject(const class QObject *)
extern "C"
void
C_ZN17QSignalTransition15setSenderObjectEPK7QObject(void *qthis,
const QObject * arg1) {
  ((QSignalTransition*)qthis)->setSenderObject(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qsignaltransition.h', line 60, column 16>
//   // proto:  QByteArray QSignalTransition::signal();
// _ZNK17QSignalTransition6signalEv signal()
extern "C"
QByteArray*
C_ZNK17QSignalTransition6signalEv(void *qthis) {
  auto ret =
  ((QSignalTransition*)qthis)->signal();
  return new QByteArray(ret); // 5
}
//   // proto:  void QSignalTransition::~QSignalTransition();
extern "C"
void C_ZN17QSignalTransitionD2Ev(void *qthis) {
  delete (QSignalTransition*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qsignaltransition.h', line 53, column 5>
//   // proto:  void QSignalTransition::QSignalTransition(const QObject * sender, const char * signal, QState * sourceState);
extern "C"
QSignalTransition*
C_ZN17QSignalTransitionC2EPK7QObjectPKcP6QState(const QObject * arg1,
const char * arg2,
QState * arg3) {
  auto ret = new QSignalTransition(arg1,
arg2,
arg3);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qsignaltransition.h', line 57, column 14>
//   // proto:  QObject * QSignalTransition::senderObject();
// _ZNK17QSignalTransition12senderObjectEv senderObject()
extern "C"
void*
C_ZNK17QSignalTransition12senderObjectEv(void *qthis) {
  auto ret =
  ((QSignalTransition*)qthis)->senderObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qsignaltransition.h', line 52, column 5>
//   // proto:  void QSignalTransition::QSignalTransition(QState * sourceState);
extern "C"
QSignalTransition*
C_ZN17QSignalTransitionC2EP6QState(QState * arg1) {
  auto ret = new QSignalTransition(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qsignaltransition.h', line 61, column 10>
//   // proto:  void QSignalTransition::setSignal(const QByteArray & signal);
// _ZN17QSignalTransition9setSignalERK10QByteArray setSignal(const class QByteArray &)
extern "C"
void
C_ZN17QSignalTransition9setSignalERK10QByteArray(void *qthis,
const QByteArray* arg1) {
  ((QSignalTransition*)qthis)->setSignal(*((const QByteArray*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qsignaltransition.h', line 47, column 5>
//   // proto:  const QMetaObject * QSignalTransition::metaObject();
// _ZNK17QSignalTransition10metaObjectEv metaObject()
extern "C"
void*
C_ZNK17QSignalTransition10metaObjectEv(void *qthis) {
  auto ret =
  ((QSignalTransition*)qthis)->metaObject();
  return (void*)ret;
}
// <= ext block end

// body block begin =>
// QSignalTransition_SlotProxy here
class QSignalTransition_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QSignalTransition_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qsignaltransition.moc"

extern "C" {
  QSignalTransition_SlotProxy* QSignalTransition_SlotProxy_new()
  {
    return new QSignalTransition_SlotProxy();
  }
};

// <= body block end

