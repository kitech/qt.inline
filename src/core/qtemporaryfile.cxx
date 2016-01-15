// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtCore/qtemporaryfile.h
// dst-file: /src/core/qtemporaryfile.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qtemporaryfile.h>

extern "C" {

int QTemporaryFile_Class_Size()
{
  return sizeof(QTemporaryFile);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qtemporaryfile_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qtemporaryfile.h', line 80, column 49>
//   // proto: static QTemporaryFile * QTemporaryFile::createLocalFile(QFile & file);
if (false) {
  auto f = [](QFile & arg1) {
    ((QTemporaryFile*)0)->createLocalFile(arg1);
  };
}
// _ZN14QTemporaryFile15createLocalFileER5QFile createLocalFile(class QFile &)
// <SourceLocation file '/usr/include/qt/QtCore/qtemporaryfile.h', line 83, column 35>
//   // proto: static QTemporaryFile * QTemporaryFile::createNativeFile(const QString & fileName);
if (false) {
  auto f = [](const QString & arg1) {
    ((QTemporaryFile*)0)->createNativeFile(arg1);
  };
}
// _ZN14QTemporaryFile16createNativeFileERK7QString createNativeFile(const class QString &)
// <SourceLocation file '/usr/include/qt/QtCore/qtemporaryfile.h', line 72, column 10>
//   // proto:  bool QTemporaryFile::open();
if (false) {
  auto f = []() {
    ((QTemporaryFile*)0)->open();
  };
}
// _ZN14QTemporaryFile4openEv open()
// <SourceLocation file '/usr/include/qt/QtCore/qtemporaryfile.h', line 78, column 49>
//   // proto: static QTemporaryFile * QTemporaryFile::createLocalFile(const QString & fileName);
if (false) {
  auto f = [](const QString & arg1) {
    ((QTemporaryFile*)0)->createLocalFile(arg1);
  };
}
// _ZN14QTemporaryFile15createLocalFileERK7QString createLocalFile(const class QString &)
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QTemporaryFile_SlotProxy here
class QTemporaryFile_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QTemporaryFile_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qtemporaryfile.moc"

extern "C" {
  QTemporaryFile_SlotProxy* QTemporaryFile_SlotProxy_new()
  {
    return new QTemporaryFile_SlotProxy();
  }
};

// <= body block end

