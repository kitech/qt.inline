// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtCore/qparallelanimationgroup.h
// dst-file: /src/core/qparallelanimationgroup.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qparallelanimationgroup.h>


// <= header block end

// main block begin =>
void __keep_qparallelanimationgroup_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QParallelAnimationGroup_Class_Size()
{
  return sizeof(QParallelAnimationGroup);
}

// <= use block end

// ext block begin =>
//   // proto:  void QParallelAnimationGroup::~QParallelAnimationGroup();
extern "C"
void C_ZN23QParallelAnimationGroupD2Ev(void *qthis) {
  delete (QParallelAnimationGroup*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qparallelanimationgroup.h', line 53, column 9>
//   // proto:  int QParallelAnimationGroup::duration();
// _ZNK23QParallelAnimationGroup8durationEv duration()
extern "C"
int
C_ZNK23QParallelAnimationGroup8durationEv(void *qthis) {
  auto ret =
  ((QParallelAnimationGroup*)qthis)->duration();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qparallelanimationgroup.h', line 50, column 5>
//   // proto:  void QParallelAnimationGroup::QParallelAnimationGroup(QObject * parent);
extern "C"
QParallelAnimationGroup*
C_ZN23QParallelAnimationGroupC2EP7QObject(QObject * arg1) {
  auto ret = new QParallelAnimationGroup(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qparallelanimationgroup.h', line 47, column 5>
//   // proto:  const QMetaObject * QParallelAnimationGroup::metaObject();
// _ZNK23QParallelAnimationGroup10metaObjectEv metaObject()
extern "C"
void*
C_ZNK23QParallelAnimationGroup10metaObjectEv(void *qthis) {
  auto ret =
  ((QParallelAnimationGroup*)qthis)->metaObject();
  return (void*)ret;
}
// <= ext block end

// body block begin =>
// QParallelAnimationGroup_SlotProxy here
class QParallelAnimationGroup_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QParallelAnimationGroup_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qparallelanimationgroup.moc"

extern "C" {
  QParallelAnimationGroup_SlotProxy* QParallelAnimationGroup_SlotProxy_new()
  {
    return new QParallelAnimationGroup_SlotProxy();
  }
};

// <= body block end

