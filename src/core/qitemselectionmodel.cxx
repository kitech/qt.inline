//  header block begin
// /usr/include/qt/QtCore/qitemselectionmodel.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qitemselectionmodel.h>
#include <QtCore>
#include "callback_inherit.h"

// QItemSelectionModel is pure virtual: false
// QItemSelectionModel has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQItemSelectionModel : public QItemSelectionModel {
public:
  virtual ~MyQItemSelectionModel() {}
// void QItemSelectionModel(QAbstractItemModel *)
MyQItemSelectionModel(QAbstractItemModel * model) : QItemSelectionModel(model) {}
// void QItemSelectionModel(QAbstractItemModel *, QObject *)
MyQItemSelectionModel(QAbstractItemModel * model, QObject * parent) : QItemSelectionModel(model, parent) {}
// void QItemSelectionModel(QItemSelectionModelPrivate &, QAbstractItemModel *)
MyQItemSelectionModel(QItemSelectionModelPrivate & dd, QAbstractItemModel * model) : QItemSelectionModel(dd, model) {}
// Protected Visibility=Default Availability=Available
// [-2] void emitSelectionChanged(const QItemSelection &, const QItemSelection &)
  virtual void emitSelectionChanged(const QItemSelection & newSelection, const QItemSelection & oldSelection)   {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"emitSelectionChanged", &handled, 2, (uint64_t)&newSelection, (uint64_t)&oldSelection, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QItemSelectionModel::emitSelectionChanged(newSelection, oldSelection);
  }
  }

};

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:212
// [-2] void emitSelectionChanged(const QItemSelection &, const QItemSelection &)
extern "C" Q_DECL_EXPORT
void C_ZN19QItemSelectionModel20emitSelectionChangedERK14QItemSelectionS2_(void *this_, QItemSelection* newSelection, QItemSelection* oldSelection) {
  ((QItemSelectionModel*)this_)->QItemSelectionModel::emitSelectionChanged(*newSelection, *oldSelection);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:139
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QItemSelectionModel10metaObjectEv(void *this_) {
  return (void*)((QItemSelectionModel*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:139
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QItemSelectionModel11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QItemSelectionModel*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:139
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN19QItemSelectionModel11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QItemSelectionModel*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:139
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QItemSelectionModel2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QItemSelectionModel::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:139
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QItemSelectionModel6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QItemSelectionModel::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:167
// [-2] void QItemSelectionModel(QAbstractItemModel *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QItemSelectionModelC2EP18QAbstractItemModel(QAbstractItemModel * model) {
  auto _nilp = (MyQItemSelectionModel*)(0);
  return  new MyQItemSelectionModel(model);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:168
// [-2] void QItemSelectionModel(QAbstractItemModel *, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QItemSelectionModelC2EP18QAbstractItemModelP7QObject(QAbstractItemModel * model, QObject * parent) {
  auto _nilp = (MyQItemSelectionModel*)(0);
  return  new MyQItemSelectionModel(model, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:169
// [-2] void ~QItemSelectionModel()
extern "C" Q_DECL_EXPORT
void C_ZN19QItemSelectionModelD2Ev(void *this_) {
  delete (QItemSelectionModel*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:171
// [24] QModelIndex currentIndex()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QItemSelectionModel12currentIndexEv(void *this_) {
  auto rv = ((QItemSelectionModel*)this_)->currentIndex();
return new QModelIndex(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:173
// [1] bool isSelected(const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZNK19QItemSelectionModel10isSelectedERK11QModelIndex(void *this_, QModelIndex* index) {
  return (bool)((QItemSelectionModel*)this_)->isSelected(*index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:174
// [1] bool isRowSelected(int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZNK19QItemSelectionModel13isRowSelectedEiRK11QModelIndex(void *this_, int row, QModelIndex* parent) {
  return (bool)((QItemSelectionModel*)this_)->isRowSelected(row, *parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:175
// [1] bool isColumnSelected(int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZNK19QItemSelectionModel16isColumnSelectedEiRK11QModelIndex(void *this_, int column, QModelIndex* parent) {
  return (bool)((QItemSelectionModel*)this_)->isColumnSelected(column, *parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:177
// [1] bool rowIntersectsSelection(int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZNK19QItemSelectionModel22rowIntersectsSelectionEiRK11QModelIndex(void *this_, int row, QModelIndex* parent) {
  return (bool)((QItemSelectionModel*)this_)->rowIntersectsSelection(row, *parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:178
// [1] bool columnIntersectsSelection(int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZNK19QItemSelectionModel25columnIntersectsSelectionEiRK11QModelIndex(void *this_, int column, QModelIndex* parent) {
  return (bool)((QItemSelectionModel*)this_)->columnIntersectsSelection(column, *parent);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtCore/qitemselectionmodel.h:180
// [1] bool hasSelection()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
bool C_ZNK19QItemSelectionModel12hasSelectionEv(void *this_) {
  return (bool)((QItemSelectionModel*)this_)->hasSelection();
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:182
// [8] QModelIndexList selectedIndexes()
extern "C" Q_DECL_EXPORT
QModelIndexList* C_ZNK19QItemSelectionModel15selectedIndexesEv(void *this_) {
  auto rv = ((QItemSelectionModel*)this_)->selectedIndexes();
return new QModelIndexList(rv);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtCore/qitemselectionmodel.h:183
// [8] QModelIndexList selectedRows(int)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
QModelIndexList* C_ZNK19QItemSelectionModel12selectedRowsEi(void *this_, int column) {
  auto rv = ((QItemSelectionModel*)this_)->selectedRows(column);
return new QModelIndexList(rv);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtCore/qitemselectionmodel.h:184
// [8] QModelIndexList selectedColumns(int)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
QModelIndexList* C_ZNK19QItemSelectionModel15selectedColumnsEi(void *this_, int row) {
  auto rv = ((QItemSelectionModel*)this_)->selectedColumns(row);
return new QModelIndexList(rv);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:185
// [8] const QItemSelection selection()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QItemSelectionModel9selectionEv(void *this_) {
  auto rv = ((QItemSelectionModel*)this_)->selection();
return new QItemSelection(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:188
// [8] const QAbstractItemModel * model()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QItemSelectionModel5modelEv(void *this_) {
  return (void*)((QItemSelectionModel*)this_)->model();
}

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtCore/qitemselectionmodel.h:189
// [8] QAbstractItemModel * model()
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void* C_ZN19QItemSelectionModel5modelEv(void *this_) {
  return (void*)((QItemSelectionModel*)this_)->model();
}
#endif // QT_VERSION >= 0x050500

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtCore/qitemselectionmodel.h:191
// [-2] void setModel(QAbstractItemModel *)
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void C_ZN19QItemSelectionModel8setModelEP18QAbstractItemModel(void *this_, QAbstractItemModel * model) {
  ((QItemSelectionModel*)this_)->setModel(model);
}
#endif // QT_VERSION >= 0x050500

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:194
// [-2] void setCurrentIndex(const QModelIndex &, QItemSelectionModel::SelectionFlags)
extern "C" Q_DECL_EXPORT
void C_ZN19QItemSelectionModel15setCurrentIndexERK11QModelIndex6QFlagsINS_13SelectionFlagEE(void *this_, QModelIndex* index, QFlags<QItemSelectionModel::SelectionFlag> command) {
  ((QItemSelectionModel*)this_)->setCurrentIndex(*index, command);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:195
// [-2] void select(const QModelIndex &, QItemSelectionModel::SelectionFlags)
extern "C" Q_DECL_EXPORT
void C_ZN19QItemSelectionModel6selectERK11QModelIndex6QFlagsINS_13SelectionFlagEE(void *this_, QModelIndex* index, QFlags<QItemSelectionModel::SelectionFlag> command) {
  ((QItemSelectionModel*)this_)->select(*index, command);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:196
// [-2] void select(const QItemSelection &, QItemSelectionModel::SelectionFlags)
extern "C" Q_DECL_EXPORT
void C_ZN19QItemSelectionModel6selectERK14QItemSelection6QFlagsINS_13SelectionFlagEE(void *this_, QItemSelection* selection, QFlags<QItemSelectionModel::SelectionFlag> command) {
  ((QItemSelectionModel*)this_)->select(*selection, command);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:197
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN19QItemSelectionModel5clearEv(void *this_) {
  ((QItemSelectionModel*)this_)->clear();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:198
// [-2] void reset()
extern "C" Q_DECL_EXPORT
void C_ZN19QItemSelectionModel5resetEv(void *this_) {
  ((QItemSelectionModel*)this_)->reset();
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtCore/qitemselectionmodel.h:200
// [-2] void clearSelection()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN19QItemSelectionModel14clearSelectionEv(void *this_) {
  ((QItemSelectionModel*)this_)->clearSelection();
}
#endif // QT_VERSION >= 0x040200

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:201
// [-2] void clearCurrentIndex()
extern "C" Q_DECL_EXPORT
void C_ZN19QItemSelectionModel17clearCurrentIndexEv(void *this_) {
  ((QItemSelectionModel*)this_)->clearCurrentIndex();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:204
// [-2] void selectionChanged(const QItemSelection &, const QItemSelection &)
extern "C" Q_DECL_EXPORT
void C_ZN19QItemSelectionModel16selectionChangedERK14QItemSelectionS2_(void *this_, QItemSelection* selected, QItemSelection* deselected) {
  ((QItemSelectionModel*)this_)->selectionChanged(*selected, *deselected);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:205
// [-2] void currentChanged(const QModelIndex &, const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN19QItemSelectionModel14currentChangedERK11QModelIndexS2_(void *this_, QModelIndex* current, QModelIndex* previous) {
  ((QItemSelectionModel*)this_)->currentChanged(*current, *previous);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:206
// [-2] void currentRowChanged(const QModelIndex &, const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN19QItemSelectionModel17currentRowChangedERK11QModelIndexS2_(void *this_, QModelIndex* current, QModelIndex* previous) {
  ((QItemSelectionModel*)this_)->currentRowChanged(*current, *previous);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:207
// [-2] void currentColumnChanged(const QModelIndex &, const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN19QItemSelectionModel20currentColumnChangedERK11QModelIndexS2_(void *this_, QModelIndex* current, QModelIndex* previous) {
  ((QItemSelectionModel*)this_)->currentColumnChanged(*current, *previous);
}

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtCore/qitemselectionmodel.h:208
// [-2] void modelChanged(QAbstractItemModel *)
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void C_ZN19QItemSelectionModel12modelChangedEP18QAbstractItemModel(void *this_, QAbstractItemModel * model) {
  ((QItemSelectionModel*)this_)->modelChanged(model);
}
#endif // QT_VERSION >= 0x050500

//  main block end
