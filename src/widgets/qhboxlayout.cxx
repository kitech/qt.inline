//  header block begin
// /usr/include/qt/QtWidgets/qboxlayout.h
#include <qboxlayout.h>
#include <QtWidgets>

// QHBoxLayout is pure virtual: false
//  header block end

//  main block begin

class MyQHBoxLayout : public QHBoxLayout {
public:
MyQHBoxLayout() : QHBoxLayout() {}
MyQHBoxLayout(QWidget * parent) : QHBoxLayout(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:115
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK11QHBoxLayout10metaObjectEv(void *this_) {
  return (void*)((QHBoxLayout*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:117
// [-2] void QHBoxLayout()
extern "C"
void* C_ZN11QHBoxLayoutC1Ev() {
  (MyQHBoxLayout*)(0);
  return  new MyQHBoxLayout();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:118
// [-2] void QHBoxLayout(class QWidget *)
extern "C"
void* C_ZN11QHBoxLayoutC1EP7QWidget(QWidget * parent) {
  (MyQHBoxLayout*)(0);
  return  new MyQHBoxLayout(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:119
// [-2] void ~QHBoxLayout()
extern "C"
void C_ZN11QHBoxLayoutD1Ev(void *this_) {
  delete (QHBoxLayout*)(this_);
}
//  main block end
