// auto generated, do not modify.
// created: Tue Dec 29 23:36:58 2015
// src-file: /QtWidgets/qdirmodel.h
// dst-file: /src/widgets/qdirmodel.cxx
//

// header block begin =>
#include <qdirmodel.h>

extern "C" {

int QDirModel_Class_Size()
{
  return sizeof(QDirModel);
}

// QDirModel(const class QStringList &, class QDir::Filters, class QDir::SortFlags, class QObject *)
QDirModel* dector_ZN9QDirModelC1ERK11QStringList6QFlagsIN4QDir6FilterEES3_INS4_8SortFlagEEP7QObject(const QStringList & nameFilters, QDir::Filters filters, QDir::SortFlags sort, QObject * parent)
{
  // static_assert(sizeof(QDirModel) == 32, "tyszerr");
  QDirModel* rthis = new QDirModel(nameFilters, filters, sort, parent);
  return rthis;
}

// ~QDirModel()
void dedtor_ZN9QDirModelD0Ev(QDirModel* that)
{
  QDirModel* rthis = (QDirModel*)that;
  delete rthis;
}

// QDirModel(class QObject *)
QDirModel* dector_ZN9QDirModelC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QDirModel) == 32, "tyszerr");
  QDirModel* rthis = new QDirModel(parent);
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
// QDirModel_SlotProxy here
class QDirModel_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QDirModel_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qdirmodel.moc"

extern "C" {
  QDirModel_SlotProxy* QDirModel_SlotProxy_new()
  {
    return new QDirModel_SlotProxy();
  }
};

// <= body block end

