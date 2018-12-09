//  header block begin

#ifndef QT_MINIMAL
// /usr/include/qt/QtWidgets/qtreewidget.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtreewidget.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QTreeWidget is pure virtual: false
// QTreeWidget has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTreeWidget_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTreeWidget_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTreeWidget_t qt_meta_stringdata_MyQTreeWidget = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQTreeWidget"
  },
  "MyQTreeWidget"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTreeWidget[] = {
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
class Q_DECL_EXPORT MyQTreeWidget : public QTreeWidget {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QTreeWidget::staticMetaObject,
  qt_meta_stringdata_MyQTreeWidget.data,
  qt_meta_data_MyQTreeWidget,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQTreeWidget.stringdata0))
      return static_cast<void*>(this);
  return QTreeWidget::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QTreeWidget::qt_metacall(_c, _id, _a);
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
  virtual ~MyQTreeWidget() {}
// void QTreeWidget(QWidget *)
MyQTreeWidget(QWidget * parent) : QTreeWidget(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QTreeWidget::event(e);
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
    return QTreeWidget::mimeTypes();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [8] QMimeData * mimeData(const QList<QTreeWidgetItem *>)
  virtual QMimeData * mimeData(const QList<QTreeWidgetItem *> items) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mimeData", &handled, 1, (uint64_t)&items, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QMimeData *)(irv);
      // Pointer Pointer QMimeData *
    } else {
    return QTreeWidget::mimeData(items);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool dropMimeData(QTreeWidgetItem *, int, const QMimeData *, Qt::DropAction)
  virtual bool dropMimeData(QTreeWidgetItem * parent, int index, const QMimeData * data, Qt::DropAction action)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dropMimeData", &handled, 4, (uint64_t)parent, (uint64_t)index, (uint64_t)data, (uint64_t)action, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QTreeWidget::dropMimeData(parent, index, data, action);
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
    return QTreeWidget::supportedDropActions();
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
    QTreeWidget::dropEvent(event);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QTreeWidget_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQTreeWidget* qo = (MyQTreeWidget*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:349
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN11QTreeWidget5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QTreeWidget*)this_)->QTreeWidget::event(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:350
// [8] QStringList mimeTypes()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTreeWidget9mimeTypesEv(void *this_) {
  auto rv = ((QTreeWidget*)this_)->QTreeWidget::mimeTypes();
return new QStringList(rv);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:354
// [8] QMimeData * mimeData(const QList<QTreeWidgetItem *>)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTreeWidget8mimeDataE5QListIP15QTreeWidgetItemE(void *this_, const QList<QTreeWidgetItem *> items) {
  return (void*)((QTreeWidget*)this_)->QTreeWidget::mimeData(items);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:356
// [1] bool dropMimeData(QTreeWidgetItem *, int, const QMimeData *, Qt::DropAction)
extern "C" Q_DECL_EXPORT
bool C_ZN11QTreeWidget12dropMimeDataEP15QTreeWidgetItemiPK9QMimeDataN2Qt10DropActionE(void *this_, QTreeWidgetItem * parent, int index, const QMimeData * data, Qt::DropAction action) {
  return (bool)((QTreeWidget*)this_)->QTreeWidget::dropMimeData(parent, index, data, action);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:358
// [4] Qt::DropActions supportedDropActions()
extern "C" Q_DECL_EXPORT
Qt::DropActions C_ZNK11QTreeWidget20supportedDropActionsEv(void *this_) {
  return (Qt::DropActions)((QTreeWidget*)this_)->QTreeWidget::supportedDropActions();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:373
// [-2] void dropEvent(QDropEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QTreeWidget9dropEventEP10QDropEvent(void *this_, QDropEvent * event) {
  ((QTreeWidget*)this_)->QTreeWidget::dropEvent(event);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:257
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTreeWidget10metaObjectEv(void *this_) {
  return (void*)((QTreeWidget*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:257
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTreeWidget11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QTreeWidget*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:257
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN11QTreeWidget11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QTreeWidget*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:257
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTreeWidget2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QTreeWidget::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:257
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTreeWidget6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QTreeWidget::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:264
// [-2] void QTreeWidget(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTreeWidgetC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQTreeWidget*)(0);
  return  new MyQTreeWidget(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:265
// [-2] void ~QTreeWidget()
extern "C" Q_DECL_EXPORT
void C_ZN11QTreeWidgetD2Ev(void *this_) {
  delete (QTreeWidget*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:267
// [4] int columnCount()
extern "C" Q_DECL_EXPORT
int C_ZNK11QTreeWidget11columnCountEv(void *this_) {
  return (int)((QTreeWidget*)this_)->columnCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:268
// [-2] void setColumnCount(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QTreeWidget14setColumnCountEi(void *this_, int columns) {
  ((QTreeWidget*)this_)->setColumnCount(columns);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qtreewidget.h:270
// [8] QTreeWidgetItem * invisibleRootItem()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTreeWidget17invisibleRootItemEv(void *this_) {
  return (void*)((QTreeWidget*)this_)->invisibleRootItem();
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:271
// [8] QTreeWidgetItem * topLevelItem(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTreeWidget12topLevelItemEi(void *this_, int index) {
  return (void*)((QTreeWidget*)this_)->topLevelItem(index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:272
// [4] int topLevelItemCount()
extern "C" Q_DECL_EXPORT
int C_ZNK11QTreeWidget17topLevelItemCountEv(void *this_) {
  return (int)((QTreeWidget*)this_)->topLevelItemCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:273
// [-2] void insertTopLevelItem(int, QTreeWidgetItem *)
extern "C" Q_DECL_EXPORT
void C_ZN11QTreeWidget18insertTopLevelItemEiP15QTreeWidgetItem(void *this_, int index, QTreeWidgetItem * item) {
  ((QTreeWidget*)this_)->insertTopLevelItem(index, item);
}

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qtreewidget.h:274
// [-2] void addTopLevelItem(QTreeWidgetItem *)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN11QTreeWidget15addTopLevelItemEP15QTreeWidgetItem(void *this_, QTreeWidgetItem * item) {
  ((QTreeWidget*)this_)->addTopLevelItem(item);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:275
// [8] QTreeWidgetItem * takeTopLevelItem(int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTreeWidget16takeTopLevelItemEi(void *this_, int index) {
  return (void*)((QTreeWidget*)this_)->takeTopLevelItem(index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:276
// [4] int indexOfTopLevelItem(QTreeWidgetItem *)
extern "C" Q_DECL_EXPORT
int C_ZNK11QTreeWidget19indexOfTopLevelItemEP15QTreeWidgetItem(void *this_, QTreeWidgetItem * item) {
  return (int)((QTreeWidget*)this_)->indexOfTopLevelItem(item);
}

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qtreewidget.h:278
// [-2] void insertTopLevelItems(int, const QList<QTreeWidgetItem *> &)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN11QTreeWidget19insertTopLevelItemsEiRK5QListIP15QTreeWidgetItemE(void *this_, int index, QList<QTreeWidgetItem *>* items) {
  ((QTreeWidget*)this_)->insertTopLevelItems(index, *items);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:279
// [-2] void addTopLevelItems(const QList<QTreeWidgetItem *> &)
extern "C" Q_DECL_EXPORT
void C_ZN11QTreeWidget16addTopLevelItemsERK5QListIP15QTreeWidgetItemE(void *this_, QList<QTreeWidgetItem *>* items) {
  ((QTreeWidget*)this_)->addTopLevelItems(*items);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:281
// [8] QTreeWidgetItem * headerItem()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTreeWidget10headerItemEv(void *this_) {
  return (void*)((QTreeWidget*)this_)->headerItem();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:282
// [-2] void setHeaderItem(QTreeWidgetItem *)
extern "C" Q_DECL_EXPORT
void C_ZN11QTreeWidget13setHeaderItemEP15QTreeWidgetItem(void *this_, QTreeWidgetItem * item) {
  ((QTreeWidget*)this_)->setHeaderItem(item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:283
// [-2] void setHeaderLabels(const QStringList &)
extern "C" Q_DECL_EXPORT
void C_ZN11QTreeWidget15setHeaderLabelsERK11QStringList(void *this_, QStringList* labels) {
  ((QTreeWidget*)this_)->setHeaderLabels(*labels);
}

// Public inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qtreewidget.h:284
// [-2] void setHeaderLabel(const QString &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN11QTreeWidget14setHeaderLabelERK7QString(void *this_, QString* label) {
  ((QTreeWidget*)this_)->setHeaderLabel(*label);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:286
// [8] QTreeWidgetItem * currentItem()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTreeWidget11currentItemEv(void *this_) {
  return (void*)((QTreeWidget*)this_)->currentItem();
}

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qtreewidget.h:287
// [4] int currentColumn()
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
int C_ZNK11QTreeWidget13currentColumnEv(void *this_) {
  return (int)((QTreeWidget*)this_)->currentColumn();
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:288
// [-2] void setCurrentItem(QTreeWidgetItem *)
extern "C" Q_DECL_EXPORT
void C_ZN11QTreeWidget14setCurrentItemEP15QTreeWidgetItem(void *this_, QTreeWidgetItem * item) {
  ((QTreeWidget*)this_)->setCurrentItem(item);
}

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qtreewidget.h:289
// [-2] void setCurrentItem(QTreeWidgetItem *, int)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN11QTreeWidget14setCurrentItemEP15QTreeWidgetItemi(void *this_, QTreeWidgetItem * item, int column) {
  ((QTreeWidget*)this_)->setCurrentItem(item, column);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qtreewidget.h:290
// [-2] void setCurrentItem(QTreeWidgetItem *, int, QItemSelectionModel::SelectionFlags)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN11QTreeWidget14setCurrentItemEP15QTreeWidgetItemi6QFlagsIN19QItemSelectionModel13SelectionFlagEE(void *this_, QTreeWidgetItem * item, int column, QFlags<QItemSelectionModel::SelectionFlag> command) {
  ((QTreeWidget*)this_)->setCurrentItem(item, column, command);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:292
// [8] QTreeWidgetItem * itemAt(const QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTreeWidget6itemAtERK6QPoint(void *this_, QPoint* p) {
  return (void*)((QTreeWidget*)this_)->itemAt(*p);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:293
// [8] QTreeWidgetItem * itemAt(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTreeWidget6itemAtEii(void *this_, int x, int y) {
  return (void*)((QTreeWidget*)this_)->itemAt(x, y);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:294
// [16] QRect visualItemRect(const QTreeWidgetItem *)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTreeWidget14visualItemRectEPK15QTreeWidgetItem(void *this_, const QTreeWidgetItem * item) {
  auto rv = ((QTreeWidget*)this_)->visualItemRect(item);
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qtreewidget.h:296
// [4] int sortColumn()
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
int C_ZNK11QTreeWidget10sortColumnEv(void *this_) {
  return (int)((QTreeWidget*)this_)->sortColumn();
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:297
// [-2] void sortItems(int, Qt::SortOrder)
extern "C" Q_DECL_EXPORT
void C_ZN11QTreeWidget9sortItemsEiN2Qt9SortOrderE(void *this_, int column, Qt::SortOrder order) {
  ((QTreeWidget*)this_)->sortItems(column, order);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:299
// [-2] void editItem(QTreeWidgetItem *, int)
extern "C" Q_DECL_EXPORT
void C_ZN11QTreeWidget8editItemEP15QTreeWidgetItemi(void *this_, QTreeWidgetItem * item, int column) {
  ((QTreeWidget*)this_)->editItem(item, column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:300
// [-2] void openPersistentEditor(QTreeWidgetItem *, int)
extern "C" Q_DECL_EXPORT
void C_ZN11QTreeWidget20openPersistentEditorEP15QTreeWidgetItemi(void *this_, QTreeWidgetItem * item, int column) {
  ((QTreeWidget*)this_)->openPersistentEditor(item, column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:301
// [-2] void closePersistentEditor(QTreeWidgetItem *, int)
extern "C" Q_DECL_EXPORT
void C_ZN11QTreeWidget21closePersistentEditorEP15QTreeWidgetItemi(void *this_, QTreeWidgetItem * item, int column) {
  ((QTreeWidget*)this_)->closePersistentEditor(item, column);
}

// Public Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtWidgets/qtreewidget.h:303
// [1] bool isPersistentEditorOpen(QTreeWidgetItem *, int)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTreeWidget22isPersistentEditorOpenEP15QTreeWidgetItemi(void *this_, QTreeWidgetItem * item, int column) {
  return (bool)((QTreeWidget*)this_)->isPersistentEditorOpen(item, column);
}
#endif // QT_VERSION >= 0x050a00

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qtreewidget.h:305
// [8] QWidget * itemWidget(QTreeWidgetItem *, int)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTreeWidget10itemWidgetEP15QTreeWidgetItemi(void *this_, QTreeWidgetItem * item, int column) {
  return (void*)((QTreeWidget*)this_)->itemWidget(item, column);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qtreewidget.h:306
// [-2] void setItemWidget(QTreeWidgetItem *, int, QWidget *)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN11QTreeWidget13setItemWidgetEP15QTreeWidgetItemiP7QWidget(void *this_, QTreeWidgetItem * item, int column, QWidget * widget) {
  ((QTreeWidget*)this_)->setItemWidget(item, column, widget);
}
#endif // QT_VERSION >= 0x040100

// Public inline Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtWidgets/qtreewidget.h:307
// [-2] void removeItemWidget(QTreeWidgetItem *, int)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void C_ZN11QTreeWidget16removeItemWidgetEP15QTreeWidgetItemi(void *this_, QTreeWidgetItem * item, int column) {
  ((QTreeWidget*)this_)->removeItemWidget(item, column);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:309
// [1] bool isItemSelected(const QTreeWidgetItem *)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTreeWidget14isItemSelectedEPK15QTreeWidgetItem(void *this_, const QTreeWidgetItem * item) {
  return (bool)((QTreeWidget*)this_)->isItemSelected(item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:310
// [-2] void setItemSelected(const QTreeWidgetItem *, bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QTreeWidget15setItemSelectedEPK15QTreeWidgetItemb(void *this_, const QTreeWidgetItem * item, bool select_) {
  ((QTreeWidget*)this_)->setItemSelected(item, select_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:311
// [8] QList<QTreeWidgetItem *> selectedItems()
extern "C" Q_DECL_EXPORT
QList<QTreeWidgetItem *>* C_ZNK11QTreeWidget13selectedItemsEv(void *this_) {
  auto rv = ((QTreeWidget*)this_)->selectedItems();
return new QList<QTreeWidgetItem *>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:312
// [8] QList<QTreeWidgetItem *> findItems(const QString &, Qt::MatchFlags, int)
extern "C" Q_DECL_EXPORT
QList<QTreeWidgetItem *>* C_ZNK11QTreeWidget9findItemsERK7QString6QFlagsIN2Qt9MatchFlagEEi(void *this_, QString* text, QFlags<Qt::MatchFlag> flags, int column) {
  auto rv = ((QTreeWidget*)this_)->findItems(*text, flags, column);
return new QList<QTreeWidgetItem *>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:315
// [1] bool isItemHidden(const QTreeWidgetItem *)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTreeWidget12isItemHiddenEPK15QTreeWidgetItem(void *this_, const QTreeWidgetItem * item) {
  return (bool)((QTreeWidget*)this_)->isItemHidden(item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:316
// [-2] void setItemHidden(const QTreeWidgetItem *, bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QTreeWidget13setItemHiddenEPK15QTreeWidgetItemb(void *this_, const QTreeWidgetItem * item, bool hide) {
  ((QTreeWidget*)this_)->setItemHidden(item, hide);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:318
// [1] bool isItemExpanded(const QTreeWidgetItem *)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTreeWidget14isItemExpandedEPK15QTreeWidgetItem(void *this_, const QTreeWidgetItem * item) {
  return (bool)((QTreeWidget*)this_)->isItemExpanded(item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:319
// [-2] void setItemExpanded(const QTreeWidgetItem *, bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QTreeWidget15setItemExpandedEPK15QTreeWidgetItemb(void *this_, const QTreeWidgetItem * item, bool expand) {
  ((QTreeWidget*)this_)->setItemExpanded(item, expand);
}

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtWidgets/qtreewidget.h:321
// [1] bool isFirstItemColumnSpanned(const QTreeWidgetItem *)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTreeWidget24isFirstItemColumnSpannedEPK15QTreeWidgetItem(void *this_, const QTreeWidgetItem * item) {
  return (bool)((QTreeWidget*)this_)->isFirstItemColumnSpanned(item);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtWidgets/qtreewidget.h:322
// [-2] void setFirstItemColumnSpanned(const QTreeWidgetItem *, bool)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void C_ZN11QTreeWidget25setFirstItemColumnSpannedEPK15QTreeWidgetItemb(void *this_, const QTreeWidgetItem * item, bool span) {
  ((QTreeWidget*)this_)->setFirstItemColumnSpanned(item, span);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtWidgets/qtreewidget.h:324
// [8] QTreeWidgetItem * itemAbove(const QTreeWidgetItem *)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTreeWidget9itemAboveEPK15QTreeWidgetItem(void *this_, const QTreeWidgetItem * item) {
  return (void*)((QTreeWidget*)this_)->itemAbove(item);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtWidgets/qtreewidget.h:325
// [8] QTreeWidgetItem * itemBelow(const QTreeWidgetItem *)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTreeWidget9itemBelowEPK15QTreeWidgetItem(void *this_, const QTreeWidgetItem * item) {
  return (void*)((QTreeWidget*)this_)->itemBelow(item);
}
#endif // QT_VERSION >= 0x040300

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:327
// [-2] void setSelectionModel(QItemSelectionModel *)
extern "C" Q_DECL_EXPORT
void C_ZN11QTreeWidget17setSelectionModelEP19QItemSelectionModel(void *this_, QItemSelectionModel * selectionModel) {
  ((QTreeWidget*)this_)->setSelectionModel(selectionModel);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:330
// [-2] void scrollToItem(const QTreeWidgetItem *, QAbstractItemView::ScrollHint)
extern "C" Q_DECL_EXPORT
void C_ZN11QTreeWidget12scrollToItemEPK15QTreeWidgetItemN17QAbstractItemView10ScrollHintE(void *this_, const QTreeWidgetItem * item, QAbstractItemView::ScrollHint hint) {
  ((QTreeWidget*)this_)->scrollToItem(item, hint);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:332
// [-2] void expandItem(const QTreeWidgetItem *)
extern "C" Q_DECL_EXPORT
void C_ZN11QTreeWidget10expandItemEPK15QTreeWidgetItem(void *this_, const QTreeWidgetItem * item) {
  ((QTreeWidget*)this_)->expandItem(item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:333
// [-2] void collapseItem(const QTreeWidgetItem *)
extern "C" Q_DECL_EXPORT
void C_ZN11QTreeWidget12collapseItemEPK15QTreeWidgetItem(void *this_, const QTreeWidgetItem * item) {
  ((QTreeWidget*)this_)->collapseItem(item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:334
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN11QTreeWidget5clearEv(void *this_) {
  ((QTreeWidget*)this_)->clear();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:337
// [-2] void itemPressed(QTreeWidgetItem *, int)
extern "C" Q_DECL_EXPORT
void C_ZN11QTreeWidget11itemPressedEP15QTreeWidgetItemi(void *this_, QTreeWidgetItem * item, int column) {
  ((QTreeWidget*)this_)->itemPressed(item, column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:338
// [-2] void itemClicked(QTreeWidgetItem *, int)
extern "C" Q_DECL_EXPORT
void C_ZN11QTreeWidget11itemClickedEP15QTreeWidgetItemi(void *this_, QTreeWidgetItem * item, int column) {
  ((QTreeWidget*)this_)->itemClicked(item, column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:339
// [-2] void itemDoubleClicked(QTreeWidgetItem *, int)
extern "C" Q_DECL_EXPORT
void C_ZN11QTreeWidget17itemDoubleClickedEP15QTreeWidgetItemi(void *this_, QTreeWidgetItem * item, int column) {
  ((QTreeWidget*)this_)->itemDoubleClicked(item, column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:340
// [-2] void itemActivated(QTreeWidgetItem *, int)
extern "C" Q_DECL_EXPORT
void C_ZN11QTreeWidget13itemActivatedEP15QTreeWidgetItemi(void *this_, QTreeWidgetItem * item, int column) {
  ((QTreeWidget*)this_)->itemActivated(item, column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:341
// [-2] void itemEntered(QTreeWidgetItem *, int)
extern "C" Q_DECL_EXPORT
void C_ZN11QTreeWidget11itemEnteredEP15QTreeWidgetItemi(void *this_, QTreeWidgetItem * item, int column) {
  ((QTreeWidget*)this_)->itemEntered(item, column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:342
// [-2] void itemChanged(QTreeWidgetItem *, int)
extern "C" Q_DECL_EXPORT
void C_ZN11QTreeWidget11itemChangedEP15QTreeWidgetItemi(void *this_, QTreeWidgetItem * item, int column) {
  ((QTreeWidget*)this_)->itemChanged(item, column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:343
// [-2] void itemExpanded(QTreeWidgetItem *)
extern "C" Q_DECL_EXPORT
void C_ZN11QTreeWidget12itemExpandedEP15QTreeWidgetItem(void *this_, QTreeWidgetItem * item) {
  ((QTreeWidget*)this_)->itemExpanded(item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:344
// [-2] void itemCollapsed(QTreeWidgetItem *)
extern "C" Q_DECL_EXPORT
void C_ZN11QTreeWidget13itemCollapsedEP15QTreeWidgetItem(void *this_, QTreeWidgetItem * item) {
  ((QTreeWidget*)this_)->itemCollapsed(item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:345
// [-2] void currentItemChanged(QTreeWidgetItem *, QTreeWidgetItem *)
extern "C" Q_DECL_EXPORT
void C_ZN11QTreeWidget18currentItemChangedEP15QTreeWidgetItemS1_(void *this_, QTreeWidgetItem * current, QTreeWidgetItem * previous) {
  ((QTreeWidget*)this_)->currentItemChanged(current, previous);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:346
// [-2] void itemSelectionChanged()
extern "C" Q_DECL_EXPORT
void C_ZN11QTreeWidget20itemSelectionChangedEv(void *this_) {
  ((QTreeWidget*)this_)->itemSelectionChanged();
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #ifndef QT_MINIMAL
//  footer block end
