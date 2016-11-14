// /usr/include/qt/QtWidgets/qtoolbutton.h
#include <qtoolbutton.h>
#include <QtWidgets>

// virtual
// /usr/include/qt/QtWidgets/qtoolbutton.h:56
// const QMetaObject * metaObject()
extern "C"
void C_ZNK11QToolButton10metaObjectEv(void *this_) {
  /*return*/ ((QToolButton*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qtoolbutton.h:73
// void QToolButton(class QWidget *)
extern "C"
void* C_ZN11QToolButtonC1EP7QWidget(QWidget * parent) {
  return new QToolButton(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qtoolbutton.h:74
// void ~QToolButton()
extern "C"
void C_ZN11QToolButtonD1Ev(void *this_) {
  delete (QToolButton*)(this_);
}
// virtual
// /usr/include/qt/QtWidgets/qtoolbutton.h:76
// QSize sizeHint()
extern "C"
void C_ZNK11QToolButton8sizeHintEv(void *this_) {
  /*return*/ ((QToolButton*)this_)->sizeHint();
}
// virtual
// /usr/include/qt/QtWidgets/qtoolbutton.h:77
// QSize minimumSizeHint()
extern "C"
void C_ZNK11QToolButton15minimumSizeHintEv(void *this_) {
  /*return*/ ((QToolButton*)this_)->minimumSizeHint();
}
// /usr/include/qt/QtWidgets/qtoolbutton.h:79
// Qt::ToolButtonStyle toolButtonStyle()
extern "C"
void C_ZNK11QToolButton15toolButtonStyleEv(void *this_) {
  /*return*/ ((QToolButton*)this_)->toolButtonStyle();
}
// /usr/include/qt/QtWidgets/qtoolbutton.h:81
// Qt::ArrowType arrowType()
extern "C"
void C_ZNK11QToolButton9arrowTypeEv(void *this_) {
  /*return*/ ((QToolButton*)this_)->arrowType();
}
// /usr/include/qt/QtWidgets/qtoolbutton.h:82
// void setArrowType(Qt::ArrowType)
extern "C"
void C_ZN11QToolButton12setArrowTypeEN2Qt9ArrowTypeE(void *this_, Qt::ArrowType type) {
  ((QToolButton*)this_)->setArrowType(type);
}
// /usr/include/qt/QtWidgets/qtoolbutton.h:85
// void setMenu(class QMenu *)
extern "C"
void C_ZN11QToolButton7setMenuEP5QMenu(void *this_, QMenu * menu) {
  ((QToolButton*)this_)->setMenu(menu);
}
// /usr/include/qt/QtWidgets/qtoolbutton.h:86
// QMenu * menu()
extern "C"
void C_ZNK11QToolButton4menuEv(void *this_) {
  /*return*/ ((QToolButton*)this_)->menu();
}
// /usr/include/qt/QtWidgets/qtoolbutton.h:88
// void setPopupMode(enum QToolButton::ToolButtonPopupMode)
extern "C"
void C_ZN11QToolButton12setPopupModeENS_19ToolButtonPopupModeE(void *this_, QToolButton::ToolButtonPopupMode mode) {
  ((QToolButton*)this_)->setPopupMode(mode);
}
// /usr/include/qt/QtWidgets/qtoolbutton.h:89
// QToolButton::ToolButtonPopupMode popupMode()
extern "C"
void C_ZNK11QToolButton9popupModeEv(void *this_) {
  /*return*/ ((QToolButton*)this_)->popupMode();
}
// /usr/include/qt/QtWidgets/qtoolbutton.h:92
// QAction * defaultAction()
extern "C"
void C_ZNK11QToolButton13defaultActionEv(void *this_) {
  /*return*/ ((QToolButton*)this_)->defaultAction();
}
// /usr/include/qt/QtWidgets/qtoolbutton.h:94
// void setAutoRaise(_Bool)
extern "C"
void C_ZN11QToolButton12setAutoRaiseEb(void *this_, bool enable) {
  ((QToolButton*)this_)->setAutoRaise(enable);
}
// /usr/include/qt/QtWidgets/qtoolbutton.h:95
// bool autoRaise()
extern "C"
void C_ZNK11QToolButton9autoRaiseEv(void *this_) {
  /*return*/ ((QToolButton*)this_)->autoRaise();
}
// /usr/include/qt/QtWidgets/qtoolbutton.h:99
// void showMenu()
extern "C"
void C_ZN11QToolButton8showMenuEv(void *this_) {
  ((QToolButton*)this_)->showMenu();
}
// /usr/include/qt/QtWidgets/qtoolbutton.h:101
// void setToolButtonStyle(Qt::ToolButtonStyle)
extern "C"
void C_ZN11QToolButton18setToolButtonStyleEN2Qt15ToolButtonStyleE(void *this_, Qt::ToolButtonStyle style) {
  ((QToolButton*)this_)->setToolButtonStyle(style);
}
// /usr/include/qt/QtWidgets/qtoolbutton.h:102
// void setDefaultAction(class QAction *)
extern "C"
void C_ZN11QToolButton16setDefaultActionEP7QAction(void *this_, QAction * a0) {
  ((QToolButton*)this_)->setDefaultAction(a0);
}
// /usr/include/qt/QtWidgets/qtoolbutton.h:105
// void triggered(class QAction *)
extern "C"
void C_ZN11QToolButton9triggeredEP7QAction(void *this_, QAction * a0) {
  ((QToolButton*)this_)->triggered(a0);
}