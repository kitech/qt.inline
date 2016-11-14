// /usr/include/qt/QtWidgets/qscrollbar.h
#include <qscrollbar.h>
#include <QtWidgets>

// virtual
// /usr/include/qt/QtWidgets/qscrollbar.h:56
// const QMetaObject * metaObject()
extern "C"
void C_ZNK10QScrollBar10metaObjectEv(void *this_) {
  /*return*/ ((QScrollBar*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qscrollbar.h:58
// void QScrollBar(class QWidget *)
extern "C"
void* C_ZN10QScrollBarC1EP7QWidget(QWidget * parent) {
  return new QScrollBar(parent);
}
// /usr/include/qt/QtWidgets/qscrollbar.h:59
// void QScrollBar(Qt::Orientation, class QWidget *)
extern "C"
void* C_ZN10QScrollBarC1EN2Qt11OrientationEP7QWidget(Qt::Orientation a0, QWidget * parent) {
  return new QScrollBar(a0, parent);
}
// virtual
// /usr/include/qt/QtWidgets/qscrollbar.h:60
// void ~QScrollBar()
extern "C"
void C_ZN10QScrollBarD1Ev(void *this_) {
  delete (QScrollBar*)(this_);
}
// virtual
// /usr/include/qt/QtWidgets/qscrollbar.h:62
// QSize sizeHint()
extern "C"
void C_ZNK10QScrollBar8sizeHintEv(void *this_) {
  /*return*/ ((QScrollBar*)this_)->sizeHint();
}
// virtual
// /usr/include/qt/QtWidgets/qscrollbar.h:63
// bool event(class QEvent *)
extern "C"
void C_ZN10QScrollBar5eventEP6QEvent(void *this_, QEvent * event) {
  /*return*/ ((QScrollBar*)this_)->event(event);
}