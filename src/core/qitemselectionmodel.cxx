// auto generated, do not modify.
// created: Sat Dec 26 09:13:20 2015
// src-file: /QtCore/qitemselectionmodel.h
// dst-file: /src/core/qitemselectionmodel.cxx
//

// header block begin =>
#include <qitemselectionmodel.h>

extern "C" {

int QItemSelection_Class_Size()
{
  return sizeof(QItemSelection);
}

// QItemSelection(const class QModelIndex &, const class QModelIndex &)
QItemSelection* dector_ZN14QItemSelectionC1ERK11QModelIndexS2_(const QModelIndex & topLeft, const QModelIndex & bottomRight)
{
  // static_assert(sizeof(QItemSelection) == 32, "tyszerr");
  QItemSelection* rthis = new QItemSelection(topLeft, bottomRight);
  return rthis;
}

int QItemSelectionRange_Class_Size()
{
  return sizeof(QItemSelectionRange);
}

// QItemSelectionRange(const class QModelIndex &, const class QModelIndex &)
QItemSelectionRange* dector_ZN19QItemSelectionRangeC1ERK11QModelIndexS2_(const QModelIndex & topLeft, const QModelIndex & bottomRight)
{
  // static_assert(sizeof(QItemSelectionRange) == 32, "tyszerr");
  QItemSelectionRange* rthis = new QItemSelectionRange(topLeft, bottomRight);
  return rthis;
}

  // proto:  void QItemSelectionRange::QItemSelectionRange(const QModelIndex & topLeft, const QModelIndex & bottomRight);
void _ZN19QItemSelectionRangeC1ERK11QModelIndexS2_(void *that, const QModelIndex & topLeft, const QModelIndex & bottomRight)
{
  QItemSelectionRange *cthat = (QItemSelectionRange *)that;
  auto _o = new(that) QItemSelectionRange(topLeft, bottomRight);
}

int QItemSelectionModel_Class_Size()
{
  return sizeof(QItemSelectionModel);
}

// QItemSelectionModel(class QAbstractItemModel *)
QItemSelectionModel* dector_ZN19QItemSelectionModelC1EP18QAbstractItemModel(QAbstractItemModel * model)
{
  // static_assert(sizeof(QItemSelectionModel) == 32, "tyszerr");
  QItemSelectionModel* rthis = new QItemSelectionModel(model);
  return rthis;
}

// ~QItemSelectionModel()
void dedtor_ZN19QItemSelectionModelD0Ev(QItemSelectionModel* that)
{
  QItemSelectionModel* rthis = (QItemSelectionModel*)that;
  delete rthis;
}

// QItemSelectionModel(class QAbstractItemModel *, class QObject *)
QItemSelectionModel* dector_ZN19QItemSelectionModelC1EP18QAbstractItemModelP7QObject(QAbstractItemModel * model, QObject * parent)
{
  // static_assert(sizeof(QItemSelectionModel) == 32, "tyszerr");
  QItemSelectionModel* rthis = new QItemSelectionModel(model, parent);
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
// <= body block end

