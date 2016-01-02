// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
// src-file: /QtGui/qpdfwriter.h
// dst-file: /src/gui/qpdfwriter.cxx
//

// header block begin =>
#include <qpdfwriter.h>

extern "C" {

int QPdfWriter_Class_Size()
{
  return sizeof(QPdfWriter);
}

// ~QPdfWriter()
void dedtor_ZN10QPdfWriterD0Ev(QPdfWriter* that)
{
  QPdfWriter* rthis = (QPdfWriter*)that;
  delete rthis;
}

// QPdfWriter(const class QString &)
QPdfWriter* dector_ZN10QPdfWriterC1ERK7QString(const QString & filename)
{
  // static_assert(sizeof(QPdfWriter) == 32, "tyszerr");
  QPdfWriter* rthis = new QPdfWriter(filename);
  return rthis;
}

// QPdfWriter(class QIODevice *)
QPdfWriter* dector_ZN10QPdfWriterC1EP9QIODevice(QIODevice * device)
{
  // static_assert(sizeof(QPdfWriter) == 32, "tyszerr");
  QPdfWriter* rthis = new QPdfWriter(device);
  return rthis;
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
// QPdfWriter_SlotProxy here
class QPdfWriter_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QPdfWriter_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/gui/qpdfwriter.moc"

extern "C" {
  QPdfWriter_SlotProxy* QPdfWriter_SlotProxy_new()
  {
    return new QPdfWriter_SlotProxy();
  }
};

// <= body block end

