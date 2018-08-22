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

// QGesture is pure virtual: false
// QGesture has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQGesture : public QGesture {
public:
  virtual ~MyQGesture() {}
// void QGesture(QObject *)
MyQGesture(QObject * parent) : QGesture(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:63
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QGesture10metaObjectEv(void *this_) {
  return (void*)((QGesture*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:63
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN8QGesture11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QGesture*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:63
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN8QGesture11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QGesture*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:63
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN8QGesture2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGesture::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:63
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN8QGesture6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGesture::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:73
// [-2] void QGesture(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN8QGestureC2EP7QObject(QObject * parent) {
  return  new QGesture(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:74
// [-2] void ~QGesture()
extern "C" Q_DECL_EXPORT
void C_ZN8QGestureD2Ev(void *this_) {
  delete (QGesture*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:76
// [4] Qt::GestureType gestureType()
extern "C" Q_DECL_EXPORT
Qt::GestureType C_ZNK8QGesture11gestureTypeEv(void *this_) {
  return (Qt::GestureType)((QGesture*)this_)->gestureType();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:78
// [4] Qt::GestureState state()
extern "C" Q_DECL_EXPORT
Qt::GestureState C_ZNK8QGesture5stateEv(void *this_) {
  return (Qt::GestureState)((QGesture*)this_)->state();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:80
// [16] QPointF hotSpot()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QGesture7hotSpotEv(void *this_) {
  auto rv = ((QGesture*)this_)->hotSpot();
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:81
// [-2] void setHotSpot(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN8QGesture10setHotSpotERK7QPointF(void *this_, QPointF* value) {
  ((QGesture*)this_)->setHotSpot(*value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:82
// [1] bool hasHotSpot()
extern "C" Q_DECL_EXPORT
bool C_ZNK8QGesture10hasHotSpotEv(void *this_) {
  return (bool)((QGesture*)this_)->hasHotSpot();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:83
// [-2] void unsetHotSpot()
extern "C" Q_DECL_EXPORT
void C_ZN8QGesture12unsetHotSpotEv(void *this_) {
  ((QGesture*)this_)->unsetHotSpot();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:90
// [-2] void setGestureCancelPolicy(QGesture::GestureCancelPolicy)
extern "C" Q_DECL_EXPORT
void C_ZN8QGesture22setGestureCancelPolicyENS_19GestureCancelPolicyE(void *this_, QGesture::GestureCancelPolicy policy) {
  ((QGesture*)this_)->setGestureCancelPolicy(policy);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:91
// [4] QGesture::GestureCancelPolicy gestureCancelPolicy()
extern "C" Q_DECL_EXPORT
QGesture::GestureCancelPolicy C_ZNK8QGesture19gestureCancelPolicyEv(void *this_) {
  return (QGesture::GestureCancelPolicy)((QGesture*)this_)->gestureCancelPolicy();
}

//  main block end
