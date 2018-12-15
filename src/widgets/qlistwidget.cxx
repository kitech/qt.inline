//  header block begin

// /usr/include/qt/QtWidgets/qlistwidget.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qlistwidget.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QListWidget is pure virtual: false
// QListWidget has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQListWidget_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQListWidget_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQListWidget_t qt_meta_stringdata_MyQListWidget = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQListWidget"
  },
  "MyQListWidget"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQListWidget[] = {
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
class Q_DECL_EXPORT MyQListWidget : public QListWidget {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QListWidget::staticMetaObject,
  qt_meta_stringdata_MyQListWidget.data,
  qt_meta_data_MyQListWidget,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQListWidget.stringdata0))
      return static_cast<void*>(this);
  return QListWidget::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QListWidget::qt_metacall(_c, _id, _a);
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
  virtual ~MyQListWidget() {}
// void QListWidget(QWidget *)
MyQListWidget(QWidget * parent) : QListWidget(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QListWidget::event(e);
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
    return QListWidget::mimeTypes();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [8] QMimeData * mimeData(const QList<QListWidgetItem *>)
  virtual QMimeData * mimeData(const QList<QListWidgetItem *> items) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mimeData", &handled, 1, (uint64_t)&items, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QMimeData *)(irv);
      // Pointer Pointer QMimeData *
    } else {
    return QListWidget::mimeData(items);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool dropMimeData(int, const QMimeData *, Qt::DropAction)
  virtual bool dropMimeData(int index, const QMimeData * data, Qt::DropAction action)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dropMimeData", &handled, 3, (uint64_t)index, (uint64_t)data, (uint64_t)action, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QListWidget::dropMimeData(index, data, action);
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
    return QListWidget::supportedDropActions();
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QListWidget_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQListWidget* qo = (MyQListWidget*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:277
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN11QListWidget5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QListWidget*)this_)->QListWidget::event(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:278
// [8] QStringList mimeTypes()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QListWidget9mimeTypesEv(void *this_) {
  auto rv = ((QListWidget*)this_)->QListWidget::mimeTypes();
return new QStringList(rv);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:282
// [8] QMimeData * mimeData(const QList<QListWidgetItem *>)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QListWidget8mimeDataE5QListIP15QListWidgetItemE(void *this_, const QList<QListWidgetItem *> items) {
  return (void*)((QListWidget*)this_)->QListWidget::mimeData(items);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:285
// [1] bool dropMimeData(int, const QMimeData *, Qt::DropAction)
extern "C" Q_DECL_EXPORT
bool C_ZN11QListWidget12dropMimeDataEiPK9QMimeDataN2Qt10DropActionE(void *this_, int index, const QMimeData * data, Qt::DropAction action) {
  return (bool)((QListWidget*)this_)->QListWidget::dropMimeData(index, data, action);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:286
// [4] Qt::DropActions supportedDropActions()
extern "C" Q_DECL_EXPORT
Qt::DropActions C_ZNK11QListWidget20supportedDropActionsEv(void *this_) {
  return (Qt::DropActions)((QListWidget*)this_)->QListWidget::supportedDropActions();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:200
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QListWidget10metaObjectEv(void *this_) {
  return (void*)((QListWidget*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:200
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QListWidget11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QListWidget*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:200
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN11QListWidget11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QListWidget*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:200
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QListWidget2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QListWidget::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:200
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QListWidget6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QListWidget::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:208
// [-2] void QListWidget(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QListWidgetC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQListWidget*)(0);
  return  new MyQListWidget(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:209
// [-2] void ~QListWidget()
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidgetD2Ev(void *this_) {
  delete (QListWidget*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:211
// [-2] void setSelectionModel(QItemSelectionModel *)
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget17setSelectionModelEP19QItemSelectionModel(void *this_, QItemSelectionModel * selectionModel) {
  ((QListWidget*)this_)->setSelectionModel(selectionModel);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:213
// [8] QListWidgetItem * item(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QListWidget4itemEi(void *this_, int row) {
  return (void*)((QListWidget*)this_)->item(row);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:214
// [4] int row(const QListWidgetItem *)
extern "C" Q_DECL_EXPORT
int C_ZNK11QListWidget3rowEPK15QListWidgetItem(void *this_, const QListWidgetItem * item) {
  return (int)((QListWidget*)this_)->row(item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:215
// [-2] void insertItem(int, QListWidgetItem *)
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget10insertItemEiP15QListWidgetItem(void *this_, int row, QListWidgetItem * item) {
  ((QListWidget*)this_)->insertItem(row, item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:216
// [-2] void insertItem(int, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget10insertItemEiRK7QString(void *this_, int row, QString* label) {
  ((QListWidget*)this_)->insertItem(row, *label);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:217
// [-2] void insertItems(int, const QStringList &)
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget11insertItemsEiRK11QStringList(void *this_, int row, QStringList* labels) {
  ((QListWidget*)this_)->insertItems(row, *labels);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:218
// [-2] void addItem(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget7addItemERK7QString(void *this_, QString* label) {
  ((QListWidget*)this_)->addItem(*label);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:219
// [-2] void addItem(QListWidgetItem *)
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget7addItemEP15QListWidgetItem(void *this_, QListWidgetItem * item) {
  ((QListWidget*)this_)->addItem(item);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:220
// [-2] void addItems(const QStringList &)
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget8addItemsERK11QStringList(void *this_, QStringList* labels) {
  ((QListWidget*)this_)->addItems(*labels);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:221
// [8] QListWidgetItem * takeItem(int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QListWidget8takeItemEi(void *this_, int row) {
  return (void*)((QListWidget*)this_)->takeItem(row);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:222
// [4] int count()
extern "C" Q_DECL_EXPORT
int C_ZNK11QListWidget5countEv(void *this_) {
  return (int)((QListWidget*)this_)->count();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:224
// [8] QListWidgetItem * currentItem()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QListWidget11currentItemEv(void *this_) {
  return (void*)((QListWidget*)this_)->currentItem();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:225
// [-2] void setCurrentItem(QListWidgetItem *)
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget14setCurrentItemEP15QListWidgetItem(void *this_, QListWidgetItem * item) {
  ((QListWidget*)this_)->setCurrentItem(item);
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qlistwidget.h:226
// [-2] void setCurrentItem(QListWidgetItem *, QItemSelectionModel::SelectionFlags)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget14setCurrentItemEP15QListWidgetItem6QFlagsIN19QItemSelectionModel13SelectionFlagEE(void *this_, QListWidgetItem * item, QFlags<QItemSelectionModel::SelectionFlag> command) {
  ((QListWidget*)this_)->setCurrentItem(item, command);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:228
// [4] int currentRow()
extern "C" Q_DECL_EXPORT
int C_ZNK11QListWidget10currentRowEv(void *this_) {
  return (int)((QListWidget*)this_)->currentRow();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:229
// [-2] void setCurrentRow(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget13setCurrentRowEi(void *this_, int row) {
  ((QListWidget*)this_)->setCurrentRow(row);
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qlistwidget.h:230
// [-2] void setCurrentRow(int, QItemSelectionModel::SelectionFlags)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget13setCurrentRowEi6QFlagsIN19QItemSelectionModel13SelectionFlagEE(void *this_, int row, QFlags<QItemSelectionModel::SelectionFlag> command) {
  ((QListWidget*)this_)->setCurrentRow(row, command);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:232
// [8] QListWidgetItem * itemAt(const QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QListWidget6itemAtERK6QPoint(void *this_, QPoint* p) {
  return (void*)((QListWidget*)this_)->itemAt(*p);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:233
// [8] QListWidgetItem * itemAt(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QListWidget6itemAtEii(void *this_, int x, int y) {
  return (void*)((QListWidget*)this_)->itemAt(x, y);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:234
// [16] QRect visualItemRect(const QListWidgetItem *)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QListWidget14visualItemRectEPK15QListWidgetItem(void *this_, const QListWidgetItem * item) {
  auto rv = ((QListWidget*)this_)->visualItemRect(item);
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:236
// [-2] void sortItems(Qt::SortOrder)
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget9sortItemsEN2Qt9SortOrderE(void *this_, Qt::SortOrder order) {
  ((QListWidget*)this_)->sortItems(order);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:237
// [-2] void setSortingEnabled(bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget17setSortingEnabledEb(void *this_, bool enable) {
  ((QListWidget*)this_)->setSortingEnabled(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:238
// [1] bool isSortingEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QListWidget16isSortingEnabledEv(void *this_) {
  return (bool)((QListWidget*)this_)->isSortingEnabled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:240
// [-2] void editItem(QListWidgetItem *)
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget8editItemEP15QListWidgetItem(void *this_, QListWidgetItem * item) {
  ((QListWidget*)this_)->editItem(item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:241
// [-2] void openPersistentEditor(QListWidgetItem *)
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget20openPersistentEditorEP15QListWidgetItem(void *this_, QListWidgetItem * item) {
  ((QListWidget*)this_)->openPersistentEditor(item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:242
// [-2] void closePersistentEditor(QListWidgetItem *)
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget21closePersistentEditorEP15QListWidgetItem(void *this_, QListWidgetItem * item) {
  ((QListWidget*)this_)->closePersistentEditor(item);
}

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qlistwidget.h:244
// [8] QWidget * itemWidget(QListWidgetItem *)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void* C_ZNK11QListWidget10itemWidgetEP15QListWidgetItem(void *this_, QListWidgetItem * item) {
  return (void*)((QListWidget*)this_)->itemWidget(item);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qlistwidget.h:245
// [-2] void setItemWidget(QListWidgetItem *, QWidget *)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget13setItemWidgetEP15QListWidgetItemP7QWidget(void *this_, QListWidgetItem * item, QWidget * widget) {
  ((QListWidget*)this_)->setItemWidget(item, widget);
}
#endif // QT_VERSION >= 0x040100

// Public inline Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtWidgets/qlistwidget.h:246
// [-2] void removeItemWidget(QListWidgetItem *)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget16removeItemWidgetEP15QListWidgetItem(void *this_, QListWidgetItem * item) {
  ((QListWidget*)this_)->removeItemWidget(item);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:248
// [1] bool isItemSelected(const QListWidgetItem *)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QListWidget14isItemSelectedEPK15QListWidgetItem(void *this_, const QListWidgetItem * item) {
  return (bool)((QListWidget*)this_)->isItemSelected(item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:249
// [-2] void setItemSelected(const QListWidgetItem *, bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget15setItemSelectedEPK15QListWidgetItemb(void *this_, const QListWidgetItem * item, bool select_) {
  ((QListWidget*)this_)->setItemSelected(item, select_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:250
// [-2] QList<QListWidgetItem *> selectedItems()
extern "C" Q_DECL_EXPORT
QList<QListWidgetItem *>* C_ZNK11QListWidget13selectedItemsEv(void *this_) {
  auto rv = ((QListWidget*)this_)->selectedItems();
return new QList<QListWidgetItem *>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:251
// [-2] QList<QListWidgetItem *> findItems(const QString &, Qt::MatchFlags)
extern "C" Q_DECL_EXPORT
QList<QListWidgetItem *>* C_ZNK11QListWidget9findItemsERK7QString6QFlagsIN2Qt9MatchFlagEE(void *this_, QString* text, QFlags<Qt::MatchFlag> flags) {
  auto rv = ((QListWidget*)this_)->findItems(*text, flags);
return new QList<QListWidgetItem *>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:253
// [1] bool isItemHidden(const QListWidgetItem *)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QListWidget12isItemHiddenEPK15QListWidgetItem(void *this_, const QListWidgetItem * item) {
  return (bool)((QListWidget*)this_)->isItemHidden(item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:254
// [-2] void setItemHidden(const QListWidgetItem *, bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget13setItemHiddenEPK15QListWidgetItemb(void *this_, const QListWidgetItem * item, bool hide) {
  ((QListWidget*)this_)->setItemHidden(item, hide);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:256
// [-2] void dropEvent(QDropEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget9dropEventEP10QDropEvent(void *this_, QDropEvent * event) {
  ((QListWidget*)this_)->dropEvent(event);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:259
// [-2] void scrollToItem(const QListWidgetItem *, QAbstractItemView::ScrollHint)
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget12scrollToItemEPK15QListWidgetItemN17QAbstractItemView10ScrollHintE(void *this_, const QListWidgetItem * item, QAbstractItemView::ScrollHint hint) {
  ((QListWidget*)this_)->scrollToItem(item, hint);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:260
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget5clearEv(void *this_) {
  ((QListWidget*)this_)->clear();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:263
// [-2] void itemPressed(QListWidgetItem *)
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget11itemPressedEP15QListWidgetItem(void *this_, QListWidgetItem * item) {
  ((QListWidget*)this_)->itemPressed(item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:264
// [-2] void itemClicked(QListWidgetItem *)
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget11itemClickedEP15QListWidgetItem(void *this_, QListWidgetItem * item) {
  ((QListWidget*)this_)->itemClicked(item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:265
// [-2] void itemDoubleClicked(QListWidgetItem *)
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget17itemDoubleClickedEP15QListWidgetItem(void *this_, QListWidgetItem * item) {
  ((QListWidget*)this_)->itemDoubleClicked(item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:266
// [-2] void itemActivated(QListWidgetItem *)
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget13itemActivatedEP15QListWidgetItem(void *this_, QListWidgetItem * item) {
  ((QListWidget*)this_)->itemActivated(item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:267
// [-2] void itemEntered(QListWidgetItem *)
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget11itemEnteredEP15QListWidgetItem(void *this_, QListWidgetItem * item) {
  ((QListWidget*)this_)->itemEntered(item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:268
// [-2] void itemChanged(QListWidgetItem *)
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget11itemChangedEP15QListWidgetItem(void *this_, QListWidgetItem * item) {
  ((QListWidget*)this_)->itemChanged(item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:270
// [-2] void currentItemChanged(QListWidgetItem *, QListWidgetItem *)
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget18currentItemChangedEP15QListWidgetItemS1_(void *this_, QListWidgetItem * current, QListWidgetItem * previous) {
  ((QListWidget*)this_)->currentItemChanged(current, previous);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:271
// [-2] void currentTextChanged(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget18currentTextChangedERK7QString(void *this_, QString* currentText) {
  ((QListWidget*)this_)->currentTextChanged(*currentText);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:272
// [-2] void currentRowChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget17currentRowChangedEi(void *this_, int currentRow) {
  ((QListWidget*)this_)->currentRowChanged(currentRow);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:274
// [-2] void itemSelectionChanged()
extern "C" Q_DECL_EXPORT
void C_ZN11QListWidget20itemSelectionChangedEv(void *this_) {
  ((QListWidget*)this_)->itemSelectionChanged();
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
