//  header block begin
// /usr/include/qt/QtCore/qxmlstream.h
#include <qxmlstream.h>
#include <QtCore>
#include "callback_inherit.h"

// QXmlStreamStringRef is pure virtual: false
// QXmlStreamStringRef has virtual projected: false
//  header block end

//  main block begin

class MyQXmlStreamStringRef : public QXmlStreamStringRef {
public:
  virtual ~MyQXmlStreamStringRef() {}
// void QXmlStreamStringRef()
MyQXmlStreamStringRef() : QXmlStreamStringRef() {}
// void QXmlStreamStringRef(const class QStringRef &)
MyQXmlStreamStringRef(const QStringRef & aString) : QXmlStreamStringRef(aString) {}
// void QXmlStreamStringRef(const class QString &)
MyQXmlStreamStringRef(const QString & aString) : QXmlStreamStringRef(aString) {}
// void QXmlStreamStringRef(class QString &&)
MyQXmlStreamStringRef(QString && aString) : QXmlStreamStringRef(aString) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:58
// [-2] void QXmlStreamStringRef()
extern "C"
void* C_ZN19QXmlStreamStringRefC2Ev() {
  return  new QXmlStreamStringRef();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:59
// [-2] void QXmlStreamStringRef(const class QStringRef &)
extern "C"
void* C_ZN19QXmlStreamStringRefC2ERK10QStringRef(QStringRef* aString) {
  return  new QXmlStreamStringRef(*aString);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:61
// [-2] void QXmlStreamStringRef(const class QString &)
extern "C"
void* C_ZN19QXmlStreamStringRefC2ERK7QString(QString* aString) {
  return  new QXmlStreamStringRef(*aString);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:63
// [-2] void QXmlStreamStringRef(class QString &&)
extern "C"
void* C_ZN19QXmlStreamStringRefC2EO7QString(QString && aString) {
  return  new QXmlStreamStringRef(aString);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:77
// [-2] void ~QXmlStreamStringRef()
extern "C"
void C_ZN19QXmlStreamStringRefD2Ev(void *this_) {
  delete (QXmlStreamStringRef*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:82
// [-2] void swap(class QXmlStreamStringRef &)
extern "C"
void C_ZN19QXmlStreamStringRef4swapERS_(void *this_, QXmlStreamStringRef* other) {
  ((QXmlStreamStringRef*)this_)->swap(*other);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:89
// [-2] void clear()
extern "C"
void C_ZN19QXmlStreamStringRef5clearEv(void *this_) {
  ((QXmlStreamStringRef*)this_)->clear();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:91
// [8] const QString * string()
extern "C"
void* C_ZNK19QXmlStreamStringRef6stringEv(void *this_) {
  return (void*)((QXmlStreamStringRef*)this_)->string();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:92
// [4] int position()
extern "C"
int C_ZNK19QXmlStreamStringRef8positionEv(void *this_) {
  return (int)((QXmlStreamStringRef*)this_)->position();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:93
// [4] int size()
extern "C"
int C_ZNK19QXmlStreamStringRef4sizeEv(void *this_) {
  return (int)((QXmlStreamStringRef*)this_)->size();
}
//  main block end
