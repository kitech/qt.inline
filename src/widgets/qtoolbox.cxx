//  header block begin
// /usr/include/qt/QtWidgets/qtoolbox.h
#include <qtoolbox.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qtoolbox.h:55
// const QMetaObject * metaObject()
extern "C"
void C_ZNK8QToolBox10metaObjectEv(void *this_) {
  /*return*/ ((QToolBox*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qtoolbox.h:60
// void QToolBox(class QWidget *, Qt::WindowFlags)
extern "C"
void* C_ZN8QToolBoxC1EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, QFlags<Qt::WindowType> f) {
  return new QToolBox(parent, f);
}
// virtual
// /usr/include/qt/QtWidgets/qtoolbox.h:61
// void ~QToolBox()
extern "C"
void C_ZN8QToolBoxD1Ev(void *this_) {
  delete (QToolBox*)(this_);
}
// /usr/include/qt/QtWidgets/qtoolbox.h:63
// int addItem(class QWidget *, const class QString &)
extern "C"
void C_ZN8QToolBox7addItemEP7QWidgetRK7QString(void *this_, QWidget * widget, const QString & text) {
  /*return*/ ((QToolBox*)this_)->addItem(widget, text);
}
// /usr/include/qt/QtWidgets/qtoolbox.h:64
// int addItem(class QWidget *, const class QIcon &, const class QString &)
extern "C"
void C_ZN8QToolBox7addItemEP7QWidgetRK5QIconRK7QString(void *this_, QWidget * widget, const QIcon & icon, const QString & text) {
  /*return*/ ((QToolBox*)this_)->addItem(widget, icon, text);
}
// /usr/include/qt/QtWidgets/qtoolbox.h:65
// int insertItem(int, class QWidget *, const class QString &)
extern "C"
void C_ZN8QToolBox10insertItemEiP7QWidgetRK7QString(void *this_, int index, QWidget * widget, const QString & text) {
  /*return*/ ((QToolBox*)this_)->insertItem(index, widget, text);
}
// /usr/include/qt/QtWidgets/qtoolbox.h:66
// int insertItem(int, class QWidget *, const class QIcon &, const class QString &)
extern "C"
void C_ZN8QToolBox10insertItemEiP7QWidgetRK5QIconRK7QString(void *this_, int index, QWidget * widget, const QIcon & icon, const QString & text) {
  /*return*/ ((QToolBox*)this_)->insertItem(index, widget, icon, text);
}
// /usr/include/qt/QtWidgets/qtoolbox.h:68
// void removeItem(int)
extern "C"
void C_ZN8QToolBox10removeItemEi(void *this_, int index) {
  ((QToolBox*)this_)->removeItem(index);
}
// /usr/include/qt/QtWidgets/qtoolbox.h:70
// void setItemEnabled(int, _Bool)
extern "C"
void C_ZN8QToolBox14setItemEnabledEib(void *this_, int index, bool enabled) {
  ((QToolBox*)this_)->setItemEnabled(index, enabled);
}
// /usr/include/qt/QtWidgets/qtoolbox.h:71
// bool isItemEnabled(int)
extern "C"
void C_ZNK8QToolBox13isItemEnabledEi(void *this_, int index) {
  /*return*/ ((QToolBox*)this_)->isItemEnabled(index);
}
// /usr/include/qt/QtWidgets/qtoolbox.h:73
// void setItemText(int, const class QString &)
extern "C"
void C_ZN8QToolBox11setItemTextEiRK7QString(void *this_, int index, const QString & text) {
  ((QToolBox*)this_)->setItemText(index, text);
}
// /usr/include/qt/QtWidgets/qtoolbox.h:74
// QString itemText(int)
extern "C"
void C_ZNK8QToolBox8itemTextEi(void *this_, int index) {
  /*return*/ ((QToolBox*)this_)->itemText(index);
}
// /usr/include/qt/QtWidgets/qtoolbox.h:76
// void setItemIcon(int, const class QIcon &)
extern "C"
void C_ZN8QToolBox11setItemIconEiRK5QIcon(void *this_, int index, const QIcon & icon) {
  ((QToolBox*)this_)->setItemIcon(index, icon);
}
// /usr/include/qt/QtWidgets/qtoolbox.h:77
// QIcon itemIcon(int)
extern "C"
void C_ZNK8QToolBox8itemIconEi(void *this_, int index) {
  /*return*/ ((QToolBox*)this_)->itemIcon(index);
}
// /usr/include/qt/QtWidgets/qtoolbox.h:80
// void setItemToolTip(int, const class QString &)
extern "C"
void C_ZN8QToolBox14setItemToolTipEiRK7QString(void *this_, int index, const QString & toolTip) {
  ((QToolBox*)this_)->setItemToolTip(index, toolTip);
}
// /usr/include/qt/QtWidgets/qtoolbox.h:81
// QString itemToolTip(int)
extern "C"
void C_ZNK8QToolBox11itemToolTipEi(void *this_, int index) {
  /*return*/ ((QToolBox*)this_)->itemToolTip(index);
}
// /usr/include/qt/QtWidgets/qtoolbox.h:84
// int currentIndex()
extern "C"
void C_ZNK8QToolBox12currentIndexEv(void *this_) {
  /*return*/ ((QToolBox*)this_)->currentIndex();
}
// /usr/include/qt/QtWidgets/qtoolbox.h:85
// QWidget * currentWidget()
extern "C"
void C_ZNK8QToolBox13currentWidgetEv(void *this_) {
  /*return*/ ((QToolBox*)this_)->currentWidget();
}
// /usr/include/qt/QtWidgets/qtoolbox.h:86
// QWidget * widget(int)
extern "C"
void C_ZNK8QToolBox6widgetEi(void *this_, int index) {
  /*return*/ ((QToolBox*)this_)->widget(index);
}
// /usr/include/qt/QtWidgets/qtoolbox.h:87
// int indexOf(class QWidget *)
extern "C"
void C_ZNK8QToolBox7indexOfEP7QWidget(void *this_, QWidget * widget) {
  /*return*/ ((QToolBox*)this_)->indexOf(widget);
}
// /usr/include/qt/QtWidgets/qtoolbox.h:88
// int count()
extern "C"
void C_ZNK8QToolBox5countEv(void *this_) {
  /*return*/ ((QToolBox*)this_)->count();
}
// /usr/include/qt/QtWidgets/qtoolbox.h:91
// void setCurrentIndex(int)
extern "C"
void C_ZN8QToolBox15setCurrentIndexEi(void *this_, int index) {
  ((QToolBox*)this_)->setCurrentIndex(index);
}
// /usr/include/qt/QtWidgets/qtoolbox.h:92
// void setCurrentWidget(class QWidget *)
extern "C"
void C_ZN8QToolBox16setCurrentWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QToolBox*)this_)->setCurrentWidget(widget);
}
// /usr/include/qt/QtWidgets/qtoolbox.h:95
// void currentChanged(int)
extern "C"
void C_ZN8QToolBox14currentChangedEi(void *this_, int index) {
  ((QToolBox*)this_)->currentChanged(index);
}
//  main block end
