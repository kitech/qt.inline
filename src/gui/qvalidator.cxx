//  header block begin
// /usr/include/qt/QtGui/qvalidator.h
#ifndef protected
#define protected public
#endif
#include <qvalidator.h>
#include <QtGui>
#include "callback_inherit.h"

// QValidator is pure virtual: true
// QValidator has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQValidator : public QValidator {
public:
  virtual ~MyQValidator() {}
// void QValidator(class QObject *)
MyQValidator(QObject * parent) : QValidator(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:60
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QValidator10metaObjectEv(void *this_) {
  return (void*)((QValidator*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:62
// [-2] void QValidator(class QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QValidatorC2EP7QObject(QObject * parent) {
  return 0; // new QValidator(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:63
// [-2] void ~QValidator()
extern "C" Q_DECL_EXPORT
void C_ZN10QValidatorD2Ev(void *this_) {
  delete (QValidator*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:71
// [-2] void setLocale(const class QLocale &)
extern "C" Q_DECL_EXPORT
void C_ZN10QValidator9setLocaleERK7QLocale(void *this_, QLocale* locale) {
  ((QValidator*)this_)->setLocale(*locale);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:72
// [8] QLocale locale()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QValidator6localeEv(void *this_) {
  auto rv = ((QValidator*)this_)->locale();
return new QLocale(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:74
// [4] QValidator::State validate(class QString &, int &)
extern "C" Q_DECL_EXPORT
QValidator::State C_ZNK10QValidator8validateER7QStringRi(void *this_, QString* arg0, int & arg1) {
  return (QValidator::State)((QValidator*)this_)->validate(*arg0, arg1);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:75
// [-2] void fixup(class QString &)
extern "C" Q_DECL_EXPORT
void C_ZNK10QValidator5fixupER7QString(void *this_, QString* arg0) {
  ((QValidator*)this_)->fixup(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:78
// [-2] void changed()
extern "C" Q_DECL_EXPORT
void C_ZN10QValidator7changedEv(void *this_) {
  ((QValidator*)this_)->changed();
}

//  main block end
