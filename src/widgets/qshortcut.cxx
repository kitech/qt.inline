// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtWidgets/qshortcut.h
// dst-file: /src/widgets/qshortcut.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qshortcut.h>


#include <qkeysequence.h>
#include <qnamespace.h>
#include <qstring.h>
// <= header block end

// main block begin =>
void __keep_qshortcut_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtWidgets/qshortcut.h', line 85, column 21>
//   // proto:  QWidget * QShortcut::parentWidget();
if (true) {
  auto f = [](QShortcut flythis) {
    ((QShortcut*)0)->parentWidget();
    flythis.parentWidget();
  };
  if (f == nullptr){}
}
// _ZNK9QShortcut12parentWidgetEv parentWidget()
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QShortcut_Class_Size()
{
  return sizeof(QShortcut);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qshortcut.h', line 68, column 10>
//   // proto:  void QShortcut::setKey(const QKeySequence & key);
// _ZN9QShortcut6setKeyERK12QKeySequence setKey(const class QKeySequence &)
extern "C"
void
C_ZN9QShortcut6setKeyERK12QKeySequence(void *qthis,
const QKeySequence* arg1) {
  ((QShortcut*)qthis)->setKey(*((const QKeySequence*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qshortcut.h', line 89, column 10>
//   // proto:  void QShortcut::activated();
// _ZN9QShortcut9activatedEv activated()
extern "C"
void
C_ZN9QShortcut9activatedEv(void *qthis) {
  ((QShortcut*)qthis)->activated();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qshortcut.h', line 54, column 5>
//   // proto:  const QMetaObject * QShortcut::metaObject();
// _ZNK9QShortcut10metaObjectEv metaObject()
extern "C"
void*
C_ZNK9QShortcut10metaObjectEv(void *qthis) {
  auto ret =
  ((QShortcut*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qshortcut.h', line 85, column 21>
//   // proto:  QWidget * QShortcut::parentWidget();
// _ZNK9QShortcut12parentWidgetEv parentWidget()
extern "C"
void*
C_ZNK9QShortcut12parentWidgetEv(void *qthis) {
  auto ret =
  ((QShortcut*)qthis)->parentWidget();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qshortcut.h', line 63, column 5>
//   // proto:  void QShortcut::QShortcut(const QKeySequence & key, QWidget * parent, const char * member, const char * ambiguousMember, Qt::ShortcutContext context);
extern "C"
QShortcut*
C_ZN9QShortcutC2ERK12QKeySequenceP7QWidgetPKcS6_N2Qt15ShortcutContextE(const QKeySequence* arg1,
QWidget * arg2,
const char * arg3,
const char * arg4,
Qt::ShortcutContext* arg5) {
  auto ret = new QShortcut(*((const QKeySequence*)arg1),
arg2,
arg3,
arg4,
*((Qt::ShortcutContext*)arg5));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qshortcut.h', line 80, column 10>
//   // proto:  void QShortcut::setAutoRepeat(bool on);
// _ZN9QShortcut13setAutoRepeatEb setAutoRepeat(_Bool)
extern "C"
void
C_ZN9QShortcut13setAutoRepeatEb(void *qthis,
bool arg1) {
  ((QShortcut*)qthis)->setAutoRepeat(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qshortcut.h', line 72, column 10>
//   // proto:  bool QShortcut::isEnabled();
// _ZNK9QShortcut9isEnabledEv isEnabled()
extern "C"
bool
C_ZNK9QShortcut9isEnabledEv(void *qthis) {
  auto ret =
  ((QShortcut*)qthis)->isEnabled();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qshortcut.h', line 69, column 18>
//   // proto:  QKeySequence QShortcut::key();
// _ZNK9QShortcut3keyEv key()
extern "C"
QKeySequence*
C_ZNK9QShortcut3keyEv(void *qthis) {
  auto ret =
  ((QShortcut*)qthis)->key();
  return new QKeySequence(ret); // 5
}
//   // proto:  void QShortcut::~QShortcut();
extern "C"
void C_ZN9QShortcutD2Ev(void *qthis) {
  delete (QShortcut*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qshortcut.h', line 77, column 10>
//   // proto:  void QShortcut::setWhatsThis(const QString & text);
// _ZN9QShortcut12setWhatsThisERK7QString setWhatsThis(const class QString &)
extern "C"
void
C_ZN9QShortcut12setWhatsThisERK7QString(void *qthis,
const QString* arg1) {
  ((QShortcut*)qthis)->setWhatsThis(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qshortcut.h', line 71, column 10>
//   // proto:  void QShortcut::setEnabled(bool enable);
// _ZN9QShortcut10setEnabledEb setEnabled(_Bool)
extern "C"
void
C_ZN9QShortcut10setEnabledEb(void *qthis,
bool arg1) {
  ((QShortcut*)qthis)->setEnabled(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qshortcut.h', line 83, column 9>
//   // proto:  int QShortcut::id();
// _ZNK9QShortcut2idEv id()
extern "C"
int
C_ZNK9QShortcut2idEv(void *qthis) {
  auto ret =
  ((QShortcut*)qthis)->id();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qshortcut.h', line 74, column 10>
//   // proto:  void QShortcut::setContext(Qt::ShortcutContext context);
// _ZN9QShortcut10setContextEN2Qt15ShortcutContextE setContext(Qt::ShortcutContext)
extern "C"
void
C_ZN9QShortcut10setContextEN2Qt15ShortcutContextE(void *qthis,
Qt::ShortcutContext* arg1) {
  ((QShortcut*)qthis)->setContext(*((Qt::ShortcutContext*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qshortcut.h', line 75, column 25>
//   // proto:  Qt::ShortcutContext QShortcut::context();
// _ZNK9QShortcut7contextEv context()
extern "C"
Qt::ShortcutContext
C_ZNK9QShortcut7contextEv(void *qthis) {
  auto ret =
  ((QShortcut*)qthis)->context();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qshortcut.h', line 78, column 13>
//   // proto:  QString QShortcut::whatsThis();
// _ZNK9QShortcut9whatsThisEv whatsThis()
extern "C"
QString*
C_ZNK9QShortcut9whatsThisEv(void *qthis) {
  auto ret =
  ((QShortcut*)qthis)->whatsThis();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qshortcut.h', line 62, column 14>
//   // proto:  void QShortcut::QShortcut(QWidget * parent);
extern "C"
QShortcut*
C_ZN9QShortcutC2EP7QWidget(QWidget * arg1) {
  auto ret = new QShortcut(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qshortcut.h', line 90, column 10>
//   // proto:  void QShortcut::activatedAmbiguously();
// _ZN9QShortcut20activatedAmbiguouslyEv activatedAmbiguously()
extern "C"
void
C_ZN9QShortcut20activatedAmbiguouslyEv(void *qthis) {
  ((QShortcut*)qthis)->activatedAmbiguously();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qshortcut.h', line 81, column 10>
//   // proto:  bool QShortcut::autoRepeat();
// _ZNK9QShortcut10autoRepeatEv autoRepeat()
extern "C"
bool
C_ZNK9QShortcut10autoRepeatEv(void *qthis) {
  auto ret =
  ((QShortcut*)qthis)->autoRepeat();
  return ret; // 0 TypeKind.BOOL
}
// <= ext block end

// body block begin =>
// QShortcut_SlotProxy here
class QShortcut_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QShortcut_SlotProxy():QObject(){}

public slots:
  // activated()
  void slot_proxy_func__ZN9QShortcut9activatedEv();
public:
  void (*slot_func__ZN9QShortcut9activatedEv)(void* rsfptr) = NULL;
public slots:
  // activatedAmbiguously()
  void slot_proxy_func__ZN9QShortcut20activatedAmbiguouslyEv();
public:
  void (*slot_func__ZN9QShortcut20activatedAmbiguouslyEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qshortcut.moc"

extern "C" {
  QShortcut_SlotProxy* QShortcut_SlotProxy_new()
  {
    return new QShortcut_SlotProxy();
  }
};

void QShortcut_SlotProxy::slot_proxy_func__ZN9QShortcut9activatedEv() {
  if (this->slot_func__ZN9QShortcut9activatedEv != NULL) {
    // do smth...
    this->slot_func__ZN9QShortcut9activatedEv(this->rsfptr);
  }
}
extern "C"
void* QShortcut_SlotProxy_connect__ZN9QShortcut9activatedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QShortcut_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QShortcut9activatedEv = (decltype(that->slot_func__ZN9QShortcut9activatedEv))ffifptr;
  QObject::connect((QShortcut*)sender, SIGNAL(activated()), that, SLOT(slot_proxy_func__ZN9QShortcut9activatedEv()));
  return that;
}
extern "C"
void QShortcut_SlotProxy_disconnect__ZN9QShortcut9activatedEv(QShortcut_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QShortcut_SlotProxy::slot_proxy_func__ZN9QShortcut20activatedAmbiguouslyEv() {
  if (this->slot_func__ZN9QShortcut20activatedAmbiguouslyEv != NULL) {
    // do smth...
    this->slot_func__ZN9QShortcut20activatedAmbiguouslyEv(this->rsfptr);
  }
}
extern "C"
void* QShortcut_SlotProxy_connect__ZN9QShortcut20activatedAmbiguouslyEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QShortcut_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QShortcut20activatedAmbiguouslyEv = (decltype(that->slot_func__ZN9QShortcut20activatedAmbiguouslyEv))ffifptr;
  QObject::connect((QShortcut*)sender, SIGNAL(activatedAmbiguously()), that, SLOT(slot_proxy_func__ZN9QShortcut20activatedAmbiguouslyEv()));
  return that;
}
extern "C"
void QShortcut_SlotProxy_disconnect__ZN9QShortcut20activatedAmbiguouslyEv(QShortcut_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

