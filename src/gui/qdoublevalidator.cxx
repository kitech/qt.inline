//  header block begin
// /usr/include/qt/QtGui/qvalidator.h
#include <qvalidator.h>
#include <QtGui>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtGui/qvalidator.h:125
// const QMetaObject * metaObject()
extern "C"
void C_ZNK16QDoubleValidator10metaObjectEv(void *this_) {
  /*return*/ ((QDoubleValidator*)this_)->metaObject();
}
// /usr/include/qt/QtGui/qvalidator.h:132
// void QDoubleValidator(class QObject *)
extern "C"
void* C_ZN16QDoubleValidatorC1EP7QObject(QObject * parent) {
  return new QDoubleValidator(parent);
}
// /usr/include/qt/QtGui/qvalidator.h:133
// void QDoubleValidator(double, double, int, class QObject *)
extern "C"
void* C_ZN16QDoubleValidatorC1EddiP7QObject(double bottom, double top, int decimals, QObject * parent) {
  return new QDoubleValidator(bottom, top, decimals, parent);
}
// virtual
// /usr/include/qt/QtGui/qvalidator.h:134
// void ~QDoubleValidator()
extern "C"
void C_ZN16QDoubleValidatorD1Ev(void *this_) {
  delete (QDoubleValidator*)(this_);
}
// virtual
// /usr/include/qt/QtGui/qvalidator.h:141
// QValidator::State validate(class QString &, int &)
extern "C"
void C_ZNK16QDoubleValidator8validateER7QStringRi(void *this_, QString & arg0, int & arg1) {
  /*return*/ ((QDoubleValidator*)this_)->validate(arg0, arg1);
}
// virtual
// /usr/include/qt/QtGui/qvalidator.h:143
// void setRange(double, double, int)
extern "C"
void C_ZN16QDoubleValidator8setRangeEddi(void *this_, double bottom, double top, int decimals) {
  ((QDoubleValidator*)this_)->setRange(bottom, top, decimals);
}
// /usr/include/qt/QtGui/qvalidator.h:144
// void setBottom(double)
extern "C"
void C_ZN16QDoubleValidator9setBottomEd(void *this_, double arg0) {
  ((QDoubleValidator*)this_)->setBottom(arg0);
}
// /usr/include/qt/QtGui/qvalidator.h:145
// void setTop(double)
extern "C"
void C_ZN16QDoubleValidator6setTopEd(void *this_, double arg0) {
  ((QDoubleValidator*)this_)->setTop(arg0);
}
// /usr/include/qt/QtGui/qvalidator.h:146
// void setDecimals(int)
extern "C"
void C_ZN16QDoubleValidator11setDecimalsEi(void *this_, int arg0) {
  ((QDoubleValidator*)this_)->setDecimals(arg0);
}
// /usr/include/qt/QtGui/qvalidator.h:147
// void setNotation(enum QDoubleValidator::Notation)
extern "C"
void C_ZN16QDoubleValidator11setNotationENS_8NotationE(void *this_, QDoubleValidator::Notation arg0) {
  ((QDoubleValidator*)this_)->setNotation(arg0);
}
// inline
// /usr/include/qt/QtGui/qvalidator.h:149
// double bottom()
extern "C"
void C_ZNK16QDoubleValidator6bottomEv(void *this_) {
  /*return*/ ((QDoubleValidator*)this_)->bottom();
}
// inline
// /usr/include/qt/QtGui/qvalidator.h:150
// double top()
extern "C"
void C_ZNK16QDoubleValidator3topEv(void *this_) {
  /*return*/ ((QDoubleValidator*)this_)->top();
}
// inline
// /usr/include/qt/QtGui/qvalidator.h:151
// int decimals()
extern "C"
void C_ZNK16QDoubleValidator8decimalsEv(void *this_) {
  /*return*/ ((QDoubleValidator*)this_)->decimals();
}
// /usr/include/qt/QtGui/qvalidator.h:152
// QDoubleValidator::Notation notation()
extern "C"
void C_ZNK16QDoubleValidator8notationEv(void *this_) {
  /*return*/ ((QDoubleValidator*)this_)->notation();
}
// /usr/include/qt/QtGui/qvalidator.h:155
// void bottomChanged(double)
extern "C"
void C_ZN16QDoubleValidator13bottomChangedEd(void *this_, double bottom) {
  ((QDoubleValidator*)this_)->bottomChanged(bottom);
}
// /usr/include/qt/QtGui/qvalidator.h:156
// void topChanged(double)
extern "C"
void C_ZN16QDoubleValidator10topChangedEd(void *this_, double top) {
  ((QDoubleValidator*)this_)->topChanged(top);
}
// /usr/include/qt/QtGui/qvalidator.h:157
// void decimalsChanged(int)
extern "C"
void C_ZN16QDoubleValidator15decimalsChangedEi(void *this_, int decimals) {
  ((QDoubleValidator*)this_)->decimalsChanged(decimals);
}
// /usr/include/qt/QtGui/qvalidator.h:158
// void notationChanged(class QDoubleValidator::Notation)
extern "C"
void C_ZN16QDoubleValidator15notationChangedENS_8NotationE(void *this_, QDoubleValidator::Notation notation) {
  ((QDoubleValidator*)this_)->notationChanged(notation);
}
//  main block end
