//  header block begin
// /usr/include/qt/QtWidgets/qgraphicstransform.h
#include <qgraphicstransform.h>
#include <QtWidgets>

// QGraphicsTransform is pure virtual: true
//  header block end

//  main block begin
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:66
// [-2] void update()
extern "C"
void* callback_ZN18QGraphicsTransform6updateEv = 0;
extern "C" void set_callback_ZN18QGraphicsTransform6updateEv(void*cbfn)
{ callback_ZN18QGraphicsTransform6updateEv = cbfn; }

class MyQGraphicsTransform : public QGraphicsTransform {
public:
MyQGraphicsTransform(QObject * parent) : QGraphicsTransform(parent) {}
// void update()
// void update()
virtual void update() {
  if (callback_ZN18QGraphicsTransform6updateEv != 0) {
  // callback_ZN18QGraphicsTransform6updateEv();
}}
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
  (MyQGraphicsTransform*)(0);
  return 0; // new MyQGraphicsTransform(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:61
// [-2] void ~QGraphicsTransform()
extern "C"
void C_ZN18QGraphicsTransformD1Ev(void *this_) {
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
