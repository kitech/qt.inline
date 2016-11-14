// /usr/include/qt/QtWidgets/qcheckbox.h
#include <qcheckbox.h>
#include <QtWidgets>

// virtual
// /usr/include/qt/QtWidgets/qcheckbox.h:53
// const QMetaObject * metaObject()
extern "C"
void C_ZNK9QCheckBox10metaObjectEv(void *this_) {
  /*return*/ ((QCheckBox*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qcheckbox.h:58
// void QCheckBox(class QWidget *)
extern "C"
void* C_ZN9QCheckBoxC1EP7QWidget(QWidget * parent) {
  return new QCheckBox(parent);
}
// /usr/include/qt/QtWidgets/qcheckbox.h:59
// void QCheckBox(const class QString &, class QWidget *)
extern "C"
void* C_ZN9QCheckBoxC1ERK7QStringP7QWidget(const QString & text, QWidget * parent) {
  return new QCheckBox(text, parent);
}
// virtual
// /usr/include/qt/QtWidgets/qcheckbox.h:60
// void ~QCheckBox()
extern "C"
void C_ZN9QCheckBoxD1Ev(void *this_) {
  delete (QCheckBox*)(this_);
}
// virtual
// /usr/include/qt/QtWidgets/qcheckbox.h:62
// QSize sizeHint()
extern "C"
void C_ZNK9QCheckBox8sizeHintEv(void *this_) {
  /*return*/ ((QCheckBox*)this_)->sizeHint();
}
// virtual
// /usr/include/qt/QtWidgets/qcheckbox.h:63
// QSize minimumSizeHint()
extern "C"
void C_ZNK9QCheckBox15minimumSizeHintEv(void *this_) {
  /*return*/ ((QCheckBox*)this_)->minimumSizeHint();
}
// /usr/include/qt/QtWidgets/qcheckbox.h:65
// void setTristate(_Bool)
extern "C"
void C_ZN9QCheckBox11setTristateEb(void *this_, bool y) {
  ((QCheckBox*)this_)->setTristate(y);
}
// /usr/include/qt/QtWidgets/qcheckbox.h:66
// bool isTristate()
extern "C"
void C_ZNK9QCheckBox10isTristateEv(void *this_) {
  /*return*/ ((QCheckBox*)this_)->isTristate();
}
// /usr/include/qt/QtWidgets/qcheckbox.h:68
// Qt::CheckState checkState()
extern "C"
void C_ZNK9QCheckBox10checkStateEv(void *this_) {
  /*return*/ ((QCheckBox*)this_)->checkState();
}
// /usr/include/qt/QtWidgets/qcheckbox.h:69
// void setCheckState(Qt::CheckState)
extern "C"
void C_ZN9QCheckBox13setCheckStateEN2Qt10CheckStateE(void *this_, Qt::CheckState state) {
  ((QCheckBox*)this_)->setCheckState(state);
}
// /usr/include/qt/QtWidgets/qcheckbox.h:72
// void stateChanged(int)
extern "C"
void C_ZN9QCheckBox12stateChangedEi(void *this_, int a0) {
  ((QCheckBox*)this_)->stateChanged(a0);
}