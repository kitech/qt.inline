// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtCore/qsequentialanimationgroup.h
// dst-file: /src/core/qsequentialanimationgroup.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qsequentialanimationgroup.h>


// <= header block end

// main block begin =>
void __keep_qsequentialanimationgroup_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QSequentialAnimationGroup_Class_Size()
{
  return sizeof(QSequentialAnimationGroup);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qsequentialanimationgroup.h', line 63, column 22>
//   // proto:  QPauseAnimation * QSequentialAnimationGroup::insertPause(int index, int msecs);
// _ZN25QSequentialAnimationGroup11insertPauseEii insertPause(int, int)
extern "C"
void*
C_ZN25QSequentialAnimationGroup11insertPauseEii(void *qthis,
int arg1,
int arg2) {
  auto ret =
  ((QSequentialAnimationGroup*)qthis)->insertPause(arg1,
arg2);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qsequentialanimationgroup.h', line 69, column 10>
//   // proto:  void QSequentialAnimationGroup::currentAnimationChanged(QAbstractAnimation * current);
// _ZN25QSequentialAnimationGroup23currentAnimationChangedEP18QAbstractAnimation currentAnimationChanged(class QAbstractAnimation *)
extern "C"
void
C_ZN25QSequentialAnimationGroup23currentAnimationChangedEP18QAbstractAnimation(void *qthis,
QAbstractAnimation * arg1) {
  ((QSequentialAnimationGroup*)qthis)->currentAnimationChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qsequentialanimationgroup.h', line 59, column 5>
//   // proto:  void QSequentialAnimationGroup::QSequentialAnimationGroup(QObject * parent);
extern "C"
QSequentialAnimationGroup*
C_ZN25QSequentialAnimationGroupC2EP7QObject(QObject * arg1) {
  auto ret = new QSequentialAnimationGroup(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qsequentialanimationgroup.h', line 62, column 22>
//   // proto:  QPauseAnimation * QSequentialAnimationGroup::addPause(int msecs);
// _ZN25QSequentialAnimationGroup8addPauseEi addPause(int)
extern "C"
void*
C_ZN25QSequentialAnimationGroup8addPauseEi(void *qthis,
int arg1) {
  auto ret =
  ((QSequentialAnimationGroup*)qthis)->addPause(arg1);
  return (void*)ret;
}
//   // proto:  void QSequentialAnimationGroup::~QSequentialAnimationGroup();
extern "C"
void C_ZN25QSequentialAnimationGroupD2Ev(void *qthis) {
  delete (QSequentialAnimationGroup*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qsequentialanimationgroup.h', line 55, column 5>
//   // proto:  const QMetaObject * QSequentialAnimationGroup::metaObject();
// _ZNK25QSequentialAnimationGroup10metaObjectEv metaObject()
extern "C"
void*
C_ZNK25QSequentialAnimationGroup10metaObjectEv(void *qthis) {
  auto ret =
  ((QSequentialAnimationGroup*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qsequentialanimationgroup.h', line 65, column 25>
//   // proto:  QAbstractAnimation * QSequentialAnimationGroup::currentAnimation();
// _ZNK25QSequentialAnimationGroup16currentAnimationEv currentAnimation()
extern "C"
void*
C_ZNK25QSequentialAnimationGroup16currentAnimationEv(void *qthis) {
  auto ret =
  ((QSequentialAnimationGroup*)qthis)->currentAnimation();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qsequentialanimationgroup.h', line 66, column 9>
//   // proto:  int QSequentialAnimationGroup::duration();
// _ZNK25QSequentialAnimationGroup8durationEv duration()
extern "C"
int
C_ZNK25QSequentialAnimationGroup8durationEv(void *qthis) {
  auto ret =
  ((QSequentialAnimationGroup*)qthis)->duration();
  return ret; // 0 TypeKind.INT
}
// <= ext block end

// body block begin =>
// QSequentialAnimationGroup_SlotProxy here
class QSequentialAnimationGroup_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QSequentialAnimationGroup_SlotProxy():QObject(){}

public slots:
  // currentAnimationChanged(class QAbstractAnimation *)
  void slot_proxy_func__ZN25QSequentialAnimationGroup23currentAnimationChangedEP18QAbstractAnimation(QAbstractAnimation * arg0);
public:
  void (*slot_func__ZN25QSequentialAnimationGroup23currentAnimationChangedEP18QAbstractAnimation)(void* rsfptr, QAbstractAnimation * arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/core/qsequentialanimationgroup.moc"

extern "C" {
  QSequentialAnimationGroup_SlotProxy* QSequentialAnimationGroup_SlotProxy_new()
  {
    return new QSequentialAnimationGroup_SlotProxy();
  }
};

void QSequentialAnimationGroup_SlotProxy::slot_proxy_func__ZN25QSequentialAnimationGroup23currentAnimationChangedEP18QAbstractAnimation(QAbstractAnimation * arg0) {
  if (this->slot_func__ZN25QSequentialAnimationGroup23currentAnimationChangedEP18QAbstractAnimation != NULL) {
    // do smth...
    this->slot_func__ZN25QSequentialAnimationGroup23currentAnimationChangedEP18QAbstractAnimation(this->rsfptr, arg0);
  }
}
extern "C"
void* QSequentialAnimationGroup_SlotProxy_connect__ZN25QSequentialAnimationGroup23currentAnimationChangedEP18QAbstractAnimation(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QSequentialAnimationGroup_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN25QSequentialAnimationGroup23currentAnimationChangedEP18QAbstractAnimation = (decltype(that->slot_func__ZN25QSequentialAnimationGroup23currentAnimationChangedEP18QAbstractAnimation))ffifptr;
  QObject::connect((QSequentialAnimationGroup*)sender, SIGNAL(currentAnimationChanged(class QAbstractAnimation *)), that, SLOT(slot_proxy_func__ZN25QSequentialAnimationGroup23currentAnimationChangedEP18QAbstractAnimation(QAbstractAnimation * arg0)));
  return that;
}
extern "C"
void QSequentialAnimationGroup_SlotProxy_disconnect__ZN25QSequentialAnimationGroup23currentAnimationChangedEP18QAbstractAnimation(QSequentialAnimationGroup_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

