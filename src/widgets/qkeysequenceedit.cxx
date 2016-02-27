// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtWidgets/qkeysequenceedit.h
// dst-file: /src/widgets/qkeysequenceedit.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qkeysequenceedit.h>


#include <qkeysequence.h>
// <= header block end

// main block begin =>
void __keep_qkeysequenceedit_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QKeySequenceEdit_Class_Size()
{
  return sizeof(QKeySequenceEdit);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qkeysequenceedit.h', line 52, column 14>
//   // proto:  void QKeySequenceEdit::QKeySequenceEdit(const QKeySequence & keySequence, QWidget * parent);
extern "C"
QKeySequenceEdit*
C_ZN16QKeySequenceEditC2ERK12QKeySequenceP7QWidget(const QKeySequence* arg1,
QWidget * arg2) {
  auto ret = new QKeySequenceEdit(*((const QKeySequence*)arg1), arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qkeysequenceedit.h', line 59, column 10>
//   // proto:  void QKeySequenceEdit::clear();
// _ZN16QKeySequenceEdit5clearEv clear()
extern "C"
void
C_ZN16QKeySequenceEdit5clearEv(void *qthis) {
  ((QKeySequenceEdit*)qthis)->clear();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qkeysequenceedit.h', line 58, column 10>
//   // proto:  void QKeySequenceEdit::setKeySequence(const QKeySequence & keySequence);
// _ZN16QKeySequenceEdit14setKeySequenceERK12QKeySequence setKeySequence(const class QKeySequence &)
extern "C"
void
C_ZN16QKeySequenceEdit14setKeySequenceERK12QKeySequence(void *qthis,
const QKeySequence* arg1) {
  ((QKeySequenceEdit*)qthis)->setKeySequence(*((const QKeySequence*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qkeysequenceedit.h', line 55, column 18>
//   // proto:  QKeySequence QKeySequenceEdit::keySequence();
// _ZNK16QKeySequenceEdit11keySequenceEv keySequence()
extern "C"
QKeySequence*
C_ZNK16QKeySequenceEdit11keySequenceEv(void *qthis) {
  auto ret =
  ((QKeySequenceEdit*)qthis)->keySequence();
  return new QKeySequence(ret); // 5
}
//   // proto:  void QKeySequenceEdit::~QKeySequenceEdit();
extern "C"
void C_ZN16QKeySequenceEditD2Ev(void *qthis) {
  delete (QKeySequenceEdit*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qkeysequenceedit.h', line 63, column 10>
//   // proto:  void QKeySequenceEdit::keySequenceChanged(const QKeySequence & keySequence);
// _ZN16QKeySequenceEdit18keySequenceChangedERK12QKeySequence keySequenceChanged(const class QKeySequence &)
extern "C"
void
C_ZN16QKeySequenceEdit18keySequenceChangedERK12QKeySequence(void *qthis,
const QKeySequence* arg1) {
  ((QKeySequenceEdit*)qthis)->keySequenceChanged(*((const QKeySequence*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qkeysequenceedit.h', line 62, column 10>
//   // proto:  void QKeySequenceEdit::editingFinished();
// _ZN16QKeySequenceEdit15editingFinishedEv editingFinished()
extern "C"
void
C_ZN16QKeySequenceEdit15editingFinishedEv(void *qthis) {
  ((QKeySequenceEdit*)qthis)->editingFinished();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qkeysequenceedit.h', line 51, column 14>
//   // proto:  void QKeySequenceEdit::QKeySequenceEdit(QWidget * parent);
extern "C"
QKeySequenceEdit*
C_ZN16QKeySequenceEditC2EP7QWidget(QWidget * arg1) {
  auto ret = new QKeySequenceEdit(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qkeysequenceedit.h', line 47, column 5>
//   // proto:  const QMetaObject * QKeySequenceEdit::metaObject();
// _ZNK16QKeySequenceEdit10metaObjectEv metaObject()
extern "C"
void*
C_ZNK16QKeySequenceEdit10metaObjectEv(void *qthis) {
  auto ret =
  ((QKeySequenceEdit*)qthis)->metaObject();
  return (void*)ret;
}
// <= ext block end

// body block begin =>
// QKeySequenceEdit_SlotProxy here
class QKeySequenceEdit_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QKeySequenceEdit_SlotProxy():QObject(){}

public slots:
  // keySequenceChanged(const class QKeySequence &)
  void slot_proxy_func__ZN16QKeySequenceEdit18keySequenceChangedERK12QKeySequence(const QKeySequence & arg0);
public:
  void (*slot_func__ZN16QKeySequenceEdit18keySequenceChangedERK12QKeySequence)(void* rsfptr, const QKeySequence & arg0) = NULL;
public slots:
  // editingFinished()
  void slot_proxy_func__ZN16QKeySequenceEdit15editingFinishedEv();
public:
  void (*slot_func__ZN16QKeySequenceEdit15editingFinishedEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qkeysequenceedit.moc"

extern "C" {
  QKeySequenceEdit_SlotProxy* QKeySequenceEdit_SlotProxy_new()
  {
    return new QKeySequenceEdit_SlotProxy();
  }
};

void QKeySequenceEdit_SlotProxy::slot_proxy_func__ZN16QKeySequenceEdit18keySequenceChangedERK12QKeySequence(const QKeySequence & arg0) {
  if (this->slot_func__ZN16QKeySequenceEdit18keySequenceChangedERK12QKeySequence != NULL) {
    // do smth...
    this->slot_func__ZN16QKeySequenceEdit18keySequenceChangedERK12QKeySequence(this->rsfptr, arg0);
  }
}
extern "C"
void* QKeySequenceEdit_SlotProxy_connect__ZN16QKeySequenceEdit18keySequenceChangedERK12QKeySequence(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QKeySequenceEdit_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN16QKeySequenceEdit18keySequenceChangedERK12QKeySequence = (decltype(that->slot_func__ZN16QKeySequenceEdit18keySequenceChangedERK12QKeySequence))ffifptr;
  QObject::connect((QKeySequenceEdit*)sender, SIGNAL(keySequenceChanged(const class QKeySequence &)), that, SLOT(slot_proxy_func__ZN16QKeySequenceEdit18keySequenceChangedERK12QKeySequence(const QKeySequence & arg0)));
  return that;
}
extern "C"
void QKeySequenceEdit_SlotProxy_disconnect__ZN16QKeySequenceEdit18keySequenceChangedERK12QKeySequence(QKeySequenceEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QKeySequenceEdit_SlotProxy::slot_proxy_func__ZN16QKeySequenceEdit15editingFinishedEv() {
  if (this->slot_func__ZN16QKeySequenceEdit15editingFinishedEv != NULL) {
    // do smth...
    this->slot_func__ZN16QKeySequenceEdit15editingFinishedEv(this->rsfptr);
  }
}
extern "C"
void* QKeySequenceEdit_SlotProxy_connect__ZN16QKeySequenceEdit15editingFinishedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QKeySequenceEdit_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN16QKeySequenceEdit15editingFinishedEv = (decltype(that->slot_func__ZN16QKeySequenceEdit15editingFinishedEv))ffifptr;
  QObject::connect((QKeySequenceEdit*)sender, SIGNAL(editingFinished()), that, SLOT(slot_proxy_func__ZN16QKeySequenceEdit15editingFinishedEv()));
  return that;
}
extern "C"
void QKeySequenceEdit_SlotProxy_disconnect__ZN16QKeySequenceEdit15editingFinishedEv(QKeySequenceEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

