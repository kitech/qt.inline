//  header block begin
// /usr/include/qt/QtCore/qcommandlineoption.h
#include <qcommandlineoption.h>
#include <QtCore>

// QCommandLineOption is pure virtual: false
//  header block end

//  main block begin

class MyQCommandLineOption : public QCommandLineOption {
public:
MyQCommandLineOption(const QString & name) : QCommandLineOption(name) {}
MyQCommandLineOption(const QStringList & names) : QCommandLineOption(names) {}
MyQCommandLineOption(const QString & name, const QString & description, const QString & valueName, const QString & defaultValue) : QCommandLineOption(name, description, valueName, defaultValue) {}
MyQCommandLineOption(const QStringList & names, const QString & description, const QString & valueName, const QString & defaultValue) : QCommandLineOption(names, description, valueName, defaultValue) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:61
// [-2] void QCommandLineOption(const class QString &)
extern "C"
void* C_ZN18QCommandLineOptionC1ERK7QString(const QString & name) {
  (MyQCommandLineOption*)(0);
  return  new MyQCommandLineOption(name);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:62
// [-2] void QCommandLineOption(const class QStringList &)
extern "C"
void* C_ZN18QCommandLineOptionC1ERK11QStringList(const QStringList & names) {
  (MyQCommandLineOption*)(0);
  return  new MyQCommandLineOption(names);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:63
// [-2] void QCommandLineOption(const class QString &, const class QString &, const class QString &, const class QString &)
extern "C"
void* C_ZN18QCommandLineOptionC1ERK7QStringS2_S2_S2_(const QString & name, const QString & description, const QString & valueName, const QString & defaultValue) {
  (MyQCommandLineOption*)(0);
  return  new MyQCommandLineOption(name, description, valueName, defaultValue);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:66
// [-2] void QCommandLineOption(const class QStringList &, const class QString &, const class QString &, const class QString &)
extern "C"
void* C_ZN18QCommandLineOptionC1ERK11QStringListRK7QStringS5_S5_(const QStringList & names, const QString & description, const QString & valueName, const QString & defaultValue) {
  (MyQCommandLineOption*)(0);
  return  new MyQCommandLineOption(names, description, valueName, defaultValue);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:71
// [-2] void ~QCommandLineOption()
extern "C"
void C_ZN18QCommandLineOptionD1Ev(void *this_) {
  delete (QCommandLineOption*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:78
// [-2] void swap(class QCommandLineOption &)
extern "C"
void C_ZN18QCommandLineOption4swapERS_(void *this_, QCommandLineOption & other) {
  ((QCommandLineOption*)this_)->swap(other);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:83
// [-2] void setValueName(const class QString &)
extern "C"
void C_ZN18QCommandLineOption12setValueNameERK7QString(void *this_, const QString & name) {
  ((QCommandLineOption*)this_)->setValueName(name);
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
void C_ZN18QCommandLineOption14setDescriptionERK7QString(void *this_, const QString & description) {
  ((QCommandLineOption*)this_)->setDescription(description);
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
void C_ZN18QCommandLineOption15setDefaultValueERK7QString(void *this_, const QString & defaultValue) {
  ((QCommandLineOption*)this_)->setDefaultValue(defaultValue);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:90
// [-2] void setDefaultValues(const class QStringList &)
extern "C"
void C_ZN18QCommandLineOption16setDefaultValuesERK11QStringList(void *this_, const QStringList & defaultValues) {
  ((QCommandLineOption*)this_)->setDefaultValues(defaultValues);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:93
// [4] QCommandLineOption::Flags flags()
extern "C"
void C_ZNK18QCommandLineOption5flagsEv(void *this_) {
  auto rv = ((QCommandLineOption*)this_)->flags();
/*return rv;*/
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
