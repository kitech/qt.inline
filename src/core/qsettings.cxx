// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtCore/qsettings.h
// dst-file: /src/core/qsettings.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qsettings.h>

extern "C" {

int QSettings_Class_Size()
{
  return sizeof(QSettings);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qsettings_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QSettings_SlotProxy here
class QSettings_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QSettings_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qsettings.moc"

extern "C" {
  QSettings_SlotProxy* QSettings_SlotProxy_new()
  {
    return new QSettings_SlotProxy();
  }
};

// <= body block end

