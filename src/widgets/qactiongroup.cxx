//  header block begin
// /usr/include/qt/QtWidgets/qactiongroup.h
#include <qactiongroup.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qactiongroup.h:54
// const QMetaObject * metaObject()
extern "C"
void C_ZNK12QActionGroup10metaObjectEv(void *this_) {
  /*return*/ ((QActionGroup*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qactiongroup.h:62
// void QActionGroup(class QObject *)
extern "C"
void* C_ZN12QActionGroupC1EP7QObject(QObject * parent) {
  return new QActionGroup(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qactiongroup.h:63
// void ~QActionGroup()
extern "C"
void C_ZN12QActionGroupD1Ev(void *this_) {
  delete (QActionGroup*)(this_);
}
// /usr/include/qt/QtWidgets/qactiongroup.h:65
// QAction * addAction(class QAction *)
extern "C"
void C_ZN12QActionGroup9addActionEP7QAction(void *this_, QAction * a) {
  /*return*/ ((QActionGroup*)this_)->addAction(a);
}
// /usr/include/qt/QtWidgets/qactiongroup.h:66
// QAction * addAction(const class QString &)
extern "C"
void C_ZN12QActionGroup9addActionERK7QString(void *this_, const QString & text) {
  /*return*/ ((QActionGroup*)this_)->addAction(text);
}
// /usr/include/qt/QtWidgets/qactiongroup.h:67
// QAction * addAction(const class QIcon &, const class QString &)
extern "C"
void C_ZN12QActionGroup9addActionERK5QIconRK7QString(void *this_, const QIcon & icon, const QString & text) {
  /*return*/ ((QActionGroup*)this_)->addAction(icon, text);
}
// /usr/include/qt/QtWidgets/qactiongroup.h:68
// void removeAction(class QAction *)
extern "C"
void C_ZN12QActionGroup12removeActionEP7QAction(void *this_, QAction * a) {
  ((QActionGroup*)this_)->removeAction(a);
}
// /usr/include/qt/QtWidgets/qactiongroup.h:69
// QList<QAction *> actions()
extern "C"
void C_ZNK12QActionGroup7actionsEv(void *this_) {
  /*return*/ ((QActionGroup*)this_)->actions();
}
// /usr/include/qt/QtWidgets/qactiongroup.h:71
// QAction * checkedAction()
extern "C"
void C_ZNK12QActionGroup13checkedActionEv(void *this_) {
  /*return*/ ((QActionGroup*)this_)->checkedAction();
}
// /usr/include/qt/QtWidgets/qactiongroup.h:72
// bool isExclusive()
extern "C"
void C_ZNK12QActionGroup11isExclusiveEv(void *this_) {
  /*return*/ ((QActionGroup*)this_)->isExclusive();
}
// /usr/include/qt/QtWidgets/qactiongroup.h:73
// bool isEnabled()
extern "C"
void C_ZNK12QActionGroup9isEnabledEv(void *this_) {
  /*return*/ ((QActionGroup*)this_)->isEnabled();
}
// /usr/include/qt/QtWidgets/qactiongroup.h:74
// bool isVisible()
extern "C"
void C_ZNK12QActionGroup9isVisibleEv(void *this_) {
  /*return*/ ((QActionGroup*)this_)->isVisible();
}
// /usr/include/qt/QtWidgets/qactiongroup.h:78
// void setEnabled(_Bool)
extern "C"
void C_ZN12QActionGroup10setEnabledEb(void *this_, bool arg0) {
  ((QActionGroup*)this_)->setEnabled(arg0);
}
// inline
// /usr/include/qt/QtWidgets/qactiongroup.h:79
// void setDisabled(_Bool)
extern "C"
void C_ZN12QActionGroup11setDisabledEb(void *this_, bool b) {
  ((QActionGroup*)this_)->setDisabled(b);
}
// /usr/include/qt/QtWidgets/qactiongroup.h:80
// void setVisible(_Bool)
extern "C"
void C_ZN12QActionGroup10setVisibleEb(void *this_, bool arg0) {
  ((QActionGroup*)this_)->setVisible(arg0);
}
// /usr/include/qt/QtWidgets/qactiongroup.h:81
// void setExclusive(_Bool)
extern "C"
void C_ZN12QActionGroup12setExclusiveEb(void *this_, bool arg0) {
  ((QActionGroup*)this_)->setExclusive(arg0);
}
// /usr/include/qt/QtWidgets/qactiongroup.h:84
// void triggered(class QAction *)
extern "C"
void C_ZN12QActionGroup9triggeredEP7QAction(void *this_, QAction * arg0) {
  ((QActionGroup*)this_)->triggered(arg0);
}
// /usr/include/qt/QtWidgets/qactiongroup.h:85
// void hovered(class QAction *)
extern "C"
void C_ZN12QActionGroup7hoveredEP7QAction(void *this_, QAction * arg0) {
  ((QActionGroup*)this_)->hovered(arg0);
}
//  main block end
