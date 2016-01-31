// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtCore/qanimationgroup.h
// dst-file: /src/core/qanimationgroup.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qanimationgroup.h>


// <= header block end

// main block begin =>
void __keep_qanimationgroup_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QAnimationGroup_Class_Size()
{
  return sizeof(QAnimationGroup);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qanimationgroup.h', line 53, column 25>
//   // proto:  QAbstractAnimation * QAnimationGroup::animationAt(int index);
// _ZNK15QAnimationGroup11animationAtEi animationAt(int)
extern "C"
void*
C_ZNK15QAnimationGroup11animationAtEi(void *qthis,
int arg1) {
  auto ret =
  ((QAnimationGroup*)qthis)->animationAt(arg1);
  return (void*)ret;
}
//   // proto:  void QAnimationGroup::~QAnimationGroup();
extern "C"
void C_ZN15QAnimationGroupD2Ev(void *qthis) {
  delete (QAnimationGroup*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qanimationgroup.h', line 58, column 10>
//   // proto:  void QAnimationGroup::removeAnimation(QAbstractAnimation * animation);
// _ZN15QAnimationGroup15removeAnimationEP18QAbstractAnimation removeAnimation(class QAbstractAnimation *)
extern "C"
void
C_ZN15QAnimationGroup15removeAnimationEP18QAbstractAnimation(void *qthis,
QAbstractAnimation * arg1) {
  ((QAnimationGroup*)qthis)->removeAnimation(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qanimationgroup.h', line 54, column 9>
//   // proto:  int QAnimationGroup::animationCount();
// _ZNK15QAnimationGroup14animationCountEv animationCount()
extern "C"
int
C_ZNK15QAnimationGroup14animationCountEv(void *qthis) {
  auto ret =
  ((QAnimationGroup*)qthis)->animationCount();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qanimationgroup.h', line 56, column 10>
//   // proto:  void QAnimationGroup::addAnimation(QAbstractAnimation * animation);
// _ZN15QAnimationGroup12addAnimationEP18QAbstractAnimation addAnimation(class QAbstractAnimation *)
extern "C"
void
C_ZN15QAnimationGroup12addAnimationEP18QAbstractAnimation(void *qthis,
QAbstractAnimation * arg1) {
  ((QAnimationGroup*)qthis)->addAnimation(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qanimationgroup.h', line 60, column 10>
//   // proto:  void QAnimationGroup::clear();
// _ZN15QAnimationGroup5clearEv clear()
extern "C"
void
C_ZN15QAnimationGroup5clearEv(void *qthis) {
  ((QAnimationGroup*)qthis)->clear();
}
// <SourceLocation file '/usr/include/qt/QtCore/qanimationgroup.h', line 59, column 25>
//   // proto:  QAbstractAnimation * QAnimationGroup::takeAnimation(int index);
// _ZN15QAnimationGroup13takeAnimationEi takeAnimation(int)
extern "C"
void*
C_ZN15QAnimationGroup13takeAnimationEi(void *qthis,
int arg1) {
  auto ret =
  ((QAnimationGroup*)qthis)->takeAnimation(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qanimationgroup.h', line 57, column 10>
//   // proto:  void QAnimationGroup::insertAnimation(int index, QAbstractAnimation * animation);
// _ZN15QAnimationGroup15insertAnimationEiP18QAbstractAnimation insertAnimation(int, class QAbstractAnimation *)
extern "C"
void
C_ZN15QAnimationGroup15insertAnimationEiP18QAbstractAnimation(void *qthis,
int arg1,
QAbstractAnimation * arg2) {
  ((QAnimationGroup*)qthis)->insertAnimation(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtCore/qanimationgroup.h', line 47, column 5>
//   // proto:  const QMetaObject * QAnimationGroup::metaObject();
// _ZNK15QAnimationGroup10metaObjectEv metaObject()
extern "C"
void*
C_ZNK15QAnimationGroup10metaObjectEv(void *qthis) {
  auto ret =
  ((QAnimationGroup*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qanimationgroup.h', line 55, column 9>
//   // proto:  int QAnimationGroup::indexOfAnimation(QAbstractAnimation * animation);
// _ZNK15QAnimationGroup16indexOfAnimationEP18QAbstractAnimation indexOfAnimation(class QAbstractAnimation *)
extern "C"
int
C_ZNK15QAnimationGroup16indexOfAnimationEP18QAbstractAnimation(void *qthis,
QAbstractAnimation * arg1) {
  auto ret =
  ((QAnimationGroup*)qthis)->indexOfAnimation(arg1);
  return ret; // 0 TypeKind.INT
}
// <= ext block end

// body block begin =>
// QAnimationGroup_SlotProxy here
class QAnimationGroup_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QAnimationGroup_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qanimationgroup.moc"

extern "C" {
  QAnimationGroup_SlotProxy* QAnimationGroup_SlotProxy_new()
  {
    return new QAnimationGroup_SlotProxy();
  }
};

// <= body block end

