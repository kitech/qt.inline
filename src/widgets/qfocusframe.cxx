// /usr/include/qt/QtWidgets/qfocusframe.h
#include <qfocusframe.h>
#include <QtWidgets>

// virtual
// /usr/include/qt/QtWidgets/qfocusframe.h:53
// const QMetaObject * metaObject()
extern "C"
void C_ZNK11QFocusFrame10metaObjectEv(void *this_) {
  /*return*/ ((QFocusFrame*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qfocusframe.h:55
// void QFocusFrame(class QWidget *)
extern "C"
void* C_ZN11QFocusFrameC1EP7QWidget(QWidget * parent) {
  return new QFocusFrame(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qfocusframe.h:56
// void ~QFocusFrame()
extern "C"
void C_ZN11QFocusFrameD1Ev(void *this_) {
  delete (QFocusFrame*)(this_);
}
// /usr/include/qt/QtWidgets/qfocusframe.h:58
// void setWidget(class QWidget *)
extern "C"
void C_ZN11QFocusFrame9setWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QFocusFrame*)this_)->setWidget(widget);
}
// /usr/include/qt/QtWidgets/qfocusframe.h:59
// QWidget * widget()
extern "C"
void C_ZNK11QFocusFrame6widgetEv(void *this_) {
  /*return*/ ((QFocusFrame*)this_)->widget();
}