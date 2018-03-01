//  header block begin
// /usr/include/qt/QtGui/qvalidator.h
#ifndef protected
#define protected public
#endif
#include <qvalidator.h>
#include <QtGui>
#include "callback_inherit.h"

// QRegularExpressionValidator is pure virtual: false
// QRegularExpressionValidator has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQRegularExpressionValidator : public QRegularExpressionValidator {
public:
  virtual ~MyQRegularExpressionValidator() {}
// void QRegularExpressionValidator(class QObject *)
MyQRegularExpressionValidator(QObject * parent) : QRegularExpressionValidator(parent) {}
// void QRegularExpressionValidator(const class QRegularExpression &, class QObject *)
MyQRegularExpressionValidator(const QRegularExpression & re, QObject * parent) : QRegularExpressionValidator(re, parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:203
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK27QRegularExpressionValidator10metaObjectEv(void *this_) {
  return (void*)((QRegularExpressionValidator*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:207
// [-2] void QRegularExpressionValidator(class QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN27QRegularExpressionValidatorC2EP7QObject(QObject * parent) {
  return  new QRegularExpressionValidator(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:208
// [-2] void QRegularExpressionValidator(const class QRegularExpression &, class QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN27QRegularExpressionValidatorC2ERK18QRegularExpressionP7QObject(QRegularExpression* re, QObject * parent) {
  return  new QRegularExpressionValidator(*re, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:209
// [-2] void ~QRegularExpressionValidator()
extern "C" Q_DECL_EXPORT
void C_ZN27QRegularExpressionValidatorD2Ev(void *this_) {
  delete (QRegularExpressionValidator*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:211
// [4] QValidator::State validate(class QString &, int &)
extern "C" Q_DECL_EXPORT
QValidator::State C_ZNK27QRegularExpressionValidator8validateER7QStringRi(void *this_, QString* input, int & pos) {
  return (QValidator::State)((QRegularExpressionValidator*)this_)->validate(*input, pos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:213
// [8] QRegularExpression regularExpression()
extern "C" Q_DECL_EXPORT
void* C_ZNK27QRegularExpressionValidator17regularExpressionEv(void *this_) {
  auto rv = ((QRegularExpressionValidator*)this_)->regularExpression();
return new QRegularExpression(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:216
// [-2] void setRegularExpression(const class QRegularExpression &)
extern "C" Q_DECL_EXPORT
void C_ZN27QRegularExpressionValidator20setRegularExpressionERK18QRegularExpression(void *this_, QRegularExpression* re) {
  ((QRegularExpressionValidator*)this_)->setRegularExpression(*re);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:219
// [-2] void regularExpressionChanged(const class QRegularExpression &)
extern "C" Q_DECL_EXPORT
void C_ZN27QRegularExpressionValidator24regularExpressionChangedERK18QRegularExpression(void *this_, QRegularExpression* re) {
  ((QRegularExpressionValidator*)this_)->regularExpressionChanged(*re);
}

//  main block end
