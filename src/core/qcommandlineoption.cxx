//  header block begin
// /usr/include/qt/QtCore/qcommandlineoption.h
#include <qcommandlineoption.h>
#include <QtCore>

//  header block end

//  main block begin
// /usr/include/qt/QtCore/qcommandlineoption.h:53
// void QCommandLineOption(const class QString &)
extern "C"
void* C_ZN18QCommandLineOptionC1ERK7QString(const QString & name) {
  return new QCommandLineOption(name);
}
// /usr/include/qt/QtCore/qcommandlineoption.h:54
// void QCommandLineOption(const class QStringList &)
extern "C"
void* C_ZN18QCommandLineOptionC1ERK11QStringList(const QStringList & names) {
  return new QCommandLineOption(names);
}
// /usr/include/qt/QtCore/qcommandlineoption.h:55
// void QCommandLineOption(const class QString &, const class QString &, const class QString &, const class QString &)
extern "C"
void* C_ZN18QCommandLineOptionC1ERK7QStringS2_S2_S2_(const QString & name, const QString & description, const QString & valueName, const QString & defaultValue) {
  return new QCommandLineOption(name, description, valueName, defaultValue);
}
// /usr/include/qt/QtCore/qcommandlineoption.h:58
// void QCommandLineOption(const class QStringList &, const class QString &, const class QString &, const class QString &)
extern "C"
void* C_ZN18QCommandLineOptionC1ERK11QStringListRK7QStringS5_S5_(const QStringList & names, const QString & description, const QString & valueName, const QString & defaultValue) {
  return new QCommandLineOption(names, description, valueName, defaultValue);
}
// /usr/include/qt/QtCore/qcommandlineoption.h:63
// void ~QCommandLineOption()
extern "C"
void C_ZN18QCommandLineOptionD1Ev(void *this_) {
  delete (QCommandLineOption*)(this_);
}
// inline
// /usr/include/qt/QtCore/qcommandlineoption.h:70
// void swap(class QCommandLineOption &)
extern "C"
void C_ZN18QCommandLineOption4swapERS_(void *this_, QCommandLineOption & other) {
  ((QCommandLineOption*)this_)->swap(other);
}
// /usr/include/qt/QtCore/qcommandlineoption.h:73
// QStringList names()
extern "C"
void C_ZNK18QCommandLineOption5namesEv(void *this_) {
  /*return*/ ((QCommandLineOption*)this_)->names();
}
// /usr/include/qt/QtCore/qcommandlineoption.h:75
// void setValueName(const class QString &)
extern "C"
void C_ZN18QCommandLineOption12setValueNameERK7QString(void *this_, const QString & name) {
  ((QCommandLineOption*)this_)->setValueName(name);
}
// /usr/include/qt/QtCore/qcommandlineoption.h:76
// QString valueName()
extern "C"
void C_ZNK18QCommandLineOption9valueNameEv(void *this_) {
  /*return*/ ((QCommandLineOption*)this_)->valueName();
}
// /usr/include/qt/QtCore/qcommandlineoption.h:78
// void setDescription(const class QString &)
extern "C"
void C_ZN18QCommandLineOption14setDescriptionERK7QString(void *this_, const QString & description) {
  ((QCommandLineOption*)this_)->setDescription(description);
}
// /usr/include/qt/QtCore/qcommandlineoption.h:79
// QString description()
extern "C"
void C_ZNK18QCommandLineOption11descriptionEv(void *this_) {
  /*return*/ ((QCommandLineOption*)this_)->description();
}
// /usr/include/qt/QtCore/qcommandlineoption.h:81
// void setDefaultValue(const class QString &)
extern "C"
void C_ZN18QCommandLineOption15setDefaultValueERK7QString(void *this_, const QString & defaultValue) {
  ((QCommandLineOption*)this_)->setDefaultValue(defaultValue);
}
// /usr/include/qt/QtCore/qcommandlineoption.h:82
// void setDefaultValues(const class QStringList &)
extern "C"
void C_ZN18QCommandLineOption16setDefaultValuesERK11QStringList(void *this_, const QStringList & defaultValues) {
  ((QCommandLineOption*)this_)->setDefaultValues(defaultValues);
}
// /usr/include/qt/QtCore/qcommandlineoption.h:83
// QStringList defaultValues()
extern "C"
void C_ZNK18QCommandLineOption13defaultValuesEv(void *this_) {
  /*return*/ ((QCommandLineOption*)this_)->defaultValues();
}
// /usr/include/qt/QtCore/qcommandlineoption.h:85
// void setHidden(_Bool)
extern "C"
void C_ZN18QCommandLineOption9setHiddenEb(void *this_, bool hidden) {
  ((QCommandLineOption*)this_)->setHidden(hidden);
}
// /usr/include/qt/QtCore/qcommandlineoption.h:86
// bool isHidden()
extern "C"
void C_ZNK18QCommandLineOption8isHiddenEv(void *this_) {
  /*return*/ ((QCommandLineOption*)this_)->isHidden();
}
//  main block end
