// /usr/include/qt/QtCore/qlogging.h
#include <qlogging.h>
#include <QtCore>

// inline
// /usr/include/qt/QtCore/qlogging.h:90
// void QMessageLogger()
extern "C"
void* C_ZN14QMessageLoggerC1Ev() {
  return new QMessageLogger();
}
// inline
// /usr/include/qt/QtCore/qlogging.h:91
// void QMessageLogger(const char *, int, const char *)
extern "C"
void* C_ZN14QMessageLoggerC1EPKciS1_(const char * file, int line, const char * function) {
  return new QMessageLogger(file, line, function);
}
// inline
// /usr/include/qt/QtCore/qlogging.h:93
// void QMessageLogger(const char *, int, const char *, const char *)
extern "C"
void* C_ZN14QMessageLoggerC1EPKciS1_S1_(const char * file, int line, const char * function, const char * category) {
  return new QMessageLogger(file, line, function, category);
}
// /usr/include/qt/QtCore/qlogging.h:120
// QDebug debug()
extern "C"
void C_ZNK14QMessageLogger5debugEv(void *this_) {
  /*return*/ ((QMessageLogger*)this_)->debug();
}
// /usr/include/qt/QtCore/qlogging.h:121
// QDebug debug(const class QLoggingCategory &)
extern "C"
void C_ZNK14QMessageLogger5debugERK16QLoggingCategory(void *this_, const QLoggingCategory & cat) {
  /*return*/ ((QMessageLogger*)this_)->debug(cat);
}
// /usr/include/qt/QtCore/qlogging.h:123
// QDebug info()
extern "C"
void C_ZNK14QMessageLogger4infoEv(void *this_) {
  /*return*/ ((QMessageLogger*)this_)->info();
}
// /usr/include/qt/QtCore/qlogging.h:124
// QDebug info(const class QLoggingCategory &)
extern "C"
void C_ZNK14QMessageLogger4infoERK16QLoggingCategory(void *this_, const QLoggingCategory & cat) {
  /*return*/ ((QMessageLogger*)this_)->info(cat);
}
// /usr/include/qt/QtCore/qlogging.h:126
// QDebug warning()
extern "C"
void C_ZNK14QMessageLogger7warningEv(void *this_) {
  /*return*/ ((QMessageLogger*)this_)->warning();
}
// /usr/include/qt/QtCore/qlogging.h:127
// QDebug warning(const class QLoggingCategory &)
extern "C"
void C_ZNK14QMessageLogger7warningERK16QLoggingCategory(void *this_, const QLoggingCategory & cat) {
  /*return*/ ((QMessageLogger*)this_)->warning(cat);
}
// /usr/include/qt/QtCore/qlogging.h:129
// QDebug critical()
extern "C"
void C_ZNK14QMessageLogger8criticalEv(void *this_) {
  /*return*/ ((QMessageLogger*)this_)->critical();
}
// /usr/include/qt/QtCore/qlogging.h:130
// QDebug critical(const class QLoggingCategory &)
extern "C"
void C_ZNK14QMessageLogger8criticalERK16QLoggingCategory(void *this_, const QLoggingCategory & cat) {
  /*return*/ ((QMessageLogger*)this_)->critical(cat);
}
// /usr/include/qt/QtCore/qlogging.h:133
// QNoDebug noDebug()
extern "C"
void C_ZNK14QMessageLogger7noDebugEv(void *this_) {
  /*return*/ ((QMessageLogger*)this_)->noDebug();
}