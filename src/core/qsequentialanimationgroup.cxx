// /usr/include/qt/QtCore/qsequentialanimationgroup.h
#include <qsequentialanimationgroup.h>
#include <QtCore>

// virtual
// /usr/include/qt/QtCore/qsequentialanimationgroup.h:55
// const QMetaObject * metaObject()
extern "C"
void C_ZNK25QSequentialAnimationGroup10metaObjectEv(void *this_) {
  /*return*/ ((QSequentialAnimationGroup*)this_)->metaObject();
}
// /usr/include/qt/QtCore/qsequentialanimationgroup.h:59
// void QSequentialAnimationGroup(class QObject *)
extern "C"
void* C_ZN25QSequentialAnimationGroupC1EP7QObject(QObject * parent) {
  return new QSequentialAnimationGroup(parent);
}
// virtual
// /usr/include/qt/QtCore/qsequentialanimationgroup.h:60
// void ~QSequentialAnimationGroup()
extern "C"
void C_ZN25QSequentialAnimationGroupD1Ev(void *this_) {
  delete (QSequentialAnimationGroup*)(this_);
}
// /usr/include/qt/QtCore/qsequentialanimationgroup.h:62
// QPauseAnimation * addPause(int)
extern "C"
void C_ZN25QSequentialAnimationGroup8addPauseEi(void *this_, int msecs) {
  /*return*/ ((QSequentialAnimationGroup*)this_)->addPause(msecs);
}
// /usr/include/qt/QtCore/qsequentialanimationgroup.h:63
// QPauseAnimation * insertPause(int, int)
extern "C"
void C_ZN25QSequentialAnimationGroup11insertPauseEii(void *this_, int index, int msecs) {
  /*return*/ ((QSequentialAnimationGroup*)this_)->insertPause(index, msecs);
}
// /usr/include/qt/QtCore/qsequentialanimationgroup.h:65
// QAbstractAnimation * currentAnimation()
extern "C"
void C_ZNK25QSequentialAnimationGroup16currentAnimationEv(void *this_) {
  /*return*/ ((QSequentialAnimationGroup*)this_)->currentAnimation();
}
// virtual
// /usr/include/qt/QtCore/qsequentialanimationgroup.h:66
// int duration()
extern "C"
void C_ZNK25QSequentialAnimationGroup8durationEv(void *this_) {
  /*return*/ ((QSequentialAnimationGroup*)this_)->duration();
}
// /usr/include/qt/QtCore/qsequentialanimationgroup.h:69
// void currentAnimationChanged(class QAbstractAnimation *)
extern "C"
void C_ZN25QSequentialAnimationGroup23currentAnimationChangedEP18QAbstractAnimation(void *this_, QAbstractAnimation * current) {
  ((QSequentialAnimationGroup*)this_)->currentAnimationChanged(current);
}