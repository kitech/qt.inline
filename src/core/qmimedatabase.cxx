//  header block begin
// since 0x050000
// /usr/include/qt/QtCore/qmimedatabase.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmimedatabase.h>
#include <QtCore>
#include "callback_inherit.h"

// QMimeDatabase is pure virtual: false
// QMimeDatabase has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQMimeDatabase_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMimeDatabase_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMimeDatabase_t qt_meta_stringdata_MyQMimeDatabase = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQMimeDatabase"
  },
  "MyQMimeDatabase"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMimeDatabase[] = {
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
class Q_DECL_EXPORT MyQMimeDatabase : public QMimeDatabase {
public:
  virtual ~MyQMimeDatabase() {}
// void QMimeDatabase()
MyQMimeDatabase() : QMimeDatabase() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedatabase.h:63
// [-2] void QMimeDatabase()
extern "C" Q_DECL_EXPORT
void* C_ZN13QMimeDatabaseC2Ev() {
  return  new QMimeDatabase();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedatabase.h:64
// [-2] void ~QMimeDatabase()
extern "C" Q_DECL_EXPORT
void C_ZN13QMimeDatabaseD2Ev(void *this_) {
  delete (QMimeDatabase*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedatabase.h:66
// [8] QMimeType mimeTypeForName(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QMimeDatabase15mimeTypeForNameERK7QString(void *this_, QString* nameOrAlias) {
  auto rv = ((QMimeDatabase*)this_)->mimeTypeForName(*nameOrAlias);
return new QMimeType(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedatabase.h:74
// [8] QMimeType mimeTypeForFile(const QString &, QMimeDatabase::MatchMode)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QMimeDatabase15mimeTypeForFileERK7QStringNS_9MatchModeE(void *this_, QString* fileName, QMimeDatabase::MatchMode mode) {
  auto rv = ((QMimeDatabase*)this_)->mimeTypeForFile(*fileName, mode);
return new QMimeType(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedatabase.h:75
// [8] QMimeType mimeTypeForFile(const QFileInfo &, QMimeDatabase::MatchMode)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QMimeDatabase15mimeTypeForFileERK9QFileInfoNS_9MatchModeE(void *this_, QFileInfo* fileInfo, QMimeDatabase::MatchMode mode) {
  auto rv = ((QMimeDatabase*)this_)->mimeTypeForFile(*fileInfo, mode);
return new QMimeType(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedatabase.h:76
// [-2] QList<QMimeType> mimeTypesForFileName(const QString &)
extern "C" Q_DECL_EXPORT
QList<QMimeType>* C_ZNK13QMimeDatabase20mimeTypesForFileNameERK7QString(void *this_, QString* fileName) {
  auto rv = ((QMimeDatabase*)this_)->mimeTypesForFileName(*fileName);
return new QList<QMimeType>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedatabase.h:78
// [8] QMimeType mimeTypeForData(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QMimeDatabase15mimeTypeForDataERK10QByteArray(void *this_, QByteArray* data) {
  auto rv = ((QMimeDatabase*)this_)->mimeTypeForData(*data);
return new QMimeType(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedatabase.h:79
// [8] QMimeType mimeTypeForData(QIODevice *)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QMimeDatabase15mimeTypeForDataEP9QIODevice(void *this_, QIODevice * device) {
  auto rv = ((QMimeDatabase*)this_)->mimeTypeForData(device);
return new QMimeType(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedatabase.h:81
// [8] QMimeType mimeTypeForUrl(const QUrl &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QMimeDatabase14mimeTypeForUrlERK4QUrl(void *this_, QUrl* url) {
  auto rv = ((QMimeDatabase*)this_)->mimeTypeForUrl(*url);
return new QMimeType(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedatabase.h:82
// [8] QMimeType mimeTypeForFileNameAndData(const QString &, QIODevice *)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QMimeDatabase26mimeTypeForFileNameAndDataERK7QStringP9QIODevice(void *this_, QString* fileName, QIODevice * device) {
  auto rv = ((QMimeDatabase*)this_)->mimeTypeForFileNameAndData(*fileName, device);
return new QMimeType(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedatabase.h:83
// [8] QMimeType mimeTypeForFileNameAndData(const QString &, const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QMimeDatabase26mimeTypeForFileNameAndDataERK7QStringRK10QByteArray(void *this_, QString* fileName, QByteArray* data) {
  auto rv = ((QMimeDatabase*)this_)->mimeTypeForFileNameAndData(*fileName, *data);
return new QMimeType(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedatabase.h:85
// [8] QString suffixForFileName(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QMimeDatabase17suffixForFileNameERK7QString(void *this_, QString* fileName) {
  auto rv = ((QMimeDatabase*)this_)->suffixForFileName(*fileName);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedatabase.h:87
// [-2] QList<QMimeType> allMimeTypes()
extern "C" Q_DECL_EXPORT
QList<QMimeType>* C_ZNK13QMimeDatabase12allMimeTypesEv(void *this_) {
  auto rv = ((QMimeDatabase*)this_)->allMimeTypes();
return new QList<QMimeType>(rv);
}

//  main block end
