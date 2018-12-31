//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(tablewidget)
// /usr/include/qt/QtWidgets/qtablewidget.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtablewidget.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QTableWidget is pure virtual: false
// QTableWidget has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTableWidget_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTableWidget_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTableWidget_t qt_meta_stringdata_MyQTableWidget = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQTableWidget"
  },
  "MyQTableWidget"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTableWidget[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQTableWidget : public QTableWidget {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QTableWidget::staticMetaObject,
  qt_meta_stringdata_MyQTableWidget.data,
  qt_meta_data_MyQTableWidget,
  qt_static_metacall, nullptr, nullptr
}};
virtual const QMetaObject *metaObject() const override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"metaObject", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (QMetaObject*)irv; }
  return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject; 
}
virtual void *qt_metacast(const char *_clname) override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacast", &handled, 1, (uint64_t)_clname, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (void*)irv; }
  if (!_clname) return nullptr;
  if (!strcmp(_clname, qt_meta_stringdata_MyQTableWidget.stringdata0))
      return static_cast<void*>(this);
  return QTableWidget::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QTableWidget::qt_metacall(_c, _id, _a);
   if (_id < 0 ) return _id;
   if (qt_metacall_fnptr != 0) {
      return qt_metacall_fnptr(this, _c, _id, _a);
   }
   int handled = 0;
   auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacall", &handled, 3, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (int)irv; }
   return _id;
  }
/*static*/ inline QString tr(const char *s, const char *c = nullptr, int n = -1)
{ return staticMetaObject.tr(s, c, n); }
/*static*/ inline QString trUtf8(const char *s, const char *c = nullptr, int n = -1)
 { return staticMetaObject.tr(s, c, n); }
Q_DECL_HIDDEN_STATIC_METACALL static void qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a){
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)_o, (char*)"qt_static_metacall", &handled, 4, (uint64_t)_o, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0);
}
private: struct QPrivateSignal {};

public:
  void* (*qt_metacast_fnptr)(void*, char*) = nullptr;
  int (*qt_metacall_fnptr)(QObject *, QMetaObject::Call, int, void **) = nullptr;
public:
  virtual ~MyQTableWidget() {}
