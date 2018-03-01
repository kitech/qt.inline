//  header block begin
// /usr/include/qt/QtGui/qvalidator.h
#ifndef protected
#define protected public
#endif
#include <qvalidator.h>
#include <QtGui>
#include "callback_inherit.h"

// QIntValidator is pure virtual: false
// QIntValidator has virtual projected: false
//  header block end

//  main block begin

class MyQIntValidator : public QIntValidator {
public:
  virtual ~MyQIntValidator() {}
// void QIntValidator(class QObject *)
MyQIntValidator(QObject * parent) : QIntValidator(parent) {}
// void QIntValidator(int, int, class QObject *)
MyQIntValidator(int bottom, int top, QObject * parent) : QIntValidator(bottom, top, parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:91
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QIntValidator10metaObjectEv(void *this_) {
  return (void*)((QIntValidator*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:96
// [-2] void QIntValidator(class QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QIntValidatorC2EP7QObject(QObject * parent) {
  return  new QIntValidator(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:97
// [-2] void QIntValidator(int, int, class QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QIntValidatorC2EiiP7QObject(int bottom, int top, QObject * parent) {
  return  new QIntValidator(bottom, top, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:98
// [-2] void ~QIntValidator()
extern "C" Q_DECL_EXPORT
void C_ZN13QIntValidatorD2Ev(void *this_) {
  delete (QIntValidator*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:100
// [4] QValidator::State validate(class QString &, int &)
extern "C" Q_DECL_EXPORT
QValidator::State C_ZNK13QIntValidator8validateER7QStringRi(void *this_, QString* arg0, int & arg1) {
  return (QValidator::State)((QIntValidator*)this_)->validate(*arg0, arg1);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:101
// [-2] void fixup(class QString &)
extern "C" Q_DECL_EXPORT
void C_ZNK13QIntValidator5fixupER7QString(void *this_, QString* input) {
  ((QIntValidator*)this_)->fixup(*input);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:103
// [-2] void setBottom(int)
extern "C" Q_DECL_EXPORT
void C_ZN13QIntValidator9setBottomEi(void *this_, int arg0) {
  ((QIntValidator*)this_)->setBottom(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:104
// [-2] void setTop(int)
extern "C" Q_DECL_EXPORT
void C_ZN13QIntValidator6setTopEi(void *this_, int arg0) {
  ((QIntValidator*)this_)->setTop(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:105
// [-2] void setRange(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN13QIntValidator8setRangeEii(void *this_, int bottom, int top) {
  ((QIntValidator*)this_)->setRange(bottom, top);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:107
// [4] int bottom()
extern "C" Q_DECL_EXPORT
int C_ZNK13QIntValidator6bottomEv(void *this_) {
  return (int)((QIntValidator*)this_)->bottom();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:108
// [4] int top()
extern "C" Q_DECL_EXPORT
int C_ZNK13QIntValidator3topEv(void *this_) {
  return (int)((QIntValidator*)this_)->top();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:110
// [-2] void bottomChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN13QIntValidator13bottomChangedEi(void *this_, int bottom) {
  ((QIntValidator*)this_)->bottomChanged(bottom);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:111
// [-2] void topChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN13QIntValidator10topChangedEi(void *this_, int top) {
  ((QIntValidator*)this_)->topChanged(top);
}

//  main block end
