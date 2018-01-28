//  header block begin
// /usr/include/qt/QtCore/qlogging.h
#include <qlogging.h>
#include <QtCore>

// QMessageLogger is pure virtual: false
//  header block end

//  main block begin

class MyQMessageLogger : public QMessageLogger {
public:
MyQMessageLogger() : QMessageLogger() {}
MyQMessageLogger(const char * file, int line, const char * function) : QMessageLogger(file, line, function) {}
MyQMessageLogger(const char * file, int line, const char * function, const char * category) : QMessageLogger(file, line, function, category) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlogging.h:90
// [-2] void QMessageLogger()
extern "C"
void* C_ZN14QMessageLoggerC1Ev() {
  (MyQMessageLogger*)(0);
  return  new MyQMessageLogger();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlogging.h:91
// [-2] void QMessageLogger(const char *, int, const char *)
extern "C"
void* C_ZN14QMessageLoggerC1EPKciS1_(const char * file, int line, const char * function) {
  (MyQMessageLogger*)(0);
  return  new MyQMessageLogger(file, line, function);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlogging.h:93
// [-2] void QMessageLogger(const char *, int, const char *, const char *)
extern "C"
void* C_ZN14QMessageLoggerC1EPKciS1_S1_(const char * file, int line, const char * function, const char * category) {
  (MyQMessageLogger*)(0);
  return  new MyQMessageLogger(file, line, function, category);
}
//  main block end
