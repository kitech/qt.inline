//  header block begin
// /usr/include/qt/QtWidgets/qgesture.h
#include <qgesture.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qgesture.h:234
// const QMetaObject * metaObject()
extern "C"
void C_ZNK11QTapGesture10metaObjectEv(void *this_) {
  /*return*/ ((QTapGesture*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qgesture.h:240
// void QTapGesture(class QObject *)
extern "C"
void* C_ZN11QTapGestureC1EP7QObject(QObject * parent) {
  return new QTapGesture(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qgesture.h:241
// void ~QTapGesture()
extern "C"
void C_ZN11QTapGestureD1Ev(void *this_) {
  delete (QTapGesture*)(this_);
}
// /usr/include/qt/QtWidgets/qgesture.h:243
// QPointF position()
extern "C"
void C_ZNK11QTapGesture8positionEv(void *this_) {
  /*return*/ ((QTapGesture*)this_)->position();
}
// /usr/include/qt/QtWidgets/qgesture.h:244
// void setPosition(const class QPointF &)
extern "C"
void C_ZN11QTapGesture11setPositionERK7QPointF(void *this_, const QPointF & pos) {
  ((QTapGesture*)this_)->setPosition(pos);
}
//  main block end
