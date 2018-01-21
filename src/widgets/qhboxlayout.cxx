//  header block begin
// /usr/include/qt/QtWidgets/qboxlayout.h
#include <qboxlayout.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qboxlayout.h:114
// const QMetaObject * metaObject()
extern "C"
void C_ZNK11QHBoxLayout10metaObjectEv(void *this_) {
  /*return*/ ((QHBoxLayout*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qboxlayout.h:116
// void QHBoxLayout()
extern "C"
void* C_ZN11QHBoxLayoutC1Ev() {
  return new QHBoxLayout();
}
// /usr/include/qt/QtWidgets/qboxlayout.h:117
// void QHBoxLayout(class QWidget *)
extern "C"
void* C_ZN11QHBoxLayoutC1EP7QWidget(QWidget * parent) {
  return new QHBoxLayout(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qboxlayout.h:118
// void ~QHBoxLayout()
extern "C"
void C_ZN11QHBoxLayoutD1Ev(void *this_) {
  delete (QHBoxLayout*)(this_);
}
//  main block end
