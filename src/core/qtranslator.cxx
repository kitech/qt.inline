// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
// src-file: /QtCore/qtranslator.h
// dst-file: /src/core/qtranslator.cxx
//

// header block begin =>
#include <qtranslator.h>

extern "C" {

int QTranslator_Class_Size()
{
  return sizeof(QTranslator);
}

// QTranslator(class QObject *)
QTranslator* dector_ZN11QTranslatorC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QTranslator) == 32, "tyszerr");
  QTranslator* rthis = new QTranslator(parent);
  return rthis;
}

// ~QTranslator()
void dedtor_ZN11QTranslatorD0Ev(QTranslator* that)
{
  QTranslator* rthis = (QTranslator*)that;
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
// QTranslator_SlotProxy here
class QTranslator_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QTranslator_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qtranslator.moc"

extern "C" {
  QTranslator_SlotProxy* QTranslator_SlotProxy_new()
  {
    return new QTranslator_SlotProxy();
  }
};

// <= body block end

