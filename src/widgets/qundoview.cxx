//  header block begin
// /usr/include/qt/QtWidgets/qundoview.h
#include <qundoview.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qundoview.h:58
// const QMetaObject * metaObject()
extern "C"
void C_ZNK9QUndoView10metaObjectEv(void *this_) {
  /*return*/ ((QUndoView*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qundoview.h:64
// void QUndoView(class QWidget *)
extern "C"
void* C_ZN9QUndoViewC1EP7QWidget(QWidget * parent) {
  return new QUndoView(parent);
}
// /usr/include/qt/QtWidgets/qundoview.h:65
// void QUndoView(class QUndoStack *, class QWidget *)
extern "C"
void* C_ZN9QUndoViewC1EP10QUndoStackP7QWidget(QUndoStack * stack, QWidget * parent) {
  return new QUndoView(stack, parent);
}
// /usr/include/qt/QtWidgets/qundoview.h:67
// void QUndoView(class QUndoGroup *, class QWidget *)
extern "C"
void* C_ZN9QUndoViewC1EP10QUndoGroupP7QWidget(QUndoGroup * group, QWidget * parent) {
  return new QUndoView(group, parent);
}
// virtual
// /usr/include/qt/QtWidgets/qundoview.h:69
// void ~QUndoView()
extern "C"
void C_ZN9QUndoViewD1Ev(void *this_) {
  delete (QUndoView*)(this_);
}
// /usr/include/qt/QtWidgets/qundoview.h:71
// QUndoStack * stack()
extern "C"
void C_ZNK9QUndoView5stackEv(void *this_) {
  /*return*/ ((QUndoView*)this_)->stack();
}
// /usr/include/qt/QtWidgets/qundoview.h:73
// QUndoGroup * group()
extern "C"
void C_ZNK9QUndoView5groupEv(void *this_) {
  /*return*/ ((QUndoView*)this_)->group();
}
// /usr/include/qt/QtWidgets/qundoview.h:76
// void setEmptyLabel(const class QString &)
extern "C"
void C_ZN9QUndoView13setEmptyLabelERK7QString(void *this_, const QString & label) {
  ((QUndoView*)this_)->setEmptyLabel(label);
}
// /usr/include/qt/QtWidgets/qundoview.h:77
// QString emptyLabel()
extern "C"
void C_ZNK9QUndoView10emptyLabelEv(void *this_) {
  /*return*/ ((QUndoView*)this_)->emptyLabel();
}
// /usr/include/qt/QtWidgets/qundoview.h:79
// void setCleanIcon(const class QIcon &)
extern "C"
void C_ZN9QUndoView12setCleanIconERK5QIcon(void *this_, const QIcon & icon) {
  ((QUndoView*)this_)->setCleanIcon(icon);
}
// /usr/include/qt/QtWidgets/qundoview.h:80
// QIcon cleanIcon()
extern "C"
void C_ZNK9QUndoView9cleanIconEv(void *this_) {
  /*return*/ ((QUndoView*)this_)->cleanIcon();
}
// /usr/include/qt/QtWidgets/qundoview.h:83
// void setStack(class QUndoStack *)
extern "C"
void C_ZN9QUndoView8setStackEP10QUndoStack(void *this_, QUndoStack * stack) {
  ((QUndoView*)this_)->setStack(stack);
}
// /usr/include/qt/QtWidgets/qundoview.h:85
// void setGroup(class QUndoGroup *)
extern "C"
void C_ZN9QUndoView8setGroupEP10QUndoGroup(void *this_, QUndoGroup * group) {
  ((QUndoView*)this_)->setGroup(group);
}
//  main block end
