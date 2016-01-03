// auto generated, do not modify.
// created: Sun Jan  3 01:22:04 2016
// src-file: /QtCore/qsortfilterproxymodel.h
// dst-file: /src/core/qsortfilterproxymodel.cxx
//

// header block begin =>
#include <qsortfilterproxymodel.h>

extern "C" {

int QSortFilterProxyModel_Class_Size()
{
  return sizeof(QSortFilterProxyModel);
}

// ~QSortFilterProxyModel()
void dedtor_ZN21QSortFilterProxyModelD0Ev(QSortFilterProxyModel* that)
{
  QSortFilterProxyModel* rthis = (QSortFilterProxyModel*)that;
  delete rthis;
}

// QSortFilterProxyModel(class QObject *)
QSortFilterProxyModel* dector_ZN21QSortFilterProxyModelC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QSortFilterProxyModel) == 32, "tyszerr");
  QSortFilterProxyModel* rthis = new QSortFilterProxyModel(parent);
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
// QSortFilterProxyModel_SlotProxy here
class QSortFilterProxyModel_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QSortFilterProxyModel_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qsortfilterproxymodel.moc"

extern "C" {
  QSortFilterProxyModel_SlotProxy* QSortFilterProxyModel_SlotProxy_new()
  {
    return new QSortFilterProxyModel_SlotProxy();
  }
};

// <= body block end

