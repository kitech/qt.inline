// auto generated, do not modify.
// created: Sat Dec 26 12:03:58 2015
// src-file: /QtCore/qlogging.h
// dst-file: /src/core/qlogging.cxx
//

// header block begin =>
#include <qlogging.h>

extern "C" {

int QMessageLogContext_Class_Size()
{
  return sizeof(QMessageLogContext);
}

// QMessageLogContext(const char *, int, const char *, const char *)
QMessageLogContext* dector_ZN18QMessageLogContextC1EPKciS1_S1_(const char * fileName, int lineNumber, const char * functionName, const char * categoryName)
{
  // static_assert(sizeof(QMessageLogContext) == 32, "tyszerr");
  QMessageLogContext* rthis = new QMessageLogContext(fileName, lineNumber, functionName, categoryName);
  return rthis;
}

// QMessageLogContext()
QMessageLogContext* dector_ZN18QMessageLogContextC1Ev()
{
  // static_assert(sizeof(QMessageLogContext) == 32, "tyszerr");
  QMessageLogContext* rthis = new QMessageLogContext();
  return rthis;
}

int QMessageLogger_Class_Size()
{
  return sizeof(QMessageLogger);
}

// QMessageLogger()
QMessageLogger* dector_ZN14QMessageLoggerC1Ev()
{
  // static_assert(sizeof(QMessageLogger) == 32, "tyszerr");
  QMessageLogger* rthis = new QMessageLogger();
  return rthis;
}

// QMessageLogger(const char *, int, const char *)
QMessageLogger* dector_ZN14QMessageLoggerC1EPKciS1_(const char * file, int line, const char * function)
{
  // static_assert(sizeof(QMessageLogger) == 32, "tyszerr");
  QMessageLogger* rthis = new QMessageLogger(file, line, function);
  return rthis;
}

// QMessageLogger(const char *, int, const char *, const char *)
QMessageLogger* dector_ZN14QMessageLoggerC1EPKciS1_S1_(const char * file, int line, const char * function, const char * category)
{
  // static_assert(sizeof(QMessageLogger) == 32, "tyszerr");
  QMessageLogger* rthis = new QMessageLogger(file, line, function, category);
  return rthis;
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// <= body block end

