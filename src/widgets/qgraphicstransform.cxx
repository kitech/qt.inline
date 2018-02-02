//  header block begin
// /usr/include/qt/QtWidgets/qgraphicstransform.h
#include <qgraphicstransform.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsTransform is pure virtual: true
// QGraphicsTransform has virtual projected: true
//  header block end

//  main block begin
// void* callback_ZN18QGraphicsTransform6updateEv_fnptr = 0;
// extern "C" void set_callback_ZN18QGraphicsTransform6updateEv(void*cbfn)
// { callback_ZN18QGraphicsTransform6updateEv_fnptr = cbfn; }

class MyQGraphicsTransform : public QGraphicsTransform {
public:
  virtual ~MyQGraphicsTransform() {}
// void QGraphicsTransform(class QObject *)
MyQGraphicsTransform(QObject * parent) : QGraphicsTransform(parent) {}
// void update()
  virtual void update() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"update", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* ))(callback_ZN18QGraphicsTransform6updateEv_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this );
    // }
    QGraphicsTransform::update();
  }
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:58
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK18QGraphicsTransform10metaObjectEv(void *this_) {
  return (void*)((QGraphicsTransform*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:60
// [-2] void QGraphicsTransform(class QObject *)
extern "C"
void* C_ZN18QGraphicsTransformC1EP7QObject(QObject * parent) {
  auto _nilp = (MyQGraphicsTransform*)(0);
  return 0; // new MyQGraphicsTransform(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:61
// [-2] void ~QGraphicsTransform()
extern "C"
void C_ZN18QGraphicsTransformD2Ev(void *this_) {
  delete (QGraphicsTransform*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:63
// [-2] void applyTo(class QMatrix4x4 *)
extern "C"
void C_ZNK18QGraphicsTransform7applyToEP10QMatrix4x4(void *this_, QMatrix4x4 * matrix) {
  ((QGraphicsTransform*)this_)->applyTo(matrix);
}
//  main block end
