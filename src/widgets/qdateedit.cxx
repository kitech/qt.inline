//  header block begin
// /usr/include/qt/QtWidgets/qdatetimeedit.h
#include <qdatetimeedit.h>
#include <QtWidgets>

// QDateEdit is pure virtual: false
//  header block end

//  main block begin

class MyQDateEdit : public QDateEdit {
public:
MyQDateEdit(QWidget * parent) : QDateEdit(parent) {}
MyQDateEdit(const QDate & date, QWidget * parent) : QDateEdit(date, parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:217
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK9QDateEdit10metaObjectEv(void *this_) {
  return (void*)((QDateEdit*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:220
// [-2] void QDateEdit(class QWidget *)
extern "C"
void* C_ZN9QDateEditC1EP7QWidget(QWidget * parent) {
  (MyQDateEdit*)(0);
  return  new MyQDateEdit(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:221
// [-2] void QDateEdit(const class QDate &, class QWidget *)
extern "C"
void* C_ZN9QDateEditC1ERK5QDateP7QWidget(const QDate & date, QWidget * parent) {
  (MyQDateEdit*)(0);
  return  new MyQDateEdit(date, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:222
// [-2] void ~QDateEdit()
extern "C"
void C_ZN9QDateEditD1Ev(void *this_) {
  delete (QDateEdit*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:225
// [-2] void userDateChanged(const class QDate &)
extern "C"
void C_ZN9QDateEdit15userDateChangedERK5QDate(void *this_, const QDate & date) {
  ((QDateEdit*)this_)->userDateChanged(date);
}
//  main block end
