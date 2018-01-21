//  header block begin
// /usr/include/qt/QtWidgets/qstatusbar.h
#include <qstatusbar.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qstatusbar.h:54
// const QMetaObject * metaObject()
extern "C"
void C_ZNK10QStatusBar10metaObjectEv(void *this_) {
  /*return*/ ((QStatusBar*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qstatusbar.h:59
// void QStatusBar(class QWidget *)
extern "C"
void* C_ZN10QStatusBarC1EP7QWidget(QWidget * parent) {
  return new QStatusBar(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qstatusbar.h:60
// void ~QStatusBar()
extern "C"
void C_ZN10QStatusBarD1Ev(void *this_) {
  delete (QStatusBar*)(this_);
}
// /usr/include/qt/QtWidgets/qstatusbar.h:62
// void addWidget(class QWidget *, int)
extern "C"
void C_ZN10QStatusBar9addWidgetEP7QWidgeti(void *this_, QWidget * widget, int stretch) {
  ((QStatusBar*)this_)->addWidget(widget, stretch);
}
// /usr/include/qt/QtWidgets/qstatusbar.h:63
// int insertWidget(int, class QWidget *, int)
extern "C"
void C_ZN10QStatusBar12insertWidgetEiP7QWidgeti(void *this_, int index, QWidget * widget, int stretch) {
  /*return*/ ((QStatusBar*)this_)->insertWidget(index, widget, stretch);
}
// /usr/include/qt/QtWidgets/qstatusbar.h:64
// void addPermanentWidget(class QWidget *, int)
extern "C"
void C_ZN10QStatusBar18addPermanentWidgetEP7QWidgeti(void *this_, QWidget * widget, int stretch) {
  ((QStatusBar*)this_)->addPermanentWidget(widget, stretch);
}
// /usr/include/qt/QtWidgets/qstatusbar.h:65
// int insertPermanentWidget(int, class QWidget *, int)
extern "C"
void C_ZN10QStatusBar21insertPermanentWidgetEiP7QWidgeti(void *this_, int index, QWidget * widget, int stretch) {
  /*return*/ ((QStatusBar*)this_)->insertPermanentWidget(index, widget, stretch);
}
// /usr/include/qt/QtWidgets/qstatusbar.h:66
// void removeWidget(class QWidget *)
extern "C"
void C_ZN10QStatusBar12removeWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QStatusBar*)this_)->removeWidget(widget);
}
// /usr/include/qt/QtWidgets/qstatusbar.h:68
// void setSizeGripEnabled(_Bool)
extern "C"
void C_ZN10QStatusBar18setSizeGripEnabledEb(void *this_, bool arg0) {
  ((QStatusBar*)this_)->setSizeGripEnabled(arg0);
}
// /usr/include/qt/QtWidgets/qstatusbar.h:69
// bool isSizeGripEnabled()
extern "C"
void C_ZNK10QStatusBar17isSizeGripEnabledEv(void *this_) {
  /*return*/ ((QStatusBar*)this_)->isSizeGripEnabled();
}
// /usr/include/qt/QtWidgets/qstatusbar.h:71
// QString currentMessage()
extern "C"
void C_ZNK10QStatusBar14currentMessageEv(void *this_) {
  /*return*/ ((QStatusBar*)this_)->currentMessage();
}
// /usr/include/qt/QtWidgets/qstatusbar.h:74
// void showMessage(const class QString &, int)
extern "C"
void C_ZN10QStatusBar11showMessageERK7QStringi(void *this_, const QString & text, int timeout) {
  ((QStatusBar*)this_)->showMessage(text, timeout);
}
// /usr/include/qt/QtWidgets/qstatusbar.h:75
// void clearMessage()
extern "C"
void C_ZN10QStatusBar12clearMessageEv(void *this_) {
  ((QStatusBar*)this_)->clearMessage();
}
// /usr/include/qt/QtWidgets/qstatusbar.h:79
// void messageChanged(const class QString &)
extern "C"
void C_ZN10QStatusBar14messageChangedERK7QString(void *this_, const QString & text) {
  ((QStatusBar*)this_)->messageChanged(text);
}
//  main block end
