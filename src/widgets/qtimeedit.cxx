//  header block begin
// /usr/include/qt/QtWidgets/qdatetimeedit.h
#include <qdatetimeedit.h>
#include <QtWidgets>

// QTimeEdit is pure virtual: false
//  header block end

//  main block begin

class MyQTimeEdit : public QTimeEdit {
public:
MyQTimeEdit(QWidget * parent) : QTimeEdit(parent) {}
MyQTimeEdit(const QTime & time, QWidget * parent) : QTimeEdit(time, parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:204
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK9QTimeEdit10metaObjectEv(void *this_) {
  return (void*)((QTimeEdit*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:207
// [-2] void QTimeEdit(class QWidget *)
extern "C"
void* C_ZN9QTimeEditC1EP7QWidget(QWidget * parent) {
  (MyQTimeEdit*)(0);
  return  new MyQTimeEdit(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:208
// [-2] void QTimeEdit(const class QTime &, class QWidget *)
extern "C"
void* C_ZN9QTimeEditC1ERK5QTimeP7QWidget(const QTime & time, QWidget * parent) {
  (MyQTimeEdit*)(0);
  return  new MyQTimeEdit(time, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:209
// [-2] void ~QTimeEdit()
extern "C"
void C_ZN9QTimeEditD1Ev(void *this_) {
  delete (QTimeEdit*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:212
// [-2] void userTimeChanged(const class QTime &)
extern "C"
void C_ZN9QTimeEdit15userTimeChangedERK5QTime(void *this_, const QTime & time) {
  ((QTimeEdit*)this_)->userTimeChanged(time);
}
//  main block end
