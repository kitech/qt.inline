// /usr/include/qt/QtWidgets/qsizegrip.h
#include <qsizegrip.h>
#include <QtWidgets>

// virtual
// /usr/include/qt/QtWidgets/qsizegrip.h:52
// const QMetaObject * metaObject()
extern "C"
void C_ZNK9QSizeGrip10metaObjectEv(void *this_) {
  /*return*/ ((QSizeGrip*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qsizegrip.h:54
// void QSizeGrip(class QWidget *)
extern "C"
void* C_ZN9QSizeGripC1EP7QWidget(QWidget * parent) {
  return new QSizeGrip(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qsizegrip.h:55
// void ~QSizeGrip()
extern "C"
void C_ZN9QSizeGripD1Ev(void *this_) {
  delete (QSizeGrip*)(this_);
}
// virtual
// /usr/include/qt/QtWidgets/qsizegrip.h:57
// QSize sizeHint()
extern "C"
void C_ZNK9QSizeGrip8sizeHintEv(void *this_) {
  /*return*/ ((QSizeGrip*)this_)->sizeHint();
}
// virtual
// /usr/include/qt/QtWidgets/qsizegrip.h:58
// void setVisible(_Bool)
extern "C"
void C_ZN9QSizeGrip10setVisibleEb(void *this_, bool a0) {
  ((QSizeGrip*)this_)->setVisible(a0);
}