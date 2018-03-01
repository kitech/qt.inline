//  header block begin
// /usr/include/qt/QtWidgets/qboxlayout.h
#ifndef protected
#define protected public
#endif
#include <qboxlayout.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QHBoxLayout is pure virtual: false
// QHBoxLayout has virtual projected: false
//  header block end

//  main block begin

class MyQHBoxLayout : public QHBoxLayout {
public:
  virtual ~MyQHBoxLayout() {}
// void QHBoxLayout()
MyQHBoxLayout() : QHBoxLayout() {}
// void QHBoxLayout(class QWidget *)
MyQHBoxLayout(QWidget * parent) : QHBoxLayout(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:115
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QHBoxLayout10metaObjectEv(void *this_) {
  return (void*)((QHBoxLayout*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:117
// [-2] void QHBoxLayout()
extern "C" Q_DECL_EXPORT
void* C_ZN11QHBoxLayoutC2Ev() {
  return  new QHBoxLayout();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:118
// [-2] void QHBoxLayout(class QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QHBoxLayoutC2EP7QWidget(QWidget * parent) {
  return  new QHBoxLayout(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:119
// [-2] void ~QHBoxLayout()
extern "C" Q_DECL_EXPORT
void C_ZN11QHBoxLayoutD2Ev(void *this_) {
  delete (QHBoxLayout*)(this_);
}
//  main block end
