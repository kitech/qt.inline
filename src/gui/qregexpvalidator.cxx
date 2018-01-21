//  header block begin
// /usr/include/qt/QtGui/qvalidator.h
#include <qvalidator.h>
#include <QtGui>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtGui/qvalidator.h:172
// const QMetaObject * metaObject()
extern "C"
void C_ZNK16QRegExpValidator10metaObjectEv(void *this_) {
  /*return*/ ((QRegExpValidator*)this_)->metaObject();
}
// /usr/include/qt/QtGui/qvalidator.h:176
// void QRegExpValidator(class QObject *)
extern "C"
void* C_ZN16QRegExpValidatorC1EP7QObject(QObject * parent) {
  return new QRegExpValidator(parent);
}
// /usr/include/qt/QtGui/qvalidator.h:177
// void QRegExpValidator(const class QRegExp &, class QObject *)
extern "C"
void* C_ZN16QRegExpValidatorC1ERK7QRegExpP7QObject(const QRegExp & rx, QObject * parent) {
  return new QRegExpValidator(rx, parent);
}
// virtual
// /usr/include/qt/QtGui/qvalidator.h:178
// void ~QRegExpValidator()
extern "C"
void C_ZN16QRegExpValidatorD1Ev(void *this_) {
  delete (QRegExpValidator*)(this_);
}
// virtual
// /usr/include/qt/QtGui/qvalidator.h:180
// QValidator::State validate(class QString &, int &)
extern "C"
void C_ZNK16QRegExpValidator8validateER7QStringRi(void *this_, QString & input, int & pos) {
  /*return*/ ((QRegExpValidator*)this_)->validate(input, pos);
}
// /usr/include/qt/QtGui/qvalidator.h:182
// void setRegExp(const class QRegExp &)
extern "C"
void C_ZN16QRegExpValidator9setRegExpERK7QRegExp(void *this_, const QRegExp & rx) {
  ((QRegExpValidator*)this_)->setRegExp(rx);
}
// inline
// /usr/include/qt/QtGui/qvalidator.h:183
// const QRegExp & regExp()
extern "C"
void C_ZNK16QRegExpValidator6regExpEv(void *this_) {
  /*return*/ ((QRegExpValidator*)this_)->regExp();
}
// /usr/include/qt/QtGui/qvalidator.h:186
// void regExpChanged(const class QRegExp &)
extern "C"
void C_ZN16QRegExpValidator13regExpChangedERK7QRegExp(void *this_, const QRegExp & regExp) {
  ((QRegExpValidator*)this_)->regExpChanged(regExp);
}
//  main block end
