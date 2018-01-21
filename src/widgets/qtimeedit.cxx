//  header block begin
// /usr/include/qt/QtWidgets/qdatetimeedit.h
#include <qdatetimeedit.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qdatetimeedit.h:204
// const QMetaObject * metaObject()
extern "C"
void C_ZNK9QTimeEdit10metaObjectEv(void *this_) {
  /*return*/ ((QTimeEdit*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:207
// void QTimeEdit(class QWidget *)
extern "C"
void* C_ZN9QTimeEditC1EP7QWidget(QWidget * parent) {
  return new QTimeEdit(parent);
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:208
// void QTimeEdit(const class QTime &, class QWidget *)
extern "C"
void* C_ZN9QTimeEditC1ERK5QTimeP7QWidget(const QTime & time, QWidget * parent) {
  return new QTimeEdit(time, parent);
}
// virtual
// /usr/include/qt/QtWidgets/qdatetimeedit.h:209
// void ~QTimeEdit()
extern "C"
void C_ZN9QTimeEditD1Ev(void *this_) {
  delete (QTimeEdit*)(this_);
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:212
// void userTimeChanged(const class QTime &)
extern "C"
void C_ZN9QTimeEdit15userTimeChangedERK5QTime(void *this_, const QTime & time) {
  ((QTimeEdit*)this_)->userTimeChanged(time);
}
//  main block end
