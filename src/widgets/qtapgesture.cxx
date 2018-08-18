//  header block begin
// since 0x040600
// /usr/include/qt/QtWidgets/qgesture.h
#ifndef protected
#define protected public
#endif
#include <qgesture.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QTapGesture is pure virtual: false
// QTapGesture has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQTapGesture : public QTapGesture {
public:
  virtual ~MyQTapGesture() {}
// void QTapGesture(QObject *)
MyQTapGesture(QObject * parent) : QTapGesture(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:236
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTapGesture10metaObjectEv(void *this_) {
  return (void*)((QTapGesture*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:236
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTapGesture11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QTapGesture*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:236
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN11QTapGesture11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QTapGesture*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:236
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTapGesture2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QTapGesture::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:236
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTapGesture6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QTapGesture::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:242
// [-2] void QTapGesture(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTapGestureC2EP7QObject(QObject * parent) {
  return  new QTapGesture(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:243
// [-2] void ~QTapGesture()
extern "C" Q_DECL_EXPORT
void C_ZN11QTapGestureD2Ev(void *this_) {
  delete (QTapGesture*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:245
// [16] QPointF position()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTapGesture8positionEv(void *this_) {
  auto rv = ((QTapGesture*)this_)->position();
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:246
// [-2] void setPosition(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN11QTapGesture11setPositionERK7QPointF(void *this_, QPointF* pos) {
  ((QTapGesture*)this_)->setPosition(*pos);
}

//  main block end
