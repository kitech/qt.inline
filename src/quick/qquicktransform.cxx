//  header block begin
// /usr/include/qt/QtQuick/qquickitem.h
#ifndef protected
#define protected public
#endif
#include <qquickitem.h>
#include <QtQuick>
#include "callback_inherit.h"

// QQuickTransform is pure virtual: true
// QQuickTransform has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQQuickTransform : public QQuickTransform {
public:
  virtual ~MyQQuickTransform() {}
// void QQuickTransform(class QObject *)
MyQQuickTransform(QObject * parent) : QQuickTransform(parent) {}
// Protected Visibility=Default Availability=Available
// void update()
  virtual void update() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"update", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QQuickTransform::update();
  }
  }

};

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:71
// [-2] void update()
extern "C" Q_DECL_EXPORT
void C_ZN15QQuickTransform6updateEv(void *this_) {
  ((QQuickTransform*)this_)->QQuickTransform::update();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:60
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QQuickTransform10metaObjectEv(void *this_) {
  return (void*)((QQuickTransform*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:62
// [-2] void QQuickTransform(class QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN15QQuickTransformC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQQuickTransform*)(0);
  return 0; // new MyQQuickTransform(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:63
// [-2] void ~QQuickTransform()
extern "C" Q_DECL_EXPORT
void C_ZN15QQuickTransformD2Ev(void *this_) {
  delete (QQuickTransform*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:65
// [-2] void appendToItem(class QQuickItem *)
extern "C" Q_DECL_EXPORT
void C_ZN15QQuickTransform12appendToItemEP10QQuickItem(void *this_, QQuickItem * arg0) {
  ((QQuickTransform*)this_)->appendToItem(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:66
// [-2] void prependToItem(class QQuickItem *)
extern "C" Q_DECL_EXPORT
void C_ZN15QQuickTransform13prependToItemEP10QQuickItem(void *this_, QQuickItem * arg0) {
  ((QQuickTransform*)this_)->prependToItem(arg0);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:68
// [-2] void applyTo(class QMatrix4x4 *)
extern "C" Q_DECL_EXPORT
void C_ZNK15QQuickTransform7applyToEP10QMatrix4x4(void *this_, QMatrix4x4 * matrix) {
  ((QQuickTransform*)this_)->applyTo(matrix);
}

//  main block end
