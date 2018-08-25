//  header block begin
// since 0x050100
// /usr/include/qt/QtGui/qvalidator.h
#ifndef protected
#define protected public
#define private public
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
// void QRegularExpressionValidator(QObject *)
MyQRegularExpressionValidator(QObject * parent) : QRegularExpressionValidator(parent) {}
// void QRegularExpressionValidator(const QRegularExpression &, QObject *)
MyQRegularExpressionValidator(const QRegularExpression & re, QObject * parent) : QRegularExpressionValidator(re, parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:203
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK27QRegularExpressionValidator10metaObjectEv(void *this_) {
  return (void*)((QRegularExpressionValidator*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:203
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN27QRegularExpressionValidator11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QRegularExpressionValidator*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:203
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN27QRegularExpressionValidator11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QRegularExpressionValidator*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:203
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN27QRegularExpressionValidator2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QRegularExpressionValidator::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:203
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN27QRegularExpressionValidator6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QRegularExpressionValidator::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:207
// [-2] void QRegularExpressionValidator(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN27QRegularExpressionValidatorC2EP7QObject(QObject * parent) {
  return  new MyQRegularExpressionValidator(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:208
// [-2] void QRegularExpressionValidator(const QRegularExpression &, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN27QRegularExpressionValidatorC2ERK18QRegularExpressionP7QObject(QRegularExpression* re, QObject * parent) {
  return  new MyQRegularExpressionValidator(*re, parent);
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
// [4] QValidator::State validate(QString &, int &)
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
// [-2] void setRegularExpression(const QRegularExpression &)
extern "C" Q_DECL_EXPORT
void C_ZN27QRegularExpressionValidator20setRegularExpressionERK18QRegularExpression(void *this_, QRegularExpression* re) {
  ((QRegularExpressionValidator*)this_)->setRegularExpression(*re);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:219
// [-2] void regularExpressionChanged(const QRegularExpression &)
extern "C" Q_DECL_EXPORT
void C_ZN27QRegularExpressionValidator24regularExpressionChangedERK18QRegularExpression(void *this_, QRegularExpression* re) {
  ((QRegularExpressionValidator*)this_)->regularExpressionChanged(*re);
}

//  main block end
