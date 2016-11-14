// /usr/include/qt/QtWidgets/qdatetimeedit.h
#include <qdatetimeedit.h>
#include <QtWidgets>

// virtual
// /usr/include/qt/QtWidgets/qdatetimeedit.h:217
// const QMetaObject * metaObject()
extern "C"
void C_ZNK9QDateEdit10metaObjectEv(void *this_) {
  /*return*/ ((QDateEdit*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:220
// void QDateEdit(class QWidget *)
extern "C"
void* C_ZN9QDateEditC1EP7QWidget(QWidget * parent) {
  return new QDateEdit(parent);
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:221
// void QDateEdit(const class QDate &, class QWidget *)
extern "C"
void* C_ZN9QDateEditC1ERK5QDateP7QWidget(const QDate & date, QWidget * parent) {
  return new QDateEdit(date, parent);
}
// virtual
// /usr/include/qt/QtWidgets/qdatetimeedit.h:222
// void ~QDateEdit()
extern "C"
void C_ZN9QDateEditD1Ev(void *this_) {
  delete (QDateEdit*)(this_);
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:225
// void userDateChanged(const class QDate &)
extern "C"
void C_ZN9QDateEdit15userDateChangedERK5QDate(void *this_, const QDate & date) {
  ((QDateEdit*)this_)->userDateChanged(date);
}