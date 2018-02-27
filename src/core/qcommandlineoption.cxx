//  header block begin
// /usr/include/qt/QtCore/qcommandlineoption.h
#ifndef protected
#define protected public
#endif
#include <qcommandlineoption.h>
#include <QtCore>
#include "callback_inherit.h"

// QCommandLineOption is pure virtual: false
// QCommandLineOption has virtual projected: false
//  header block end

//  main block begin

class MyQCommandLineOption : public QCommandLineOption {
public:
  virtual ~MyQCommandLineOption() {}
// void QCommandLineOption(const class QString &)
MyQCommandLineOption(const QString & name) : QCommandLineOption(name) {}
// void QCommandLineOption(const class QStringList &)
MyQCommandLineOption(const QStringList & names) : QCommandLineOption(names) {}
// void QCommandLineOption(const class QString &, const class QString &, const class QString &, const class QString &)
MyQCommandLineOption(const QString & name, const QString & description, const QString & valueName, const QString & defaultValue) : QCommandLineOption(name, description, valueName, defaultValue) {}
// void QCommandLineOption(const class QStringList &, const class QString &, const class QString &, const class QString &)
MyQCommandLineOption(const QStringList & names, const QString & description, const QString & valueName, const QString & defaultValue) : QCommandLineOption(names, description, valueName, defaultValue) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:61
// [-2] void QCommandLineOption(const class QString &)
extern "C"
void* C_ZN18QCommandLineOptionC2ERK7QString(QString* name) {
  return  new QCommandLineOption(*name);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:62
// [-2] void QCommandLineOption(const class QStringList &)
extern "C"
void* C_ZN18QCommandLineOptionC2ERK11QStringList(QStringList* names) {
  return  new QCommandLineOption(*names);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:63
// [-2] void QCommandLineOption(const class QString &, const class QString &, const class QString &, const class QString &)
extern "C"
void* C_ZN18QCommandLineOptionC2ERK7QStringS2_S2_S2_(QString* name, QString* description, QString* valueName, QString* defaultValue) {
  return  new QCommandLineOption(*name, *description, *valueName, *defaultValue);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:66
// [-2] void QCommandLineOption(const class QStringList &, const class QString &, const class QString &, const class QString &)
extern "C"
void* C_ZN18QCommandLineOptionC2ERK11QStringListRK7QStringS5_S5_(QStringList* names, QString* description, QString* valueName, QString* defaultValue) {
  return  new QCommandLineOption(*names, *description, *valueName, *defaultValue);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:71
// [-2] void ~QCommandLineOption()
extern "C"
void C_ZN18QCommandLineOptionD2Ev(void *this_) {
  delete (QCommandLineOption*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:73
// [8] QCommandLineOption & operator=(const class QCommandLineOption &)
extern "C"
void* C_ZN18QCommandLineOptionaSERKS_(void *this_, QCommandLineOption* other) {
  auto& rv = ((QCommandLineOption*)this_)->operator=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:75
// [8] QCommandLineOption & operator=(class QCommandLineOption &&)
extern "C"
void* C_ZN18QCommandLineOptionaSEOS_(void *this_, QCommandLineOption && other) {
  auto& rv = ((QCommandLineOption*)this_)->operator=(other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:78
// [-2] void swap(class QCommandLineOption &)
extern "C"
void C_ZN18QCommandLineOption4swapERS_(void *this_, QCommandLineOption* other) {
  ((QCommandLineOption*)this_)->swap(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:81
// [8] QStringList names()
extern "C"
void* C_ZNK18QCommandLineOption5namesEv(void *this_) {
  auto rv = ((QCommandLineOption*)this_)->names();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:83
// [-2] void setValueName(const class QString &)
extern "C"
void C_ZN18QCommandLineOption12setValueNameERK7QString(void *this_, QString* name) {
  ((QCommandLineOption*)this_)->setValueName(*name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:84
// [8] QString valueName()
extern "C"
void* C_ZNK18QCommandLineOption9valueNameEv(void *this_) {
  auto rv = ((QCommandLineOption*)this_)->valueName();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:86
// [-2] void setDescription(const class QString &)
extern "C"
void C_ZN18QCommandLineOption14setDescriptionERK7QString(void *this_, QString* description) {
  ((QCommandLineOption*)this_)->setDescription(*description);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:87
// [8] QString description()
extern "C"
void* C_ZNK18QCommandLineOption11descriptionEv(void *this_) {
  auto rv = ((QCommandLineOption*)this_)->description();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:89
// [-2] void setDefaultValue(const class QString &)
extern "C"
void C_ZN18QCommandLineOption15setDefaultValueERK7QString(void *this_, QString* defaultValue) {
  ((QCommandLineOption*)this_)->setDefaultValue(*defaultValue);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:90
// [-2] void setDefaultValues(const class QStringList &)
extern "C"
void C_ZN18QCommandLineOption16setDefaultValuesERK11QStringList(void *this_, QStringList* defaultValues) {
  ((QCommandLineOption*)this_)->setDefaultValues(*defaultValues);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:91
// [8] QStringList defaultValues()
extern "C"
void* C_ZNK18QCommandLineOption13defaultValuesEv(void *this_) {
  auto rv = ((QCommandLineOption*)this_)->defaultValues();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:93
// [4] QCommandLineOption::Flags flags()
extern "C"
QCommandLineOption::Flags* C_ZNK18QCommandLineOption5flagsEv(void *this_) {
  auto rv = ((QCommandLineOption*)this_)->flags();
return new QCommandLineOption::Flags(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:94
// [-2] void setFlags(QCommandLineOption::Flags)
extern "C"
void C_ZN18QCommandLineOption8setFlagsE6QFlagsINS_4FlagEE(void *this_, QFlags<QCommandLineOption::Flag> aflags) {
  ((QCommandLineOption*)this_)->setFlags(aflags);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:98
// [-2] void setHidden(_Bool)
extern "C"
void C_ZN18QCommandLineOption9setHiddenEb(void *this_, bool hidden) {
  ((QCommandLineOption*)this_)->setHidden(hidden);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:100
// [1] bool isHidden()
extern "C"
bool C_ZNK18QCommandLineOption8isHiddenEv(void *this_) {
  return (bool)((QCommandLineOption*)this_)->isHidden();
}

//  main block end
