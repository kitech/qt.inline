//  header block begin
// /usr/include/qt/QtQml/qqmllist.h
#ifndef protected
#define protected public
#endif
#include <qqmllist.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlListReference is pure virtual: false
// QQmlListReference has virtual projected: false
//  header block end

//  main block begin

class MyQQmlListReference : public QQmlListReference {
public:
  virtual ~MyQQmlListReference() {}
// void QQmlListReference()
MyQQmlListReference() : QQmlListReference() {}
// void QQmlListReference(class QObject *, const char *, class QQmlEngine *)
MyQQmlListReference(QObject * arg0, const char * property, QQmlEngine * arg2) : QQmlListReference(arg0, property, arg2) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmllist.h:142
// [-2] void QQmlListReference()
extern "C" Q_DECL_EXPORT
void* C_ZN17QQmlListReferenceC2Ev() {
  return  new QQmlListReference();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmllist.h:143
// [-2] void QQmlListReference(class QObject *, const char *, class QQmlEngine *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QQmlListReferenceC2EP7QObjectPKcP10QQmlEngine(QObject * arg0, const char * property, QQmlEngine * arg2) {
  return  new QQmlListReference(arg0, property, arg2);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmllist.h:145
// [8] QQmlListReference & operator=(const class QQmlListReference &)
extern "C" Q_DECL_EXPORT
void* C_ZN17QQmlListReferenceaSERKS_(void *this_, QQmlListReference* arg0) {
  auto& rv = ((QQmlListReference*)this_)->operator=(*arg0);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmllist.h:146
// [-2] void ~QQmlListReference()
extern "C" Q_DECL_EXPORT
void C_ZN17QQmlListReferenceD2Ev(void *this_) {
  delete (QQmlListReference*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmllist.h:148
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK17QQmlListReference7isValidEv(void *this_) {
  return (bool)((QQmlListReference*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmllist.h:150
// [8] QObject * object()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QQmlListReference6objectEv(void *this_) {
  return (void*)((QQmlListReference*)this_)->object();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmllist.h:151
// [8] const QMetaObject * listElementType()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QQmlListReference15listElementTypeEv(void *this_) {
  return (void*)((QQmlListReference*)this_)->listElementType();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmllist.h:153
// [1] bool canAppend()
extern "C" Q_DECL_EXPORT
bool C_ZNK17QQmlListReference9canAppendEv(void *this_) {
  return (bool)((QQmlListReference*)this_)->canAppend();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmllist.h:154
// [1] bool canAt()
extern "C" Q_DECL_EXPORT
bool C_ZNK17QQmlListReference5canAtEv(void *this_) {
  return (bool)((QQmlListReference*)this_)->canAt();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmllist.h:155
// [1] bool canClear()
extern "C" Q_DECL_EXPORT
bool C_ZNK17QQmlListReference8canClearEv(void *this_) {
  return (bool)((QQmlListReference*)this_)->canClear();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmllist.h:156
// [1] bool canCount()
extern "C" Q_DECL_EXPORT
bool C_ZNK17QQmlListReference8canCountEv(void *this_) {
  return (bool)((QQmlListReference*)this_)->canCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmllist.h:158
// [1] bool isManipulable()
extern "C" Q_DECL_EXPORT
bool C_ZNK17QQmlListReference13isManipulableEv(void *this_) {
  return (bool)((QQmlListReference*)this_)->isManipulable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmllist.h:159
// [1] bool isReadable()
extern "C" Q_DECL_EXPORT
bool C_ZNK17QQmlListReference10isReadableEv(void *this_) {
  return (bool)((QQmlListReference*)this_)->isReadable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmllist.h:162
// [8] QObject * at(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK17QQmlListReference2atEi(void *this_, int arg0) {
  return (void*)((QQmlListReference*)this_)->at(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmllist.h:163
// [1] bool clear()
extern "C" Q_DECL_EXPORT
bool C_ZNK17QQmlListReference5clearEv(void *this_) {
  return (bool)((QQmlListReference*)this_)->clear();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmllist.h:164
// [4] int count()
extern "C" Q_DECL_EXPORT
int C_ZNK17QQmlListReference5countEv(void *this_) {
  return (int)((QQmlListReference*)this_)->count();
}

//  main block end
