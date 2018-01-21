//  header block begin
// /usr/include/qt/QtWidgets/qgesture.h
#include <qgesture.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qgesture.h:252
// const QMetaObject * metaObject()
extern "C"
void C_ZNK18QTapAndHoldGesture10metaObjectEv(void *this_) {
  /*return*/ ((QTapAndHoldGesture*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qgesture.h:258
// void QTapAndHoldGesture(class QObject *)
extern "C"
void* C_ZN18QTapAndHoldGestureC1EP7QObject(QObject * parent) {
  return new QTapAndHoldGesture(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qgesture.h:259
// void ~QTapAndHoldGesture()
extern "C"
void C_ZN18QTapAndHoldGestureD1Ev(void *this_) {
  delete (QTapAndHoldGesture*)(this_);
}
// /usr/include/qt/QtWidgets/qgesture.h:261
// QPointF position()
extern "C"
void C_ZNK18QTapAndHoldGesture8positionEv(void *this_) {
  /*return*/ ((QTapAndHoldGesture*)this_)->position();
}
// /usr/include/qt/QtWidgets/qgesture.h:262
// void setPosition(const class QPointF &)
extern "C"
void C_ZN18QTapAndHoldGesture11setPositionERK7QPointF(void *this_, const QPointF & pos) {
  ((QTapAndHoldGesture*)this_)->setPosition(pos);
}
// static
// /usr/include/qt/QtWidgets/qgesture.h:264
// void setTimeout(int)
extern "C"
void C_ZN18QTapAndHoldGesture10setTimeoutEi(int msecs) {
  QTapAndHoldGesture::setTimeout(msecs);
}
// static
// /usr/include/qt/QtWidgets/qgesture.h:265
// int timeout()
extern "C"
void C_ZN18QTapAndHoldGesture7timeoutEv() {
  /*return*/ QTapAndHoldGesture::timeout();
}
//  main block end
