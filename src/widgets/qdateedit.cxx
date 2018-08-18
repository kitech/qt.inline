//  header block begin
// /usr/include/qt/QtWidgets/qdatetimeedit.h
#ifndef protected
#define protected public
#endif
#include <qdatetimeedit.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QDateEdit is pure virtual: false
// QDateEdit has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQDateEdit : public QDateEdit {
public:
  virtual ~MyQDateEdit() {}
// void QDateEdit(QWidget *)
MyQDateEdit(QWidget * parent) : QDateEdit(parent) {}
// void QDateEdit(const QDate &, QWidget *)
MyQDateEdit(const QDate & date, QWidget * parent) : QDateEdit(date, parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:217
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QDateEdit10metaObjectEv(void *this_) {
  return (void*)((QDateEdit*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:217
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QDateEdit11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QDateEdit*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:217
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN9QDateEdit11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QDateEdit*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:217
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QDateEdit2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QDateEdit::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:217
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QDateEdit6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QDateEdit::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:220
// [-2] void QDateEdit(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QDateEditC2EP7QWidget(QWidget * parent) {
  return  new QDateEdit(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:221
// [-2] void QDateEdit(const QDate &, QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QDateEditC2ERK5QDateP7QWidget(QDate* date, QWidget * parent) {
  return  new QDateEdit(*date, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:222
// [-2] void ~QDateEdit()
extern "C" Q_DECL_EXPORT
void C_ZN9QDateEditD2Ev(void *this_) {
  delete (QDateEdit*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:225
// [-2] void userDateChanged(const QDate &)
extern "C" Q_DECL_EXPORT
void C_ZN9QDateEdit15userDateChangedERK5QDate(void *this_, QDate* date) {
  ((QDateEdit*)this_)->userDateChanged(*date);
}

//  main block end
