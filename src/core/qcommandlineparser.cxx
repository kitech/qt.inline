// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtCore/qcommandlineparser.h
// dst-file: /src/core/qcommandlineparser.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qcommandlineparser.h>


#include <qstring.h>
#include <qstringlist.h>
#include <qcommandlineoption.h>
// <= header block end

// main block begin =>
void __keep_qcommandlineparser_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QCommandLineParser_Class_Size()
{
  return sizeof(QCommandLineParser);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qcommandlineparser.h', line 70, column 10>
//   // proto:  void QCommandLineParser::process(const QStringList & arguments);
// _ZN18QCommandLineParser7processERK11QStringList process(const class QStringList &)
extern "C"
void
C_ZN18QCommandLineParser7processERK11QStringList(void *qthis,
const QStringList* arg1) {
  ((QCommandLineParser*)qthis)->process(*((const QStringList*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qcommandlineparser.h', line 77, column 13>
//   // proto:  QString QCommandLineParser::value(const QString & name);
// _ZNK18QCommandLineParser5valueERK7QString value(const class QString &)
extern "C"
QString*
C_ZNK18QCommandLineParser5valueERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QCommandLineParser*)qthis)->value(*((const QString*)arg1));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qcommandlineparser.h', line 74, column 13>
//   // proto:  QString QCommandLineParser::errorText();
// _ZNK18QCommandLineParser9errorTextEv errorText()
extern "C"
QString*
C_ZNK18QCommandLineParser9errorTextEv(void *qthis) {
  auto ret =
  ((QCommandLineParser*)qthis)->errorText();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qcommandlineparser.h', line 68, column 10>
//   // proto:  void QCommandLineParser::clearPositionalArguments();
// _ZN18QCommandLineParser24clearPositionalArgumentsEv clearPositionalArguments()
extern "C"
void
C_ZN18QCommandLineParser24clearPositionalArgumentsEv(void *qthis) {
  ((QCommandLineParser*)qthis)->clearPositionalArguments();
}
// <SourceLocation file '/usr/include/qt/QtCore/qcommandlineparser.h', line 58, column 10>
//   // proto:  void QCommandLineParser::setSingleDashWordOptionMode(QCommandLineParser::SingleDashWordOptionMode parsingMode);
// _ZN18QCommandLineParser27setSingleDashWordOptionModeENS_24SingleDashWordOptionModeE setSingleDashWordOptionMode(enum QCommandLineParser::SingleDashWordOptionMode)
extern "C"
void
C_ZN18QCommandLineParser27setSingleDashWordOptionModeENS_24SingleDashWordOptionModeE(void *qthis,
QCommandLineParser::SingleDashWordOptionMode arg1) {
  ((QCommandLineParser*)qthis)->setSingleDashWordOptionMode(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qcommandlineparser.h', line 82, column 17>
//   // proto:  QStringList QCommandLineParser::values(const QCommandLineOption & option);
// _ZNK18QCommandLineParser6valuesERK18QCommandLineOption values(const class QCommandLineOption &)
extern "C"
QStringList*
C_ZNK18QCommandLineParser6valuesERK18QCommandLineOption(void *qthis,
const QCommandLineOption* arg1) {
  auto ret =
  ((QCommandLineParser*)qthis)->values(*((const QCommandLineOption*)arg1));
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qcommandlineparser.h', line 76, column 10>
//   // proto:  bool QCommandLineParser::isSet(const QString & name);
// _ZNK18QCommandLineParser5isSetERK7QString isSet(const class QString &)
extern "C"
bool
C_ZNK18QCommandLineParser5isSetERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QCommandLineParser*)qthis)->isSet(*((const QString*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qcommandlineparser.h', line 89, column 21>
//   // proto:  void QCommandLineParser::showHelp(int exitCode);
// _ZN18QCommandLineParser8showHelpEi showHelp(int)
extern "C"
void
C_ZN18QCommandLineParser8showHelpEi(void *qthis,
int arg1) {
  ((QCommandLineParser*)qthis)->showHelp(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qcommandlineparser.h', line 60, column 10>
//   // proto:  bool QCommandLineParser::addOption(const QCommandLineOption & commandLineOption);
// _ZN18QCommandLineParser9addOptionERK18QCommandLineOption addOption(const class QCommandLineOption &)
extern "C"
bool
C_ZN18QCommandLineParser9addOptionERK18QCommandLineOption(void *qthis,
const QCommandLineOption* arg1) {
  auto ret =
  ((QCommandLineParser*)qthis)->addOption(*((const QCommandLineOption*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qcommandlineparser.h', line 88, column 21>
//   // proto:  void QCommandLineParser::showVersion();
// _ZN18QCommandLineParser11showVersionEv showVersion()
extern "C"
void
C_ZN18QCommandLineParser11showVersionEv(void *qthis) {
  ((QCommandLineParser*)qthis)->showVersion();
}
// <SourceLocation file '/usr/include/qt/QtCore/qcommandlineparser.h', line 64, column 24>
//   // proto:  QCommandLineOption QCommandLineParser::addHelpOption();
// _ZN18QCommandLineParser13addHelpOptionEv addHelpOption()
extern "C"
QCommandLineOption*
C_ZN18QCommandLineParser13addHelpOptionEv(void *qthis) {
  auto ret =
  ((QCommandLineParser*)qthis)->addHelpOption();
  return new QCommandLineOption(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qcommandlineparser.h', line 85, column 17>
//   // proto:  QStringList QCommandLineParser::optionNames();
// _ZNK18QCommandLineParser11optionNamesEv optionNames()
extern "C"
QStringList*
C_ZNK18QCommandLineParser11optionNamesEv(void *qthis) {
  auto ret =
  ((QCommandLineParser*)qthis)->optionNames();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qcommandlineparser.h', line 80, column 10>
//   // proto:  bool QCommandLineParser::isSet(const QCommandLineOption & option);
// _ZNK18QCommandLineParser5isSetERK18QCommandLineOption isSet(const class QCommandLineOption &)
extern "C"
bool
C_ZNK18QCommandLineParser5isSetERK18QCommandLineOption(void *qthis,
const QCommandLineOption* arg1) {
  auto ret =
  ((QCommandLineParser*)qthis)->isSet(*((const QCommandLineOption*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qcommandlineparser.h', line 67, column 10>
//   // proto:  void QCommandLineParser::addPositionalArgument(const QString & name, const QString & description, const QString & syntax);
// _ZN18QCommandLineParser21addPositionalArgumentERK7QStringS2_S2_ addPositionalArgument(const class QString &, const class QString &, const class QString &)
extern "C"
void
C_ZN18QCommandLineParser21addPositionalArgumentERK7QStringS2_S2_(void *qthis,
const QString* arg1,
const QString* arg2,
const QString* arg3) {
  ((QCommandLineParser*)qthis)->addPositionalArgument(*((const QString*)arg1),
*((const QString*)arg2),
*((const QString*)arg3));
}
//   // proto:  void QCommandLineParser::~QCommandLineParser();
extern "C"
void C_ZN18QCommandLineParserD2Ev(void *qthis) {
  delete (QCommandLineParser*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qcommandlineparser.h', line 71, column 10>
//   // proto:  void QCommandLineParser::process(const QCoreApplication & app);
// _ZN18QCommandLineParser7processERK16QCoreApplication process(const class QCoreApplication &)
extern "C"
void
C_ZN18QCommandLineParser7processERK16QCoreApplication(void *qthis,
const QCoreApplication* arg1) {
  ((QCommandLineParser*)qthis)->process(*((const QCoreApplication*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qcommandlineparser.h', line 90, column 13>
//   // proto:  QString QCommandLineParser::helpText();
// _ZNK18QCommandLineParser8helpTextEv helpText()
extern "C"
QString*
C_ZNK18QCommandLineParser8helpTextEv(void *qthis) {
  auto ret =
  ((QCommandLineParser*)qthis)->helpText();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qcommandlineparser.h', line 78, column 17>
//   // proto:  QStringList QCommandLineParser::values(const QString & name);
// _ZNK18QCommandLineParser6valuesERK7QString values(const class QString &)
extern "C"
QStringList*
C_ZNK18QCommandLineParser6valuesERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QCommandLineParser*)qthis)->values(*((const QString*)arg1));
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qcommandlineparser.h', line 66, column 13>
//   // proto:  QString QCommandLineParser::applicationDescription();
// _ZNK18QCommandLineParser22applicationDescriptionEv applicationDescription()
extern "C"
QString*
C_ZNK18QCommandLineParser22applicationDescriptionEv(void *qthis) {
  auto ret =
  ((QCommandLineParser*)qthis)->applicationDescription();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qcommandlineparser.h', line 81, column 13>
//   // proto:  QString QCommandLineParser::value(const QCommandLineOption & option);
// _ZNK18QCommandLineParser5valueERK18QCommandLineOption value(const class QCommandLineOption &)
extern "C"
QString*
C_ZNK18QCommandLineParser5valueERK18QCommandLineOption(void *qthis,
const QCommandLineOption* arg1) {
  auto ret =
  ((QCommandLineParser*)qthis)->value(*((const QCommandLineOption*)arg1));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qcommandlineparser.h', line 63, column 24>
//   // proto:  QCommandLineOption QCommandLineParser::addVersionOption();
// _ZN18QCommandLineParser16addVersionOptionEv addVersionOption()
extern "C"
QCommandLineOption*
C_ZN18QCommandLineParser16addVersionOptionEv(void *qthis) {
  auto ret =
  ((QCommandLineParser*)qthis)->addVersionOption();
  return new QCommandLineOption(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qcommandlineparser.h', line 84, column 17>
//   // proto:  QStringList QCommandLineParser::positionalArguments();
// _ZNK18QCommandLineParser19positionalArgumentsEv positionalArguments()
extern "C"
QStringList*
C_ZNK18QCommandLineParser19positionalArgumentsEv(void *qthis) {
  auto ret =
  ((QCommandLineParser*)qthis)->positionalArguments();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qcommandlineparser.h', line 65, column 10>
//   // proto:  void QCommandLineParser::setApplicationDescription(const QString & description);
// _ZN18QCommandLineParser25setApplicationDescriptionERK7QString setApplicationDescription(const class QString &)
extern "C"
void
C_ZN18QCommandLineParser25setApplicationDescriptionERK7QString(void *qthis,
const QString* arg1) {
  ((QCommandLineParser*)qthis)->setApplicationDescription(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qcommandlineparser.h', line 51, column 5>
//   // proto:  void QCommandLineParser::QCommandLineParser();
extern "C"
QCommandLineParser*
C_ZN18QCommandLineParserC2Ev() {
  auto ret = new QCommandLineParser();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qcommandlineparser.h', line 73, column 10>
//   // proto:  bool QCommandLineParser::parse(const QStringList & arguments);
// _ZN18QCommandLineParser5parseERK11QStringList parse(const class QStringList &)
extern "C"
bool
C_ZN18QCommandLineParser5parseERK11QStringList(void *qthis,
const QStringList* arg1) {
  auto ret =
  ((QCommandLineParser*)qthis)->parse(*((const QStringList*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qcommandlineparser.h', line 86, column 17>
//   // proto:  QStringList QCommandLineParser::unknownOptionNames();
// _ZNK18QCommandLineParser18unknownOptionNamesEv unknownOptionNames()
extern "C"
QStringList*
C_ZNK18QCommandLineParser18unknownOptionNamesEv(void *qthis) {
  auto ret =
  ((QCommandLineParser*)qthis)->unknownOptionNames();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qcommandlineparser.h', line 61, column 10>
//   // proto:  bool QCommandLineParser::addOptions(const QList<QCommandLineOption> & options);
// _ZN18QCommandLineParser10addOptionsERK5QListI18QCommandLineOptionE addOptions(const QList<class QCommandLineOption> &)
extern "C"
bool
C_ZN18QCommandLineParser10addOptionsERK5QListI18QCommandLineOptionE(void *qthis,
const QList<QCommandLineOption>* arg1) {
  auto ret =
  ((QCommandLineParser*)qthis)->addOptions(*((const QList<QCommandLineOption>*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <= ext block end

// body block begin =>
// <= body block end

