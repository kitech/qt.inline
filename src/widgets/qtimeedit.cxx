//  header block begin
// /usr/include/qt/QtWidgets/qdatetimeedit.h
#ifndef protected
#define protected public
#endif
#include <qdatetimeedit.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QTimeEdit is pure virtual: false
// QTimeEdit has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQTimeEdit : public QTimeEdit {
public:
  virtual ~MyQTimeEdit() {}
// void QTimeEdit(QWidget *)
MyQTimeEdit(QWidget * parent) : QTimeEdit(parent) {}
// void QTimeEdit(const QTime &, QWidget *)
MyQTimeEdit(const QTime & time, QWidget * parent) : QTimeEdit(time, parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:204
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QTimeEdit10metaObjectEv(void *this_) {
  return (void*)((QTimeEdit*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:207
// [-2] void QTimeEdit(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QTimeEditC2EP7QWidget(QWidget * parent) {
  return  new QTimeEdit(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:208
// [-2] void QTimeEdit(const QTime &, QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QTimeEditC2ERK5QTimeP7QWidget(QTime* time, QWidget * parent) {
  return  new QTimeEdit(*time, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:209
// [-2] void ~QTimeEdit()
extern "C" Q_DECL_EXPORT
void C_ZN9QTimeEditD2Ev(void *this_) {
  delete (QTimeEdit*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:212
// [-2] void userTimeChanged(const QTime &)
extern "C" Q_DECL_EXPORT
void C_ZN9QTimeEdit15userTimeChangedERK5QTime(void *this_, QTime* time) {
  ((QTimeEdit*)this_)->userTimeChanged(*time);
}

//  main block end
