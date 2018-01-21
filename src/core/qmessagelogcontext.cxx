//  header block begin
// /usr/include/qt/QtCore/qlogging.h
#include <qlogging.h>
#include <QtCore>

//  header block end

//  main block begin
// inline
// /usr/include/qt/QtCore/qlogging.h:66
// void QMessageLogContext()
extern "C"
void* C_ZN18QMessageLogContextC1Ev() {
  return new QMessageLogContext();
}
// inline
// /usr/include/qt/QtCore/qlogging.h:68
// void QMessageLogContext(const char *, int, const char *, const char *)
extern "C"
void* C_ZN18QMessageLogContextC1EPKciS1_S1_(const char * fileName, int lineNumber, const char * functionName, const char * categoryName) {
  return new QMessageLogContext(fileName, lineNumber, functionName, categoryName);
}
// /usr/include/qt/QtCore/qlogging.h:71
// void copy(const class QMessageLogContext &)
extern "C"
void C_ZN18QMessageLogContext4copyERKS_(void *this_, const QMessageLogContext & logContext) {
  ((QMessageLogContext*)this_)->copy(logContext);
}
//  main block end