// void QTableWidget(QWidget *)
MyQTableWidget(QWidget * parent) : QTableWidget(parent) {}
// void QTableWidget(int, int, QWidget *)
MyQTableWidget(int rows, int columns, QWidget * parent) : QTableWidget(rows, columns, parent) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QTableWidget::event(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [8] QStringList mimeTypes()
  virtual QStringList mimeTypes() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mimeTypes", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QStringList){};}
    auto prv = (QStringList*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QStringList
    } else {
    return QTableWidget::mimeTypes();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [8] QMimeData * mimeData(const QList<QTableWidgetItem *>)
  virtual QMimeData * mimeData(const QList<QTableWidgetItem *> items) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mimeData", &handled, 1, (uint64_t)&items, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QMimeData *)(irv);
      // Pointer Pointer QMimeData *
    } else {
    return QTableWidget::mimeData(items);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool dropMimeData(int, int, const QMimeData *, Qt::DropAction)
  virtual bool dropMimeData(int row, int column, const QMimeData * data, Qt::DropAction action)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dropMimeData", &handled, 4, (uint64_t)row, (uint64_t)column, (uint64_t)data, (uint64_t)action, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QTableWidget::dropMimeData(row, column, data, action);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [4] Qt::DropActions supportedDropActions()
  virtual Qt::DropActions supportedDropActions() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"supportedDropActions", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (Qt::DropActions)(int)(irv);
      // Elaborated Record QFlags<Qt::DropAction>
    } else {
    return QTableWidget::supportedDropActions();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void dropEvent(QDropEvent *)
  virtual void dropEvent(QDropEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dropEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTableWidget::dropEvent(event);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QTableWidget_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQTableWidget* qo = (MyQTableWidget*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:322
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN12QTableWidget5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QTableWidget*)this_)->QTableWidget::event(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:323
// [8] QStringList mimeTypes()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QTableWidget9mimeTypesEv(void *this_) {
  auto rv = ((QTableWidget*)this_)->QTableWidget::mimeTypes();
return new QStringList(rv);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:327
// [8] QMimeData * mimeData(const QList<QTableWidgetItem *>)
extern "C" Q_DECL_EXPORT
void* C_ZNK12QTableWidget8mimeDataE5QListIP16QTableWidgetItemE(void *this_, const QList<QTableWidgetItem *> items) {
  return (void*)((QTableWidget*)this_)->QTableWidget::mimeData(items);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:329
// [1] bool dropMimeData(int, int, const QMimeData *, Qt::DropAction)
extern "C" Q_DECL_EXPORT
bool C_ZN12QTableWidget12dropMimeDataEiiPK9QMimeDataN2Qt10DropActionE(void *this_, int row, int column, const QMimeData * data, Qt::DropAction action) {
  return (bool)((QTableWidget*)this_)->QTableWidget::dropMimeData(row, column, data, action);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:330
// [4] Qt::DropActions supportedDropActions()
extern "C" Q_DECL_EXPORT
Qt::DropActions C_ZNK12QTableWidget20supportedDropActionsEv(void *this_) {
  return (Qt::DropActions)((QTableWidget*)this_)->QTableWidget::supportedDropActions();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:347
// [-2] void dropEvent(QDropEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN12QTableWidget9dropEventEP10QDropEvent(void *this_, QDropEvent * event) {
  ((QTableWidget*)this_)->QTableWidget::dropEvent(event);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:216
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QTableWidget10metaObjectEv(void *this_) {
  return (void*)((QTableWidget*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:216
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QTableWidget11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QTableWidget*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:216
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN12QTableWidget11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QTableWidget*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:216
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QTableWidget2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QTableWidget::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:216
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QTableWidget6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QTableWidget::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:222
// [-2] void QTableWidget(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QTableWidgetC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQTableWidget*)(0);
  return  new MyQTableWidget(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:223
// [-2] void QTableWidget(int, int, QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QTableWidgetC2EiiP7QWidget(int rows, int columns, QWidget * parent) {
  auto _nilp = (MyQTableWidget*)(0);
  return  new MyQTableWidget(rows, columns, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:224
// [-2] void ~QTableWidget()
extern "C" Q_DECL_EXPORT
void C_ZN12QTableWidgetD2Ev(void *this_) {
  delete (QTableWidget*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:226
// [-2] void setRowCount(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QTableWidget11setRowCountEi(void *this_, int rows) {
  ((QTableWidget*)this_)->setRowCount(rows);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:227
// [4] int rowCount()
extern "C" Q_DECL_EXPORT
int C_ZNK12QTableWidget8rowCountEv(void *this_) {
  return (int)((QTableWidget*)this_)->rowCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:229
// [-2] void setColumnCount(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QTableWidget14setColumnCountEi(void *this_, int columns) {
  ((QTableWidget*)this_)->setColumnCount(columns);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:230
// [4] int columnCount()
extern "C" Q_DECL_EXPORT
int C_ZNK12QTableWidget11columnCountEv(void *this_) {
  return (int)((QTableWidget*)this_)->columnCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:232
// [4] int row(const QTableWidgetItem *)
extern "C" Q_DECL_EXPORT
int C_ZNK12QTableWidget3rowEPK16QTableWidgetItem(void *this_, const QTableWidgetItem * item) {
  return (int)((QTableWidget*)this_)->row(item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:233
// [4] int column(const QTableWidgetItem *)
extern "C" Q_DECL_EXPORT
int C_ZNK12QTableWidget6columnEPK16QTableWidgetItem(void *this_, const QTableWidgetItem * item) {
  return (int)((QTableWidget*)this_)->column(item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:235
// [8] QTableWidgetItem * item(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK12QTableWidget4itemEii(void *this_, int row, int column) {
  return (void*)((QTableWidget*)this_)->item(row, column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:236
// [-2] void setItem(int, int, QTableWidgetItem *)
extern "C" Q_DECL_EXPORT
void C_ZN12QTableWidget7setItemEiiP16QTableWidgetItem(void *this_, int row, int column, QTableWidgetItem * item) {
  ((QTableWidget*)this_)->setItem(row, column, item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:237
// [8] QTableWidgetItem * takeItem(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QTableWidget8takeItemEii(void *this_, int row, int column) {
  return (void*)((QTableWidget*)this_)->takeItem(row, column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:239
// [8] QTableWidgetItem * verticalHeaderItem(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK12QTableWidget18verticalHeaderItemEi(void *this_, int row) {
  return (void*)((QTableWidget*)this_)->verticalHeaderItem(row);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:240
// [-2] void setVerticalHeaderItem(int, QTableWidgetItem *)
extern "C" Q_DECL_EXPORT
void C_ZN12QTableWidget21setVerticalHeaderItemEiP16QTableWidgetItem(void *this_, int row, QTableWidgetItem * item) {
  ((QTableWidget*)this_)->setVerticalHeaderItem(row, item);
}

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qtablewidget.h:241
// [8] QTableWidgetItem * takeVerticalHeaderItem(int)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void* C_ZN12QTableWidget22takeVerticalHeaderItemEi(void *this_, int row) {
  return (void*)((QTableWidget*)this_)->takeVerticalHeaderItem(row);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:243
// [8] QTableWidgetItem * horizontalHeaderItem(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK12QTableWidget20horizontalHeaderItemEi(void *this_, int column) {
  return (void*)((QTableWidget*)this_)->horizontalHeaderItem(column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:244
// [-2] void setHorizontalHeaderItem(int, QTableWidgetItem *)
extern "C" Q_DECL_EXPORT
void C_ZN12QTableWidget23setHorizontalHeaderItemEiP16QTableWidgetItem(void *this_, int column, QTableWidgetItem * item) {
  ((QTableWidget*)this_)->setHorizontalHeaderItem(column, item);
}

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qtablewidget.h:245
// [8] QTableWidgetItem * takeHorizontalHeaderItem(int)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void* C_ZN12QTableWidget24takeHorizontalHeaderItemEi(void *this_, int column) {
  return (void*)((QTableWidget*)this_)->takeHorizontalHeaderItem(column);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:246
// [-2] void setVerticalHeaderLabels(const QStringList &)
extern "C" Q_DECL_EXPORT
void C_ZN12QTableWidget23setVerticalHeaderLabelsERK11QStringList(void *this_, QStringList* labels) {
  ((QTableWidget*)this_)->setVerticalHeaderLabels(*labels);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:247
// [-2] void setHorizontalHeaderLabels(const QStringList &)
extern "C" Q_DECL_EXPORT
void C_ZN12QTableWidget25setHorizontalHeaderLabelsERK11QStringList(void *this_, QStringList* labels) {
  ((QTableWidget*)this_)->setHorizontalHeaderLabels(*labels);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:249
// [4] int currentRow()
extern "C" Q_DECL_EXPORT
int C_ZNK12QTableWidget10currentRowEv(void *this_) {
  return (int)((QTableWidget*)this_)->currentRow();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:250
// [4] int currentColumn()
extern "C" Q_DECL_EXPORT
int C_ZNK12QTableWidget13currentColumnEv(void *this_) {
  return (int)((QTableWidget*)this_)->currentColumn();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:251
// [8] QTableWidgetItem * currentItem()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QTableWidget11currentItemEv(void *this_) {
  return (void*)((QTableWidget*)this_)->currentItem();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:252
// [-2] void setCurrentItem(QTableWidgetItem *)
extern "C" Q_DECL_EXPORT
void C_ZN12QTableWidget14setCurrentItemEP16QTableWidgetItem(void *this_, QTableWidgetItem * item) {
  ((QTableWidget*)this_)->setCurrentItem(item);
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qtablewidget.h:253
// [-2] void setCurrentItem(QTableWidgetItem *, QItemSelectionModel::SelectionFlags)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN12QTableWidget14setCurrentItemEP16QTableWidgetItem6QFlagsIN19QItemSelectionModel13SelectionFlagEE(void *this_, QTableWidgetItem * item, QFlags<QItemSelectionModel::SelectionFlag> command) {
  ((QTableWidget*)this_)->setCurrentItem(item, command);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qtablewidget.h:254
// [-2] void setCurrentCell(int, int)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN12QTableWidget14setCurrentCellEii(void *this_, int row, int column) {
  ((QTableWidget*)this_)->setCurrentCell(row, column);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qtablewidget.h:255
// [-2] void setCurrentCell(int, int, QItemSelectionModel::SelectionFlags)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN12QTableWidget14setCurrentCellEii6QFlagsIN19QItemSelectionModel13SelectionFlagEE(void *this_, int row, int column, QFlags<QItemSelectionModel::SelectionFlag> command) {
  ((QTableWidget*)this_)->setCurrentCell(row, column, command);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:257
// [-2] void sortItems(int, Qt::SortOrder)
extern "C" Q_DECL_EXPORT
void C_ZN12QTableWidget9sortItemsEiN2Qt9SortOrderE(void *this_, int column, Qt::SortOrder order) {
  ((QTableWidget*)this_)->sortItems(column, order);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:258
// [-2] void setSortingEnabled(bool)
extern "C" Q_DECL_EXPORT
void C_ZN12QTableWidget17setSortingEnabledEb(void *this_, bool enable) {
  ((QTableWidget*)this_)->setSortingEnabled(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:259
// [1] bool isSortingEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QTableWidget16isSortingEnabledEv(void *this_) {
  return (bool)((QTableWidget*)this_)->isSortingEnabled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:261
// [-2] void editItem(QTableWidgetItem *)
extern "C" Q_DECL_EXPORT
void C_ZN12QTableWidget8editItemEP16QTableWidgetItem(void *this_, QTableWidgetItem * item) {
  ((QTableWidget*)this_)->editItem(item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:262
// [-2] void openPersistentEditor(QTableWidgetItem *)
extern "C" Q_DECL_EXPORT
void C_ZN12QTableWidget20openPersistentEditorEP16QTableWidgetItem(void *this_, QTableWidgetItem * item) {
  ((QTableWidget*)this_)->openPersistentEditor(item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:263
// [-2] void closePersistentEditor(QTableWidgetItem *)
extern "C" Q_DECL_EXPORT
void C_ZN12QTableWidget21closePersistentEditorEP16QTableWidgetItem(void *this_, QTableWidgetItem * item) {
  ((QTableWidget*)this_)->closePersistentEditor(item);
}

// Public Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtWidgets/qtablewidget.h:265
// [1] bool isPersistentEditorOpen(QTableWidgetItem *)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
bool C_ZNK12QTableWidget22isPersistentEditorOpenEP16QTableWidgetItem(void *this_, QTableWidgetItem * item) {
  return (bool)((QTableWidget*)this_)->isPersistentEditorOpen(item);
}
#endif // QT_VERSION >= 0x050a00

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qtablewidget.h:267
// [8] QWidget * cellWidget(int, int)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void* C_ZNK12QTableWidget10cellWidgetEii(void *this_, int row, int column) {
  return (void*)((QTableWidget*)this_)->cellWidget(row, column);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qtablewidget.h:268
// [-2] void setCellWidget(int, int, QWidget *)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN12QTableWidget13setCellWidgetEiiP7QWidget(void *this_, int row, int column, QWidget * widget) {
  ((QTableWidget*)this_)->setCellWidget(row, column, widget);
}
#endif // QT_VERSION >= 0x040100

// Public inline Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtWidgets/qtablewidget.h:269
// [-2] void removeCellWidget(int, int)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void C_ZN12QTableWidget16removeCellWidgetEii(void *this_, int row, int column) {
  ((QTableWidget*)this_)->removeCellWidget(row, column);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:271
// [1] bool isItemSelected(const QTableWidgetItem *)
extern "C" Q_DECL_EXPORT
bool C_ZNK12QTableWidget14isItemSelectedEPK16QTableWidgetItem(void *this_, const QTableWidgetItem * item) {
  return (bool)((QTableWidget*)this_)->isItemSelected(item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:272
// [-2] void setItemSelected(const QTableWidgetItem *, bool)
extern "C" Q_DECL_EXPORT
void C_ZN12QTableWidget15setItemSelectedEPK16QTableWidgetItemb(void *this_, const QTableWidgetItem * item, bool select_) {
  ((QTableWidget*)this_)->setItemSelected(item, select_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:273
// [-2] void setRangeSelected(const QTableWidgetSelectionRange &, bool)
extern "C" Q_DECL_EXPORT
void C_ZN12QTableWidget16setRangeSelectedERK26QTableWidgetSelectionRangeb(void *this_, QTableWidgetSelectionRange* range_, bool select_) {
  ((QTableWidget*)this_)->setRangeSelected(*range_, select_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:275
// [-2] QList<QTableWidgetSelectionRange> selectedRanges()
extern "C" Q_DECL_EXPORT
QList<QTableWidgetSelectionRange>* C_ZNK12QTableWidget14selectedRangesEv(void *this_) {
  auto rv = ((QTableWidget*)this_)->selectedRanges();
return new QList<QTableWidgetSelectionRange>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:276
// [-2] QList<QTableWidgetItem *> selectedItems()
extern "C" Q_DECL_EXPORT
QList<QTableWidgetItem *>* C_ZNK12QTableWidget13selectedItemsEv(void *this_) {
  auto rv = ((QTableWidget*)this_)->selectedItems();
return new QList<QTableWidgetItem *>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:277
// [-2] QList<QTableWidgetItem *> findItems(const QString &, Qt::MatchFlags)
extern "C" Q_DECL_EXPORT
QList<QTableWidgetItem *>* C_ZNK12QTableWidget9findItemsERK7QString6QFlagsIN2Qt9MatchFlagEE(void *this_, QString* text, QFlags<Qt::MatchFlag> flags) {
  auto rv = ((QTableWidget*)this_)->findItems(*text, flags);
return new QList<QTableWidgetItem *>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:279
// [4] int visualRow(int)
extern "C" Q_DECL_EXPORT
int C_ZNK12QTableWidget9visualRowEi(void *this_, int logicalRow) {
  return (int)((QTableWidget*)this_)->visualRow(logicalRow);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:280
// [4] int visualColumn(int)
extern "C" Q_DECL_EXPORT
int C_ZNK12QTableWidget12visualColumnEi(void *this_, int logicalColumn) {
  return (int)((QTableWidget*)this_)->visualColumn(logicalColumn);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:282
// [8] QTableWidgetItem * itemAt(const QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZNK12QTableWidget6itemAtERK6QPoint(void *this_, QPoint* p) {
  return (void*)((QTableWidget*)this_)->itemAt(*p);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:283
// [8] QTableWidgetItem * itemAt(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK12QTableWidget6itemAtEii(void *this_, int x, int y) {
  return (void*)((QTableWidget*)this_)->itemAt(x, y);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:284
// [16] QRect visualItemRect(const QTableWidgetItem *)
extern "C" Q_DECL_EXPORT
void* C_ZNK12QTableWidget14visualItemRectEPK16QTableWidgetItem(void *this_, const QTableWidgetItem * item) {
  auto rv = ((QTableWidget*)this_)->visualItemRect(item);
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:286
// [8] const QTableWidgetItem * itemPrototype()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QTableWidget13itemPrototypeEv(void *this_) {
  return (void*)((QTableWidget*)this_)->itemPrototype();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:287
// [-2] void setItemPrototype(const QTableWidgetItem *)
extern "C" Q_DECL_EXPORT
void C_ZN12QTableWidget16setItemPrototypeEPK16QTableWidgetItem(void *this_, const QTableWidgetItem * item) {
  ((QTableWidget*)this_)->setItemPrototype(item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:290
// [-2] void scrollToItem(const QTableWidgetItem *, QAbstractItemView::ScrollHint)
extern "C" Q_DECL_EXPORT
void C_ZN12QTableWidget12scrollToItemEPK16QTableWidgetItemN17QAbstractItemView10ScrollHintE(void *this_, const QTableWidgetItem * item, QAbstractItemView::ScrollHint hint) {
  ((QTableWidget*)this_)->scrollToItem(item, hint);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:291
// [-2] void insertRow(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QTableWidget9insertRowEi(void *this_, int row) {
  ((QTableWidget*)this_)->insertRow(row);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:292
// [-2] void insertColumn(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QTableWidget12insertColumnEi(void *this_, int column) {
  ((QTableWidget*)this_)->insertColumn(column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:293
// [-2] void removeRow(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QTableWidget9removeRowEi(void *this_, int row) {
  ((QTableWidget*)this_)->removeRow(row);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:294
// [-2] void removeColumn(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QTableWidget12removeColumnEi(void *this_, int column) {
  ((QTableWidget*)this_)->removeColumn(column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:295
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN12QTableWidget5clearEv(void *this_) {
  ((QTableWidget*)this_)->clear();
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qtablewidget.h:296
// [-2] void clearContents()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN12QTableWidget13clearContentsEv(void *this_) {
  ((QTableWidget*)this_)->clearContents();
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:299
// [-2] void itemPressed(QTableWidgetItem *)
extern "C" Q_DECL_EXPORT
void C_ZN12QTableWidget11itemPressedEP16QTableWidgetItem(void *this_, QTableWidgetItem * item) {
  ((QTableWidget*)this_)->itemPressed(item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:300
// [-2] void itemClicked(QTableWidgetItem *)
extern "C" Q_DECL_EXPORT
void C_ZN12QTableWidget11itemClickedEP16QTableWidgetItem(void *this_, QTableWidgetItem * item) {
  ((QTableWidget*)this_)->itemClicked(item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:301
// [-2] void itemDoubleClicked(QTableWidgetItem *)
extern "C" Q_DECL_EXPORT
void C_ZN12QTableWidget17itemDoubleClickedEP16QTableWidgetItem(void *this_, QTableWidgetItem * item) {
  ((QTableWidget*)this_)->itemDoubleClicked(item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:303
// [-2] void itemActivated(QTableWidgetItem *)
extern "C" Q_DECL_EXPORT
void C_ZN12QTableWidget13itemActivatedEP16QTableWidgetItem(void *this_, QTableWidgetItem * item) {
  ((QTableWidget*)this_)->itemActivated(item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:304
// [-2] void itemEntered(QTableWidgetItem *)
extern "C" Q_DECL_EXPORT
void C_ZN12QTableWidget11itemEnteredEP16QTableWidgetItem(void *this_, QTableWidgetItem * item) {
  ((QTableWidget*)this_)->itemEntered(item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:306
// [-2] void itemChanged(QTableWidgetItem *)
extern "C" Q_DECL_EXPORT
void C_ZN12QTableWidget11itemChangedEP16QTableWidgetItem(void *this_, QTableWidgetItem * item) {
  ((QTableWidget*)this_)->itemChanged(item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:308
// [-2] void currentItemChanged(QTableWidgetItem *, QTableWidgetItem *)
extern "C" Q_DECL_EXPORT
void C_ZN12QTableWidget18currentItemChangedEP16QTableWidgetItemS1_(void *this_, QTableWidgetItem * current, QTableWidgetItem * previous) {
  ((QTableWidget*)this_)->currentItemChanged(current, previous);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:309
// [-2] void itemSelectionChanged()
extern "C" Q_DECL_EXPORT
void C_ZN12QTableWidget20itemSelectionChangedEv(void *this_) {
  ((QTableWidget*)this_)->itemSelectionChanged();
}

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qtablewidget.h:311
// [-2] void cellPressed(int, int)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN12QTableWidget11cellPressedEii(void *this_, int row, int column) {
  ((QTableWidget*)this_)->cellPressed(row, column);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qtablewidget.h:312
// [-2] void cellClicked(int, int)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN12QTableWidget11cellClickedEii(void *this_, int row, int column) {
  ((QTableWidget*)this_)->cellClicked(row, column);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qtablewidget.h:313
// [-2] void cellDoubleClicked(int, int)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN12QTableWidget17cellDoubleClickedEii(void *this_, int row, int column) {
  ((QTableWidget*)this_)->cellDoubleClicked(row, column);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qtablewidget.h:315
// [-2] void cellActivated(int, int)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN12QTableWidget13cellActivatedEii(void *this_, int row, int column) {
  ((QTableWidget*)this_)->cellActivated(row, column);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qtablewidget.h:316
// [-2] void cellEntered(int, int)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN12QTableWidget11cellEnteredEii(void *this_, int row, int column) {
  ((QTableWidget*)this_)->cellEntered(row, column);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qtablewidget.h:317
// [-2] void cellChanged(int, int)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN12QTableWidget11cellChangedEii(void *this_, int row, int column) {
  ((QTableWidget*)this_)->cellChanged(row, column);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qtablewidget.h:319
// [-2] void currentCellChanged(int, int, int, int)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN12QTableWidget18currentCellChangedEiiii(void *this_, int currentRow, int currentColumn, int previousRow, int previousColumn) {
  ((QTableWidget*)this_)->currentCellChanged(currentRow, currentColumn, previousRow, previousColumn);
}
#endif // QT_VERSION >= 0x040100

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(tablewidget)
#endif // #ifndef QT_MINIMAL
//  footer block end
