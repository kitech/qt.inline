//  header block begin
// /usr/include/qt/QtGui/qvalidator.h
#ifndef protected
#define protected public
#endif
#include <qvalidator.h>
#include <QtGui>
#include "callback_inherit.h"

// QRegExpValidator is pure virtual: false
// QRegExpValidator has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQRegExpValidator : public QRegExpValidator {
public:
  virtual ~MyQRegExpValidator() {}
// void QRegExpValidator(class QObject *)
MyQRegExpValidator(QObject * parent) : QRegExpValidator(parent) {}
// void QRegExpValidator(const class QRegExp &, class QObject *)
MyQRegExpValidator(const QRegExp & rx, QObject * parent) : QRegExpValidator(rx, parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:173
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QRegExpValidator10metaObjectEv(void *this_) {
  return (void*)((QRegExpValidator*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:177
// [-2] void QRegExpValidator(class QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QRegExpValidatorC2EP7QObject(QObject * parent) {
  return  new QRegExpValidator(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:178
// [-2] void QRegExpValidator(const class QRegExp &, class QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QRegExpValidatorC2ERK7QRegExpP7QObject(QRegExp* rx, QObject * parent) {
  return  new QRegExpValidator(*rx, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:179
// [-2] void ~QRegExpValidator()
extern "C" Q_DECL_EXPORT
void C_ZN16QRegExpValidatorD2Ev(void *this_) {
  delete (QRegExpValidator*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:181
// [4] QValidator::State validate(class QString &, int &)
extern "C" Q_DECL_EXPORT
QValidator::State C_ZNK16QRegExpValidator8validateER7QStringRi(void *this_, QString* input, int & pos) {
  return (QValidator::State)((QRegExpValidator*)this_)->validate(*input, pos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:183
// [-2] void setRegExp(const class QRegExp &)
extern "C" Q_DECL_EXPORT
void C_ZN16QRegExpValidator9setRegExpERK7QRegExp(void *this_, QRegExp* rx) {
  ((QRegExpValidator*)this_)->setRegExp(*rx);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:184
// [8] const QRegExp & regExp()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QRegExpValidator6regExpEv(void *this_) {
  auto& rv = ((QRegExpValidator*)this_)->regExp();
return new QRegExp(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:187
// [-2] void regExpChanged(const class QRegExp &)
extern "C" Q_DECL_EXPORT
void C_ZN16QRegExpValidator13regExpChangedERK7QRegExp(void *this_, QRegExp* regExp) {
  ((QRegExpValidator*)this_)->regExpChanged(*regExp);
}

//  main block end
