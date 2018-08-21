//  header block begin
// since 0x040600
// /usr/include/qt/QtWidgets/qgraphicstransform.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgraphicstransform.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsTransform is pure virtual: true
// QGraphicsTransform has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQGraphicsTransform : public QGraphicsTransform {
public:
  virtual ~MyQGraphicsTransform() {}
// void QGraphicsTransform(QObject *)
MyQGraphicsTransform(QObject * parent) : QGraphicsTransform(parent) {}
// Protected Visibility=Default Availability=Available
// [-2] void update()
  virtual void update() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"update", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsTransform::update();
  }
  }

// void QGraphicsTransform(QGraphicsTransformPrivate &, QObject *)
MyQGraphicsTransform(QGraphicsTransformPrivate & p, QObject * parent) : QGraphicsTransform(p, parent) {}
};

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:66
// [-2] void update()
extern "C" Q_DECL_EXPORT
void C_ZN18QGraphicsTransform6updateEv(void *this_) {
  ((QGraphicsTransform*)this_)->QGraphicsTransform::update();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:58
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QGraphicsTransform10metaObjectEv(void *this_) {
  return (void*)((QGraphicsTransform*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:58
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QGraphicsTransform11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QGraphicsTransform*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:58
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN18QGraphicsTransform11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QGraphicsTransform*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:58
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QGraphicsTransform2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGraphicsTransform::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:58
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QGraphicsTransform6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGraphicsTransform::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:60
// [-2] void QGraphicsTransform(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QGraphicsTransformC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQGraphicsTransform*)(0);
  return 0; // new MyQGraphicsTransform(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:61
// [-2] void ~QGraphicsTransform()
extern "C" Q_DECL_EXPORT
void C_ZN18QGraphicsTransformD2Ev(void *this_) {
  delete (QGraphicsTransform*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:63
// [-2] void applyTo(QMatrix4x4 *)
extern "C" Q_DECL_EXPORT
void C_ZNK18QGraphicsTransform7applyToEP10QMatrix4x4(void *this_, QMatrix4x4 * matrix) {
  ((QGraphicsTransform*)this_)->applyTo(matrix);
}

//  main block end
