//  header block begin
// /usr/include/qt/QtWidgets/qstackedwidget.h
#include <qstackedwidget.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qstackedwidget.h:54
// const QMetaObject * metaObject()
extern "C"
void C_ZNK14QStackedWidget10metaObjectEv(void *this_) {
  /*return*/ ((QStackedWidget*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qstackedwidget.h:59
// void QStackedWidget(class QWidget *)
extern "C"
void* C_ZN14QStackedWidgetC1EP7QWidget(QWidget * parent) {
  return new QStackedWidget(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qstackedwidget.h:60
// void ~QStackedWidget()
extern "C"
void C_ZN14QStackedWidgetD1Ev(void *this_) {
  delete (QStackedWidget*)(this_);
}
// /usr/include/qt/QtWidgets/qstackedwidget.h:62
// int addWidget(class QWidget *)
extern "C"
void C_ZN14QStackedWidget9addWidgetEP7QWidget(void *this_, QWidget * w) {
  /*return*/ ((QStackedWidget*)this_)->addWidget(w);
}
// /usr/include/qt/QtWidgets/qstackedwidget.h:63
// int insertWidget(int, class QWidget *)
extern "C"
void C_ZN14QStackedWidget12insertWidgetEiP7QWidget(void *this_, int index, QWidget * w) {
  /*return*/ ((QStackedWidget*)this_)->insertWidget(index, w);
}
// /usr/include/qt/QtWidgets/qstackedwidget.h:64
// void removeWidget(class QWidget *)
extern "C"
void C_ZN14QStackedWidget12removeWidgetEP7QWidget(void *this_, QWidget * w) {
  ((QStackedWidget*)this_)->removeWidget(w);
}
// /usr/include/qt/QtWidgets/qstackedwidget.h:66
// QWidget * currentWidget()
extern "C"
void C_ZNK14QStackedWidget13currentWidgetEv(void *this_) {
  /*return*/ ((QStackedWidget*)this_)->currentWidget();
}
// /usr/include/qt/QtWidgets/qstackedwidget.h:67
// int currentIndex()
extern "C"
void C_ZNK14QStackedWidget12currentIndexEv(void *this_) {
  /*return*/ ((QStackedWidget*)this_)->currentIndex();
}
// /usr/include/qt/QtWidgets/qstackedwidget.h:69
// int indexOf(class QWidget *)
extern "C"
void C_ZNK14QStackedWidget7indexOfEP7QWidget(void *this_, QWidget * arg0) {
  /*return*/ ((QStackedWidget*)this_)->indexOf(arg0);
}
// /usr/include/qt/QtWidgets/qstackedwidget.h:70
// QWidget * widget(int)
extern "C"
void C_ZNK14QStackedWidget6widgetEi(void *this_, int arg0) {
  /*return*/ ((QStackedWidget*)this_)->widget(arg0);
}
// /usr/include/qt/QtWidgets/qstackedwidget.h:71
// int count()
extern "C"
void C_ZNK14QStackedWidget5countEv(void *this_) {
  /*return*/ ((QStackedWidget*)this_)->count();
}
// /usr/include/qt/QtWidgets/qstackedwidget.h:74
// void setCurrentIndex(int)
extern "C"
void C_ZN14QStackedWidget15setCurrentIndexEi(void *this_, int index) {
  ((QStackedWidget*)this_)->setCurrentIndex(index);
}
// /usr/include/qt/QtWidgets/qstackedwidget.h:75
// void setCurrentWidget(class QWidget *)
extern "C"
void C_ZN14QStackedWidget16setCurrentWidgetEP7QWidget(void *this_, QWidget * w) {
  ((QStackedWidget*)this_)->setCurrentWidget(w);
}
// /usr/include/qt/QtWidgets/qstackedwidget.h:78
// void currentChanged(int)
extern "C"
void C_ZN14QStackedWidget14currentChangedEi(void *this_, int arg0) {
  ((QStackedWidget*)this_)->currentChanged(arg0);
}
// /usr/include/qt/QtWidgets/qstackedwidget.h:79
// void widgetRemoved(int)
extern "C"
void C_ZN14QStackedWidget13widgetRemovedEi(void *this_, int index) {
  ((QStackedWidget*)this_)->widgetRemoved(index);
}
//  main block end
