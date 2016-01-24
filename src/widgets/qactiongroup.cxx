// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtWidgets/qactiongroup.h
// dst-file: /src/widgets/qactiongroup.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qactiongroup.h>


#include <qlist.h>
#include <qfontdatabase.h>
// <= header block end

// main block begin =>
void __keep_qactiongroup_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtWidgets/qactiongroup.h', line 73, column 17>
//   // proto:  void QActionGroup::setDisabled(bool b);
if (true) {
  auto f = [](QActionGroup flythis, bool arg1) {
    ((QActionGroup*)0)->setDisabled(arg1);
    flythis.setDisabled(arg1);
  };
  if (f == nullptr){}
}
// _ZN12QActionGroup11setDisabledEb setDisabled(_Bool)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QActionGroup_Class_Size()
{
  return sizeof(QActionGroup);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qactiongroup.h', line 56, column 14>
//   // proto:  void QActionGroup::QActionGroup(QObject * parent);
extern "C"
QActionGroup*
C_ZN12QActionGroupC2EP7QObject(QObject * arg1) {
  auto ret = new QActionGroup(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qactiongroup.h', line 63, column 21>
//   // proto:  QList<QAction *> QActionGroup::actions();
// _ZNK12QActionGroup7actionsEv actions()
extern "C"
QList<QAction *>*
C_ZNK12QActionGroup7actionsEv(void *qthis) {
  auto ret =
  ((QActionGroup*)qthis)->actions();
  return new QList<QAction *>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qactiongroup.h', line 73, column 17>
//   // proto:  void QActionGroup::setDisabled(bool b);
// _ZN12QActionGroup11setDisabledEb setDisabled(_Bool)
extern "C"
void
C_ZN12QActionGroup11setDisabledEb(void *qthis,
bool arg1) {
  ((QActionGroup*)qthis)->setDisabled(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qactiongroup.h', line 72, column 10>
//   // proto:  void QActionGroup::setEnabled(bool );
// _ZN12QActionGroup10setEnabledEb setEnabled(_Bool)
extern "C"
void
C_ZN12QActionGroup10setEnabledEb(void *qthis,
bool arg1) {
  ((QActionGroup*)qthis)->setEnabled(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qactiongroup.h', line 48, column 5>
//   // proto:  const QMetaObject * QActionGroup::metaObject();
// _ZNK12QActionGroup10metaObjectEv metaObject()
extern "C"
void*
C_ZNK12QActionGroup10metaObjectEv(void *qthis) {
  auto ret =
  ((QActionGroup*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qactiongroup.h', line 59, column 14>
//   // proto:  QAction * QActionGroup::addAction(QAction * a);
// _ZN12QActionGroup9addActionEP7QAction addAction(class QAction *)
extern "C"
void*
C_ZN12QActionGroup9addActionEP7QAction(void *qthis,
QAction * arg1) {
  auto ret =
  ((QActionGroup*)qthis)->addAction(arg1);
  return (void*)ret;
}
//   // proto:  void QActionGroup::~QActionGroup();
extern "C"
void C_ZN12QActionGroupD2Ev(void *qthis) {
  delete (QActionGroup*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qactiongroup.h', line 65, column 14>
//   // proto:  QAction * QActionGroup::checkedAction();
// _ZNK12QActionGroup13checkedActionEv checkedAction()
extern "C"
void*
C_ZNK12QActionGroup13checkedActionEv(void *qthis) {
  auto ret =
  ((QActionGroup*)qthis)->checkedAction();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qactiongroup.h', line 61, column 14>
//   // proto:  QAction * QActionGroup::addAction(const QIcon & icon, const QString & text);
// _ZN12QActionGroup9addActionERK5QIconRK7QString addAction(const class QIcon &, const class QString &)
extern "C"
void*
C_ZN12QActionGroup9addActionERK5QIconRK7QString(void *qthis,
const QIcon* arg1,
const QString* arg2) {
  auto ret =
  ((QActionGroup*)qthis)->addAction(*((const QIcon*)arg1),
*((const QString*)arg2));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qactiongroup.h', line 74, column 10>
//   // proto:  void QActionGroup::setVisible(bool );
// _ZN12QActionGroup10setVisibleEb setVisible(_Bool)
extern "C"
void
C_ZN12QActionGroup10setVisibleEb(void *qthis,
bool arg1) {
  ((QActionGroup*)qthis)->setVisible(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qactiongroup.h', line 68, column 10>
//   // proto:  bool QActionGroup::isVisible();
// _ZNK12QActionGroup9isVisibleEv isVisible()
extern "C"
bool
C_ZNK12QActionGroup9isVisibleEv(void *qthis) {
  auto ret =
  ((QActionGroup*)qthis)->isVisible();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qactiongroup.h', line 75, column 10>
//   // proto:  void QActionGroup::setExclusive(bool );
// _ZN12QActionGroup12setExclusiveEb setExclusive(_Bool)
extern "C"
void
C_ZN12QActionGroup12setExclusiveEb(void *qthis,
bool arg1) {
  ((QActionGroup*)qthis)->setExclusive(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qactiongroup.h', line 60, column 14>
//   // proto:  QAction * QActionGroup::addAction(const QString & text);
// _ZN12QActionGroup9addActionERK7QString addAction(const class QString &)
extern "C"
void*
C_ZN12QActionGroup9addActionERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QActionGroup*)qthis)->addAction(*((const QString*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qactiongroup.h', line 78, column 10>
//   // proto:  void QActionGroup::triggered(QAction * );
// _ZN12QActionGroup9triggeredEP7QAction triggered(class QAction *)
extern "C"
void
C_ZN12QActionGroup9triggeredEP7QAction(void *qthis,
QAction * arg1) {
  ((QActionGroup*)qthis)->triggered(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qactiongroup.h', line 67, column 10>
//   // proto:  bool QActionGroup::isEnabled();
// _ZNK12QActionGroup9isEnabledEv isEnabled()
extern "C"
bool
C_ZNK12QActionGroup9isEnabledEv(void *qthis) {
  auto ret =
  ((QActionGroup*)qthis)->isEnabled();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qactiongroup.h', line 66, column 10>
//   // proto:  bool QActionGroup::isExclusive();
// _ZNK12QActionGroup11isExclusiveEv isExclusive()
extern "C"
bool
C_ZNK12QActionGroup11isExclusiveEv(void *qthis) {
  auto ret =
  ((QActionGroup*)qthis)->isExclusive();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qactiongroup.h', line 62, column 10>
//   // proto:  void QActionGroup::removeAction(QAction * a);
// _ZN12QActionGroup12removeActionEP7QAction removeAction(class QAction *)
extern "C"
void
C_ZN12QActionGroup12removeActionEP7QAction(void *qthis,
QAction * arg1) {
  ((QActionGroup*)qthis)->removeAction(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qactiongroup.h', line 79, column 10>
//   // proto:  void QActionGroup::hovered(QAction * );
// _ZN12QActionGroup7hoveredEP7QAction hovered(class QAction *)
extern "C"
void
C_ZN12QActionGroup7hoveredEP7QAction(void *qthis,
QAction * arg1) {
  ((QActionGroup*)qthis)->hovered(arg1);
}
// <= ext block end

// body block begin =>
// QActionGroup_SlotProxy here
class QActionGroup_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QActionGroup_SlotProxy():QObject(){}

public slots:
  // hovered(class QAction *)
  void slot_proxy_func__ZN12QActionGroup7hoveredEP7QAction(QAction * arg0);
public:
  void (*slot_func__ZN12QActionGroup7hoveredEP7QAction)(void* rsfptr, QAction * arg0) = NULL;
public slots:
  // triggered(class QAction *)
  void slot_proxy_func__ZN12QActionGroup9triggeredEP7QAction(QAction * arg0);
public:
  void (*slot_func__ZN12QActionGroup9triggeredEP7QAction)(void* rsfptr, QAction * arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qactiongroup.moc"

extern "C" {
  QActionGroup_SlotProxy* QActionGroup_SlotProxy_new()
  {
    return new QActionGroup_SlotProxy();
  }
};

void QActionGroup_SlotProxy::slot_proxy_func__ZN12QActionGroup7hoveredEP7QAction(QAction * arg0) {
  if (this->slot_func__ZN12QActionGroup7hoveredEP7QAction != NULL) {
    // do smth...
    this->slot_func__ZN12QActionGroup7hoveredEP7QAction(this->rsfptr, arg0);
  }
}
extern "C"
void* QActionGroup_SlotProxy_connect__ZN12QActionGroup7hoveredEP7QAction(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QActionGroup_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QActionGroup7hoveredEP7QAction = (decltype(that->slot_func__ZN12QActionGroup7hoveredEP7QAction))ffifptr;
  QObject::connect((QActionGroup*)sender, SIGNAL(hovered(class QAction *)), that, SLOT(slot_proxy_func__ZN12QActionGroup7hoveredEP7QAction(QAction * arg0)));
  return that;
}
extern "C"
void QActionGroup_SlotProxy_disconnect__ZN12QActionGroup7hoveredEP7QAction(QActionGroup_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QActionGroup_SlotProxy::slot_proxy_func__ZN12QActionGroup9triggeredEP7QAction(QAction * arg0) {
  if (this->slot_func__ZN12QActionGroup9triggeredEP7QAction != NULL) {
    // do smth...
    this->slot_func__ZN12QActionGroup9triggeredEP7QAction(this->rsfptr, arg0);
  }
}
extern "C"
void* QActionGroup_SlotProxy_connect__ZN12QActionGroup9triggeredEP7QAction(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QActionGroup_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QActionGroup9triggeredEP7QAction = (decltype(that->slot_func__ZN12QActionGroup9triggeredEP7QAction))ffifptr;
  QObject::connect((QActionGroup*)sender, SIGNAL(triggered(class QAction *)), that, SLOT(slot_proxy_func__ZN12QActionGroup9triggeredEP7QAction(QAction * arg0)));
  return that;
}
extern "C"
void QActionGroup_SlotProxy_disconnect__ZN12QActionGroup9triggeredEP7QAction(QActionGroup_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

