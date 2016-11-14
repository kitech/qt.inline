// /usr/include/qt/QtWidgets/qdial.h
#include <qdial.h>
#include <QtWidgets>

// virtual
// /usr/include/qt/QtWidgets/qdial.h:56
// const QMetaObject * metaObject()
extern "C"
void C_ZNK5QDial10metaObjectEv(void *this_) {
  /*return*/ ((QDial*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qdial.h:63
// void QDial(class QWidget *)
extern "C"
void* C_ZN5QDialC1EP7QWidget(QWidget * parent) {
  return new QDial(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qdial.h:65
// void ~QDial()
extern "C"
void C_ZN5QDialD1Ev(void *this_) {
  delete (QDial*)(this_);
}
// /usr/include/qt/QtWidgets/qdial.h:67
// bool wrapping()
extern "C"
void C_ZNK5QDial8wrappingEv(void *this_) {
  /*return*/ ((QDial*)this_)->wrapping();
}
// /usr/include/qt/QtWidgets/qdial.h:69
// int notchSize()
extern "C"
void C_ZNK5QDial9notchSizeEv(void *this_) {
  /*return*/ ((QDial*)this_)->notchSize();
}
// /usr/include/qt/QtWidgets/qdial.h:71
// void setNotchTarget(double)
extern "C"
void C_ZN5QDial14setNotchTargetEd(void *this_, double target) {
  ((QDial*)this_)->setNotchTarget(target);
}
// /usr/include/qt/QtWidgets/qdial.h:72
// qreal notchTarget()
extern "C"
void C_ZNK5QDial11notchTargetEv(void *this_) {
  /*return*/ ((QDial*)this_)->notchTarget();
}
// /usr/include/qt/QtWidgets/qdial.h:73
// bool notchesVisible()
extern "C"
void C_ZNK5QDial14notchesVisibleEv(void *this_) {
  /*return*/ ((QDial*)this_)->notchesVisible();
}
// virtual
// /usr/include/qt/QtWidgets/qdial.h:75
// QSize sizeHint()
extern "C"
void C_ZNK5QDial8sizeHintEv(void *this_) {
  /*return*/ ((QDial*)this_)->sizeHint();
}
// virtual
// /usr/include/qt/QtWidgets/qdial.h:76
// QSize minimumSizeHint()
extern "C"
void C_ZNK5QDial15minimumSizeHintEv(void *this_) {
  /*return*/ ((QDial*)this_)->minimumSizeHint();
}
// /usr/include/qt/QtWidgets/qdial.h:79
// void setNotchesVisible(_Bool)
extern "C"
void C_ZN5QDial17setNotchesVisibleEb(void *this_, bool visible) {
  ((QDial*)this_)->setNotchesVisible(visible);
}
// /usr/include/qt/QtWidgets/qdial.h:80
// void setWrapping(_Bool)
extern "C"
void C_ZN5QDial11setWrappingEb(void *this_, bool on) {
  ((QDial*)this_)->setWrapping(on);
}