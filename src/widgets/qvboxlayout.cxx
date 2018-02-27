//  header block begin
// /usr/include/qt/QtWidgets/qboxlayout.h
#ifndef protected
#define protected public
#endif
#include <qboxlayout.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QVBoxLayout is pure virtual: false
// QVBoxLayout has virtual projected: false
//  header block end

//  main block begin

class MyQVBoxLayout : public QVBoxLayout {
public:
  virtual ~MyQVBoxLayout() {}
// void QVBoxLayout()
MyQVBoxLayout() : QVBoxLayout() {}
// void QVBoxLayout(class QWidget *)
MyQVBoxLayout(QWidget * parent) : QVBoxLayout(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:128
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK11QVBoxLayout10metaObjectEv(void *this_) {
  return (void*)((QVBoxLayout*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:130
// [-2] void QVBoxLayout()
extern "C"
void* C_ZN11QVBoxLayoutC2Ev() {
  return  new QVBoxLayout();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:131
// [-2] void QVBoxLayout(class QWidget *)
extern "C"
void* C_ZN11QVBoxLayoutC2EP7QWidget(QWidget * parent) {
  return  new QVBoxLayout(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:132
// [-2] void ~QVBoxLayout()
extern "C"
void C_ZN11QVBoxLayoutD2Ev(void *this_) {
  delete (QVBoxLayout*)(this_);
}
//  main block end
