//  header block begin
// /usr/include/qt/QtWidgets/qgesture.h
#include <qgesture.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qgesture.h:135
// const QMetaObject * metaObject()
extern "C"
void C_ZNK13QPinchGesture10metaObjectEv(void *this_) {
  /*return*/ ((QPinchGesture*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qgesture.h:163
// void QPinchGesture(class QObject *)
extern "C"
void* C_ZN13QPinchGestureC1EP7QObject(QObject * parent) {
  return new QPinchGesture(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qgesture.h:164
// void ~QPinchGesture()
extern "C"
void C_ZN13QPinchGestureD1Ev(void *this_) {
  delete (QPinchGesture*)(this_);
}
// /usr/include/qt/QtWidgets/qgesture.h:166
// ChangeFlags totalChangeFlags()
extern "C"
void C_ZNK13QPinchGesture16totalChangeFlagsEv(void *this_) {
  /*return*/ ((QPinchGesture*)this_)->totalChangeFlags();
}
// /usr/include/qt/QtWidgets/qgesture.h:167
// void setTotalChangeFlags(ChangeFlags)
extern "C"
void C_ZN13QPinchGesture19setTotalChangeFlagsE6QFlagsINS_10ChangeFlagEE(void *this_, QFlags<QPinchGesture::ChangeFlag> value) {
  ((QPinchGesture*)this_)->setTotalChangeFlags(value);
}
// /usr/include/qt/QtWidgets/qgesture.h:169
// ChangeFlags changeFlags()
extern "C"
void C_ZNK13QPinchGesture11changeFlagsEv(void *this_) {
  /*return*/ ((QPinchGesture*)this_)->changeFlags();
}
// /usr/include/qt/QtWidgets/qgesture.h:170
// void setChangeFlags(ChangeFlags)
extern "C"
void C_ZN13QPinchGesture14setChangeFlagsE6QFlagsINS_10ChangeFlagEE(void *this_, QFlags<QPinchGesture::ChangeFlag> value) {
  ((QPinchGesture*)this_)->setChangeFlags(value);
}
// /usr/include/qt/QtWidgets/qgesture.h:172
// QPointF startCenterPoint()
extern "C"
void C_ZNK13QPinchGesture16startCenterPointEv(void *this_) {
  /*return*/ ((QPinchGesture*)this_)->startCenterPoint();
}
// /usr/include/qt/QtWidgets/qgesture.h:173
// QPointF lastCenterPoint()
extern "C"
void C_ZNK13QPinchGesture15lastCenterPointEv(void *this_) {
  /*return*/ ((QPinchGesture*)this_)->lastCenterPoint();
}
// /usr/include/qt/QtWidgets/qgesture.h:174
// QPointF centerPoint()
extern "C"
void C_ZNK13QPinchGesture11centerPointEv(void *this_) {
  /*return*/ ((QPinchGesture*)this_)->centerPoint();
}
// /usr/include/qt/QtWidgets/qgesture.h:175
// void setStartCenterPoint(const class QPointF &)
extern "C"
void C_ZN13QPinchGesture19setStartCenterPointERK7QPointF(void *this_, const QPointF & value) {
  ((QPinchGesture*)this_)->setStartCenterPoint(value);
}
// /usr/include/qt/QtWidgets/qgesture.h:176
// void setLastCenterPoint(const class QPointF &)
extern "C"
void C_ZN13QPinchGesture18setLastCenterPointERK7QPointF(void *this_, const QPointF & value) {
  ((QPinchGesture*)this_)->setLastCenterPoint(value);
}
// /usr/include/qt/QtWidgets/qgesture.h:177
// void setCenterPoint(const class QPointF &)
extern "C"
void C_ZN13QPinchGesture14setCenterPointERK7QPointF(void *this_, const QPointF & value) {
  ((QPinchGesture*)this_)->setCenterPoint(value);
}
// /usr/include/qt/QtWidgets/qgesture.h:179
// qreal totalScaleFactor()
extern "C"
void C_ZNK13QPinchGesture16totalScaleFactorEv(void *this_) {
  /*return*/ ((QPinchGesture*)this_)->totalScaleFactor();
}
// /usr/include/qt/QtWidgets/qgesture.h:180
// qreal lastScaleFactor()
extern "C"
void C_ZNK13QPinchGesture15lastScaleFactorEv(void *this_) {
  /*return*/ ((QPinchGesture*)this_)->lastScaleFactor();
}
// /usr/include/qt/QtWidgets/qgesture.h:181
// qreal scaleFactor()
extern "C"
void C_ZNK13QPinchGesture11scaleFactorEv(void *this_) {
  /*return*/ ((QPinchGesture*)this_)->scaleFactor();
}
// /usr/include/qt/QtWidgets/qgesture.h:182
// void setTotalScaleFactor(qreal)
extern "C"
void C_ZN13QPinchGesture19setTotalScaleFactorEd(void *this_, qreal value) {
  ((QPinchGesture*)this_)->setTotalScaleFactor(value);
}
// /usr/include/qt/QtWidgets/qgesture.h:183
// void setLastScaleFactor(qreal)
extern "C"
void C_ZN13QPinchGesture18setLastScaleFactorEd(void *this_, qreal value) {
  ((QPinchGesture*)this_)->setLastScaleFactor(value);
}
// /usr/include/qt/QtWidgets/qgesture.h:184
// void setScaleFactor(qreal)
extern "C"
void C_ZN13QPinchGesture14setScaleFactorEd(void *this_, qreal value) {
  ((QPinchGesture*)this_)->setScaleFactor(value);
}
// /usr/include/qt/QtWidgets/qgesture.h:186
// qreal totalRotationAngle()
extern "C"
void C_ZNK13QPinchGesture18totalRotationAngleEv(void *this_) {
  /*return*/ ((QPinchGesture*)this_)->totalRotationAngle();
}
// /usr/include/qt/QtWidgets/qgesture.h:187
// qreal lastRotationAngle()
extern "C"
void C_ZNK13QPinchGesture17lastRotationAngleEv(void *this_) {
  /*return*/ ((QPinchGesture*)this_)->lastRotationAngle();
}
// /usr/include/qt/QtWidgets/qgesture.h:188
// qreal rotationAngle()
extern "C"
void C_ZNK13QPinchGesture13rotationAngleEv(void *this_) {
  /*return*/ ((QPinchGesture*)this_)->rotationAngle();
}
// /usr/include/qt/QtWidgets/qgesture.h:189
// void setTotalRotationAngle(qreal)
extern "C"
void C_ZN13QPinchGesture21setTotalRotationAngleEd(void *this_, qreal value) {
  ((QPinchGesture*)this_)->setTotalRotationAngle(value);
}
// /usr/include/qt/QtWidgets/qgesture.h:190
// void setLastRotationAngle(qreal)
extern "C"
void C_ZN13QPinchGesture20setLastRotationAngleEd(void *this_, qreal value) {
  ((QPinchGesture*)this_)->setLastRotationAngle(value);
}
// /usr/include/qt/QtWidgets/qgesture.h:191
// void setRotationAngle(qreal)
extern "C"
void C_ZN13QPinchGesture16setRotationAngleEd(void *this_, qreal value) {
  ((QPinchGesture*)this_)->setRotationAngle(value);
}
//  main block end
