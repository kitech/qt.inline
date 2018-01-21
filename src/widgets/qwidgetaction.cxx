//  header block begin
// /usr/include/qt/QtWidgets/qwidgetaction.h
#include <qwidgetaction.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qwidgetaction.h:54
// const QMetaObject * metaObject()
extern "C"
void C_ZNK13QWidgetAction10metaObjectEv(void *this_) {
  /*return*/ ((QWidgetAction*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qwidgetaction.h:58
// void QWidgetAction(class QObject *)
extern "C"
void* C_ZN13QWidgetActionC1EP7QObject(QObject * parent) {
  return new QWidgetAction(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qwidgetaction.h:59
// void ~QWidgetAction()
extern "C"
void C_ZN13QWidgetActionD1Ev(void *this_) {
  delete (QWidgetAction*)(this_);
}
// /usr/include/qt/QtWidgets/qwidgetaction.h:61
// void setDefaultWidget(class QWidget *)
extern "C"
void C_ZN13QWidgetAction16setDefaultWidgetEP7QWidget(void *this_, QWidget * w) {
  ((QWidgetAction*)this_)->setDefaultWidget(w);
}
// /usr/include/qt/QtWidgets/qwidgetaction.h:62
// QWidget * defaultWidget()
extern "C"
void C_ZNK13QWidgetAction13defaultWidgetEv(void *this_) {
  /*return*/ ((QWidgetAction*)this_)->defaultWidget();
}
// /usr/include/qt/QtWidgets/qwidgetaction.h:64
// QWidget * requestWidget(class QWidget *)
extern "C"
void C_ZN13QWidgetAction13requestWidgetEP7QWidget(void *this_, QWidget * parent) {
  /*return*/ ((QWidgetAction*)this_)->requestWidget(parent);
}
// /usr/include/qt/QtWidgets/qwidgetaction.h:65
// void releaseWidget(class QWidget *)
extern "C"
void C_ZN13QWidgetAction13releaseWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QWidgetAction*)this_)->releaseWidget(widget);
}
//  main block end
