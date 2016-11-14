// /usr/include/qt/QtWidgets/qpushbutton.h
#include <qpushbutton.h>
#include <QtWidgets>

// virtual
// /usr/include/qt/QtWidgets/qpushbutton.h:54
// const QMetaObject * metaObject()
extern "C"
void C_ZNK11QPushButton10metaObjectEv(void *this_) {
  /*return*/ ((QPushButton*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qpushbutton.h:61
// void QPushButton(class QWidget *)
extern "C"
void* C_ZN11QPushButtonC1EP7QWidget(QWidget * parent) {
  return new QPushButton(parent);
}
// /usr/include/qt/QtWidgets/qpushbutton.h:62
// void QPushButton(const class QString &, class QWidget *)
extern "C"
void* C_ZN11QPushButtonC1ERK7QStringP7QWidget(const QString & text, QWidget * parent) {
  return new QPushButton(text, parent);
}
// /usr/include/qt/QtWidgets/qpushbutton.h:63
// void QPushButton(const class QIcon &, const class QString &, class QWidget *)
extern "C"
void* C_ZN11QPushButtonC1ERK5QIconRK7QStringP7QWidget(const QIcon & icon, const QString & text, QWidget * parent) {
  return new QPushButton(icon, text, parent);
}
// virtual
// /usr/include/qt/QtWidgets/qpushbutton.h:64
// void ~QPushButton()
extern "C"
void C_ZN11QPushButtonD1Ev(void *this_) {
  delete (QPushButton*)(this_);
}
// virtual
// /usr/include/qt/QtWidgets/qpushbutton.h:66
// QSize sizeHint()
extern "C"
void C_ZNK11QPushButton8sizeHintEv(void *this_) {
  /*return*/ ((QPushButton*)this_)->sizeHint();
}
// virtual
// /usr/include/qt/QtWidgets/qpushbutton.h:67
// QSize minimumSizeHint()
extern "C"
void C_ZNK11QPushButton15minimumSizeHintEv(void *this_) {
  /*return*/ ((QPushButton*)this_)->minimumSizeHint();
}
// /usr/include/qt/QtWidgets/qpushbutton.h:69
// bool autoDefault()
extern "C"
void C_ZNK11QPushButton11autoDefaultEv(void *this_) {
  /*return*/ ((QPushButton*)this_)->autoDefault();
}
// /usr/include/qt/QtWidgets/qpushbutton.h:70
// void setAutoDefault(_Bool)
extern "C"
void C_ZN11QPushButton14setAutoDefaultEb(void *this_, bool a0) {
  ((QPushButton*)this_)->setAutoDefault(a0);
}
// /usr/include/qt/QtWidgets/qpushbutton.h:71
// bool isDefault()
extern "C"
void C_ZNK11QPushButton9isDefaultEv(void *this_) {
  /*return*/ ((QPushButton*)this_)->isDefault();
}
// /usr/include/qt/QtWidgets/qpushbutton.h:72
// void setDefault(_Bool)
extern "C"
void C_ZN11QPushButton10setDefaultEb(void *this_, bool a0) {
  ((QPushButton*)this_)->setDefault(a0);
}
// /usr/include/qt/QtWidgets/qpushbutton.h:75
// void setMenu(class QMenu *)
extern "C"
void C_ZN11QPushButton7setMenuEP5QMenu(void *this_, QMenu * menu) {
  ((QPushButton*)this_)->setMenu(menu);
}
// /usr/include/qt/QtWidgets/qpushbutton.h:76
// QMenu * menu()
extern "C"
void C_ZNK11QPushButton4menuEv(void *this_) {
  /*return*/ ((QPushButton*)this_)->menu();
}
// /usr/include/qt/QtWidgets/qpushbutton.h:79
// void setFlat(_Bool)
extern "C"
void C_ZN11QPushButton7setFlatEb(void *this_, bool a0) {
  ((QPushButton*)this_)->setFlat(a0);
}
// /usr/include/qt/QtWidgets/qpushbutton.h:80
// bool isFlat()
extern "C"
void C_ZNK11QPushButton6isFlatEv(void *this_) {
  /*return*/ ((QPushButton*)this_)->isFlat();
}
// /usr/include/qt/QtWidgets/qpushbutton.h:84
// void showMenu()
extern "C"
void C_ZN11QPushButton8showMenuEv(void *this_) {
  ((QPushButton*)this_)->showMenu();
}