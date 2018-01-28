//  header block begin
// /usr/include/qt/QtWidgets/qundoview.h
#include <qundoview.h>
#include <QtWidgets>

// QUndoView is pure virtual: false
//  header block end

//  main block begin

class MyQUndoView : public QUndoView {
public:
MyQUndoView(QWidget * parent) : QUndoView(parent) {}
MyQUndoView(QUndoStack * stack, QWidget * parent) : QUndoView(stack, parent) {}
MyQUndoView(QUndoGroup * group, QWidget * parent) : QUndoView(group, parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundoview.h:59
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK9QUndoView10metaObjectEv(void *this_) {
  return (void*)((QUndoView*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundoview.h:65
// [-2] void QUndoView(class QWidget *)
extern "C"
void* C_ZN9QUndoViewC1EP7QWidget(QWidget * parent) {
  (MyQUndoView*)(0);
  return  new MyQUndoView(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundoview.h:66
// [-2] void QUndoView(class QUndoStack *, class QWidget *)
extern "C"
void* C_ZN9QUndoViewC1EP10QUndoStackP7QWidget(QUndoStack * stack, QWidget * parent) {
  (MyQUndoView*)(0);
  return  new MyQUndoView(stack, parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundoview.h:68
// [-2] void QUndoView(class QUndoGroup *, class QWidget *)
extern "C"
void* C_ZN9QUndoViewC1EP10QUndoGroupP7QWidget(QUndoGroup * group, QWidget * parent) {
  (MyQUndoView*)(0);
  return  new MyQUndoView(group, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundoview.h:70
// [-2] void ~QUndoView()
extern "C"
void C_ZN9QUndoViewD1Ev(void *this_) {
  delete (QUndoView*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundoview.h:72
// [8] QUndoStack * stack()
extern "C"
void* C_ZNK9QUndoView5stackEv(void *this_) {
  return (void*)((QUndoView*)this_)->stack();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundoview.h:74
// [8] QUndoGroup * group()
extern "C"
void* C_ZNK9QUndoView5groupEv(void *this_) {
  return (void*)((QUndoView*)this_)->group();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundoview.h:77
// [-2] void setEmptyLabel(const class QString &)
extern "C"
void C_ZN9QUndoView13setEmptyLabelERK7QString(void *this_, const QString & label) {
  ((QUndoView*)this_)->setEmptyLabel(label);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundoview.h:78
// [8] QString emptyLabel()
extern "C"
void* C_ZNK9QUndoView10emptyLabelEv(void *this_) {
  auto rv = ((QUndoView*)this_)->emptyLabel();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundoview.h:80
// [-2] void setCleanIcon(const class QIcon &)
extern "C"
void C_ZN9QUndoView12setCleanIconERK5QIcon(void *this_, const QIcon & icon) {
  ((QUndoView*)this_)->setCleanIcon(icon);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundoview.h:81
// [8] QIcon cleanIcon()
extern "C"
void* C_ZNK9QUndoView9cleanIconEv(void *this_) {
  auto rv = ((QUndoView*)this_)->cleanIcon();
return new QIcon(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundoview.h:84
// [-2] void setStack(class QUndoStack *)
extern "C"
void C_ZN9QUndoView8setStackEP10QUndoStack(void *this_, QUndoStack * stack) {
  ((QUndoView*)this_)->setStack(stack);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundoview.h:86
// [-2] void setGroup(class QUndoGroup *)
extern "C"
void C_ZN9QUndoView8setGroupEP10QUndoGroup(void *this_, QUndoGroup * group) {
  ((QUndoView*)this_)->setGroup(group);
}
//  main block end
