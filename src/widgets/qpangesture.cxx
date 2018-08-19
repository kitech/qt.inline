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

// QPanGesture is pure virtual: false
// QPanGesture has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQPanGesture : public QPanGesture {
public:
  virtual ~MyQPanGesture() {}
// void QPanGesture(QObject *)
MyQPanGesture(QObject * parent) : QPanGesture(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:106
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QPanGesture10metaObjectEv(void *this_) {
  return (void*)((QPanGesture*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:106
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QPanGesture11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QPanGesture*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:106
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN11QPanGesture11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QPanGesture*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:106
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QPanGesture2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QPanGesture::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:106
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QPanGesture6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QPanGesture::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:117
// [-2] void QPanGesture(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QPanGestureC2EP7QObject(QObject * parent) {
  return  new QPanGesture(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:118
// [-2] void ~QPanGesture()
extern "C" Q_DECL_EXPORT
void C_ZN11QPanGestureD2Ev(void *this_) {
  delete (QPanGesture*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:120
// [16] QPointF lastOffset()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QPanGesture10lastOffsetEv(void *this_) {
  auto rv = ((QPanGesture*)this_)->lastOffset();
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:121
// [16] QPointF offset()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QPanGesture6offsetEv(void *this_) {
  auto rv = ((QPanGesture*)this_)->offset();
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:122
// [16] QPointF delta()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QPanGesture5deltaEv(void *this_) {
  auto rv = ((QPanGesture*)this_)->delta();
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:123
// [8] qreal acceleration()
extern "C" Q_DECL_EXPORT
qreal C_ZNK11QPanGesture12accelerationEv(void *this_) {
  return (qreal)((QPanGesture*)this_)->acceleration();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:125
// [-2] void setLastOffset(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN11QPanGesture13setLastOffsetERK7QPointF(void *this_, QPointF* value) {
  ((QPanGesture*)this_)->setLastOffset(*value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:126
// [-2] void setOffset(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN11QPanGesture9setOffsetERK7QPointF(void *this_, QPointF* value) {
  ((QPanGesture*)this_)->setOffset(*value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:127
// [-2] void setAcceleration(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN11QPanGesture15setAccelerationEd(void *this_, qreal value) {
  ((QPanGesture*)this_)->setAcceleration(value);
}

//  main block end
