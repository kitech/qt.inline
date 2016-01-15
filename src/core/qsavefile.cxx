// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtCore/qsavefile.h
// dst-file: /src/core/qsavefile.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qsavefile.h>

extern "C" {

int QSaveFile_Class_Size()
{
  return sizeof(QSaveFile);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qsavefile_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QSaveFile_SlotProxy here
class QSaveFile_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QSaveFile_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qsavefile.moc"

extern "C" {
  QSaveFile_SlotProxy* QSaveFile_SlotProxy_new()
  {
    return new QSaveFile_SlotProxy();
  }
};

// <= body block end

