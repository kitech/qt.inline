// /usr/include/qt/QtGui/qvalidator.h
#include <qvalidator.h>
#include <QtGui>

// virtual
// /usr/include/qt/QtGui/qvalidator.h:202
// const QMetaObject * metaObject()
extern "C"
void C_ZNK27QRegularExpressionValidator10metaObjectEv(void *this_) {
  /*return*/ ((QRegularExpressionValidator*)this_)->metaObject();
}
// /usr/include/qt/QtGui/qvalidator.h:206
// void QRegularExpressionValidator(class QObject *)
extern "C"
void* C_ZN27QRegularExpressionValidatorC1EP7QObject(QObject * parent) {
  return new QRegularExpressionValidator(parent);
}
// /usr/include/qt/QtGui/qvalidator.h:207
// void QRegularExpressionValidator(const class QRegularExpression &, class QObject *)
extern "C"
void* C_ZN27QRegularExpressionValidatorC1ERK18QRegularExpressionP7QObject(const QRegularExpression & re, QObject * parent) {
  return new QRegularExpressionValidator(re, parent);
}
// virtual
// /usr/include/qt/QtGui/qvalidator.h:208
// void ~QRegularExpressionValidator()
extern "C"
void C_ZN27QRegularExpressionValidatorD1Ev(void *this_) {
  delete (QRegularExpressionValidator*)(this_);
}
// virtual
// /usr/include/qt/QtGui/qvalidator.h:210
// QValidator::State validate(class QString &, int &)
extern "C"
void C_ZNK27QRegularExpressionValidator8validateER7QStringRi(void *this_, QString & input, int & pos) {
  /*return*/ ((QRegularExpressionValidator*)this_)->validate(input, pos);
}
// /usr/include/qt/QtGui/qvalidator.h:212
// QRegularExpression regularExpression()
extern "C"
void C_ZNK27QRegularExpressionValidator17regularExpressionEv(void *this_) {
  /*return*/ ((QRegularExpressionValidator*)this_)->regularExpression();
}
// /usr/include/qt/QtGui/qvalidator.h:215
// void setRegularExpression(const class QRegularExpression &)
extern "C"
void C_ZN27QRegularExpressionValidator20setRegularExpressionERK18QRegularExpression(void *this_, const QRegularExpression & re) {
  ((QRegularExpressionValidator*)this_)->setRegularExpression(re);
}
// /usr/include/qt/QtGui/qvalidator.h:218
// void regularExpressionChanged(const class QRegularExpression &)
extern "C"
void C_ZN27QRegularExpressionValidator24regularExpressionChangedERK18QRegularExpression(void *this_, const QRegularExpression & re) {
  ((QRegularExpressionValidator*)this_)->regularExpressionChanged(re);
}