//  header block begin
// /usr/include/qt/QtWidgets/qgesture.h
#include <qgesture.h>
#include <QtWidgets>

// QTapAndHoldGesture is pure virtual: false
// QTapAndHoldGesture has virtual projected: false
//  header block end

//  main block begin

class MyQTapAndHoldGesture : public QTapAndHoldGesture {
public:
  virtual ~MyQTapAndHoldGesture() {}
// void QTapAndHoldGesture(class QObject *)
MyQTapAndHoldGesture(QObject * parent) : QTapAndHoldGesture(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:254
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK18QTapAndHoldGesture10metaObjectEv(void *this_) {
  return (void*)((QTapAndHoldGesture*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:260
// [-2] void QTapAndHoldGesture(class QObject *)
extern "C"
void* C_ZN18QTapAndHoldGestureC2EP7QObject(QObject * parent) {
  return  new QTapAndHoldGesture(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:261
// [-2] void ~QTapAndHoldGesture()
extern "C"
void C_ZN18QTapAndHoldGestureD2Ev(void *this_) {
  delete (QTapAndHoldGesture*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:263
// [16] QPointF position()
extern "C"
void* C_ZNK18QTapAndHoldGesture8positionEv(void *this_) {
  auto rv = ((QTapAndHoldGesture*)this_)->position();
return new QPointF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:264
// [-2] void setPosition(const class QPointF &)
extern "C"
void C_ZN18QTapAndHoldGesture11setPositionERK7QPointF(void *this_, const QPointF & pos) {
  ((QTapAndHoldGesture*)this_)->setPosition(pos);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:266
// [-2] void setTimeout(int)
extern "C"
void C_ZN18QTapAndHoldGesture10setTimeoutEi(int msecs) {
  QTapAndHoldGesture::setTimeout(msecs);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:267
// [4] int timeout()
extern "C"
int C_ZN18QTapAndHoldGesture7timeoutEv() {
  return (int)QTapAndHoldGesture::timeout();
}
//  main block end
