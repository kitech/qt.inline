#include <qbytearray.h>
#include <qstring.h>
// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtCore/qfile.h
// dst-file: /src/core/qfile.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qfile.h>

extern "C" {

int QFile_Class_Size()
{
  return sizeof(QFile);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qfile_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qfile.h', line 104, column 20>
//   // proto:  QString QFile::symLinkTarget();
if (false) {
  auto f = []() {
    ((QFile*)0)->symLinkTarget();
  };
}
// _ZNK5QFile13symLinkTargetEv symLinkTarget()
// <SourceLocation file '/usr/include/qt/QtCore/qfile.h', line 80, column 30>
//   // proto: static QByteArray QFile::encodeName(const QString & fileName);
if (false) {
  auto f = [](const QString & arg1) {
    ((QFile*)0)->encodeName(arg1);
  };
}
// _ZN5QFile10encodeNameERK7QString encodeName(const class QString &)
// <SourceLocation file '/usr/include/qt/QtCore/qfile.h', line 84, column 20>
//   // proto: static QString QFile::decodeName(const QByteArray & localFileName);
if (false) {
  auto f = [](const QByteArray & arg1) {
    ((QFile*)0)->decodeName(arg1);
  };
}
// _ZN5QFile10decodeNameERK10QByteArray decodeName(const class QByteArray &)
// <SourceLocation file '/usr/include/qt/QtCore/qfile.h', line 89, column 27>
//   // proto: static QString QFile::decodeName(const char * localFileName);
if (false) {
  auto f = [](const char * arg1) {
    ((QFile*)0)->decodeName(arg1);
  };
}
// _ZN5QFile10decodeNameEPKc decodeName(const char *)
// <SourceLocation file '/usr/include/qt/QtCore/qfile.h', line 105, column 27>
//   // proto: static QString QFile::symLinkTarget(const QString & fileName);
if (false) {
  auto f = [](const QString & arg1) {
    ((QFile*)0)->symLinkTarget(arg1);
  };
}
// _ZN5QFile13symLinkTargetERK7QString symLinkTarget(const class QString &)
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QFile_SlotProxy here
class QFile_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QFile_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qfile.moc"

extern "C" {
  QFile_SlotProxy* QFile_SlotProxy_new()
  {
    return new QFile_SlotProxy();
  }
};

// <= body block end

