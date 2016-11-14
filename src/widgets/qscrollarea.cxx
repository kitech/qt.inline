// /usr/include/qt/QtWidgets/qscrollarea.h
#include <qscrollarea.h>
#include <QtWidgets>

// virtual
// /usr/include/qt/QtWidgets/qscrollarea.h:54
// const QMetaObject * metaObject()
extern "C"
void C_ZNK11QScrollArea10metaObjectEv(void *this_) {
  /*return*/ ((QScrollArea*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qscrollarea.h:59
// void QScrollArea(class QWidget *)
extern "C"
void* C_ZN11QScrollAreaC1EP7QWidget(QWidget * parent) {
  return new QScrollArea(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qscrollarea.h:60
// void ~QScrollArea()
extern "C"
void C_ZN11QScrollAreaD1Ev(void *this_) {
  delete (QScrollArea*)(this_);
}
// /usr/include/qt/QtWidgets/qscrollarea.h:62
// QWidget * widget()
extern "C"
void C_ZNK11QScrollArea6widgetEv(void *this_) {
  /*return*/ ((QScrollArea*)this_)->widget();
}
// /usr/include/qt/QtWidgets/qscrollarea.h:63
// void setWidget(class QWidget *)
extern "C"
void C_ZN11QScrollArea9setWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QScrollArea*)this_)->setWidget(widget);
}
// /usr/include/qt/QtWidgets/qscrollarea.h:64
// QWidget * takeWidget()
extern "C"
void C_ZN11QScrollArea10takeWidgetEv(void *this_) {
  /*return*/ ((QScrollArea*)this_)->takeWidget();
}
// /usr/include/qt/QtWidgets/qscrollarea.h:66
// bool widgetResizable()
extern "C"
void C_ZNK11QScrollArea15widgetResizableEv(void *this_) {
  /*return*/ ((QScrollArea*)this_)->widgetResizable();
}
// /usr/include/qt/QtWidgets/qscrollarea.h:67
// void setWidgetResizable(_Bool)
extern "C"
void C_ZN11QScrollArea18setWidgetResizableEb(void *this_, bool resizable) {
  ((QScrollArea*)this_)->setWidgetResizable(resizable);
}
// virtual
// /usr/include/qt/QtWidgets/qscrollarea.h:69
// QSize sizeHint()
extern "C"
void C_ZNK11QScrollArea8sizeHintEv(void *this_) {
  /*return*/ ((QScrollArea*)this_)->sizeHint();
}
// virtual
// /usr/include/qt/QtWidgets/qscrollarea.h:71
// bool focusNextPrevChild(_Bool)
extern "C"
void C_ZN11QScrollArea18focusNextPrevChildEb(void *this_, bool next) {
  /*return*/ ((QScrollArea*)this_)->focusNextPrevChild(next);
}
// /usr/include/qt/QtWidgets/qscrollarea.h:73
// Qt::Alignment alignment()
extern "C"
void C_ZNK11QScrollArea9alignmentEv(void *this_) {
  /*return*/ ((QScrollArea*)this_)->alignment();
}
// /usr/include/qt/QtWidgets/qscrollarea.h:74
// void setAlignment(Qt::Alignment)
extern "C"
void C_ZN11QScrollArea12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *this_, Qt::Alignment a0) {
  ((QScrollArea*)this_)->setAlignment(a0);
}
// /usr/include/qt/QtWidgets/qscrollarea.h:76
// void ensureVisible(int, int, int, int)
extern "C"
void C_ZN11QScrollArea13ensureVisibleEiiii(void *this_, int x, int y, int xmargin, int ymargin) {
  ((QScrollArea*)this_)->ensureVisible(x, y, xmargin, ymargin);
}
// /usr/include/qt/QtWidgets/qscrollarea.h:77
// void ensureWidgetVisible(class QWidget *, int, int)
extern "C"
void C_ZN11QScrollArea19ensureWidgetVisibleEP7QWidgetii(void *this_, QWidget * childWidget, int xmargin, int ymargin) {
  ((QScrollArea*)this_)->ensureWidgetVisible(childWidget, xmargin, ymargin);
}