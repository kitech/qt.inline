//  header block begin
// /usr/include/qt/QtCore/qparallelanimationgroup.h
#include <qparallelanimationgroup.h>
#include <QtCore>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtCore/qparallelanimationgroup.h:53
// const QMetaObject * metaObject()
extern "C"
void C_ZNK23QParallelAnimationGroup10metaObjectEv(void *this_) {
  /*return*/ ((QParallelAnimationGroup*)this_)->metaObject();
}
// /usr/include/qt/QtCore/qparallelanimationgroup.h:56
// void QParallelAnimationGroup(class QObject *)
extern "C"
void* C_ZN23QParallelAnimationGroupC1EP7QObject(QObject * parent) {
  return new QParallelAnimationGroup(parent);
}
// virtual
// /usr/include/qt/QtCore/qparallelanimationgroup.h:57
// void ~QParallelAnimationGroup()
extern "C"
void C_ZN23QParallelAnimationGroupD1Ev(void *this_) {
  delete (QParallelAnimationGroup*)(this_);
}
// virtual
// /usr/include/qt/QtCore/qparallelanimationgroup.h:59
// int duration()
extern "C"
void C_ZNK23QParallelAnimationGroup8durationEv(void *this_) {
  /*return*/ ((QParallelAnimationGroup*)this_)->duration();
}
//  main block end
