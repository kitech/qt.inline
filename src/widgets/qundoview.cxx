//  header block begin
// /usr/include/qt/QtWidgets/qundoview.h
#ifndef protected
#define protected public
#endif
#include <qundoview.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QUndoView is pure virtual: false
// QUndoView has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQUndoView : public QUndoView {
public:
  virtual ~MyQUndoView() {}
// void QUndoView(class QWidget *)
MyQUndoView(QWidget * parent) : QUndoView(parent) {}
// void QUndoView(class QUndoStack *, class QWidget *)
MyQUndoView(QUndoStack * stack, QWidget * parent) : QUndoView(stack, parent) {}
// void QUndoView(class QUndoGroup *, class QWidget *)
MyQUndoView(QUndoGroup * group, QWidget * parent) : QUndoView(group, parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundoview.h:59
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QUndoView10metaObjectEv(void *this_) {
  return (void*)((QUndoView*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundoview.h:65
// [-2] void QUndoView(class QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QUndoViewC2EP7QWidget(QWidget * parent) {
  return  new QUndoView(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundoview.h:66
// [-2] void QUndoView(class QUndoStack *, class QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QUndoViewC2EP10QUndoStackP7QWidget(QUndoStack * stack, QWidget * parent) {
  return  new QUndoView(stack, parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundoview.h:68
// [-2] void QUndoView(class QUndoGroup *, class QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QUndoViewC2EP10QUndoGroupP7QWidget(QUndoGroup * group, QWidget * parent) {
  return  new QUndoView(group, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundoview.h:70
// [-2] void ~QUndoView()
extern "C" Q_DECL_EXPORT
void C_ZN9QUndoViewD2Ev(void *this_) {
  delete (QUndoView*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundoview.h:72
// [8] QUndoStack * stack()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QUndoView5stackEv(void *this_) {
  return (void*)((QUndoView*)this_)->stack();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundoview.h:74
// [8] QUndoGroup * group()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QUndoView5groupEv(void *this_) {
  return (void*)((QUndoView*)this_)->group();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundoview.h:77
// [-2] void setEmptyLabel(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN9QUndoView13setEmptyLabelERK7QString(void *this_, QString* label) {
  ((QUndoView*)this_)->setEmptyLabel(*label);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundoview.h:78
// [8] QString emptyLabel()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QUndoView10emptyLabelEv(void *this_) {
  auto rv = ((QUndoView*)this_)->emptyLabel();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundoview.h:80
// [-2] void setCleanIcon(const class QIcon &)
extern "C" Q_DECL_EXPORT
void C_ZN9QUndoView12setCleanIconERK5QIcon(void *this_, QIcon* icon) {
  ((QUndoView*)this_)->setCleanIcon(*icon);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundoview.h:81
// [8] QIcon cleanIcon()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QUndoView9cleanIconEv(void *this_) {
  auto rv = ((QUndoView*)this_)->cleanIcon();
return new QIcon(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundoview.h:84
// [-2] void setStack(class QUndoStack *)
extern "C" Q_DECL_EXPORT
void C_ZN9QUndoView8setStackEP10QUndoStack(void *this_, QUndoStack * stack) {
  ((QUndoView*)this_)->setStack(stack);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundoview.h:86
// [-2] void setGroup(class QUndoGroup *)
extern "C" Q_DECL_EXPORT
void C_ZN9QUndoView8setGroupEP10QUndoGroup(void *this_, QUndoGroup * group) {
  ((QUndoView*)this_)->setGroup(group);
}

//  main block end
