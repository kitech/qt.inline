//  header block begin
// /usr/include/qt/QtWidgets/qboxlayout.h
#include <qboxlayout.h>
#include <QtWidgets>

// QVBoxLayout is pure virtual: false
//  header block end

//  main block begin

class MyQVBoxLayout : public QVBoxLayout {
public:
MyQVBoxLayout() : QVBoxLayout() {}
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
void* C_ZN11QVBoxLayoutC1Ev() {
  (MyQVBoxLayout*)(0);
  return  new MyQVBoxLayout();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:131
// [-2] void QVBoxLayout(class QWidget *)
extern "C"
void* C_ZN11QVBoxLayoutC1EP7QWidget(QWidget * parent) {
  (MyQVBoxLayout*)(0);
  return  new MyQVBoxLayout(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:132
// [-2] void ~QVBoxLayout()
extern "C"
void C_ZN11QVBoxLayoutD1Ev(void *this_) {
  delete (QVBoxLayout*)(this_);
}
//  main block end
