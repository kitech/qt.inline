//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qevent.h:892
// void QTouchEvent(class QEvent::Type, class QTouchDevice *, Qt::KeyboardModifiers, Qt::TouchPointStates, const QList<class QTouchEvent::TouchPoint> &)
extern "C"
void* C_ZN11QTouchEventC1EN6QEvent4TypeEP12QTouchDevice6QFlagsIN2Qt16KeyboardModifierEES4_INS5_15TouchPointStateEERK5QListINS_10TouchPointEE(QEvent::Type eventType, QTouchDevice * device, QFlags<Qt::KeyboardModifier> modifiers, QFlags<Qt::TouchPointState> touchPointStates, const QList<QTouchEvent::TouchPoint> & touchPoints) {
  return new QTouchEvent(eventType, device, modifiers, touchPointStates, touchPoints);
}
// virtual
// /usr/include/qt/QtGui/qevent.h:897
// void ~QTouchEvent()
extern "C"
void C_ZN11QTouchEventD1Ev(void *this_) {
  delete (QTouchEvent*)(this_);
}
// inline
// /usr/include/qt/QtGui/qevent.h:899
// QWindow * window()
extern "C"
void C_ZNK11QTouchEvent6windowEv(void *this_) {
  /*return*/ ((QTouchEvent*)this_)->window();
}
// inline
// /usr/include/qt/QtGui/qevent.h:900
// QObject * target()
extern "C"
void C_ZNK11QTouchEvent6targetEv(void *this_) {
  /*return*/ ((QTouchEvent*)this_)->target();
}
// inline
// /usr/include/qt/QtGui/qevent.h:904
// Qt::TouchPointStates touchPointStates()
extern "C"
void C_ZNK11QTouchEvent16touchPointStatesEv(void *this_) {
  /*return*/ ((QTouchEvent*)this_)->touchPointStates();
}
// inline
// /usr/include/qt/QtGui/qevent.h:905
// const QList<QTouchEvent::TouchPoint> & touchPoints()
extern "C"
void C_ZNK11QTouchEvent11touchPointsEv(void *this_) {
  /*return*/ ((QTouchEvent*)this_)->touchPoints();
}
// inline
// /usr/include/qt/QtGui/qevent.h:906
// QTouchDevice * device()
extern "C"
void C_ZNK11QTouchEvent6deviceEv(void *this_) {
  /*return*/ ((QTouchEvent*)this_)->device();
}
// inline
// /usr/include/qt/QtGui/qevent.h:909
// void setWindow(class QWindow *)
extern "C"
void C_ZN11QTouchEvent9setWindowEP7QWindow(void *this_, QWindow * awindow) {
  ((QTouchEvent*)this_)->setWindow(awindow);
}
// inline
// /usr/include/qt/QtGui/qevent.h:910
// void setTarget(class QObject *)
extern "C"
void C_ZN11QTouchEvent9setTargetEP7QObject(void *this_, QObject * atarget) {
  ((QTouchEvent*)this_)->setTarget(atarget);
}
// inline
// /usr/include/qt/QtGui/qevent.h:911
// void setTouchPointStates(Qt::TouchPointStates)
extern "C"
void C_ZN11QTouchEvent19setTouchPointStatesE6QFlagsIN2Qt15TouchPointStateEE(void *this_, QFlags<Qt::TouchPointState> aTouchPointStates) {
  ((QTouchEvent*)this_)->setTouchPointStates(aTouchPointStates);
}
// inline
// /usr/include/qt/QtGui/qevent.h:912
// void setTouchPoints(const QList<class QTouchEvent::TouchPoint> &)
extern "C"
void C_ZN11QTouchEvent14setTouchPointsERK5QListINS_10TouchPointEE(void *this_, const QList<QTouchEvent::TouchPoint> & atouchPoints) {
  ((QTouchEvent*)this_)->setTouchPoints(atouchPoints);
}
// inline
// /usr/include/qt/QtGui/qevent.h:913
// void setDevice(class QTouchDevice *)
extern "C"
void C_ZN11QTouchEvent9setDeviceEP12QTouchDevice(void *this_, QTouchDevice * adevice) {
  ((QTouchEvent*)this_)->setDevice(adevice);
}
//  main block end
