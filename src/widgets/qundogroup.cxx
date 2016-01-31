// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtWidgets/qundogroup.h
// dst-file: /src/widgets/qundogroup.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qundogroup.h>


#include <qlist.h>
#include <qapplication.h>
#include <qstring.h>
// <= header block end

// main block begin =>
void __keep_qundogroup_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QUndoGroup_Class_Size()
{
  return sizeof(QUndoGroup);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qundogroup.h', line 58, column 10>
//   // proto:  void QUndoGroup::addStack(QUndoStack * stack);
// _ZN10QUndoGroup8addStackEP10QUndoStack addStack(class QUndoStack *)
extern "C"
void
C_ZN10QUndoGroup8addStackEP10QUndoStack(void *qthis,
QUndoStack * arg1) {
  ((QUndoGroup*)qthis)->addStack(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundogroup.h', line 76, column 10>
//   // proto:  void QUndoGroup::undo();
// _ZN10QUndoGroup4undoEv undo()
extern "C"
void
C_ZN10QUndoGroup4undoEv(void *qthis) {
  ((QUndoGroup*)qthis)->undo();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundogroup.h', line 60, column 24>
//   // proto:  QList<QUndoStack *> QUndoGroup::stacks();
// _ZNK10QUndoGroup6stacksEv stacks()
extern "C"
QList<QUndoStack *>*
C_ZNK10QUndoGroup6stacksEv(void *qthis) {
  auto ret =
  ((QUndoGroup*)qthis)->stacks();
  return new QList<QUndoStack *>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundogroup.h', line 85, column 10>
//   // proto:  void QUndoGroup::canRedoChanged(bool canRedo);
// _ZN10QUndoGroup14canRedoChangedEb canRedoChanged(_Bool)
extern "C"
void
C_ZN10QUndoGroup14canRedoChangedEb(void *qthis,
bool arg1) {
  ((QUndoGroup*)qthis)->canRedoChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundogroup.h', line 83, column 10>
//   // proto:  void QUndoGroup::cleanChanged(bool clean);
// _ZN10QUndoGroup12cleanChangedEb cleanChanged(_Bool)
extern "C"
void
C_ZN10QUndoGroup12cleanChangedEb(void *qthis,
bool arg1) {
  ((QUndoGroup*)qthis)->cleanChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundogroup.h', line 84, column 10>
//   // proto:  void QUndoGroup::canUndoChanged(bool canUndo);
// _ZN10QUndoGroup14canUndoChangedEb canUndoChanged(_Bool)
extern "C"
void
C_ZN10QUndoGroup14canUndoChangedEb(void *qthis,
bool arg1) {
  ((QUndoGroup*)qthis)->canUndoChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundogroup.h', line 77, column 10>
//   // proto:  void QUndoGroup::redo();
// _ZN10QUndoGroup4redoEv redo()
extern "C"
void
C_ZN10QUndoGroup4redoEv(void *qthis) {
  ((QUndoGroup*)qthis)->redo();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundogroup.h', line 55, column 14>
//   // proto:  void QUndoGroup::QUndoGroup(QObject * parent);
extern "C"
QUndoGroup*
C_ZN10QUndoGroupC2EP7QObject(QObject * arg1) {
  auto ret = new QUndoGroup(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundogroup.h', line 78, column 10>
//   // proto:  void QUndoGroup::setActiveStack(QUndoStack * stack);
// _ZN10QUndoGroup14setActiveStackEP10QUndoStack setActiveStack(class QUndoStack *)
extern "C"
void
C_ZN10QUndoGroup14setActiveStackEP10QUndoStack(void *qthis,
QUndoStack * arg1) {
  ((QUndoGroup*)qthis)->setActiveStack(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundogroup.h', line 66, column 14>
//   // proto:  QAction * QUndoGroup::createRedoAction(QObject * parent, const QString & prefix);
// _ZNK10QUndoGroup16createRedoActionEP7QObjectRK7QString createRedoAction(class QObject *, const class QString &)
extern "C"
void*
C_ZNK10QUndoGroup16createRedoActionEP7QObjectRK7QString(void *qthis,
QObject * arg1,
const QString* arg2) {
  auto ret =
  ((QUndoGroup*)qthis)->createRedoAction(arg1,
*((const QString*)arg2));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundogroup.h', line 51, column 5>
//   // proto:  const QMetaObject * QUndoGroup::metaObject();
// _ZNK10QUndoGroup10metaObjectEv metaObject()
extern "C"
void*
C_ZNK10QUndoGroup10metaObjectEv(void *qthis) {
  auto ret =
  ((QUndoGroup*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundogroup.h', line 70, column 10>
//   // proto:  bool QUndoGroup::canRedo();
// _ZNK10QUndoGroup7canRedoEv canRedo()
extern "C"
bool
C_ZNK10QUndoGroup7canRedoEv(void *qthis) {
  auto ret =
  ((QUndoGroup*)qthis)->canRedo();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundogroup.h', line 72, column 13>
//   // proto:  QString QUndoGroup::redoText();
// _ZNK10QUndoGroup8redoTextEv redoText()
extern "C"
QString*
C_ZNK10QUndoGroup8redoTextEv(void *qthis) {
  auto ret =
  ((QUndoGroup*)qthis)->redoText();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundogroup.h', line 61, column 17>
//   // proto:  QUndoStack * QUndoGroup::activeStack();
// _ZNK10QUndoGroup11activeStackEv activeStack()
extern "C"
void*
C_ZNK10QUndoGroup11activeStackEv(void *qthis) {
  auto ret =
  ((QUndoGroup*)qthis)->activeStack();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundogroup.h', line 71, column 13>
//   // proto:  QString QUndoGroup::undoText();
// _ZNK10QUndoGroup8undoTextEv undoText()
extern "C"
QString*
C_ZNK10QUndoGroup8undoTextEv(void *qthis) {
  auto ret =
  ((QUndoGroup*)qthis)->undoText();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundogroup.h', line 82, column 10>
//   // proto:  void QUndoGroup::indexChanged(int idx);
// _ZN10QUndoGroup12indexChangedEi indexChanged(int)
extern "C"
void
C_ZN10QUndoGroup12indexChangedEi(void *qthis,
int arg1) {
  ((QUndoGroup*)qthis)->indexChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundogroup.h', line 69, column 10>
//   // proto:  bool QUndoGroup::canUndo();
// _ZNK10QUndoGroup7canUndoEv canUndo()
extern "C"
bool
C_ZNK10QUndoGroup7canUndoEv(void *qthis) {
  auto ret =
  ((QUndoGroup*)qthis)->canUndo();
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QUndoGroup::~QUndoGroup();
extern "C"
void C_ZN10QUndoGroupD2Ev(void *qthis) {
  delete (QUndoGroup*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundogroup.h', line 81, column 10>
//   // proto:  void QUndoGroup::activeStackChanged(QUndoStack * stack);
// _ZN10QUndoGroup18activeStackChangedEP10QUndoStack activeStackChanged(class QUndoStack *)
extern "C"
void
C_ZN10QUndoGroup18activeStackChangedEP10QUndoStack(void *qthis,
QUndoStack * arg1) {
  ((QUndoGroup*)qthis)->activeStackChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundogroup.h', line 86, column 10>
//   // proto:  void QUndoGroup::undoTextChanged(const QString & undoText);
// _ZN10QUndoGroup15undoTextChangedERK7QString undoTextChanged(const class QString &)
extern "C"
void
C_ZN10QUndoGroup15undoTextChangedERK7QString(void *qthis,
const QString* arg1) {
  ((QUndoGroup*)qthis)->undoTextChanged(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundogroup.h', line 73, column 10>
//   // proto:  bool QUndoGroup::isClean();
// _ZNK10QUndoGroup7isCleanEv isClean()
extern "C"
bool
C_ZNK10QUndoGroup7isCleanEv(void *qthis) {
  auto ret =
  ((QUndoGroup*)qthis)->isClean();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundogroup.h', line 87, column 10>
//   // proto:  void QUndoGroup::redoTextChanged(const QString & redoText);
// _ZN10QUndoGroup15redoTextChangedERK7QString redoTextChanged(const class QString &)
extern "C"
void
C_ZN10QUndoGroup15redoTextChangedERK7QString(void *qthis,
const QString* arg1) {
  ((QUndoGroup*)qthis)->redoTextChanged(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundogroup.h', line 64, column 14>
//   // proto:  QAction * QUndoGroup::createUndoAction(QObject * parent, const QString & prefix);
// _ZNK10QUndoGroup16createUndoActionEP7QObjectRK7QString createUndoAction(class QObject *, const class QString &)
extern "C"
void*
C_ZNK10QUndoGroup16createUndoActionEP7QObjectRK7QString(void *qthis,
QObject * arg1,
const QString* arg2) {
  auto ret =
  ((QUndoGroup*)qthis)->createUndoAction(arg1,
*((const QString*)arg2));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundogroup.h', line 59, column 10>
//   // proto:  void QUndoGroup::removeStack(QUndoStack * stack);
// _ZN10QUndoGroup11removeStackEP10QUndoStack removeStack(class QUndoStack *)
extern "C"
void
C_ZN10QUndoGroup11removeStackEP10QUndoStack(void *qthis,
QUndoStack * arg1) {
  ((QUndoGroup*)qthis)->removeStack(arg1);
}
// <= ext block end

// body block begin =>
// QUndoGroup_SlotProxy here
class QUndoGroup_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QUndoGroup_SlotProxy():QObject(){}

public slots:
  // canRedoChanged(_Bool)
  void slot_proxy_func__ZN10QUndoGroup14canRedoChangedEb(bool arg0);
public:
  void (*slot_func__ZN10QUndoGroup14canRedoChangedEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // activeStackChanged(class QUndoStack *)
  void slot_proxy_func__ZN10QUndoGroup18activeStackChangedEP10QUndoStack(QUndoStack * arg0);
public:
  void (*slot_func__ZN10QUndoGroup18activeStackChangedEP10QUndoStack)(void* rsfptr, QUndoStack * arg0) = NULL;
public slots:
  // cleanChanged(_Bool)
  void slot_proxy_func__ZN10QUndoGroup12cleanChangedEb(bool arg0);
public:
  void (*slot_func__ZN10QUndoGroup12cleanChangedEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // undoTextChanged(const class QString &)
  void slot_proxy_func__ZN10QUndoGroup15undoTextChangedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN10QUndoGroup15undoTextChangedERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public slots:
  // canUndoChanged(_Bool)
  void slot_proxy_func__ZN10QUndoGroup14canUndoChangedEb(bool arg0);
public:
  void (*slot_func__ZN10QUndoGroup14canUndoChangedEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // indexChanged(int)
  void slot_proxy_func__ZN10QUndoGroup12indexChangedEi(int arg0);
public:
  void (*slot_func__ZN10QUndoGroup12indexChangedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // redoTextChanged(const class QString &)
  void slot_proxy_func__ZN10QUndoGroup15redoTextChangedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN10QUndoGroup15redoTextChangedERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qundogroup.moc"

extern "C" {
  QUndoGroup_SlotProxy* QUndoGroup_SlotProxy_new()
  {
    return new QUndoGroup_SlotProxy();
  }
};

void QUndoGroup_SlotProxy::slot_proxy_func__ZN10QUndoGroup14canRedoChangedEb(bool arg0) {
  if (this->slot_func__ZN10QUndoGroup14canRedoChangedEb != NULL) {
    // do smth...
    this->slot_func__ZN10QUndoGroup14canRedoChangedEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QUndoGroup_SlotProxy_connect__ZN10QUndoGroup14canRedoChangedEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QUndoGroup_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QUndoGroup14canRedoChangedEb = (decltype(that->slot_func__ZN10QUndoGroup14canRedoChangedEb))ffifptr;
  QObject::connect((QUndoGroup*)sender, SIGNAL(canRedoChanged(_Bool)), that, SLOT(slot_proxy_func__ZN10QUndoGroup14canRedoChangedEb(bool arg0)));
  return that;
}
extern "C"
void QUndoGroup_SlotProxy_disconnect__ZN10QUndoGroup14canRedoChangedEb(QUndoGroup_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QUndoGroup_SlotProxy::slot_proxy_func__ZN10QUndoGroup18activeStackChangedEP10QUndoStack(QUndoStack * arg0) {
  if (this->slot_func__ZN10QUndoGroup18activeStackChangedEP10QUndoStack != NULL) {
    // do smth...
    this->slot_func__ZN10QUndoGroup18activeStackChangedEP10QUndoStack(this->rsfptr, arg0);
  }
}
extern "C"
void* QUndoGroup_SlotProxy_connect__ZN10QUndoGroup18activeStackChangedEP10QUndoStack(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QUndoGroup_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QUndoGroup18activeStackChangedEP10QUndoStack = (decltype(that->slot_func__ZN10QUndoGroup18activeStackChangedEP10QUndoStack))ffifptr;
  QObject::connect((QUndoGroup*)sender, SIGNAL(activeStackChanged(class QUndoStack *)), that, SLOT(slot_proxy_func__ZN10QUndoGroup18activeStackChangedEP10QUndoStack(QUndoStack * arg0)));
  return that;
}
extern "C"
void QUndoGroup_SlotProxy_disconnect__ZN10QUndoGroup18activeStackChangedEP10QUndoStack(QUndoGroup_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QUndoGroup_SlotProxy::slot_proxy_func__ZN10QUndoGroup12cleanChangedEb(bool arg0) {
  if (this->slot_func__ZN10QUndoGroup12cleanChangedEb != NULL) {
    // do smth...
    this->slot_func__ZN10QUndoGroup12cleanChangedEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QUndoGroup_SlotProxy_connect__ZN10QUndoGroup12cleanChangedEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QUndoGroup_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QUndoGroup12cleanChangedEb = (decltype(that->slot_func__ZN10QUndoGroup12cleanChangedEb))ffifptr;
  QObject::connect((QUndoGroup*)sender, SIGNAL(cleanChanged(_Bool)), that, SLOT(slot_proxy_func__ZN10QUndoGroup12cleanChangedEb(bool arg0)));
  return that;
}
extern "C"
void QUndoGroup_SlotProxy_disconnect__ZN10QUndoGroup12cleanChangedEb(QUndoGroup_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QUndoGroup_SlotProxy::slot_proxy_func__ZN10QUndoGroup15undoTextChangedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN10QUndoGroup15undoTextChangedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN10QUndoGroup15undoTextChangedERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QUndoGroup_SlotProxy_connect__ZN10QUndoGroup15undoTextChangedERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QUndoGroup_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QUndoGroup15undoTextChangedERK7QString = (decltype(that->slot_func__ZN10QUndoGroup15undoTextChangedERK7QString))ffifptr;
  QObject::connect((QUndoGroup*)sender, SIGNAL(undoTextChanged(const class QString &)), that, SLOT(slot_proxy_func__ZN10QUndoGroup15undoTextChangedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QUndoGroup_SlotProxy_disconnect__ZN10QUndoGroup15undoTextChangedERK7QString(QUndoGroup_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QUndoGroup_SlotProxy::slot_proxy_func__ZN10QUndoGroup14canUndoChangedEb(bool arg0) {
  if (this->slot_func__ZN10QUndoGroup14canUndoChangedEb != NULL) {
    // do smth...
    this->slot_func__ZN10QUndoGroup14canUndoChangedEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QUndoGroup_SlotProxy_connect__ZN10QUndoGroup14canUndoChangedEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QUndoGroup_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QUndoGroup14canUndoChangedEb = (decltype(that->slot_func__ZN10QUndoGroup14canUndoChangedEb))ffifptr;
  QObject::connect((QUndoGroup*)sender, SIGNAL(canUndoChanged(_Bool)), that, SLOT(slot_proxy_func__ZN10QUndoGroup14canUndoChangedEb(bool arg0)));
  return that;
}
extern "C"
void QUndoGroup_SlotProxy_disconnect__ZN10QUndoGroup14canUndoChangedEb(QUndoGroup_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QUndoGroup_SlotProxy::slot_proxy_func__ZN10QUndoGroup12indexChangedEi(int arg0) {
  if (this->slot_func__ZN10QUndoGroup12indexChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN10QUndoGroup12indexChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QUndoGroup_SlotProxy_connect__ZN10QUndoGroup12indexChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QUndoGroup_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QUndoGroup12indexChangedEi = (decltype(that->slot_func__ZN10QUndoGroup12indexChangedEi))ffifptr;
  QObject::connect((QUndoGroup*)sender, SIGNAL(indexChanged(int)), that, SLOT(slot_proxy_func__ZN10QUndoGroup12indexChangedEi(int arg0)));
  return that;
}
extern "C"
void QUndoGroup_SlotProxy_disconnect__ZN10QUndoGroup12indexChangedEi(QUndoGroup_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QUndoGroup_SlotProxy::slot_proxy_func__ZN10QUndoGroup15redoTextChangedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN10QUndoGroup15redoTextChangedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN10QUndoGroup15redoTextChangedERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QUndoGroup_SlotProxy_connect__ZN10QUndoGroup15redoTextChangedERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QUndoGroup_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QUndoGroup15redoTextChangedERK7QString = (decltype(that->slot_func__ZN10QUndoGroup15redoTextChangedERK7QString))ffifptr;
  QObject::connect((QUndoGroup*)sender, SIGNAL(redoTextChanged(const class QString &)), that, SLOT(slot_proxy_func__ZN10QUndoGroup15redoTextChangedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QUndoGroup_SlotProxy_disconnect__ZN10QUndoGroup15redoTextChangedERK7QString(QUndoGroup_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

