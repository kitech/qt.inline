//  header block begin
// /usr/include/qt/QtWidgets/qgesture.h
#include <qgesture.h>
#include <QtWidgets>

// QPanGesture is pure virtual: false
//  header block end

//  main block begin

class MyQPanGesture : public QPanGesture {
public:
MyQPanGesture(QObject * parent) : QPanGesture(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:106
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK11QPanGesture10metaObjectEv(void *this_) {
  return (void*)((QPanGesture*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:117
// [-2] void QPanGesture(class QObject *)
extern "C"
void* C_ZN11QPanGestureC1EP7QObject(QObject * parent) {
  (MyQPanGesture*)(0);
  return  new MyQPanGesture(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:118
// [-2] void ~QPanGesture()
extern "C"
void C_ZN11QPanGestureD1Ev(void *this_) {
  delete (QPanGesture*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:120
// [16] QPointF lastOffset()
extern "C"
void* C_ZNK11QPanGesture10lastOffsetEv(void *this_) {
  auto rv = ((QPanGesture*)this_)->lastOffset();
return new QPointF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:121
// [16] QPointF offset()
extern "C"
void* C_ZNK11QPanGesture6offsetEv(void *this_) {
  auto rv = ((QPanGesture*)this_)->offset();
return new QPointF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:122
// [16] QPointF delta()
extern "C"
void* C_ZNK11QPanGesture5deltaEv(void *this_) {
  auto rv = ((QPanGesture*)this_)->delta();
return new QPointF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:123
// [8] qreal acceleration()
extern "C"
qreal C_ZNK11QPanGesture12accelerationEv(void *this_) {
  return (qreal)((QPanGesture*)this_)->acceleration();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:125
// [-2] void setLastOffset(const class QPointF &)
extern "C"
void C_ZN11QPanGesture13setLastOffsetERK7QPointF(void *this_, const QPointF & value) {
  ((QPanGesture*)this_)->setLastOffset(value);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:126
// [-2] void setOffset(const class QPointF &)
extern "C"
void C_ZN11QPanGesture9setOffsetERK7QPointF(void *this_, const QPointF & value) {
  ((QPanGesture*)this_)->setOffset(value);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:127
// [-2] void setAcceleration(qreal)
extern "C"
void C_ZN11QPanGesture15setAccelerationEd(void *this_, qreal value) {
  ((QPanGesture*)this_)->setAcceleration(value);
}
//  main block end
