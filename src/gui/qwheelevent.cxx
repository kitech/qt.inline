//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

// QWheelEvent is pure virtual: false
//  header block end

//  main block begin

class MyQWheelEvent : public QWheelEvent {
public:
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:196
// [-2] void ~QWheelEvent()
extern "C"
void C_ZN11QWheelEventD1Ev(void *this_) {
  delete (QWheelEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:199
// [8] QPoint pixelDelta()
extern "C"
void* C_ZNK11QWheelEvent10pixelDeltaEv(void *this_) {
  auto rv = ((QWheelEvent*)this_)->pixelDelta();
return new QPoint(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:200
// [8] QPoint angleDelta()
extern "C"
void* C_ZNK11QWheelEvent10angleDeltaEv(void *this_) {
  auto rv = ((QWheelEvent*)this_)->angleDelta();
return new QPoint(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:202
// [4] int delta()
extern "C"
int C_ZNK11QWheelEvent5deltaEv(void *this_) {
  return (int)((QWheelEvent*)this_)->delta();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:203
// [4] Qt::Orientation orientation()
extern "C"
Qt::Orientation C_ZNK11QWheelEvent11orientationEv(void *this_) {
  return (Qt::Orientation)((QWheelEvent*)this_)->orientation();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:206
// [8] QPoint pos()
extern "C"
void* C_ZNK11QWheelEvent3posEv(void *this_) {
  auto rv = ((QWheelEvent*)this_)->pos();
return new QPoint(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:207
// [8] QPoint globalPos()
extern "C"
void* C_ZNK11QWheelEvent9globalPosEv(void *this_) {
  auto rv = ((QWheelEvent*)this_)->globalPos();
return new QPoint(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:208
// [4] int x()
extern "C"
int C_ZNK11QWheelEvent1xEv(void *this_) {
  return (int)((QWheelEvent*)this_)->x();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:209
// [4] int y()
extern "C"
int C_ZNK11QWheelEvent1yEv(void *this_) {
  return (int)((QWheelEvent*)this_)->y();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:210
// [4] int globalX()
extern "C"
int C_ZNK11QWheelEvent7globalXEv(void *this_) {
  return (int)((QWheelEvent*)this_)->globalX();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:211
// [4] int globalY()
extern "C"
int C_ZNK11QWheelEvent7globalYEv(void *this_) {
  return (int)((QWheelEvent*)this_)->globalY();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:213
// [16] const QPointF & posF()
extern "C"
void* C_ZNK11QWheelEvent4posFEv(void *this_) {
  auto& rv = ((QWheelEvent*)this_)->posF();
return new QPointF(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:214
// [16] const QPointF & globalPosF()
extern "C"
void* C_ZNK11QWheelEvent10globalPosFEv(void *this_) {
  auto& rv = ((QWheelEvent*)this_)->globalPosF();
return new QPointF(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:216
// [4] Qt::MouseButtons buttons()
extern "C"
Qt::MouseButtons C_ZNK11QWheelEvent7buttonsEv(void *this_) {
  return (Qt::MouseButtons)((QWheelEvent*)this_)->buttons();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:218
// [4] Qt::ScrollPhase phase()
extern "C"
Qt::ScrollPhase C_ZNK11QWheelEvent5phaseEv(void *this_) {
  return (Qt::ScrollPhase)((QWheelEvent*)this_)->phase();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:219
// [1] bool inverted()
extern "C"
bool C_ZNK11QWheelEvent8invertedEv(void *this_) {
  return (bool)((QWheelEvent*)this_)->inverted();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:221
// [4] Qt::MouseEventSource source()
extern "C"
Qt::MouseEventSource C_ZNK11QWheelEvent6sourceEv(void *this_) {
  return (Qt::MouseEventSource)((QWheelEvent*)this_)->source();
}
//  main block end
