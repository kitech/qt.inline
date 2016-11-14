// /usr/include/qt/QtCore/qpauseanimation.h
#include <qpauseanimation.h>
#include <QtCore>

// virtual
// /usr/include/qt/QtCore/qpauseanimation.h:54
// const QMetaObject * metaObject()
extern "C"
void C_ZNK15QPauseAnimation10metaObjectEv(void *this_) {
  /*return*/ ((QPauseAnimation*)this_)->metaObject();
}
// /usr/include/qt/QtCore/qpauseanimation.h:57
// void QPauseAnimation(class QObject *)
extern "C"
void* C_ZN15QPauseAnimationC1EP7QObject(QObject * parent) {
  return new QPauseAnimation(parent);
}
// /usr/include/qt/QtCore/qpauseanimation.h:58
// void QPauseAnimation(int, class QObject *)
extern "C"
void* C_ZN15QPauseAnimationC1EiP7QObject(int msecs, QObject * parent) {
  return new QPauseAnimation(msecs, parent);
}
// virtual
// /usr/include/qt/QtCore/qpauseanimation.h:59
// void ~QPauseAnimation()
extern "C"
void C_ZN15QPauseAnimationD1Ev(void *this_) {
  delete (QPauseAnimation*)(this_);
}
// virtual
// /usr/include/qt/QtCore/qpauseanimation.h:61
// int duration()
extern "C"
void C_ZNK15QPauseAnimation8durationEv(void *this_) {
  /*return*/ ((QPauseAnimation*)this_)->duration();
}
// /usr/include/qt/QtCore/qpauseanimation.h:62
// void setDuration(int)
extern "C"
void C_ZN15QPauseAnimation11setDurationEi(void *this_, int msecs) {
  ((QPauseAnimation*)this_)->setDuration(msecs);
}