//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QFileOpenEvent is pure virtual: false
// QFileOpenEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQFileOpenEvent_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQFileOpenEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQFileOpenEvent_t qt_meta_stringdata_MyQFileOpenEvent = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQFileOpenEvent"
  },
  "MyQFileOpenEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQFileOpenEvent[] = {
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
class Q_DECL_EXPORT MyQFileOpenEvent : public QFileOpenEvent {
public:
  virtual ~MyQFileOpenEvent() {}
// void QFileOpenEvent(const QString &)
MyQFileOpenEvent(const QString & file) : QFileOpenEvent(file) {}
// void QFileOpenEvent(const QUrl &)
MyQFileOpenEvent(const QUrl & url) : QFileOpenEvent(url) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:743
// [-2] void QFileOpenEvent(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN14QFileOpenEventC2ERK7QString(QString* file) {
  return  new QFileOpenEvent(*file);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:744
// [-2] void QFileOpenEvent(const QUrl &)
extern "C" Q_DECL_EXPORT
void* C_ZN14QFileOpenEventC2ERK4QUrl(QUrl* url) {
  return  new QFileOpenEvent(*url);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:745
// [-2] void ~QFileOpenEvent()
extern "C" Q_DECL_EXPORT
void C_ZN14QFileOpenEventD2Ev(void *this_) {
  delete (QFileOpenEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:747
// [8] QString file()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QFileOpenEvent4fileEv(void *this_) {
  auto rv = ((QFileOpenEvent*)this_)->file();
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtGui/qevent.h:748
// [8] QUrl url()
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void* C_ZNK14QFileOpenEvent3urlEv(void *this_) {
  auto rv = ((QFileOpenEvent*)this_)->url();
return new QUrl(rv);
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtGui/qevent.h:749
// [1] bool openFile(QFile &, QIODevice::OpenMode)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
bool C_ZNK14QFileOpenEvent8openFileER5QFile6QFlagsIN9QIODevice12OpenModeFlagEE(void *this_, QFile* file, QFlags<QIODevice::OpenModeFlag> flags) {
  return (bool)((QFileOpenEvent*)this_)->openFile(*file, flags);
}
#endif // QT_VERSION >= 0x040800

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
