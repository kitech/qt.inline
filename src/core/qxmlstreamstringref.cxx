//  header block begin
// /usr/include/qt/QtCore/qxmlstream.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qxmlstream.h>
#include <QtCore>
#include "callback_inherit.h"

// QXmlStreamStringRef is pure virtual: false
// QXmlStreamStringRef has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQXmlStreamStringRef_t {
  QByteArrayData data[1];
  char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQXmlStreamStringRef_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQXmlStreamStringRef_t qt_meta_stringdata_MyQXmlStreamStringRef = {
   {
  QT_MOC_LITERAL(0, 0, 21), // "MyQXmlStreamStringRef"
  },
  "MyQXmlStreamStringRef"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQXmlStreamStringRef[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQXmlStreamStringRef : public QXmlStreamStringRef {
public:
  virtual ~MyQXmlStreamStringRef() {}
// void QXmlStreamStringRef()
MyQXmlStreamStringRef() : QXmlStreamStringRef() {}
// void QXmlStreamStringRef(const QStringRef &)
MyQXmlStreamStringRef(const QStringRef & aString) : QXmlStreamStringRef(aString) {}
// void QXmlStreamStringRef(const QString &)
MyQXmlStreamStringRef(const QString & aString) : QXmlStreamStringRef(aString) {}
// void QXmlStreamStringRef(QString &&)
MyQXmlStreamStringRef(QString && aString) : QXmlStreamStringRef(aString) {}
// void QXmlStreamStringRef(const QXmlStreamStringRef &)
MyQXmlStreamStringRef(const QXmlStreamStringRef & other) : QXmlStreamStringRef(other) {}
// void QXmlStreamStringRef(QXmlStreamStringRef &&)
MyQXmlStreamStringRef(QXmlStreamStringRef && other) : QXmlStreamStringRef(other) {}
};
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:58
// [-2] void QXmlStreamStringRef()
extern "C" Q_DECL_EXPORT
void* C_ZN19QXmlStreamStringRefC2Ev() {
  return  new QXmlStreamStringRef();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:59
// [-2] void QXmlStreamStringRef(const QStringRef &)
extern "C" Q_DECL_EXPORT
void* C_ZN19QXmlStreamStringRefC2ERK10QStringRef(QStringRef* aString) {
  return  new QXmlStreamStringRef(*aString);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:61
// [-2] void QXmlStreamStringRef(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN19QXmlStreamStringRefC2ERK7QString(QString* aString) {
  return  new QXmlStreamStringRef(*aString);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:63
// [-2] void QXmlStreamStringRef(QString &&)
extern "C" Q_DECL_EXPORT
void* C_ZN19QXmlStreamStringRefC2EO7QString(QString && aString) {
  return  new QXmlStreamStringRef(aString);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:67
// [-2] void QXmlStreamStringRef(const QXmlStreamStringRef &)
extern "C" Q_DECL_EXPORT
void* C_ZN19QXmlStreamStringRefC2ERKS_(QXmlStreamStringRef* other) {
  return  new QXmlStreamStringRef(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:70
// [-2] void QXmlStreamStringRef(QXmlStreamStringRef &&)
extern "C" Q_DECL_EXPORT
void* C_ZN19QXmlStreamStringRefC2EOS_(QXmlStreamStringRef && other) {
  return  new QXmlStreamStringRef(other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:72
// [16] QXmlStreamStringRef & operator=(QXmlStreamStringRef &&)
extern "C" Q_DECL_EXPORT
void* C_ZN19QXmlStreamStringRefaSEOS_(void *this_, QXmlStreamStringRef && other) {
  auto& rv = ((QXmlStreamStringRef*)this_)->operator=(other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:75
// [16] QXmlStreamStringRef & operator=(const QXmlStreamStringRef &)
extern "C" Q_DECL_EXPORT
void* C_ZN19QXmlStreamStringRefaSERKS_(void *this_, QXmlStreamStringRef* other) {
  auto& rv = ((QXmlStreamStringRef*)this_)->operator=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:77
// [-2] void ~QXmlStreamStringRef()
extern "C" Q_DECL_EXPORT
void C_ZN19QXmlStreamStringRefD2Ev(void *this_) {
  delete (QXmlStreamStringRef*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:82
// [-2] void swap(QXmlStreamStringRef &)
extern "C" Q_DECL_EXPORT
void C_ZN19QXmlStreamStringRef4swapERS_(void *this_, QXmlStreamStringRef* other) {
  ((QXmlStreamStringRef*)this_)->swap(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:89
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN19QXmlStreamStringRef5clearEv(void *this_) {
  ((QXmlStreamStringRef*)this_)->clear();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:91
// [8] const QString * string()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QXmlStreamStringRef6stringEv(void *this_) {
  return (void*)((QXmlStreamStringRef*)this_)->string();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:92
// [4] int position()
extern "C" Q_DECL_EXPORT
int C_ZNK19QXmlStreamStringRef8positionEv(void *this_) {
  return (int)((QXmlStreamStringRef*)this_)->position();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:93
// [4] int size()
extern "C" Q_DECL_EXPORT
int C_ZNK19QXmlStreamStringRef4sizeEv(void *this_) {
  return (int)((QXmlStreamStringRef*)this_)->size();
}

//  main block end
