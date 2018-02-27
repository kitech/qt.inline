//  header block begin
// /usr/include/qt/QtCore/qlogging.h
#ifndef protected
#define protected public
#endif
#include <qlogging.h>
#include <QtCore>
#include "callback_inherit.h"

// QMessageLogger is pure virtual: false
// QMessageLogger has virtual projected: false
//  header block end

//  main block begin

class MyQMessageLogger : public QMessageLogger {
public:
  virtual ~MyQMessageLogger() {}
// void QMessageLogger()
MyQMessageLogger() : QMessageLogger() {}
// void QMessageLogger(const char *, int, const char *)
MyQMessageLogger(const char * file, int line, const char * function) : QMessageLogger(file, line, function) {}
// void QMessageLogger(const char *, int, const char *, const char *)
MyQMessageLogger(const char * file, int line, const char * function, const char * category) : QMessageLogger(file, line, function, category) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlogging.h:90
// [-2] void QMessageLogger()
extern "C"
void* C_ZN14QMessageLoggerC2Ev() {
  return  new QMessageLogger();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlogging.h:91
// [-2] void QMessageLogger(const char *, int, const char *)
extern "C"
void* C_ZN14QMessageLoggerC2EPKciS1_(const char * file, int line, const char * function) {
  return  new QMessageLogger(file, line, function);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlogging.h:93
// [-2] void QMessageLogger(const char *, int, const char *, const char *)
extern "C"
void* C_ZN14QMessageLoggerC2EPKciS1_S1_(const char * file, int line, const char * function, const char * category) {
  return  new QMessageLogger(file, line, function, category);
}

extern "C"
void C_ZN14QMessageLoggerD2Ev(void *this_) {
  delete (QMessageLogger*)(this_);
}
//  main block end
