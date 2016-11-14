// /usr/include/qt/QtCore/qcommandlineparser.h
#include <qcommandlineparser.h>
#include <QtCore>

// /usr/include/qt/QtCore/qcommandlineparser.h:57
// void QCommandLineParser()
extern "C"
void* C_ZN18QCommandLineParserC1Ev() {
  return new QCommandLineParser();
}
// /usr/include/qt/QtCore/qcommandlineparser.h:58
// void ~QCommandLineParser()
extern "C"
void C_ZN18QCommandLineParserD1Ev(void *this_) {
  delete (QCommandLineParser*)(this_);
}
// /usr/include/qt/QtCore/qcommandlineparser.h:64
// void setSingleDashWordOptionMode(enum QCommandLineParser::SingleDashWordOptionMode)
extern "C"
void C_ZN18QCommandLineParser27setSingleDashWordOptionModeENS_24SingleDashWordOptionModeE(void *this_, QCommandLineParser::SingleDashWordOptionMode parsingMode) {
  ((QCommandLineParser*)this_)->setSingleDashWordOptionMode(parsingMode);
}
// /usr/include/qt/QtCore/qcommandlineparser.h:70
// void setOptionsAfterPositionalArgumentsMode(enum QCommandLineParser::OptionsAfterPositionalArgumentsMode)
extern "C"
void C_ZN18QCommandLineParser38setOptionsAfterPositionalArgumentsModeENS_35OptionsAfterPositionalArgumentsModeE(void *this_, QCommandLineParser::OptionsAfterPositionalArgumentsMode mode) {
  ((QCommandLineParser*)this_)->setOptionsAfterPositionalArgumentsMode(mode);
}
// /usr/include/qt/QtCore/qcommandlineparser.h:72
// bool addOption(const class QCommandLineOption &)
extern "C"
void C_ZN18QCommandLineParser9addOptionERK18QCommandLineOption(void *this_, const QCommandLineOption & commandLineOption) {
  /*return*/ ((QCommandLineParser*)this_)->addOption(commandLineOption);
}
// /usr/include/qt/QtCore/qcommandlineparser.h:73
// bool addOptions(const QList<class QCommandLineOption> &)
extern "C"
void C_ZN18QCommandLineParser10addOptionsERK5QListI18QCommandLineOptionE(void *this_, const QList<QCommandLineOption> & options) {
  /*return*/ ((QCommandLineParser*)this_)->addOptions(options);
}
// /usr/include/qt/QtCore/qcommandlineparser.h:75
// QCommandLineOption addVersionOption()
extern "C"
void C_ZN18QCommandLineParser16addVersionOptionEv(void *this_) {
  /*return*/ ((QCommandLineParser*)this_)->addVersionOption();
}
// /usr/include/qt/QtCore/qcommandlineparser.h:76
// QCommandLineOption addHelpOption()
extern "C"
void C_ZN18QCommandLineParser13addHelpOptionEv(void *this_) {
  /*return*/ ((QCommandLineParser*)this_)->addHelpOption();
}
// /usr/include/qt/QtCore/qcommandlineparser.h:77
// void setApplicationDescription(const class QString &)
extern "C"
void C_ZN18QCommandLineParser25setApplicationDescriptionERK7QString(void *this_, const QString & description) {
  ((QCommandLineParser*)this_)->setApplicationDescription(description);
}
// /usr/include/qt/QtCore/qcommandlineparser.h:78
// QString applicationDescription()
extern "C"
void C_ZNK18QCommandLineParser22applicationDescriptionEv(void *this_) {
  /*return*/ ((QCommandLineParser*)this_)->applicationDescription();
}
// /usr/include/qt/QtCore/qcommandlineparser.h:79
// void addPositionalArgument(const class QString &, const class QString &, const class QString &)
extern "C"
void C_ZN18QCommandLineParser21addPositionalArgumentERK7QStringS2_S2_(void *this_, const QString & name, const QString & description, const QString & syntax) {
  ((QCommandLineParser*)this_)->addPositionalArgument(name, description, syntax);
}
// /usr/include/qt/QtCore/qcommandlineparser.h:80
// void clearPositionalArguments()
extern "C"
void C_ZN18QCommandLineParser24clearPositionalArgumentsEv(void *this_) {
  ((QCommandLineParser*)this_)->clearPositionalArguments();
}
// /usr/include/qt/QtCore/qcommandlineparser.h:82
// void process(const class QStringList &)
extern "C"
void C_ZN18QCommandLineParser7processERK11QStringList(void *this_, const QStringList & arguments) {
  ((QCommandLineParser*)this_)->process(arguments);
}
// /usr/include/qt/QtCore/qcommandlineparser.h:83
// void process(const class QCoreApplication &)
extern "C"
void C_ZN18QCommandLineParser7processERK16QCoreApplication(void *this_, const QCoreApplication & app) {
  ((QCommandLineParser*)this_)->process(app);
}
// /usr/include/qt/QtCore/qcommandlineparser.h:85
// bool parse(const class QStringList &)
extern "C"
void C_ZN18QCommandLineParser5parseERK11QStringList(void *this_, const QStringList & arguments) {
  /*return*/ ((QCommandLineParser*)this_)->parse(arguments);
}
// /usr/include/qt/QtCore/qcommandlineparser.h:86
// QString errorText()
extern "C"
void C_ZNK18QCommandLineParser9errorTextEv(void *this_) {
  /*return*/ ((QCommandLineParser*)this_)->errorText();
}
// /usr/include/qt/QtCore/qcommandlineparser.h:88
// bool isSet(const class QString &)
extern "C"
void C_ZNK18QCommandLineParser5isSetERK7QString(void *this_, const QString & name) {
  /*return*/ ((QCommandLineParser*)this_)->isSet(name);
}
// /usr/include/qt/QtCore/qcommandlineparser.h:89
// QString value(const class QString &)
extern "C"
void C_ZNK18QCommandLineParser5valueERK7QString(void *this_, const QString & name) {
  /*return*/ ((QCommandLineParser*)this_)->value(name);
}
// /usr/include/qt/QtCore/qcommandlineparser.h:90
// QStringList values(const class QString &)
extern "C"
void C_ZNK18QCommandLineParser6valuesERK7QString(void *this_, const QString & name) {
  /*return*/ ((QCommandLineParser*)this_)->values(name);
}
// /usr/include/qt/QtCore/qcommandlineparser.h:92
// bool isSet(const class QCommandLineOption &)
extern "C"
void C_ZNK18QCommandLineParser5isSetERK18QCommandLineOption(void *this_, const QCommandLineOption & option) {
  /*return*/ ((QCommandLineParser*)this_)->isSet(option);
}
// /usr/include/qt/QtCore/qcommandlineparser.h:93
// QString value(const class QCommandLineOption &)
extern "C"
void C_ZNK18QCommandLineParser5valueERK18QCommandLineOption(void *this_, const QCommandLineOption & option) {
  /*return*/ ((QCommandLineParser*)this_)->value(option);
}
// /usr/include/qt/QtCore/qcommandlineparser.h:94
// QStringList values(const class QCommandLineOption &)
extern "C"
void C_ZNK18QCommandLineParser6valuesERK18QCommandLineOption(void *this_, const QCommandLineOption & option) {
  /*return*/ ((QCommandLineParser*)this_)->values(option);
}
// /usr/include/qt/QtCore/qcommandlineparser.h:96
// QStringList positionalArguments()
extern "C"
void C_ZNK18QCommandLineParser19positionalArgumentsEv(void *this_) {
  /*return*/ ((QCommandLineParser*)this_)->positionalArguments();
}
// /usr/include/qt/QtCore/qcommandlineparser.h:97
// QStringList optionNames()
extern "C"
void C_ZNK18QCommandLineParser11optionNamesEv(void *this_) {
  /*return*/ ((QCommandLineParser*)this_)->optionNames();
}
// /usr/include/qt/QtCore/qcommandlineparser.h:98
// QStringList unknownOptionNames()
extern "C"
void C_ZNK18QCommandLineParser18unknownOptionNamesEv(void *this_) {
  /*return*/ ((QCommandLineParser*)this_)->unknownOptionNames();
}
// /usr/include/qt/QtCore/qcommandlineparser.h:100
// void showVersion()
extern "C"
void C_ZN18QCommandLineParser11showVersionEv(void *this_) {
  ((QCommandLineParser*)this_)->showVersion();
}
// /usr/include/qt/QtCore/qcommandlineparser.h:101
// void showHelp(int)
extern "C"
void C_ZN18QCommandLineParser8showHelpEi(void *this_, int exitCode) {
  ((QCommandLineParser*)this_)->showHelp(exitCode);
}
// /usr/include/qt/QtCore/qcommandlineparser.h:102
// QString helpText()
extern "C"
void C_ZNK18QCommandLineParser8helpTextEv(void *this_) {
  /*return*/ ((QCommandLineParser*)this_)->helpText();
}