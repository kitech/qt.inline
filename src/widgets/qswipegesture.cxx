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

// QSwipeGesture is pure virtual: false
// QSwipeGesture has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQSwipeGesture : public QSwipeGesture {
public:
  virtual ~MyQSwipeGesture() {}
// void QSwipeGesture(QObject *)
MyQSwipeGesture(QObject * parent) : QSwipeGesture(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:209
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QSwipeGesture10metaObjectEv(void *this_) {
  return (void*)((QSwipeGesture*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:209
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QSwipeGesture11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QSwipeGesture*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:209
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN13QSwipeGesture11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QSwipeGesture*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:209
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QSwipeGesture2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSwipeGesture::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:209
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QSwipeGesture6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSwipeGesture::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:221
// [-2] void QSwipeGesture(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QSwipeGestureC2EP7QObject(QObject * parent) {
  return  new MyQSwipeGesture(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:222
// [-2] void ~QSwipeGesture()
extern "C" Q_DECL_EXPORT
void C_ZN13QSwipeGestureD2Ev(void *this_) {
  delete (QSwipeGesture*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:224
// [4] QSwipeGesture::SwipeDirection horizontalDirection()
extern "C" Q_DECL_EXPORT
QSwipeGesture::SwipeDirection C_ZNK13QSwipeGesture19horizontalDirectionEv(void *this_) {
  return (QSwipeGesture::SwipeDirection)((QSwipeGesture*)this_)->horizontalDirection();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:225
// [4] QSwipeGesture::SwipeDirection verticalDirection()
extern "C" Q_DECL_EXPORT
QSwipeGesture::SwipeDirection C_ZNK13QSwipeGesture17verticalDirectionEv(void *this_) {
  return (QSwipeGesture::SwipeDirection)((QSwipeGesture*)this_)->verticalDirection();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:227
// [8] qreal swipeAngle()
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QSwipeGesture10swipeAngleEv(void *this_) {
  return (qreal)((QSwipeGesture*)this_)->swipeAngle();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:228
// [-2] void setSwipeAngle(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN13QSwipeGesture13setSwipeAngleEd(void *this_, qreal value) {
  ((QSwipeGesture*)this_)->setSwipeAngle(value);
}

//  main block end
