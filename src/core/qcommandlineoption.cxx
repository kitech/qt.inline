//  header block begin

#ifndef QT_MINIMAL
// since 0x050200
// /usr/include/qt/QtCore/qcommandlineoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcommandlineoption.h>
#include <QtCore>
#include "callback_inherit.h"

// QCommandLineOption is pure virtual: false
// QCommandLineOption has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQCommandLineOption_t {
  QByteArrayData data[1];
  char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQCommandLineOption_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQCommandLineOption_t qt_meta_stringdata_MyQCommandLineOption = {
   {
  QT_MOC_LITERAL(0, 0, 20), // "MyQCommandLineOption"
  },
  "MyQCommandLineOption"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQCommandLineOption[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQCommandLineOption : public QCommandLineOption {
public:
  virtual ~MyQCommandLineOption() {}
// void QCommandLineOption(const QString &)
MyQCommandLineOption(const QString & name) : QCommandLineOption(name) {}
// void QCommandLineOption(const QStringList &)
MyQCommandLineOption(const QStringList & names) : QCommandLineOption(names) {}
// void QCommandLineOption(const QString &, const QString &, const QString &, const QString &)
MyQCommandLineOption(const QString & name, const QString & description, const QString & valueName, const QString & defaultValue) : QCommandLineOption(name, description, valueName, defaultValue) {}
// void QCommandLineOption(const QStringList &, const QString &, const QString &, const QString &)
MyQCommandLineOption(const QStringList & names, const QString & description, const QString & valueName, const QString & defaultValue) : QCommandLineOption(names, description, valueName, defaultValue) {}
// void QCommandLineOption(const QCommandLineOption &)
MyQCommandLineOption(const QCommandLineOption & other) : QCommandLineOption(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:61
// [-2] void QCommandLineOption(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN18QCommandLineOptionC2ERK7QString(QString* name) {
  return  new QCommandLineOption(*name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:62
// [-2] void QCommandLineOption(const QStringList &)
extern "C" Q_DECL_EXPORT
void* C_ZN18QCommandLineOptionC2ERK11QStringList(QStringList* names) {
  return  new QCommandLineOption(*names);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:63
// [-2] void QCommandLineOption(const QString &, const QString &, const QString &, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN18QCommandLineOptionC2ERK7QStringS2_S2_S2_(QString* name, QString* description, QString* valueName, QString* defaultValue) {
  return  new QCommandLineOption(*name, *description, *valueName, *defaultValue);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:66
// [-2] void QCommandLineOption(const QStringList &, const QString &, const QString &, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN18QCommandLineOptionC2ERK11QStringListRK7QStringS5_S5_(QStringList* names, QString* description, QString* valueName, QString* defaultValue) {
  return  new QCommandLineOption(*names, *description, *valueName, *defaultValue);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:69
// [-2] void QCommandLineOption(const QCommandLineOption &)
extern "C" Q_DECL_EXPORT
void* C_ZN18QCommandLineOptionC2ERKS_(QCommandLineOption* other) {
  return  new QCommandLineOption(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:71
// [-2] void ~QCommandLineOption()
extern "C" Q_DECL_EXPORT
void C_ZN18QCommandLineOptionD2Ev(void *this_) {
  delete (QCommandLineOption*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:73
// [8] QCommandLineOption & operator=(const QCommandLineOption &)
extern "C" Q_DECL_EXPORT
void* C_ZN18QCommandLineOptionaSERKS_(void *this_, QCommandLineOption* other) {
  auto& rv = ((QCommandLineOption*)this_)->operator=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:75
// [8] QCommandLineOption & operator=(QCommandLineOption &&)
extern "C" Q_DECL_EXPORT
void* C_ZN18QCommandLineOptionaSEOS_(void *this_, QCommandLineOption && other) {
  auto& rv = ((QCommandLineOption*)this_)->operator=(other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:78
// [-2] void swap(QCommandLineOption &)
extern "C" Q_DECL_EXPORT
void C_ZN18QCommandLineOption4swapERS_(void *this_, QCommandLineOption* other) {
  ((QCommandLineOption*)this_)->swap(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:81
// [8] QStringList names()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QCommandLineOption5namesEv(void *this_) {
  auto rv = ((QCommandLineOption*)this_)->names();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:83
// [-2] void setValueName(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN18QCommandLineOption12setValueNameERK7QString(void *this_, QString* name) {
  ((QCommandLineOption*)this_)->setValueName(*name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:84
// [8] QString valueName()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QCommandLineOption9valueNameEv(void *this_) {
  auto rv = ((QCommandLineOption*)this_)->valueName();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:86
// [-2] void setDescription(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN18QCommandLineOption14setDescriptionERK7QString(void *this_, QString* description) {
  ((QCommandLineOption*)this_)->setDescription(*description);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:87
// [8] QString description()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QCommandLineOption11descriptionEv(void *this_) {
  auto rv = ((QCommandLineOption*)this_)->description();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:89
// [-2] void setDefaultValue(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN18QCommandLineOption15setDefaultValueERK7QString(void *this_, QString* defaultValue) {
  ((QCommandLineOption*)this_)->setDefaultValue(*defaultValue);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:90
// [-2] void setDefaultValues(const QStringList &)
extern "C" Q_DECL_EXPORT
void C_ZN18QCommandLineOption16setDefaultValuesERK11QStringList(void *this_, QStringList* defaultValues) {
  ((QCommandLineOption*)this_)->setDefaultValues(*defaultValues);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:91
// [8] QStringList defaultValues()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QCommandLineOption13defaultValuesEv(void *this_) {
  auto rv = ((QCommandLineOption*)this_)->defaultValues();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtCore/qcommandlineoption.h:93
// [4] QCommandLineOption::Flags flags()
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
QCommandLineOption::Flags* C_ZNK18QCommandLineOption5flagsEv(void *this_) {
  auto rv = ((QCommandLineOption*)this_)->flags();
return new QCommandLineOption::Flags(rv);
}
#endif // QT_VERSION >= 0x050800

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:94
// [-2] void setFlags(QCommandLineOption::Flags)
extern "C" Q_DECL_EXPORT
void C_ZN18QCommandLineOption8setFlagsE6QFlagsINS_4FlagEE(void *this_, QFlags<QCommandLineOption::Flag> aflags) {
  ((QCommandLineOption*)this_)->setFlags(aflags);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:98
// [-2] void setHidden(bool)
extern "C" Q_DECL_EXPORT
void C_ZN18QCommandLineOption9setHiddenEb(void *this_, bool hidden) {
  ((QCommandLineOption*)this_)->setHidden(hidden);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:100
// [1] bool isHidden()
extern "C" Q_DECL_EXPORT
bool C_ZNK18QCommandLineOption8isHiddenEv(void *this_) {
  return (bool)((QCommandLineOption*)this_)->isHidden();
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #ifndef QT_MINIMAL
//  footer block end
