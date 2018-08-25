//  header block begin
// since 0x040600
// /usr/include/qt/QtWidgets/qgesture.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgesture.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QTapAndHoldGesture is pure virtual: false
// QTapAndHoldGesture has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQTapAndHoldGesture : public QTapAndHoldGesture {
public:
  virtual ~MyQTapAndHoldGesture() {}
// void QTapAndHoldGesture(QObject *)
MyQTapAndHoldGesture(QObject * parent) : QTapAndHoldGesture(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:254
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QTapAndHoldGesture10metaObjectEv(void *this_) {
  return (void*)((QTapAndHoldGesture*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:254
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QTapAndHoldGesture11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QTapAndHoldGesture*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:254
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN18QTapAndHoldGesture11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QTapAndHoldGesture*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:254
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QTapAndHoldGesture2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QTapAndHoldGesture::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:254
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QTapAndHoldGesture6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QTapAndHoldGesture::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:260
// [-2] void QTapAndHoldGesture(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QTapAndHoldGestureC2EP7QObject(QObject * parent) {
  return  new MyQTapAndHoldGesture(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:261
// [-2] void ~QTapAndHoldGesture()
extern "C" Q_DECL_EXPORT
void C_ZN18QTapAndHoldGestureD2Ev(void *this_) {
  delete (QTapAndHoldGesture*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:263
// [16] QPointF position()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QTapAndHoldGesture8positionEv(void *this_) {
  auto rv = ((QTapAndHoldGesture*)this_)->position();
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:264
// [-2] void setPosition(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN18QTapAndHoldGesture11setPositionERK7QPointF(void *this_, QPointF* pos) {
  ((QTapAndHoldGesture*)this_)->setPosition(*pos);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:266
// [-2] void setTimeout(int)
extern "C" Q_DECL_EXPORT
void C_ZN18QTapAndHoldGesture10setTimeoutEi(int msecs) {
  QTapAndHoldGesture::setTimeout(msecs);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:267
// [4] int timeout()
extern "C" Q_DECL_EXPORT
int C_ZN18QTapAndHoldGesture7timeoutEv() {
  return (int)QTapAndHoldGesture::timeout();
}

//  main block end
