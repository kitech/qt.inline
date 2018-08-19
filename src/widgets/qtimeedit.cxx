//  header block begin
// /usr/include/qt/QtWidgets/qdatetimeedit.h
#ifndef protected
#define protected public
#define private public
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

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:204
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QTimeEdit11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QTimeEdit*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:204
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN9QTimeEdit11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QTimeEdit*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:204
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QTimeEdit2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QTimeEdit::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:204
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QTimeEdit6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QTimeEdit::trUtf8(s, c, n);
return new QString(rv);
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
