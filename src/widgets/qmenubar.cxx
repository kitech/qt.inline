//  header block begin
// /usr/include/qt/QtWidgets/qmenubar.h
#include <qmenubar.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qmenubar.h:57
// const QMetaObject * metaObject()
extern "C"
void C_ZNK8QMenuBar10metaObjectEv(void *this_) {
  /*return*/ ((QMenuBar*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qmenubar.h:63
// void QMenuBar(class QWidget *)
extern "C"
void* C_ZN8QMenuBarC1EP7QWidget(QWidget * parent) {
  return new QMenuBar(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qmenubar.h:64
// void ~QMenuBar()
extern "C"
void C_ZN8QMenuBarD1Ev(void *this_) {
  delete (QMenuBar*)(this_);
}
// /usr/include/qt/QtWidgets/qmenubar.h:67
// QAction * addAction(const class QString &)
extern "C"
void C_ZN8QMenuBar9addActionERK7QString(void *this_, const QString & text) {
  /*return*/ ((QMenuBar*)this_)->addAction(text);
}
// /usr/include/qt/QtWidgets/qmenubar.h:68
// QAction * addAction(const class QString &, const class QObject *, const char *)
extern "C"
void C_ZN8QMenuBar9addActionERK7QStringPK7QObjectPKc(void *this_, const QString & text, const QObject * receiver, const char * member) {
  /*return*/ ((QMenuBar*)this_)->addAction(text, receiver, member);
}
// /usr/include/qt/QtWidgets/qmenubar.h:70
// QAction * addMenu(class QMenu *)
extern "C"
void C_ZN8QMenuBar7addMenuEP5QMenu(void *this_, QMenu * menu) {
  /*return*/ ((QMenuBar*)this_)->addMenu(menu);
}
// /usr/include/qt/QtWidgets/qmenubar.h:71
// QMenu * addMenu(const class QString &)
extern "C"
void C_ZN8QMenuBar7addMenuERK7QString(void *this_, const QString & title) {
  /*return*/ ((QMenuBar*)this_)->addMenu(title);
}
// /usr/include/qt/QtWidgets/qmenubar.h:72
// QMenu * addMenu(const class QIcon &, const class QString &)
extern "C"
void C_ZN8QMenuBar7addMenuERK5QIconRK7QString(void *this_, const QIcon & icon, const QString & title) {
  /*return*/ ((QMenuBar*)this_)->addMenu(icon, title);
}
// /usr/include/qt/QtWidgets/qmenubar.h:75
// QAction * addSeparator()
extern "C"
void C_ZN8QMenuBar12addSeparatorEv(void *this_) {
  /*return*/ ((QMenuBar*)this_)->addSeparator();
}
// /usr/include/qt/QtWidgets/qmenubar.h:76
// QAction * insertSeparator(class QAction *)
extern "C"
void C_ZN8QMenuBar15insertSeparatorEP7QAction(void *this_, QAction * before) {
  /*return*/ ((QMenuBar*)this_)->insertSeparator(before);
}
// /usr/include/qt/QtWidgets/qmenubar.h:78
// QAction * insertMenu(class QAction *, class QMenu *)
extern "C"
void C_ZN8QMenuBar10insertMenuEP7QActionP5QMenu(void *this_, QAction * before, QMenu * menu) {
  /*return*/ ((QMenuBar*)this_)->insertMenu(before, menu);
}
// /usr/include/qt/QtWidgets/qmenubar.h:80
// void clear()
extern "C"
void C_ZN8QMenuBar5clearEv(void *this_) {
  ((QMenuBar*)this_)->clear();
}
// /usr/include/qt/QtWidgets/qmenubar.h:82
// QAction * activeAction()
extern "C"
void C_ZNK8QMenuBar12activeActionEv(void *this_) {
  /*return*/ ((QMenuBar*)this_)->activeAction();
}
// /usr/include/qt/QtWidgets/qmenubar.h:83
// void setActiveAction(class QAction *)
extern "C"
void C_ZN8QMenuBar15setActiveActionEP7QAction(void *this_, QAction * action) {
  ((QMenuBar*)this_)->setActiveAction(action);
}
// /usr/include/qt/QtWidgets/qmenubar.h:85
// void setDefaultUp(_Bool)
extern "C"
void C_ZN8QMenuBar12setDefaultUpEb(void *this_, bool arg0) {
  ((QMenuBar*)this_)->setDefaultUp(arg0);
}
// /usr/include/qt/QtWidgets/qmenubar.h:86
// bool isDefaultUp()
extern "C"
void C_ZNK8QMenuBar11isDefaultUpEv(void *this_) {
  /*return*/ ((QMenuBar*)this_)->isDefaultUp();
}
// virtual
// /usr/include/qt/QtWidgets/qmenubar.h:88
// QSize sizeHint()
extern "C"
void C_ZNK8QMenuBar8sizeHintEv(void *this_) {
  /*return*/ ((QMenuBar*)this_)->sizeHint();
}
// virtual
// /usr/include/qt/QtWidgets/qmenubar.h:89
// QSize minimumSizeHint()
extern "C"
void C_ZNK8QMenuBar15minimumSizeHintEv(void *this_) {
  /*return*/ ((QMenuBar*)this_)->minimumSizeHint();
}
// virtual
// /usr/include/qt/QtWidgets/qmenubar.h:90
// int heightForWidth(int)
extern "C"
void C_ZNK8QMenuBar14heightForWidthEi(void *this_, int arg0) {
  /*return*/ ((QMenuBar*)this_)->heightForWidth(arg0);
}
// /usr/include/qt/QtWidgets/qmenubar.h:92
// QRect actionGeometry(class QAction *)
extern "C"
void C_ZNK8QMenuBar14actionGeometryEP7QAction(void *this_, QAction * arg0) {
  /*return*/ ((QMenuBar*)this_)->actionGeometry(arg0);
}
// /usr/include/qt/QtWidgets/qmenubar.h:93
// QAction * actionAt(const class QPoint &)
extern "C"
void C_ZNK8QMenuBar8actionAtERK6QPoint(void *this_, const QPoint & arg0) {
  /*return*/ ((QMenuBar*)this_)->actionAt(arg0);
}
// /usr/include/qt/QtWidgets/qmenubar.h:95
// void setCornerWidget(class QWidget *, Qt::Corner)
extern "C"
void C_ZN8QMenuBar15setCornerWidgetEP7QWidgetN2Qt6CornerE(void *this_, QWidget * w, Qt::Corner corner) {
  ((QMenuBar*)this_)->setCornerWidget(w, corner);
}
// /usr/include/qt/QtWidgets/qmenubar.h:96
// QWidget * cornerWidget(Qt::Corner)
extern "C"
void C_ZNK8QMenuBar12cornerWidgetEN2Qt6CornerE(void *this_, Qt::Corner corner) {
  /*return*/ ((QMenuBar*)this_)->cornerWidget(corner);
}
// /usr/include/qt/QtWidgets/qmenubar.h:109
// bool isNativeMenuBar()
extern "C"
void C_ZNK8QMenuBar15isNativeMenuBarEv(void *this_) {
  /*return*/ ((QMenuBar*)this_)->isNativeMenuBar();
}
// /usr/include/qt/QtWidgets/qmenubar.h:110
// void setNativeMenuBar(_Bool)
extern "C"
void C_ZN8QMenuBar16setNativeMenuBarEb(void *this_, bool nativeMenuBar) {
  ((QMenuBar*)this_)->setNativeMenuBar(nativeMenuBar);
}
// /usr/include/qt/QtWidgets/qmenubar.h:111
// QPlatformMenuBar * platformMenuBar()
extern "C"
void C_ZN8QMenuBar15platformMenuBarEv(void *this_) {
  /*return*/ ((QMenuBar*)this_)->platformMenuBar();
}
// virtual
// /usr/include/qt/QtWidgets/qmenubar.h:113
// void setVisible(_Bool)
extern "C"
void C_ZN8QMenuBar10setVisibleEb(void *this_, bool visible) {
  ((QMenuBar*)this_)->setVisible(visible);
}
// /usr/include/qt/QtWidgets/qmenubar.h:116
// void triggered(class QAction *)
extern "C"
void C_ZN8QMenuBar9triggeredEP7QAction(void *this_, QAction * action) {
  ((QMenuBar*)this_)->triggered(action);
}
// /usr/include/qt/QtWidgets/qmenubar.h:117
// void hovered(class QAction *)
extern "C"
void C_ZN8QMenuBar7hoveredEP7QAction(void *this_, QAction * action) {
  ((QMenuBar*)this_)->hovered(action);
}
//  main block end
