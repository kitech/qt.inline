//  header block begin
// /usr/include/qt/QtWidgets/qboxlayout.h
#include <qboxlayout.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qboxlayout.h:127
// const QMetaObject * metaObject()
extern "C"
void C_ZNK11QVBoxLayout10metaObjectEv(void *this_) {
  /*return*/ ((QVBoxLayout*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qboxlayout.h:129
// void QVBoxLayout()
extern "C"
void* C_ZN11QVBoxLayoutC1Ev() {
  return new QVBoxLayout();
}
// /usr/include/qt/QtWidgets/qboxlayout.h:130
// void QVBoxLayout(class QWidget *)
extern "C"
void* C_ZN11QVBoxLayoutC1EP7QWidget(QWidget * parent) {
  return new QVBoxLayout(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qboxlayout.h:131
// void ~QVBoxLayout()
extern "C"
void C_ZN11QVBoxLayoutD1Ev(void *this_) {
  delete (QVBoxLayout*)(this_);
}
//  main block end
