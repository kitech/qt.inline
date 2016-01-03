// auto generated, do not modify.
// created: Sun Jan  3 01:22:04 2016
// src-file: /QtCore/qsavefile.h
// dst-file: /src/core/qsavefile.cxx
//

// header block begin =>
#include <qsavefile.h>

extern "C" {

int QSaveFile_Class_Size()
{
  return sizeof(QSaveFile);
}

// QSaveFile(class QObject *)
QSaveFile* dector_ZN9QSaveFileC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QSaveFile) == 32, "tyszerr");
  QSaveFile* rthis = new QSaveFile(parent);
  return rthis;
}

// QSaveFile(const class QString &, class QObject *)
QSaveFile* dector_ZN9QSaveFileC1ERK7QStringP7QObject(const QString & name, QObject * parent)
{
  // static_assert(sizeof(QSaveFile) == 32, "tyszerr");
  QSaveFile* rthis = new QSaveFile(name, parent);
  return rthis;
}

// QSaveFile(const class QString &)
QSaveFile* dector_ZN9QSaveFileC1ERK7QString(const QString & name)
{
  // static_assert(sizeof(QSaveFile) == 32, "tyszerr");
  QSaveFile* rthis = new QSaveFile(name);
  return rthis;
}

// ~QSaveFile()
void dedtor_ZN9QSaveFileD0Ev(QSaveFile* that)
{
  QSaveFile* rthis = (QSaveFile*)that;
  delete rthis;
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
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

