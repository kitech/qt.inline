//  header block begin
// since 0x050a00
// /usr/include/qt/QtAndroidExtras/qandroidjnienvironment.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qandroidjnienvironment.h>
#include <QtAndroidExtras>
#include "callback_inherit.h"

// QAndroidJniExceptionCleaner is pure virtual: false
// QAndroidJniExceptionCleaner has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAndroidJniExceptionCleaner : public QAndroidJniExceptionCleaner {
public:
  virtual ~MyQAndroidJniExceptionCleaner() {}
// void QAndroidJniExceptionCleaner(QAndroidJniExceptionCleaner::OutputMode)
MyQAndroidJniExceptionCleaner(QAndroidJniExceptionCleaner::OutputMode outputMode) : QAndroidJniExceptionCleaner(outputMode) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidjnienvironment.h:75
// [-2] void QAndroidJniExceptionCleaner(QAndroidJniExceptionCleaner::OutputMode)
extern "C" Q_DECL_EXPORT
void* C_ZN27QAndroidJniExceptionCleanerC2ENS_10OutputModeE(QAndroidJniExceptionCleaner::OutputMode outputMode) {
  return  new QAndroidJniExceptionCleaner(outputMode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidjnienvironment.h:76
// [-2] void ~QAndroidJniExceptionCleaner()
extern "C" Q_DECL_EXPORT
void C_ZN27QAndroidJniExceptionCleanerD2Ev(void *this_) {
  delete (QAndroidJniExceptionCleaner*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidjnienvironment.h:78
// [-2] void clean()
extern "C" Q_DECL_EXPORT
void C_ZN27QAndroidJniExceptionCleaner5cleanEv(void *this_) {
  ((QAndroidJniExceptionCleaner*)this_)->clean();
}

//  main block end
