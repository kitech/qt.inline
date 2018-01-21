//  header block begin
// /usr/include/qt/QtCore/qitemselectionmodel.h
#include <qitemselectionmodel.h>
#include <QtCore>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtCore/qitemselectionmodel.h:163
// const QMetaObject * metaObject()
extern "C"
void C_ZNK19QItemSelectionModel10metaObjectEv(void *this_) {
  /*return*/ ((QItemSelectionModel*)this_)->metaObject();
}
// /usr/include/qt/QtCore/qitemselectionmodel.h:191
// void QItemSelectionModel(class QAbstractItemModel *)
extern "C"
void* C_ZN19QItemSelectionModelC1EP18QAbstractItemModel(QAbstractItemModel * model) {
  return new QItemSelectionModel(model);
}
// /usr/include/qt/QtCore/qitemselectionmodel.h:192
// void QItemSelectionModel(class QAbstractItemModel *, class QObject *)
extern "C"
void* C_ZN19QItemSelectionModelC1EP18QAbstractItemModelP7QObject(QAbstractItemModel * model, QObject * parent) {
  return new QItemSelectionModel(model, parent);
}
// virtual
// /usr/include/qt/QtCore/qitemselectionmodel.h:193
// void ~QItemSelectionModel()
extern "C"
void C_ZN19QItemSelectionModelD1Ev(void *this_) {
  delete (QItemSelectionModel*)(this_);
}
// /usr/include/qt/QtCore/qitemselectionmodel.h:195
// QModelIndex currentIndex()
extern "C"
void C_ZNK19QItemSelectionModel12currentIndexEv(void *this_) {
  /*return*/ ((QItemSelectionModel*)this_)->currentIndex();
}
// /usr/include/qt/QtCore/qitemselectionmodel.h:197
// bool isSelected(const class QModelIndex &)
extern "C"
void C_ZNK19QItemSelectionModel10isSelectedERK11QModelIndex(void *this_, const QModelIndex & index) {
  /*return*/ ((QItemSelectionModel*)this_)->isSelected(index);
}
// /usr/include/qt/QtCore/qitemselectionmodel.h:198
// bool isRowSelected(int, const class QModelIndex &)
extern "C"
void C_ZNK19QItemSelectionModel13isRowSelectedEiRK11QModelIndex(void *this_, int row, const QModelIndex & parent) {
  /*return*/ ((QItemSelectionModel*)this_)->isRowSelected(row, parent);
}
// /usr/include/qt/QtCore/qitemselectionmodel.h:199
// bool isColumnSelected(int, const class QModelIndex &)
extern "C"
void C_ZNK19QItemSelectionModel16isColumnSelectedEiRK11QModelIndex(void *this_, int column, const QModelIndex & parent) {
  /*return*/ ((QItemSelectionModel*)this_)->isColumnSelected(column, parent);
}
// /usr/include/qt/QtCore/qitemselectionmodel.h:201
// bool rowIntersectsSelection(int, const class QModelIndex &)
extern "C"
void C_ZNK19QItemSelectionModel22rowIntersectsSelectionEiRK11QModelIndex(void *this_, int row, const QModelIndex & parent) {
  /*return*/ ((QItemSelectionModel*)this_)->rowIntersectsSelection(row, parent);
}
// /usr/include/qt/QtCore/qitemselectionmodel.h:202
// bool columnIntersectsSelection(int, const class QModelIndex &)
extern "C"
void C_ZNK19QItemSelectionModel25columnIntersectsSelectionEiRK11QModelIndex(void *this_, int column, const QModelIndex & parent) {
  /*return*/ ((QItemSelectionModel*)this_)->columnIntersectsSelection(column, parent);
}
// /usr/include/qt/QtCore/qitemselectionmodel.h:204
// bool hasSelection()
extern "C"
void C_ZNK19QItemSelectionModel12hasSelectionEv(void *this_) {
  /*return*/ ((QItemSelectionModel*)this_)->hasSelection();
}
// /usr/include/qt/QtCore/qitemselectionmodel.h:206
// QModelIndexList selectedIndexes()
extern "C"
void C_ZNK19QItemSelectionModel15selectedIndexesEv(void *this_) {
  /*return*/ ((QItemSelectionModel*)this_)->selectedIndexes();
}
// /usr/include/qt/QtCore/qitemselectionmodel.h:207
// QModelIndexList selectedRows(int)
extern "C"
void C_ZNK19QItemSelectionModel12selectedRowsEi(void *this_, int column) {
  /*return*/ ((QItemSelectionModel*)this_)->selectedRows(column);
}
// /usr/include/qt/QtCore/qitemselectionmodel.h:208
// QModelIndexList selectedColumns(int)
extern "C"
void C_ZNK19QItemSelectionModel15selectedColumnsEi(void *this_, int row) {
  /*return*/ ((QItemSelectionModel*)this_)->selectedColumns(row);
}
// /usr/include/qt/QtCore/qitemselectionmodel.h:209
// const QItemSelection selection()
extern "C"
void C_ZNK19QItemSelectionModel9selectionEv(void *this_) {
  /*return*/ ((QItemSelectionModel*)this_)->selection();
}
// /usr/include/qt/QtCore/qitemselectionmodel.h:212
// const QAbstractItemModel * model()
extern "C"
void C_ZNK19QItemSelectionModel5modelEv(void *this_) {
  /*return*/ ((QItemSelectionModel*)this_)->model();
}
// /usr/include/qt/QtCore/qitemselectionmodel.h:213
// QAbstractItemModel * model()
extern "C"
void C_ZN19QItemSelectionModel5modelEv(void *this_) {
  /*return*/ ((QItemSelectionModel*)this_)->model();
}
// /usr/include/qt/QtCore/qitemselectionmodel.h:215
// void setModel(class QAbstractItemModel *)
extern "C"
void C_ZN19QItemSelectionModel8setModelEP18QAbstractItemModel(void *this_, QAbstractItemModel * model) {
  ((QItemSelectionModel*)this_)->setModel(model);
}
// virtual
// /usr/include/qt/QtCore/qitemselectionmodel.h:218
// void setCurrentIndex(const class QModelIndex &, class QItemSelectionModel::SelectionFlags)
extern "C"
void C_ZN19QItemSelectionModel15setCurrentIndexERK11QModelIndex6QFlagsINS_13SelectionFlagEE(void *this_, const QModelIndex & index, QFlags<QItemSelectionModel::SelectionFlag> command) {
  ((QItemSelectionModel*)this_)->setCurrentIndex(index, command);
}
// virtual
// /usr/include/qt/QtCore/qitemselectionmodel.h:219
// void select(const class QModelIndex &, class QItemSelectionModel::SelectionFlags)
extern "C"
void C_ZN19QItemSelectionModel6selectERK11QModelIndex6QFlagsINS_13SelectionFlagEE(void *this_, const QModelIndex & index, QFlags<QItemSelectionModel::SelectionFlag> command) {
  ((QItemSelectionModel*)this_)->select(index, command);
}
// virtual
// /usr/include/qt/QtCore/qitemselectionmodel.h:220
// void select(const class QItemSelection &, class QItemSelectionModel::SelectionFlags)
extern "C"
void C_ZN19QItemSelectionModel6selectERK14QItemSelection6QFlagsINS_13SelectionFlagEE(void *this_, const QItemSelection & selection, QFlags<QItemSelectionModel::SelectionFlag> command) {
  ((QItemSelectionModel*)this_)->select(selection, command);
}
// virtual
// /usr/include/qt/QtCore/qitemselectionmodel.h:221
// void clear()
extern "C"
void C_ZN19QItemSelectionModel5clearEv(void *this_) {
  ((QItemSelectionModel*)this_)->clear();
}
// virtual
// /usr/include/qt/QtCore/qitemselectionmodel.h:222
// void reset()
extern "C"
void C_ZN19QItemSelectionModel5resetEv(void *this_) {
  ((QItemSelectionModel*)this_)->reset();
}
// /usr/include/qt/QtCore/qitemselectionmodel.h:224
// void clearSelection()
extern "C"
void C_ZN19QItemSelectionModel14clearSelectionEv(void *this_) {
  ((QItemSelectionModel*)this_)->clearSelection();
}
// virtual
// /usr/include/qt/QtCore/qitemselectionmodel.h:225
// void clearCurrentIndex()
extern "C"
void C_ZN19QItemSelectionModel17clearCurrentIndexEv(void *this_) {
  ((QItemSelectionModel*)this_)->clearCurrentIndex();
}
// /usr/include/qt/QtCore/qitemselectionmodel.h:228
// void selectionChanged(const class QItemSelection &, const class QItemSelection &)
extern "C"
void C_ZN19QItemSelectionModel16selectionChangedERK14QItemSelectionS2_(void *this_, const QItemSelection & selected, const QItemSelection & deselected) {
  ((QItemSelectionModel*)this_)->selectionChanged(selected, deselected);
}
// /usr/include/qt/QtCore/qitemselectionmodel.h:229
// void currentChanged(const class QModelIndex &, const class QModelIndex &)
extern "C"
void C_ZN19QItemSelectionModel14currentChangedERK11QModelIndexS2_(void *this_, const QModelIndex & current, const QModelIndex & previous) {
  ((QItemSelectionModel*)this_)->currentChanged(current, previous);
}
// /usr/include/qt/QtCore/qitemselectionmodel.h:230
// void currentRowChanged(const class QModelIndex &, const class QModelIndex &)
extern "C"
void C_ZN19QItemSelectionModel17currentRowChangedERK11QModelIndexS2_(void *this_, const QModelIndex & current, const QModelIndex & previous) {
  ((QItemSelectionModel*)this_)->currentRowChanged(current, previous);
}
// /usr/include/qt/QtCore/qitemselectionmodel.h:231
// void currentColumnChanged(const class QModelIndex &, const class QModelIndex &)
extern "C"
void C_ZN19QItemSelectionModel20currentColumnChangedERK11QModelIndexS2_(void *this_, const QModelIndex & current, const QModelIndex & previous) {
  ((QItemSelectionModel*)this_)->currentColumnChanged(current, previous);
}
// /usr/include/qt/QtCore/qitemselectionmodel.h:232
// void modelChanged(class QAbstractItemModel *)
extern "C"
void C_ZN19QItemSelectionModel12modelChangedEP18QAbstractItemModel(void *this_, QAbstractItemModel * model) {
  ((QItemSelectionModel*)this_)->modelChanged(model);
}
//  main block end
