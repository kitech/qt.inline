//  header block begin
// /usr/include/qt/QtGui/qvalidator.h
#include <qvalidator.h>
#include <QtGui>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtGui/qvalidator.h:90
// const QMetaObject * metaObject()
extern "C"
void C_ZNK13QIntValidator10metaObjectEv(void *this_) {
  /*return*/ ((QIntValidator*)this_)->metaObject();
}
// /usr/include/qt/QtGui/qvalidator.h:95
// void QIntValidator(class QObject *)
extern "C"
void* C_ZN13QIntValidatorC1EP7QObject(QObject * parent) {
  return new QIntValidator(parent);
}
// /usr/include/qt/QtGui/qvalidator.h:96
// void QIntValidator(int, int, class QObject *)
extern "C"
void* C_ZN13QIntValidatorC1EiiP7QObject(int bottom, int top, QObject * parent) {
  return new QIntValidator(bottom, top, parent);
}
// virtual
// /usr/include/qt/QtGui/qvalidator.h:97
// void ~QIntValidator()
extern "C"
void C_ZN13QIntValidatorD1Ev(void *this_) {
  delete (QIntValidator*)(this_);
}
// virtual
// /usr/include/qt/QtGui/qvalidator.h:99
// QValidator::State validate(class QString &, int &)
extern "C"
void C_ZNK13QIntValidator8validateER7QStringRi(void *this_, QString & arg0, int & arg1) {
  /*return*/ ((QIntValidator*)this_)->validate(arg0, arg1);
}
// virtual
// /usr/include/qt/QtGui/qvalidator.h:100
// void fixup(class QString &)
extern "C"
void C_ZNK13QIntValidator5fixupER7QString(void *this_, QString & input) {
  ((QIntValidator*)this_)->fixup(input);
}
// /usr/include/qt/QtGui/qvalidator.h:102
// void setBottom(int)
extern "C"
void C_ZN13QIntValidator9setBottomEi(void *this_, int arg0) {
  ((QIntValidator*)this_)->setBottom(arg0);
}
// /usr/include/qt/QtGui/qvalidator.h:103
// void setTop(int)
extern "C"
void C_ZN13QIntValidator6setTopEi(void *this_, int arg0) {
  ((QIntValidator*)this_)->setTop(arg0);
}
// virtual
// /usr/include/qt/QtGui/qvalidator.h:104
// void setRange(int, int)
extern "C"
void C_ZN13QIntValidator8setRangeEii(void *this_, int bottom, int top) {
  ((QIntValidator*)this_)->setRange(bottom, top);
}
// inline
// /usr/include/qt/QtGui/qvalidator.h:106
// int bottom()
extern "C"
void C_ZNK13QIntValidator6bottomEv(void *this_) {
  /*return*/ ((QIntValidator*)this_)->bottom();
}
// inline
// /usr/include/qt/QtGui/qvalidator.h:107
// int top()
extern "C"
void C_ZNK13QIntValidator3topEv(void *this_) {
  /*return*/ ((QIntValidator*)this_)->top();
}
// /usr/include/qt/QtGui/qvalidator.h:109
// void bottomChanged(int)
extern "C"
void C_ZN13QIntValidator13bottomChangedEi(void *this_, int bottom) {
  ((QIntValidator*)this_)->bottomChanged(bottom);
}
// /usr/include/qt/QtGui/qvalidator.h:110
// void topChanged(int)
extern "C"
void C_ZN13QIntValidator10topChangedEi(void *this_, int top) {
  ((QIntValidator*)this_)->topChanged(top);
}
//  main block end
