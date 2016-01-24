// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtWidgets/qundostack.h
// dst-file: /src/widgets/qundostack.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qundostack.h>


#include <qstring.h>
// <= header block end

// main block begin =>
void __keep_qundostack_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QUndoStack_Class_Size()
{
  return sizeof(QUndoStack);
}

extern "C"
int QUndoCommand_Class_Size()
{
  return sizeof(QUndoCommand);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qundostack.h', line 118, column 9>
//   // proto:  int QUndoStack::undoLimit();
// _ZNK10QUndoStack9undoLimitEv undoLimit()
extern "C"
int
C_ZNK10QUndoStack9undoLimitEv(void *qthis) {
  auto ret =
  ((QUndoStack*)qthis)->undoLimit();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundostack.h', line 134, column 10>
//   // proto:  void QUndoStack::undoTextChanged(const QString & undoText);
// _ZN10QUndoStack15undoTextChangedERK7QString undoTextChanged(const class QString &)
extern "C"
void
C_ZN10QUndoStack15undoTextChangedERK7QString(void *qthis,
const QString* arg1) {
  ((QUndoStack*)qthis)->undoTextChanged(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundostack.h', line 135, column 10>
//   // proto:  void QUndoStack::redoTextChanged(const QString & redoText);
// _ZN10QUndoStack15redoTextChangedERK7QString redoTextChanged(const class QString &)
extern "C"
void
C_ZN10QUndoStack15redoTextChangedERK7QString(void *qthis,
const QString* arg1) {
  ((QUndoStack*)qthis)->redoTextChanged(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundostack.h', line 120, column 25>
//   // proto:  const QUndoCommand * QUndoStack::command(int index);
// _ZNK10QUndoStack7commandEi command(int)
extern "C"
void*
C_ZNK10QUndoStack7commandEi(void *qthis,
int arg1) {
  auto ret =
  ((QUndoStack*)qthis)->command(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundostack.h', line 95, column 10>
//   // proto:  bool QUndoStack::canRedo();
// _ZNK10QUndoStack7canRedoEv canRedo()
extern "C"
bool
C_ZNK10QUndoStack7canRedoEv(void *qthis) {
  auto ret =
  ((QUndoStack*)qthis)->canRedo();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundostack.h', line 82, column 5>
//   // proto:  const QMetaObject * QUndoStack::metaObject();
// _ZNK10QUndoStack10metaObjectEv metaObject()
extern "C"
void*
C_ZNK10QUndoStack10metaObjectEv(void *qthis) {
  auto ret =
  ((QUndoStack*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundostack.h', line 97, column 13>
//   // proto:  QString QUndoStack::redoText();
// _ZNK10QUndoStack8redoTextEv redoText()
extern "C"
QString*
C_ZNK10QUndoStack8redoTextEv(void *qthis) {
  auto ret =
  ((QUndoStack*)qthis)->redoText();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundostack.h', line 104, column 14>
//   // proto:  QAction * QUndoStack::createUndoAction(QObject * parent, const QString & prefix);
// _ZNK10QUndoStack16createUndoActionEP7QObjectRK7QString createUndoAction(class QObject *, const class QString &)
extern "C"
void*
C_ZNK10QUndoStack16createUndoActionEP7QObjectRK7QString(void *qthis,
QObject * arg1,
const QString* arg2) {
  auto ret =
  ((QUndoStack*)qthis)->createUndoAction(arg1,
*((const QString*)arg2));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundostack.h', line 99, column 9>
//   // proto:  int QUndoStack::count();
// _ZNK10QUndoStack5countEv count()
extern "C"
int
C_ZNK10QUndoStack5countEv(void *qthis) {
  auto ret =
  ((QUndoStack*)qthis)->count();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundostack.h', line 106, column 14>
//   // proto:  QAction * QUndoStack::createRedoAction(QObject * parent, const QString & prefix);
// _ZNK10QUndoStack16createRedoActionEP7QObjectRK7QString createRedoAction(class QObject *, const class QString &)
extern "C"
void*
C_ZNK10QUndoStack16createRedoActionEP7QObjectRK7QString(void *qthis,
QObject * arg1,
const QString* arg2) {
  auto ret =
  ((QUndoStack*)qthis)->createRedoAction(arg1,
*((const QString*)arg2));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundostack.h', line 100, column 9>
//   // proto:  int QUndoStack::index();
// _ZNK10QUndoStack5indexEv index()
extern "C"
int
C_ZNK10QUndoStack5indexEv(void *qthis) {
  auto ret =
  ((QUndoStack*)qthis)->index();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundostack.h', line 90, column 10>
//   // proto:  void QUndoStack::clear();
// _ZN10QUndoStack5clearEv clear()
extern "C"
void
C_ZN10QUndoStack5clearEv(void *qthis) {
  ((QUndoStack*)qthis)->clear();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundostack.h', line 125, column 10>
//   // proto:  void QUndoStack::undo();
// _ZN10QUndoStack4undoEv undo()
extern "C"
void
C_ZN10QUndoStack4undoEv(void *qthis) {
  ((QUndoStack*)qthis)->undo();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundostack.h', line 133, column 10>
//   // proto:  void QUndoStack::canRedoChanged(bool canRedo);
// _ZN10QUndoStack14canRedoChangedEb canRedoChanged(_Bool)
extern "C"
void
C_ZN10QUndoStack14canRedoChangedEb(void *qthis,
bool arg1) {
  ((QUndoStack*)qthis)->canRedoChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundostack.h', line 94, column 10>
//   // proto:  bool QUndoStack::canUndo();
// _ZNK10QUndoStack7canUndoEv canUndo()
extern "C"
bool
C_ZNK10QUndoStack7canUndoEv(void *qthis) {
  auto ret =
  ((QUndoStack*)qthis)->canUndo();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundostack.h', line 110, column 10>
//   // proto:  bool QUndoStack::isActive();
// _ZNK10QUndoStack8isActiveEv isActive()
extern "C"
bool
C_ZNK10QUndoStack8isActiveEv(void *qthis) {
  auto ret =
  ((QUndoStack*)qthis)->isActive();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundostack.h', line 131, column 10>
//   // proto:  void QUndoStack::cleanChanged(bool clean);
// _ZN10QUndoStack12cleanChangedEb cleanChanged(_Bool)
extern "C"
void
C_ZN10QUndoStack12cleanChangedEb(void *qthis,
bool arg1) {
  ((QUndoStack*)qthis)->cleanChanged(arg1);
}
//   // proto:  void QUndoStack::~QUndoStack();
extern "C"
void C_ZN10QUndoStackD2Ev(void *qthis) {
  delete (QUndoStack*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundostack.h', line 88, column 14>
//   // proto:  void QUndoStack::QUndoStack(QObject * parent);
extern "C"
QUndoStack*
C_ZN10QUndoStackC2EP7QObject(QObject * arg1) {
  auto ret = new QUndoStack(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundostack.h', line 130, column 10>
//   // proto:  void QUndoStack::indexChanged(int idx);
// _ZN10QUndoStack12indexChangedEi indexChanged(int)
extern "C"
void
C_ZN10QUndoStack12indexChangedEi(void *qthis,
int arg1) {
  ((QUndoStack*)qthis)->indexChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundostack.h', line 132, column 10>
//   // proto:  void QUndoStack::canUndoChanged(bool canUndo);
// _ZN10QUndoStack14canUndoChangedEb canUndoChanged(_Bool)
extern "C"
void
C_ZN10QUndoStack14canUndoChangedEb(void *qthis,
bool arg1) {
  ((QUndoStack*)qthis)->canUndoChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundostack.h', line 111, column 10>
//   // proto:  bool QUndoStack::isClean();
// _ZNK10QUndoStack7isCleanEv isClean()
extern "C"
bool
C_ZNK10QUndoStack7isCleanEv(void *qthis) {
  auto ret =
  ((QUndoStack*)qthis)->isClean();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundostack.h', line 126, column 10>
//   // proto:  void QUndoStack::redo();
// _ZN10QUndoStack4redoEv redo()
extern "C"
void
C_ZN10QUndoStack4redoEv(void *qthis) {
  ((QUndoStack*)qthis)->redo();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundostack.h', line 114, column 10>
//   // proto:  void QUndoStack::beginMacro(const QString & text);
// _ZN10QUndoStack10beginMacroERK7QString beginMacro(const class QString &)
extern "C"
void
C_ZN10QUndoStack10beginMacroERK7QString(void *qthis,
const QString* arg1) {
  ((QUndoStack*)qthis)->beginMacro(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundostack.h', line 127, column 10>
//   // proto:  void QUndoStack::setActive(bool active);
// _ZN10QUndoStack9setActiveEb setActive(_Bool)
extern "C"
void
C_ZN10QUndoStack9setActiveEb(void *qthis,
bool arg1) {
  ((QUndoStack*)qthis)->setActive(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundostack.h', line 96, column 13>
//   // proto:  QString QUndoStack::undoText();
// _ZNK10QUndoStack8undoTextEv undoText()
extern "C"
QString*
C_ZNK10QUndoStack8undoTextEv(void *qthis) {
  auto ret =
  ((QUndoStack*)qthis)->undoText();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundostack.h', line 112, column 9>
//   // proto:  int QUndoStack::cleanIndex();
// _ZNK10QUndoStack10cleanIndexEv cleanIndex()
extern "C"
int
C_ZNK10QUndoStack10cleanIndexEv(void *qthis) {
  auto ret =
  ((QUndoStack*)qthis)->cleanIndex();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundostack.h', line 124, column 10>
//   // proto:  void QUndoStack::setIndex(int idx);
// _ZN10QUndoStack8setIndexEi setIndex(int)
extern "C"
void
C_ZN10QUndoStack8setIndexEi(void *qthis,
int arg1) {
  ((QUndoStack*)qthis)->setIndex(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundostack.h', line 115, column 10>
//   // proto:  void QUndoStack::endMacro();
// _ZN10QUndoStack8endMacroEv endMacro()
extern "C"
void
C_ZN10QUndoStack8endMacroEv(void *qthis) {
  ((QUndoStack*)qthis)->endMacro();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundostack.h', line 117, column 10>
//   // proto:  void QUndoStack::setUndoLimit(int limit);
// _ZN10QUndoStack12setUndoLimitEi setUndoLimit(int)
extern "C"
void
C_ZN10QUndoStack12setUndoLimitEi(void *qthis,
int arg1) {
  ((QUndoStack*)qthis)->setUndoLimit(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundostack.h', line 123, column 10>
//   // proto:  void QUndoStack::setClean();
// _ZN10QUndoStack8setCleanEv setClean()
extern "C"
void
C_ZN10QUndoStack8setCleanEv(void *qthis) {
  ((QUndoStack*)qthis)->setClean();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundostack.h', line 101, column 13>
//   // proto:  QString QUndoStack::text(int idx);
// _ZNK10QUndoStack4textEi text(int)
extern "C"
QString*
C_ZNK10QUndoStack4textEi(void *qthis,
int arg1) {
  auto ret =
  ((QUndoStack*)qthis)->text(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundostack.h', line 92, column 10>
//   // proto:  void QUndoStack::push(QUndoCommand * cmd);
// _ZN10QUndoStack4pushEP12QUndoCommand push(class QUndoCommand *)
extern "C"
void
C_ZN10QUndoStack4pushEP12QUndoCommand(void *qthis,
QUndoCommand * arg1) {
  ((QUndoStack*)qthis)->push(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundostack.h', line 65, column 17>
//   // proto:  int QUndoCommand::id();
// _ZNK12QUndoCommand2idEv id()
extern "C"
int
C_ZNK12QUndoCommand2idEv(void *qthis) {
  auto ret =
  ((QUndoCommand*)qthis)->id();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundostack.h', line 59, column 18>
//   // proto:  void QUndoCommand::redo();
// _ZN12QUndoCommand4redoEv redo()
extern "C"
void
C_ZN12QUndoCommand4redoEv(void *qthis) {
  ((QUndoCommand*)qthis)->redo();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundostack.h', line 54, column 14>
//   // proto:  void QUndoCommand::QUndoCommand(QUndoCommand * parent);
extern "C"
QUndoCommand*
C_ZN12QUndoCommandC2EPS_(QUndoCommand * arg1) {
  auto ret = new QUndoCommand(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundostack.h', line 58, column 18>
//   // proto:  void QUndoCommand::undo();
// _ZN12QUndoCommand4undoEv undo()
extern "C"
void
C_ZN12QUndoCommand4undoEv(void *qthis) {
  ((QUndoCommand*)qthis)->undo();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundostack.h', line 55, column 14>
//   // proto:  void QUndoCommand::QUndoCommand(const QString & text, QUndoCommand * parent);
extern "C"
QUndoCommand*
C_ZN12QUndoCommandC2ERK7QStringPS_(const QString* arg1,
QUndoCommand * arg2) {
  auto ret = new QUndoCommand(*((const QString*)arg1),
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundostack.h', line 66, column 18>
//   // proto:  bool QUndoCommand::mergeWith(const QUndoCommand * other);
// _ZN12QUndoCommand9mergeWithEPKS_ mergeWith(const class QUndoCommand *)
extern "C"
bool
C_ZN12QUndoCommand9mergeWithEPKS_(void *qthis,
const QUndoCommand * arg1) {
  auto ret =
  ((QUndoCommand*)qthis)->mergeWith(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundostack.h', line 61, column 13>
//   // proto:  QString QUndoCommand::text();
// _ZNK12QUndoCommand4textEv text()
extern "C"
QString*
C_ZNK12QUndoCommand4textEv(void *qthis) {
  auto ret =
  ((QUndoCommand*)qthis)->text();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundostack.h', line 68, column 9>
//   // proto:  int QUndoCommand::childCount();
// _ZNK12QUndoCommand10childCountEv childCount()
extern "C"
int
C_ZNK12QUndoCommand10childCountEv(void *qthis) {
  auto ret =
  ((QUndoCommand*)qthis)->childCount();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundostack.h', line 62, column 13>
//   // proto:  QString QUndoCommand::actionText();
// _ZNK12QUndoCommand10actionTextEv actionText()
extern "C"
QString*
C_ZNK12QUndoCommand10actionTextEv(void *qthis) {
  auto ret =
  ((QUndoCommand*)qthis)->actionText();
  return new QString(ret); // 5
}
//   // proto:  void QUndoCommand::~QUndoCommand();
extern "C"
void C_ZN12QUndoCommandD2Ev(void *qthis) {
  delete (QUndoCommand*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundostack.h', line 69, column 25>
//   // proto:  const QUndoCommand * QUndoCommand::child(int index);
// _ZNK12QUndoCommand5childEi child(int)
extern "C"
void*
C_ZNK12QUndoCommand5childEi(void *qthis,
int arg1) {
  auto ret =
  ((QUndoCommand*)qthis)->child(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundostack.h', line 63, column 10>
//   // proto:  void QUndoCommand::setText(const QString & text);
// _ZN12QUndoCommand7setTextERK7QString setText(const class QString &)
extern "C"
void
C_ZN12QUndoCommand7setTextERK7QString(void *qthis,
const QString* arg1) {
  ((QUndoCommand*)qthis)->setText(*((const QString*)arg1));
}
// <= ext block end

// body block begin =>
// QUndoStack_SlotProxy here
class QUndoStack_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QUndoStack_SlotProxy():QObject(){}

public slots:
  // undoTextChanged(const class QString &)
  void slot_proxy_func__ZN10QUndoStack15undoTextChangedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN10QUndoStack15undoTextChangedERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public slots:
  // redoTextChanged(const class QString &)
  void slot_proxy_func__ZN10QUndoStack15redoTextChangedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN10QUndoStack15redoTextChangedERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public slots:
  // cleanChanged(_Bool)
  void slot_proxy_func__ZN10QUndoStack12cleanChangedEb(bool arg0);
public:
  void (*slot_func__ZN10QUndoStack12cleanChangedEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // canRedoChanged(_Bool)
  void slot_proxy_func__ZN10QUndoStack14canRedoChangedEb(bool arg0);
public:
  void (*slot_func__ZN10QUndoStack14canRedoChangedEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // indexChanged(int)
  void slot_proxy_func__ZN10QUndoStack12indexChangedEi(int arg0);
public:
  void (*slot_func__ZN10QUndoStack12indexChangedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // canUndoChanged(_Bool)
  void slot_proxy_func__ZN10QUndoStack14canUndoChangedEb(bool arg0);
public:
  void (*slot_func__ZN10QUndoStack14canUndoChangedEb)(void* rsfptr, bool arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qundostack.moc"

extern "C" {
  QUndoStack_SlotProxy* QUndoStack_SlotProxy_new()
  {
    return new QUndoStack_SlotProxy();
  }
};

void QUndoStack_SlotProxy::slot_proxy_func__ZN10QUndoStack15undoTextChangedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN10QUndoStack15undoTextChangedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN10QUndoStack15undoTextChangedERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QUndoStack_SlotProxy_connect__ZN10QUndoStack15undoTextChangedERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QUndoStack_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QUndoStack15undoTextChangedERK7QString = (decltype(that->slot_func__ZN10QUndoStack15undoTextChangedERK7QString))ffifptr;
  QObject::connect((QUndoStack*)sender, SIGNAL(undoTextChanged(const class QString &)), that, SLOT(slot_proxy_func__ZN10QUndoStack15undoTextChangedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QUndoStack_SlotProxy_disconnect__ZN10QUndoStack15undoTextChangedERK7QString(QUndoStack_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QUndoStack_SlotProxy::slot_proxy_func__ZN10QUndoStack15redoTextChangedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN10QUndoStack15redoTextChangedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN10QUndoStack15redoTextChangedERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QUndoStack_SlotProxy_connect__ZN10QUndoStack15redoTextChangedERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QUndoStack_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QUndoStack15redoTextChangedERK7QString = (decltype(that->slot_func__ZN10QUndoStack15redoTextChangedERK7QString))ffifptr;
  QObject::connect((QUndoStack*)sender, SIGNAL(redoTextChanged(const class QString &)), that, SLOT(slot_proxy_func__ZN10QUndoStack15redoTextChangedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QUndoStack_SlotProxy_disconnect__ZN10QUndoStack15redoTextChangedERK7QString(QUndoStack_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QUndoStack_SlotProxy::slot_proxy_func__ZN10QUndoStack12cleanChangedEb(bool arg0) {
  if (this->slot_func__ZN10QUndoStack12cleanChangedEb != NULL) {
    // do smth...
    this->slot_func__ZN10QUndoStack12cleanChangedEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QUndoStack_SlotProxy_connect__ZN10QUndoStack12cleanChangedEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QUndoStack_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QUndoStack12cleanChangedEb = (decltype(that->slot_func__ZN10QUndoStack12cleanChangedEb))ffifptr;
  QObject::connect((QUndoStack*)sender, SIGNAL(cleanChanged(_Bool)), that, SLOT(slot_proxy_func__ZN10QUndoStack12cleanChangedEb(bool arg0)));
  return that;
}
extern "C"
void QUndoStack_SlotProxy_disconnect__ZN10QUndoStack12cleanChangedEb(QUndoStack_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QUndoStack_SlotProxy::slot_proxy_func__ZN10QUndoStack14canRedoChangedEb(bool arg0) {
  if (this->slot_func__ZN10QUndoStack14canRedoChangedEb != NULL) {
    // do smth...
    this->slot_func__ZN10QUndoStack14canRedoChangedEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QUndoStack_SlotProxy_connect__ZN10QUndoStack14canRedoChangedEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QUndoStack_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QUndoStack14canRedoChangedEb = (decltype(that->slot_func__ZN10QUndoStack14canRedoChangedEb))ffifptr;
  QObject::connect((QUndoStack*)sender, SIGNAL(canRedoChanged(_Bool)), that, SLOT(slot_proxy_func__ZN10QUndoStack14canRedoChangedEb(bool arg0)));
  return that;
}
extern "C"
void QUndoStack_SlotProxy_disconnect__ZN10QUndoStack14canRedoChangedEb(QUndoStack_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QUndoStack_SlotProxy::slot_proxy_func__ZN10QUndoStack12indexChangedEi(int arg0) {
  if (this->slot_func__ZN10QUndoStack12indexChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN10QUndoStack12indexChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QUndoStack_SlotProxy_connect__ZN10QUndoStack12indexChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QUndoStack_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QUndoStack12indexChangedEi = (decltype(that->slot_func__ZN10QUndoStack12indexChangedEi))ffifptr;
  QObject::connect((QUndoStack*)sender, SIGNAL(indexChanged(int)), that, SLOT(slot_proxy_func__ZN10QUndoStack12indexChangedEi(int arg0)));
  return that;
}
extern "C"
void QUndoStack_SlotProxy_disconnect__ZN10QUndoStack12indexChangedEi(QUndoStack_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QUndoStack_SlotProxy::slot_proxy_func__ZN10QUndoStack14canUndoChangedEb(bool arg0) {
  if (this->slot_func__ZN10QUndoStack14canUndoChangedEb != NULL) {
    // do smth...
    this->slot_func__ZN10QUndoStack14canUndoChangedEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QUndoStack_SlotProxy_connect__ZN10QUndoStack14canUndoChangedEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QUndoStack_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QUndoStack14canUndoChangedEb = (decltype(that->slot_func__ZN10QUndoStack14canUndoChangedEb))ffifptr;
  QObject::connect((QUndoStack*)sender, SIGNAL(canUndoChanged(_Bool)), that, SLOT(slot_proxy_func__ZN10QUndoStack14canUndoChangedEb(bool arg0)));
  return that;
}
extern "C"
void QUndoStack_SlotProxy_disconnect__ZN10QUndoStack14canUndoChangedEb(QUndoStack_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

