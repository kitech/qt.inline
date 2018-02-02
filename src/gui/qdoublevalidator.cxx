//  header block begin
// /usr/include/qt/QtGui/qvalidator.h
#include <qvalidator.h>
#include <QtGui>

// QDoubleValidator is pure virtual: false
// QDoubleValidator has virtual projected: false
//  header block end

//  main block begin

class MyQDoubleValidator : public QDoubleValidator {
public:
  virtual ~MyQDoubleValidator() {}
// void QDoubleValidator(class QObject *)
MyQDoubleValidator(QObject * parent) : QDoubleValidator(parent) {}
// void QDoubleValidator(double, double, int, class QObject *)
MyQDoubleValidator(double bottom, double top, int decimals, QObject * parent) : QDoubleValidator(bottom, top, decimals, parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:126
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK16QDoubleValidator10metaObjectEv(void *this_) {
  return (void*)((QDoubleValidator*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:133
// [-2] void QDoubleValidator(class QObject *)
extern "C"
void* C_ZN16QDoubleValidatorC2EP7QObject(QObject * parent) {
  return  new QDoubleValidator(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:134
// [-2] void QDoubleValidator(double, double, int, class QObject *)
extern "C"
void* C_ZN16QDoubleValidatorC2EddiP7QObject(double bottom, double top, int decimals, QObject * parent) {
  return  new QDoubleValidator(bottom, top, decimals, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:135
// [-2] void ~QDoubleValidator()
extern "C"
void C_ZN16QDoubleValidatorD2Ev(void *this_) {
  delete (QDoubleValidator*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:142
// [4] QValidator::State validate(class QString &, int &)
extern "C"
QValidator::State C_ZNK16QDoubleValidator8validateER7QStringRi(void *this_, QString* arg0, int & arg1) {
  return (QValidator::State)((QDoubleValidator*)this_)->validate(*arg0, arg1);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:144
// [-2] void setRange(double, double, int)
extern "C"
void C_ZN16QDoubleValidator8setRangeEddi(void *this_, double bottom, double top, int decimals) {
  ((QDoubleValidator*)this_)->setRange(bottom, top, decimals);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:145
// [-2] void setBottom(double)
extern "C"
void C_ZN16QDoubleValidator9setBottomEd(void *this_, double arg0) {
  ((QDoubleValidator*)this_)->setBottom(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:146
// [-2] void setTop(double)
extern "C"
void C_ZN16QDoubleValidator6setTopEd(void *this_, double arg0) {
  ((QDoubleValidator*)this_)->setTop(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:147
// [-2] void setDecimals(int)
extern "C"
void C_ZN16QDoubleValidator11setDecimalsEi(void *this_, int arg0) {
  ((QDoubleValidator*)this_)->setDecimals(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:148
// [-2] void setNotation(enum QDoubleValidator::Notation)
extern "C"
void C_ZN16QDoubleValidator11setNotationENS_8NotationE(void *this_, QDoubleValidator::Notation arg0) {
  ((QDoubleValidator*)this_)->setNotation(arg0);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:150
// [8] double bottom()
extern "C"
double C_ZNK16QDoubleValidator6bottomEv(void *this_) {
  return (double)((QDoubleValidator*)this_)->bottom();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:151
// [8] double top()
extern "C"
double C_ZNK16QDoubleValidator3topEv(void *this_) {
  return (double)((QDoubleValidator*)this_)->top();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:152
// [4] int decimals()
extern "C"
int C_ZNK16QDoubleValidator8decimalsEv(void *this_) {
  return (int)((QDoubleValidator*)this_)->decimals();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:153
// [4] QDoubleValidator::Notation notation()
extern "C"
QDoubleValidator::Notation C_ZNK16QDoubleValidator8notationEv(void *this_) {
  return (QDoubleValidator::Notation)((QDoubleValidator*)this_)->notation();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:156
// [-2] void bottomChanged(double)
extern "C"
void C_ZN16QDoubleValidator13bottomChangedEd(void *this_, double bottom) {
  ((QDoubleValidator*)this_)->bottomChanged(bottom);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:157
// [-2] void topChanged(double)
extern "C"
void C_ZN16QDoubleValidator10topChangedEd(void *this_, double top) {
  ((QDoubleValidator*)this_)->topChanged(top);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:158
// [-2] void decimalsChanged(int)
extern "C"
void C_ZN16QDoubleValidator15decimalsChangedEi(void *this_, int decimals) {
  ((QDoubleValidator*)this_)->decimalsChanged(decimals);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:159
// [-2] void notationChanged(class QDoubleValidator::Notation)
extern "C"
void C_ZN16QDoubleValidator15notationChangedENS_8NotationE(void *this_, QDoubleValidator::Notation notation) {
  ((QDoubleValidator*)this_)->notationChanged(notation);
}
//  main block end
