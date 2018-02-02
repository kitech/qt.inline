//  header block begin
// /usr/include/qt/QtWidgets/qgesture.h
#include <qgesture.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QPinchGesture is pure virtual: false
// QPinchGesture has virtual projected: false
//  header block end

//  main block begin

class MyQPinchGesture : public QPinchGesture {
public:
  virtual ~MyQPinchGesture() {}
// void QPinchGesture(class QObject *)
MyQPinchGesture(QObject * parent) : QPinchGesture(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:136
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK13QPinchGesture10metaObjectEv(void *this_) {
  return (void*)((QPinchGesture*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:165
// [-2] void QPinchGesture(class QObject *)
extern "C"
void* C_ZN13QPinchGestureC2EP7QObject(QObject * parent) {
  return  new QPinchGesture(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:166
// [-2] void ~QPinchGesture()
extern "C"
void C_ZN13QPinchGestureD2Ev(void *this_) {
  delete (QPinchGesture*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:168
// [4] QPinchGesture::ChangeFlags totalChangeFlags()
extern "C"
void C_ZNK13QPinchGesture16totalChangeFlagsEv(void *this_) {
  auto rv = ((QPinchGesture*)this_)->totalChangeFlags();
/*return rv;*/
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:169
// [-2] void setTotalChangeFlags(QPinchGesture::ChangeFlags)
extern "C"
void C_ZN13QPinchGesture19setTotalChangeFlagsE6QFlagsINS_10ChangeFlagEE(void *this_, QFlags<QPinchGesture::ChangeFlag> value) {
  ((QPinchGesture*)this_)->setTotalChangeFlags(value);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:171
// [4] QPinchGesture::ChangeFlags changeFlags()
extern "C"
void C_ZNK13QPinchGesture11changeFlagsEv(void *this_) {
  auto rv = ((QPinchGesture*)this_)->changeFlags();
/*return rv;*/
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:172
// [-2] void setChangeFlags(QPinchGesture::ChangeFlags)
extern "C"
void C_ZN13QPinchGesture14setChangeFlagsE6QFlagsINS_10ChangeFlagEE(void *this_, QFlags<QPinchGesture::ChangeFlag> value) {
  ((QPinchGesture*)this_)->setChangeFlags(value);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:174
// [16] QPointF startCenterPoint()
extern "C"
void* C_ZNK13QPinchGesture16startCenterPointEv(void *this_) {
  auto rv = ((QPinchGesture*)this_)->startCenterPoint();
return new QPointF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:175
// [16] QPointF lastCenterPoint()
extern "C"
void* C_ZNK13QPinchGesture15lastCenterPointEv(void *this_) {
  auto rv = ((QPinchGesture*)this_)->lastCenterPoint();
return new QPointF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:176
// [16] QPointF centerPoint()
extern "C"
void* C_ZNK13QPinchGesture11centerPointEv(void *this_) {
  auto rv = ((QPinchGesture*)this_)->centerPoint();
return new QPointF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:177
// [-2] void setStartCenterPoint(const class QPointF &)
extern "C"
void C_ZN13QPinchGesture19setStartCenterPointERK7QPointF(void *this_, QPointF* value) {
  ((QPinchGesture*)this_)->setStartCenterPoint(*value);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:178
// [-2] void setLastCenterPoint(const class QPointF &)
extern "C"
void C_ZN13QPinchGesture18setLastCenterPointERK7QPointF(void *this_, QPointF* value) {
  ((QPinchGesture*)this_)->setLastCenterPoint(*value);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:179
// [-2] void setCenterPoint(const class QPointF &)
extern "C"
void C_ZN13QPinchGesture14setCenterPointERK7QPointF(void *this_, QPointF* value) {
  ((QPinchGesture*)this_)->setCenterPoint(*value);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:181
// [8] qreal totalScaleFactor()
extern "C"
qreal C_ZNK13QPinchGesture16totalScaleFactorEv(void *this_) {
  return (qreal)((QPinchGesture*)this_)->totalScaleFactor();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:182
// [8] qreal lastScaleFactor()
extern "C"
qreal C_ZNK13QPinchGesture15lastScaleFactorEv(void *this_) {
  return (qreal)((QPinchGesture*)this_)->lastScaleFactor();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:183
// [8] qreal scaleFactor()
extern "C"
qreal C_ZNK13QPinchGesture11scaleFactorEv(void *this_) {
  return (qreal)((QPinchGesture*)this_)->scaleFactor();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:184
// [-2] void setTotalScaleFactor(qreal)
extern "C"
void C_ZN13QPinchGesture19setTotalScaleFactorEd(void *this_, qreal value) {
  ((QPinchGesture*)this_)->setTotalScaleFactor(value);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:185
// [-2] void setLastScaleFactor(qreal)
extern "C"
void C_ZN13QPinchGesture18setLastScaleFactorEd(void *this_, qreal value) {
  ((QPinchGesture*)this_)->setLastScaleFactor(value);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:186
// [-2] void setScaleFactor(qreal)
extern "C"
void C_ZN13QPinchGesture14setScaleFactorEd(void *this_, qreal value) {
  ((QPinchGesture*)this_)->setScaleFactor(value);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:188
// [8] qreal totalRotationAngle()
extern "C"
qreal C_ZNK13QPinchGesture18totalRotationAngleEv(void *this_) {
  return (qreal)((QPinchGesture*)this_)->totalRotationAngle();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:189
// [8] qreal lastRotationAngle()
extern "C"
qreal C_ZNK13QPinchGesture17lastRotationAngleEv(void *this_) {
  return (qreal)((QPinchGesture*)this_)->lastRotationAngle();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:190
// [8] qreal rotationAngle()
extern "C"
qreal C_ZNK13QPinchGesture13rotationAngleEv(void *this_) {
  return (qreal)((QPinchGesture*)this_)->rotationAngle();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:191
// [-2] void setTotalRotationAngle(qreal)
extern "C"
void C_ZN13QPinchGesture21setTotalRotationAngleEd(void *this_, qreal value) {
  ((QPinchGesture*)this_)->setTotalRotationAngle(value);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:192
// [-2] void setLastRotationAngle(qreal)
extern "C"
void C_ZN13QPinchGesture20setLastRotationAngleEd(void *this_, qreal value) {
  ((QPinchGesture*)this_)->setLastRotationAngle(value);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:193
// [-2] void setRotationAngle(qreal)
extern "C"
void C_ZN13QPinchGesture16setRotationAngleEd(void *this_, qreal value) {
  ((QPinchGesture*)this_)->setRotationAngle(value);
}
//  main block end
